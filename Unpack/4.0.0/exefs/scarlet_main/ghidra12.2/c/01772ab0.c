/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01772ab0; name: FUN_01772ab0
 */


void FUN_01772ab0(undefined8 *param_1,undefined8 *param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  
  iVar12 = *(int *)*param_1;
  iVar8 = *(int *)param_1[1];
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  uVar3 = (uint)*(undefined8 *)param_1[2];
  if ((uVar3 >> 1 & 1) == 0) {
    uVar6 = 3;
  }
  else {
    *(undefined8 *)((long)param_2 + 0xc) = 0x3f80000000000000;
    *(undefined4 *)((long)param_2 + 0x14) = 0;
    uVar3 = (uint)*(undefined8 *)param_1[2];
    uVar6 = 6;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    iVar5 = (int)uVar6;
    *(undefined4 *)((long)param_2 + uVar6 * 4) = 0;
    uVar6 = (ulong)(iVar5 + 2);
    *(undefined4 *)((long)param_2 + (ulong)(iVar5 + 1) * 4) = 0;
  }
  iVar5 = (int)uVar6;
  if (1 < *(int *)param_1[1]) {
    iVar7 = 0;
    do {
      iVar7 = iVar7 + 1;
      fVar9 = sinf((6.2831855 / (float)iVar8) * (float)iVar7 * 0.5);
      if (-1 < *(int *)*param_1) {
        iVar5 = -1;
        fVar13 = *(float *)param_1[3];
        do {
          fVar14 = (6.2831855 / (float)iVar12) * (float)(iVar5 + 1);
          fVar10 = sinf(fVar14);
          iVar4 = (int)uVar6;
          pfVar1 = (float *)((long)param_2 + (long)iVar4 * 4);
          *pfVar1 = ABS(fVar9 * fVar13) * fVar10;
          pfVar1[1] = 0.0;
          fVar10 = cosf(fVar14);
          pfVar1[2] = ABS(fVar9 * fVar13) * fVar10;
          uVar6 = (long)iVar4 + 3;
          uVar3 = (uint)*(undefined8 *)param_1[2];
          if ((uVar3 >> 1 & 1) != 0) {
            *(undefined4 *)((long)param_2 + uVar6 * 4) = 0;
            *(undefined8 *)((long)param_2 + (long)iVar4 * 4 + 0x10) = 0x3f800000;
            uVar3 = (uint)*(undefined8 *)param_1[2];
            uVar6 = (ulong)(iVar4 + 6);
          }
          if ((uVar3 >> 2 & 1) != 0) {
            pfVar1 = (float *)((long)param_2 + (long)(int)uVar6 * 4);
            uVar6 = (ulong)((int)uVar6 + 2);
            *pfVar1 = (float)(iVar5 + 1) / (float)*(int *)*param_1;
            pfVar1[1] = 0.0;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)*param_1);
      }
      iVar5 = (int)uVar6;
      iVar11 = *(int *)param_1[1];
      iVar4 = iVar11;
      if (iVar11 < 0) {
        iVar4 = iVar11 + 1;
      }
    } while (iVar7 < iVar4 >> 1);
    if (1 < iVar11) {
      iVar7 = 0;
      do {
        fVar9 = sinf((6.2831855 / (float)iVar8) * (float)(iVar7 + (iVar4 >> 1)) * 0.5);
        if (-1 < *(int *)*param_1) {
          iVar5 = -1;
          fVar13 = *(float *)param_1[3];
          do {
            fVar14 = (6.2831855 / (float)iVar12) * (float)(iVar5 + 1);
            fVar10 = sinf(fVar14);
            iVar11 = (int)uVar6;
            pfVar1 = (float *)((long)param_2 + (long)iVar11 * 4);
            *pfVar1 = ABS(fVar9 * fVar13) * fVar10;
            pfVar1[1] = -*(float *)param_1[4];
            fVar10 = cosf(fVar14);
            pfVar1[2] = ABS(fVar9 * fVar13) * fVar10;
            uVar6 = (long)iVar11 + 3;
            uVar3 = (uint)*(undefined8 *)param_1[2];
            if ((uVar3 >> 1 & 1) != 0) {
              *(undefined4 *)((long)param_2 + uVar6 * 4) = 0;
              *(undefined8 *)((long)param_2 + (long)iVar11 * 4 + 0x10) = 0xbf800000;
              uVar3 = (uint)*(undefined8 *)param_1[2];
              uVar6 = (ulong)(iVar11 + 6);
            }
            if ((uVar3 >> 2 & 1) != 0) {
              iVar11 = *(int *)*param_1;
              pfVar1 = (float *)((long)param_2 + (long)(int)uVar6 * 4);
              uVar6 = (ulong)((int)uVar6 + 2);
              pfVar1[1] = 1.0;
              *pfVar1 = (float)(iVar5 + 1) / (float)iVar11;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)*param_1);
        }
        iVar5 = (int)uVar6;
        iVar7 = iVar7 + 1;
        iVar11 = *(int *)param_1[1];
        if (iVar11 < 0) {
          iVar11 = iVar11 + 1;
        }
      } while (iVar7 < iVar11 >> 1);
    }
  }
  puVar2 = (undefined4 *)((long)param_2 + (long)iVar5 * 4);
  *puVar2 = 0;
  fVar9 = *(float *)param_1[4];
  puVar2[2] = 0;
  puVar2[1] = -fVar9;
  uVar6 = (long)iVar5 + 3;
  uVar3 = (uint)*(undefined8 *)param_1[2];
  if ((uVar3 >> 1 & 1) != 0) {
    *(undefined4 *)((long)param_2 + uVar6 * 4) = 0;
    *(undefined8 *)((long)param_2 + (long)iVar5 * 4 + 0x10) = 0xbf800000;
    uVar6 = (ulong)(iVar5 + 6);
    uVar3 = (uint)*(undefined8 *)param_1[2];
  }
  if ((uVar3 >> 2 & 1) != 0) {
    *(undefined8 *)
     ((long)param_2 + (-(uVar6 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar6 & 0xffffffff) << 2)) =
         0x3f8000003f800000;
  }
  return;
}


