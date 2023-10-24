.data
    .text

        fact : addi $sp,
    $sp, -8 sw $ra, 4($sp)sw $a0, 0($sp)slti $t0, $a0, 1 beq $t0, $zero, L1 addi $v0, $zero, 1 addi $sp, $sp, 8 jr $ra

    L1 : addi $a0,
         $a0,
         -1 jal fact
         lw $a0,
         0($sp)
             lw $ra,
         4($sp)
             addi $sp,
         $sp,
         8 mul $v0,
         $a0,
         $v0
         jr $ra

         GitHub Copilot : In MIPS,
                          a 32 - bit address can be handled when making a jump or branch using the `j` (jump) and `jal` (jump and link)instructions,
                          as well as the `beq` (branch if equal), `bne` (branch if not equal), `blt` (branch if less than),
                          and `bgt` (branch if greater than)instructions.

                              For the `j` and `jal` instructions,
                          the 32 - bit address is loaded into the program counter(PC) register by shifting the address left by 2 bits and ORing it with the upper 4 bits of the current PC value. This allows the program to jump to the specified address.

For the branch instructions, the 16-bit signed offset is added to the current PC value and the result is used as the target address. The offset is sign-extended to 32 bits before being added to the PC value to ensure that the branch target address is correctly calculated. 

In both cases, the 32-bit address is split into two 16-bit values and loaded into two separate registers using the `lui` (load upper immediate) and `ori` (OR immediate) instructions. The `lui` instruction loads the upper 16 bits of the address into a register, and the `ori` instruction ORs the lower 16 bits of the address with the value in the register to produce the full 32-bit address. The resulting register can then be used as the target address for the jump or branch instruction.