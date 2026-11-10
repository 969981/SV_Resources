/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f5252c; name: FUN_02f5252c
 */


void FUN_02f5252c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ushort uVar6;
  undefined1 auVar7 [16];
  int iVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ushort uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar16 = (ulong)*(byte *)(param_2[5] + 0x89);
  uVar17 = (ulong)*(byte *)(param_2[6] + 0x89);
  uVar13 = (ulong)*(ushort *)(param_2[5] + 0x8a);
  lVar11 = *(long *)(param_2[1] + 0x48);
  lVar1 = *param_2 + 0x20;
  uVar12 = (ulong)*(ushort *)(param_2[6] + 0x8a);
  *param_1 = 0;
  param_1[1] = 0x800000000000202;
  param_1[2] = 0x4100000000;
  param_1[3] = 0x7f7f7f;
  *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)(param_2[5] + 0x50);
  *(undefined4 *)param_1 = *(undefined4 *)(param_2[6] + 0x50);
  *(char *)((long)param_1 + 0xe) = (char)param_2[7];
  lVar14 = param_2[3];
  lVar4 = param_2[5];
  lVar5 = param_2[6];
  uVar3 = uVar17;
  if (*(int *)(lVar1 + uVar17 * 0x50 + 0x18) <= *(int *)(lVar1 + uVar16 * 0x50 + 0x18)) {
    uVar3 = uVar16;
    uVar16 = uVar17;
  }
  uVar2 = *(uint *)(lVar1 + uVar3 * 0x50 + 0x20) & *(uint *)(lVar1 + uVar16 * 0x50 + 0x1c);
  if (((*(uint *)(lVar11 + uVar12 * 0x50 + 0x14) | *(uint *)(lVar11 + uVar13 * 0x50 + 0x14)) >> 0x11
      & 1) == 0) {
    uVar15 = (*(ushort *)(param_2[9] + 0x1a) | *(ushort *)(param_2[8] + 0x1a)) >> 2 & 4;
  }
  else {
    uVar15 = 4;
    if (((*(uint *)(lVar5 + 0x54) | *(uint *)(lVar4 + 0x54)) & 0x100) != 0) {
      uVar15 = 0x8004;
    }
  }
  uVar6 = (ushort)uVar2;
  if ((uVar2 & 0x10) != 0) {
    uVar6 = uVar6 & 0xfc7f;
  }
  *(ushort *)((long)param_1 + 10) = uVar15 | uVar6;
  if (((*(ushort *)(lVar4 + 0x58) & *(ushort *)(lVar5 + 0x58)) >> 1 & 1) != 0) {
    uVar15 = *(ushort *)(lVar11 + uVar13 * 0x50 + 0x3a);
    uVar6 = *(ushort *)(lVar11 + uVar12 * 0x50 + 0x3a);
    uVar9 = NEON_scvtf((ulong)CONCAT24(*(ushort *)(lVar4 + 0x90),(uint)*(ushort *)(lVar4 + 0x90)),4)
    ;
    uVar20 = NEON_fmax((ulong)CONCAT42((uint)uVar15 << 0x10,uVar15) << 0x10,
                       (ulong)CONCAT42((uint)uVar6 << 0x10,uVar6) << 0x10,4);
    uVar19 = NEON_scvtf((ulong)CONCAT24(*(ushort *)(lVar5 + 0x90),(uint)*(ushort *)(lVar5 + 0x90)),4
                       );
    iVar8 = (int)((float)uVar20 * (float)*(undefined8 *)(lVar14 + 0x48) +
                 (float)uVar9 + (float)uVar19);
    iVar18 = (int)((float)((ulong)uVar20 >> 0x20) *
                   (float)((ulong)*(undefined8 *)(lVar14 + 0x48) >> 0x20) +
                  (float)((ulong)uVar9 >> 0x20) + (float)((ulong)uVar19 >> 0x20));
    auVar7._12_4_ = iVar18;
    auVar7._8_4_ = iVar8;
    auVar7._4_4_ = iVar18;
    auVar7._0_4_ = iVar8;
    uVar9 = NEON_sqxtun(CONCAT44(iVar18,iVar8),auVar7,4);
    *(short *)((long)param_1 + 0xc) = (short)uVar9;
  }
  if ((*(char *)(lVar11 + uVar13 * 0x50 + 0x18) == '\0') &&
     (*(char *)(lVar11 + uVar12 * 0x50 + 0x18) == '\0')) {
    uVar10 = 10;
  }
  else {
    uVar10 = 8;
  }
  *(undefined1 *)((long)param_1 + 0xf) = uVar10;
  return;
}


