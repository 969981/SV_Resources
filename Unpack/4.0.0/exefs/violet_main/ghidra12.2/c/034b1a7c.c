/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b1a7c; name: FUN_034b1a7c
 */


void FUN_034b1a7c(undefined4 *param_1)

{
  float *pfVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  puVar3 = PTR_DAT_047e7068;
  plVar5 = *(long **)(param_1 + 6);
  uVar6 = *(ushort *)(param_1 + 9);
  iVar4 = (int)plVar5[1];
  uVar7 = (uint)uVar6;
  if ((int)(uint)uVar6 < iVar4) {
    pfVar1 = (float *)(*plVar5 + (ulong)uVar6 * 0x10);
    uVar6 = (ushort)(uVar7 + 1);
    *(ushort *)(param_1 + 9) = uVar6;
    fVar11 = *pfVar1;
    param_1[0x17] = fVar11;
    fVar12 = pfVar1[1];
    param_1[0x18] = fVar12;
    fVar13 = pfVar1[2];
    param_1[0x19] = fVar13;
    lVar10 = *(long *)puVar3 * 0x5851f42d4c957f2d + 1;
    lVar8 = lVar10 * 0x5851f42d4c957f2d + 1;
    lVar9 = lVar8 * 0x5851f42d4c957f2d + 1;
    param_1[0x17] =
         fVar11 + *(float *)((long)plVar5 + 0xc) *
                  ((float)(uint)((ulong)lVar10 >> 0x21) * 9.313226e-10 + -1.0);
    param_1[0x19] =
         fVar13 + *(float *)(plVar5 + 2) *
                  ((float)(uint)((ulong)lVar8 >> 0x21) * 9.313226e-10 + -1.0);
    *(long *)puVar3 = lVar9;
    param_1[0x18] =
         fVar12 + *(float *)((long)plVar5 + 0x14) *
                  ((float)(uint)((ulong)lVar9 >> 0x21) * 9.313226e-10 + -1.0);
    iVar2 = *(int *)PTR_DAT_047e6fc0;
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = ((int)pfVar1[3] + iVar2 + -1) / iVar2;
    }
    uVar7 = uVar7 + 1 & 0xffff;
    if (iVar4 == 0) {
      iVar4 = 1;
    }
    param_1[0x13] = iVar4;
    iVar4 = (int)plVar5[1];
  }
  if (iVar4 <= (int)uVar7) {
    iVar4 = FUN_034b1c80(param_1);
    if (iVar4 != 1) {
      *param_1 = 0;
      return;
    }
    plVar5 = *(long **)(param_1 + 6);
    uVar6 = *(ushort *)(param_1 + 9);
  }
  lVar10 = *(long *)puVar3 * 0x5851f42d4c957f2d + 1;
  fVar14 = *(float *)((long)plVar5 + 0xc);
  fVar15 = *(float *)(plVar5 + 2);
  pfVar1 = (float *)(*plVar5 + (ulong)uVar6 * 0x10);
  fVar11 = *pfVar1;
  fVar12 = pfVar1[1];
  fVar13 = pfVar1[2];
  lVar8 = lVar10 * 0x5851f42d4c957f2d + 1;
  lVar9 = lVar8 * 0x5851f42d4c957f2d + 1;
  *(long *)puVar3 = lVar9;
  fVar16 = *(float *)((long)plVar5 + 0x14);
  uVar7 = param_1[0x12];
  param_1[0x1a] =
       (fVar11 - (float)param_1[0x17]) +
       fVar14 * ((float)(uint)((ulong)lVar10 >> 0x21) * 9.313226e-10 + -1.0);
  param_1[0x1b] =
       (fVar12 - (float)param_1[0x18]) +
       fVar16 * ((float)(uint)((ulong)lVar9 >> 0x21) * 9.313226e-10 + -1.0);
  param_1[0x1c] =
       (fVar13 - (float)param_1[0x19]) +
       fVar15 * ((float)(uint)((ulong)lVar8 >> 0x21) * 9.313226e-10 + -1.0);
  fVar11 = 1.0 / (float)(uint)param_1[0x13];
  param_1[0x11] = uVar7;
  param_1[0x12] = param_1[0x13] + uVar7;
  param_1[0x14] = fVar11;
  param_1[0x15] = fVar11 * -(float)uVar7;
  return;
}


