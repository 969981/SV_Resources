/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00126fc0; name: FUN_00126fc0
 */


void FUN_00126fc0(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x28) - lVar3 < 0x20) {
    uVar4 = *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x30);
    if (1000000 < (int)(uVar4 >> 4)) {
                    /* WARNING: Subroutine does not return */
      FUN_00126bd0(param_1,5);
    }
    uVar1 = (uint)(uVar4 >> 3) & 0xfffffffe;
    if (999999 < (int)uVar1) {
      uVar1 = 1000000;
    }
    iVar2 = (int)((ulong)(lVar3 - *(long *)(param_1 + 0x30)) >> 4);
    if ((int)uVar1 <= iVar2) {
      uVar1 = iVar2 + 1;
    }
    if (1000000 < (int)uVar1) {
      FUN_00126ce0(param_1,0xf4308,1);
                    /* WARNING: Subroutine does not return */
      FUN_00125b90(param_1,"stack overflow");
    }
    FUN_00126ce0(param_1,uVar1,1);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  *(long *)(param_1 + 0x10) = lVar3 + 0x10;
  return;
}


