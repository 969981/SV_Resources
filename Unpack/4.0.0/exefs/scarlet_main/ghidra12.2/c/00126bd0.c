/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00126bd0; name: FUN_00126bd0
 */


void FUN_00126bd0(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x140) = param_2;
                    /* WARNING: Subroutine does not return */
    _longjmp((__jmp_buf_tag *)(*(long *)(param_1 + 0x58) + 8),1);
  }
  lVar4 = *(long *)(param_1 + 0x18);
  uVar1 = FUN_0013b2e0(param_1);
  lVar2 = *(long *)(lVar4 + 0x108);
  if (*(long *)(lVar2 + 0x58) != 0) {
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    *(undefined8 **)(lVar2 + 0x10) = puVar3 + 2;
    lVar2 = *(long *)(param_1 + 0x10);
    *puVar3 = *(undefined8 *)(lVar2 + -0x10);
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(lVar2 + -8);
                    /* WARNING: Subroutine does not return */
    FUN_00126bd0(*(undefined8 *)(lVar4 + 0x108),uVar1);
  }
  if (*(code **)(lVar4 + 0x100) != (code *)0x0) {
    (**(code **)(lVar4 + 0x100))(param_1);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


