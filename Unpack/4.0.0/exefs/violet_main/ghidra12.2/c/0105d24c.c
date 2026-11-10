/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0105d24c; name: FUN_0105d24c
 */


void FUN_0105d24c(long param_1,long *param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  uVar1 = *(undefined2 *)(*(long *)(*param_2 + 0x40) + 0x28);
  uVar2 = *(ushort *)(param_1 + 0x98);
  uVar3 = *(ushort *)(param_1 + 0x9a);
  uVar4 = *(ushort *)(param_1 + 0x9c);
  uVar5 = *(ushort *)(param_1 + 0x9e);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(*(long *)(*param_2 + 0x40) + 0x20);
  uVar6 = *(ushort *)(param_1 + 0xa0);
  *(undefined2 *)(param_1 + 0xa0) = uVar1;
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x710) != '\0') {
    return;
  }
  lVar9 = *(long *)(param_1 + 0x90);
  lVar10 = *(long *)(lVar9 + 0x78);
  if (*(char *)(lVar9 + 0x70) != '\0') {
    if (lVar10 == 0) {
      lVar10 = 1;
      goto LAB_0105d2dc;
    }
    lVar10 = FUN_01091070(lVar9 + 0x58,lVar10,0);
  }
  if (lVar10 < 1) {
    lVar10 = 0;
  }
LAB_0105d2dc:
  lVar9 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x290) + 8);
  uVar11 = (uint)*(ushort *)(param_1 + (ulong)*(byte *)(param_1 + 0xe2) * 2 + 0x98);
  bVar7 = uVar11 != ((uint)lVar10 & 0xffff);
  uVar8 = FUN_00f7e2a0(*(undefined4 *)(lVar9 + 0x36c),*(undefined1 *)(lVar9 + 0x370),0);
  if (((uVar8 & 1) != 0) && (*(char *)(param_1 + 0xe2) != '\0')) {
    bVar7 = uVar11 != ((uint)lVar10 & 0xffff) || uVar2 < *(ushort *)(param_1 + 0x98);
  }
  lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x290) + 8);
  uVar8 = FUN_00f7e2a0(*(undefined4 *)(lVar10 + 0x36c),*(undefined1 *)(lVar10 + 0x370),1);
  if (((uVar8 & 1) != 0) && (*(char *)(param_1 + 0xe2) != '\x01')) {
    bVar7 = (bool)(bVar7 | uVar3 < *(ushort *)(param_1 + 0x9a));
  }
  lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x290) + 8);
  uVar8 = FUN_00f7e2a0(*(undefined4 *)(lVar10 + 0x36c),*(undefined1 *)(lVar10 + 0x370),2);
  if (((uVar8 & 1) != 0) && (*(char *)(param_1 + 0xe2) != '\x02')) {
    bVar7 = (bool)(bVar7 | uVar4 < *(ushort *)(param_1 + 0x9c));
  }
  lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x290) + 8);
  uVar8 = FUN_00f7e2a0(*(undefined4 *)(lVar10 + 0x36c),*(undefined1 *)(lVar10 + 0x370),3);
  if (((uVar8 & 1) != 0) && (*(char *)(param_1 + 0xe2) != '\x03')) {
    bVar7 = (bool)(bVar7 | uVar5 < *(ushort *)(param_1 + 0x9e));
  }
  lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x290) + 8);
  uVar8 = FUN_00f7e2a0(*(undefined4 *)(lVar10 + 0x36c),*(undefined1 *)(lVar10 + 0x370),4);
  if (((uVar8 & 1) == 0) || (*(char *)(param_1 + 0xe2) == '\x04')) {
    if (!bVar7) {
      return;
    }
  }
  else if (!bVar7 && *(ushort *)(param_1 + 0xa0) <= uVar6) {
    return;
  }
  FUN_0105bfd4(*(undefined8 *)(param_1 + 0x30));
  *(undefined1 *)(param_1 + 0xe6) = 0;
  return;
}


