.data
x: .word 5
y: .word 0
format: .asciiz "y=%i\n"

.text
.globl main
main:
    # load x into $s0
    lw $s0, x
    
    # call function with argument in $s0
    jal function
    
    # store return value in y
    sw $v0, y
    
    # print y
    lw $a0, y
    li $v0, 1
    la $a1, format
    syscall
    
    # exit program
    li $v0, 10
    syscall

function:
    # save return address
    sw $ra, 0($sp)
    addi $sp, $sp, -4
    
    # move argument into $t0
    move $t0, $a0
    
    # calculate 3*a+5 and store in $v0
    li $t1, 3
    mult $t0, $t1
    mflo $v0
    addi $v0, $v0, 5
    
    # restore return address and return
    lw $ra, 0($sp)
    addi $sp, $sp, 4
    jr $ra