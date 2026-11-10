/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f52b1c; name: FUN_02f52b1c
 */


undefined4 * FUN_02f52b1c(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined1 auVar8 [16];
  int iVar9;
  undefined8 uVar10;
  ushort uVar11;
  undefined4 *__s;
  undefined1 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ushort uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (*(int *)(param_2 + 0x18) < 0xf31) {
    __s = (undefined4 *)(*(long *)(param_2 + 0x10) + (long)*(int *)(param_2 + 0x18) + 0x20);
  }
  else {
    __s = (undefined4 *)FUN_031c36f4(param_2);
  }
  memset(__s,0,0x70);
  *(undefined2 *)(__s + 3) = 0;
  __s[2] = 0x706;
  *(undefined1 *)((long)__s + 0xf) = 8;
  __s[1] = *(undefined4 *)(param_1[5] + 0x50);
  uVar5 = *(undefined4 *)(param_1[6] + 0x50);
  *(undefined8 *)(__s + 8) = 0;
  __s[0xb] = 0;
  *__s = uVar5;
  *(char *)((long)__s + 0xe) = (char)param_1[7];
  lVar3 = param_1[5];
  lVar4 = param_1[6];
  uVar18 = (ulong)*(byte *)(lVar4 + 0x89);
  lVar15 = *param_1 + 0x20;
  uVar17 = (ulong)*(byte *)(lVar3 + 0x89);
  uVar14 = (ulong)*(ushort *)(lVar3 + 0x8a);
  lVar13 = *(long *)(param_1[1] + 0x48);
  uVar2 = uVar18;
  if (*(int *)(lVar15 + uVar18 * 0x50 + 0x18) <= *(int *)(lVar15 + uVar17 * 0x50 + 0x18)) {
    uVar2 = uVar17;
    uVar17 = uVar18;
  }
  uVar18 = (ulong)*(ushort *)(lVar4 + 0x8a);
  uVar1 = *(uint *)(lVar15 + uVar2 * 0x50 + 0x20) & *(uint *)(lVar15 + uVar17 * 0x50 + 0x1c);
  lVar15 = param_1[3];
  if (((*(uint *)(lVar13 + uVar18 * 0x50 + 0x14) | *(uint *)(lVar13 + uVar14 * 0x50 + 0x14)) >> 0x11
      & 1) == 0) {
    uVar16 = (*(ushort *)(param_1[9] + 0x1a) | *(ushort *)(param_1[8] + 0x1a)) >> 2 & 4;
  }
  else {
    uVar16 = 4;
    if (((*(uint *)(lVar4 + 0x54) | *(uint *)(lVar3 + 0x54)) & 0x100) != 0) {
      uVar16 = 0x8004;
    }
  }
  uVar11 = (ushort)uVar1;
  if ((uVar1 & 0x10) != 0) {
    uVar11 = uVar11 & 0xfc7f;
  }
  *(ushort *)((long)__s + 10) = uVar16 | uVar11;
  if (((*(ushort *)(lVar3 + 0x58) & *(ushort *)(lVar4 + 0x58)) >> 1 & 1) != 0) {
    uVar10 = NEON_scvtf((ulong)CONCAT24(*(ushort *)(lVar3 + 0x90),(uint)*(ushort *)(lVar3 + 0x90)),4
                       );
    uVar6 = *(ushort *)(lVar13 + uVar14 * 0x50 + 0x3a);
    uVar7 = *(ushort *)(lVar13 + uVar18 * 0x50 + 0x3a);
    uVar20 = NEON_scvtf((ulong)CONCAT24(*(ushort *)(lVar4 + 0x90),(uint)*(ushort *)(lVar4 + 0x90)),4
                       );
    uVar21 = NEON_fmax((ulong)CONCAT42((uint)uVar6 << 0x10,uVar6) << 0x10,
                       (ulong)CONCAT42((uint)uVar7 << 0x10,uVar7) << 0x10,4);
    iVar9 = (int)((float)uVar21 * (float)*(undefined8 *)(lVar15 + 0x48) +
                 (float)uVar10 + (float)uVar20);
    iVar19 = (int)((float)((ulong)uVar21 >> 0x20) *
                   (float)((ulong)*(undefined8 *)(lVar15 + 0x48) >> 0x20) +
                  (float)((ulong)uVar10 >> 0x20) + (float)((ulong)uVar20 >> 0x20));
    auVar8._12_4_ = iVar19;
    auVar8._8_4_ = iVar9;
    auVar8._4_4_ = iVar19;
    auVar8._0_4_ = iVar9;
    uVar10 = NEON_sqxtun(CONCAT44(iVar19,iVar9),auVar8,4);
    *(short *)(__s + 3) = (short)uVar10;
  }
  *(ushort *)((long)__s + 10) = uVar16 | uVar11 & 0xbfcf;
  if ((*(char *)(lVar13 + uVar14 * 0x50 + 0x18) == '\0') &&
     (*(char *)(lVar13 + uVar18 * 0x50 + 0x18) == '\0')) {
    uVar12 = 10;
  }
  else {
    uVar12 = 8;
  }
  *(undefined1 *)((long)__s + 0xf) = uVar12;
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 0x70;
  *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
  return __s;
}


