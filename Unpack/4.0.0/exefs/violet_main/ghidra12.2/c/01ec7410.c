/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ec7410; name: FUN_01ec7410
 */


long FUN_01ec7410(ushort *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  uint uVar10;
  
  uVar3 = *param_1;
  uVar10 = 0xffffff80;
  if (0xff < uVar3) {
    uVar10 = 0xffffff81;
  }
  uVar1 = (uint)uVar3;
  if (0x7f < uVar3) {
    uVar1 = uVar10;
  }
  lVar4 = FUN_0111b030(uVar1);
  iVar7 = (int)(char)param_1[1];
  if (iVar7 < 0) {
    iVar7 = -0x80;
  }
  lVar5 = FUN_0111b030(iVar7);
  uVar9 = *(ulong *)(param_1 + 4);
  uVar8 = 0xffffff82;
  if (uVar9 >> 0x20 != 0) {
    uVar8 = 0xffffff83;
  }
  uVar2 = 0x81;
  if (0xffff < uVar9) {
    uVar2 = uVar8;
  }
  uVar8 = 0x80;
  if (0xff < uVar9) {
    uVar8 = uVar2;
  }
  if (uVar9 < 0x80) {
    uVar8 = (undefined4)uVar9;
  }
  lVar6 = FUN_0111b030(uVar8);
  return lVar4 + lVar5 + lVar6 + 2;
}


