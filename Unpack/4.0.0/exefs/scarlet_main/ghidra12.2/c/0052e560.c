/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052e560; name: FUN_0052e560
 */


undefined1  [16] FUN_0052e560(long param_1,int param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  iVar1 = param_2 + (uint)*(byte *)(param_1 + 2) * 0x4000 + -0x4000;
  if (-1 < (char)*(byte *)(param_1 + 2)) {
    auVar2._8_4_ = iVar1;
    auVar2._0_8_ = param_1 + 3;
    auVar2._12_4_ = 0;
    return auVar2;
  }
  iVar1 = iVar1 + (uint)*(byte *)(param_1 + 3) * 0x200000 + -0x200000;
  if (-1 < (char)*(byte *)(param_1 + 3)) {
    auVar3._8_4_ = iVar1;
    auVar3._0_8_ = param_1 + 4;
    auVar3._12_4_ = 0;
    return auVar3;
  }
  if (*(char *)(param_1 + 4) < 0) {
    return ZEXT816(0);
  }
  auVar4._8_4_ = iVar1 + *(char *)(param_1 + 4) * 0x10000000 + -0x10000000;
  auVar4._0_8_ = param_1 + 5;
  auVar4._12_4_ = 0;
  return auVar4;
}


