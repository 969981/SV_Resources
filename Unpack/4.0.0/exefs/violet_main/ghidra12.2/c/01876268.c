/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01876268; name: FUN_01876268
 */


long FUN_01876268(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  
  lVar2 = FUN_01876308();
  iVar6 = (int)*(char *)(param_1 + 0x1e);
  if (iVar6 < 0) {
    iVar6 = -0x80;
  }
  lVar3 = FUN_0111b030(iVar6);
  iVar6 = (int)*(char *)(param_1 + 0x1f);
  if (iVar6 < 0) {
    iVar6 = -0x80;
  }
  lVar4 = FUN_0111b030(iVar6);
  uVar8 = *(ulong *)(param_1 + 0x20);
  uVar7 = 0xffffff82;
  if (uVar8 >> 0x20 != 0) {
    uVar7 = 0xffffff83;
  }
  uVar1 = 0x81;
  if (0xffff < uVar8) {
    uVar1 = uVar7;
  }
  uVar7 = 0x80;
  if (0xff < uVar8) {
    uVar7 = uVar1;
  }
  if (uVar8 < 0x80) {
    uVar7 = (undefined4)uVar8;
  }
  lVar5 = FUN_0111b030(uVar7);
  return lVar2 + lVar3 + lVar4 + lVar5 + 2;
}


