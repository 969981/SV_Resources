/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01695980; name: FUN_01695980
 */


long FUN_01695980(char *param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = (int)*param_1;
  if (iVar7 < 0) {
    iVar7 = -0x80;
  }
  lVar3 = FUN_0111b030(iVar7);
  uVar2 = *(ushort *)(param_1 + 2);
  uVar8 = 0xffffff80;
  if (0xff < uVar2) {
    uVar8 = 0xffffff81;
  }
  uVar1 = (uint)uVar2;
  if (0x7f < uVar2) {
    uVar1 = uVar8;
  }
  lVar4 = FUN_0111b030(uVar1);
  iVar7 = (int)param_1[4];
  if (iVar7 < 0) {
    iVar7 = -0x80;
  }
  lVar5 = FUN_0111b030(iVar7);
  uVar2 = *(ushort *)(param_1 + 6);
  uVar8 = 0xffffff80;
  if (0xff < uVar2) {
    uVar8 = 0xffffff81;
  }
  uVar1 = (uint)uVar2;
  if (0x7f < uVar2) {
    uVar1 = uVar8;
  }
  lVar6 = FUN_0111b030(uVar1);
  return lVar3 + lVar4 + lVar5 + lVar6 + 6;
}


