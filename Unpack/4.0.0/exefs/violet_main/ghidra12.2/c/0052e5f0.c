/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052e5f0; name: FUN_0052e5f0
 */


undefined1  [16] FUN_0052e5f0(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  iVar2 = param_2 + (uint)*(byte *)(param_1 + 1) * 0x80 + -0x80;
  if (-1 < (char)*(byte *)(param_1 + 1)) {
    auVar3._8_4_ = iVar2;
    auVar3._0_8_ = param_1 + 2;
    auVar3._12_4_ = 0;
    return auVar3;
  }
  iVar2 = iVar2 + (uint)*(byte *)(param_1 + 2) * 0x4000 + -0x4000;
  if (-1 < (char)*(byte *)(param_1 + 2)) {
    auVar4._8_4_ = iVar2;
    auVar4._0_8_ = param_1 + 3;
    auVar4._12_4_ = 0;
    return auVar4;
  }
  iVar2 = iVar2 + (uint)*(byte *)(param_1 + 3) * 0x200000 + -0x200000;
  if (-1 < (char)*(byte *)(param_1 + 3)) {
    auVar5._8_4_ = iVar2;
    auVar5._0_8_ = param_1 + 4;
    auVar5._12_4_ = 0;
    return auVar5;
  }
  if ((*(byte *)(param_1 + 4) < 8) &&
     (uVar1 = iVar2 + (uint)*(byte *)(param_1 + 4) * 0x10000000 + 0xf0000000, uVar1 < 0x7ffffff0)) {
    auVar6._8_4_ = uVar1;
    auVar6._0_8_ = param_1 + 5;
    auVar6._12_4_ = 0;
    return auVar6;
  }
  return ZEXT816(0);
}


