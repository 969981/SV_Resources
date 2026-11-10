/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f52d3c; name: FUN_02f52d3c
 */


undefined4 * FUN_02f52d3c(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 *__s;
  undefined1 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ushort uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  byte bVar19;
  long lVar20;
  int iVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  puVar7 = PTR_DAT_047d19f0;
  lVar18 = param_1[5];
  lVar11 = param_1[6];
  lVar12 = param_1[8];
  lVar20 = param_1[9];
  bVar19 = *(byte *)(param_1 + 7);
  if (((char)param_1[4] == '\0') || ((*(byte *)(lVar11 + 0x54) >> 1 & 1) == 0)) {
LAB_02f52d7c:
    lVar16 = lVar20;
    lVar17 = lVar18;
    lVar18 = lVar11;
    lVar20 = lVar12;
  }
  else {
    if ((*(byte *)(lVar18 + 0x54) & 1) == 0) {
      iVar8 = (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar12 + 0x18) * 0x200 +
                          0xc0))(lVar12);
      iVar21 = (**(code **)(*(long *)puVar7 + (ulong)*(byte *)(lVar20 + 0x18) * 0x200 + 0xc0))
                         (lVar20);
      if (iVar8 <= iVar21) goto LAB_02f52d7c;
    }
    bVar19 = bVar19 >> 3 & 0x1c | bVar19 & 3 | (bVar19 >> 2) << 5;
    lVar16 = lVar12;
    lVar17 = lVar11;
  }
  if (*(int *)(param_2 + 0x18) < 0xf51) {
    __s = (undefined4 *)(*(long *)(param_2 + 0x10) + (long)*(int *)(param_2 + 0x18) + 0x20);
  }
  else {
    __s = (undefined4 *)FUN_031c36f4(param_2);
  }
  memset(__s,0,0x50);
  *(undefined2 *)(__s + 3) = 0;
  *(undefined1 *)(__s + 6) = 0;
  __s[4] = 0;
  *(undefined8 *)(__s + 8) = 0;
  __s[0xb] = 0;
  *(undefined8 *)(__s + 0xe) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(__s + 0xc) = 0x7f7fffee7f7fffee;
  *(undefined8 *)(__s + 0x12) = 0xff7fffeeff7fffee;
  *(undefined8 *)(__s + 0x10) = 0xff7fffeeff7fffee;
  __s[2] = 0x505;
  *(undefined1 *)((long)__s + 0xf) = 8;
  __s[1] = *(undefined4 *)(lVar17 + 0x50);
  uVar3 = *(undefined4 *)(lVar18 + 0x50);
  *(byte *)((long)__s + 0xe) = bVar19;
  *__s = uVar3;
  uVar13 = (ulong)*(byte *)(lVar17 + 0x89);
  uVar15 = (ulong)*(byte *)(lVar18 + 0x89);
  lVar12 = *param_1 + 0x20;
  uVar2 = uVar15;
  if (*(int *)(lVar12 + uVar15 * 0x50 + 0x18) <= *(int *)(lVar12 + uVar13 * 0x50 + 0x18)) {
    uVar2 = uVar13;
    uVar13 = uVar15;
  }
  uVar10 = (ulong)*(ushort *)(lVar17 + 0x8a);
  uVar15 = (ulong)*(ushort *)(lVar18 + 0x8a);
  lVar11 = *(long *)(param_1[1] + 0x48);
  uVar1 = *(uint *)(lVar12 + uVar2 * 0x50 + 0x20) & *(uint *)(lVar12 + uVar13 * 0x50 + 0x1c);
  lVar12 = param_1[3];
  if (((*(uint *)(lVar11 + uVar15 * 0x50 + 0x14) | *(uint *)(lVar11 + uVar10 * 0x50 + 0x14)) >> 0x11
      & 1) == 0) {
    uVar14 = (*(ushort *)(lVar16 + 0x1a) | *(ushort *)(lVar20 + 0x1a)) >> 2 & 4;
  }
  else {
    uVar14 = 4;
    if (((*(uint *)(lVar18 + 0x54) | *(uint *)(lVar17 + 0x54)) & 0x100) != 0) {
      uVar14 = 0x8004;
    }
  }
  uVar4 = (ushort)uVar1;
  if ((uVar1 & 0x10) != 0) {
    uVar4 = uVar4 & 0xfc7f;
  }
  *(ushort *)((long)__s + 10) = uVar14 | uVar4;
  if (((*(ushort *)(lVar17 + 0x58) & *(ushort *)(lVar18 + 0x58)) >> 1 & 1) != 0) {
    uVar6 = NEON_scvtf((ulong)CONCAT24(*(ushort *)(lVar17 + 0x90),(uint)*(ushort *)(lVar17 + 0x90)),
                       4);
    uVar14 = *(ushort *)(lVar11 + uVar10 * 0x50 + 0x3a);
    uVar4 = *(ushort *)(lVar11 + uVar15 * 0x50 + 0x3a);
    uVar22 = NEON_scvtf((ulong)CONCAT24(*(ushort *)(lVar18 + 0x90),(uint)*(ushort *)(lVar18 + 0x90))
                        ,4);
    uVar23 = NEON_fmax((ulong)CONCAT42((uint)uVar14 << 0x10,uVar14) << 0x10,
                       (ulong)CONCAT42((uint)uVar4 << 0x10,uVar4) << 0x10,4);
    iVar8 = (int)((float)uVar23 * (float)*(undefined8 *)(lVar12 + 0x48) +
                 (float)uVar6 + (float)uVar22);
    iVar21 = (int)((float)((ulong)uVar23 >> 0x20) *
                   (float)((ulong)*(undefined8 *)(lVar12 + 0x48) >> 0x20) +
                  (float)((ulong)uVar6 >> 0x20) + (float)((ulong)uVar22 >> 0x20));
    auVar5._4_4_ = iVar21;
    auVar5._0_4_ = iVar8;
    auVar5._8_4_ = iVar8;
    auVar5._12_4_ = iVar21;
    uVar6 = NEON_sqxtun(CONCAT44(iVar21,iVar8),auVar5,4);
    *(short *)(__s + 3) = (short)uVar6;
  }
  if ((*(char *)(lVar11 + uVar10 * 0x50 + 0x18) == '\0') &&
     (*(char *)(lVar11 + uVar15 * 0x50 + 0x18) == '\0')) {
    uVar9 = 10;
  }
  else {
    uVar9 = 8;
  }
  *(undefined1 *)((long)__s + 0xf) = uVar9;
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 0x50;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  return __s;
}


