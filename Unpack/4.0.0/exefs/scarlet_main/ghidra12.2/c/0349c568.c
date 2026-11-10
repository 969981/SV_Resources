/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0349c568; name: FUN_0349c568
 */


undefined8 FUN_0349c568(float param_1,long param_2,void *param_3,uint param_4)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float *pfVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  float *pfVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint *puVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float afStack_260 [128];
  
  puVar2 = PTR_DAT_047e2fd0;
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  if (-90.0 <= param_1) {
    bVar3 = false;
    bVar4 = false;
    bVar5 = true;
    if (!NAN(param_1)) {
      bVar3 = param_1 < 90.0;
      bVar4 = param_1 == 90.0;
      bVar5 = false;
    }
  }
  if (!bVar4 && bVar3 == bVar5) {
    return 0x1f;
  }
  uVar7 = *(uint *)(param_2 + 0x70);
  if (*(uint *)(param_2 + 0x70) <= param_4) {
    uVar7 = param_4;
  }
  pfVar6 = (float *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(ulong)uVar7 * 4);
  if (pfVar6 == (float *)0x0) {
    return 2;
  }
  pfVar16 = (float *)((long)afStack_260 + (0x200 - ((ulong)uVar7 * 4 + 0xf & 0x7fffffff0)));
  if (param_4 != 0) {
    memcpy(pfVar16,param_3,(ulong)param_4 << 2);
  }
  uVar1 = *(uint *)(param_2 + 0x70);
  if (param_4 < uVar1) {
    lVar9 = *(long *)(param_2 + 0x68);
    uVar11 = (ulong)param_4;
    uVar13 = ~uVar11;
    if ((uVar1 - param_4 & 1) != 0) {
      pfVar16[uVar11] = *(float *)(lVar9 + uVar11 * 4) * 57.295776;
      uVar11 = uVar11 + 1;
    }
    if (uVar13 + uVar1 != 0) {
      lVar8 = uVar1 - uVar11;
      pfVar12 = pfVar16 + uVar11 + 1;
      pfVar10 = (float *)(lVar9 + uVar11 * 4 + 4);
      do {
        lVar8 = lVar8 + -2;
        fVar17 = *pfVar10;
        pfVar12[-1] = pfVar10[-1] * 57.295776;
        *pfVar12 = fVar17 * 57.295776;
        pfVar12 = pfVar12 + 2;
        pfVar10 = pfVar10 + 2;
      } while (lVar8 != 0);
    }
  }
  if (param_4 == 0) {
    fVar17 = *pfVar6;
    if (fVar17 < 1.5707964) goto LAB_0349c790;
  }
  else {
    pfVar12 = pfVar6;
    uVar11 = (ulong)param_4;
    do {
      fVar17 = *pfVar16;
      *pfVar12 = fVar17 * 0.017453294;
      if (3.1415927 <= fVar17 * 0.017453294) goto LAB_0349c7d0;
      uVar11 = uVar11 - 1;
      pfVar12 = pfVar12 + 1;
      pfVar16 = pfVar16 + 1;
    } while (uVar11 != 0);
    fVar17 = *pfVar6;
    if (fVar17 < 1.5707964) {
      if (1 < param_4) {
        lVar9 = (ulong)param_4 - 1;
        pfVar16 = pfVar6;
        fVar19 = fVar17;
        do {
          pfVar16 = pfVar16 + 1;
          fVar18 = *pfVar16;
          if (fVar18 < fVar19) goto LAB_0349c7d0;
          fVar19 = fVar18 - fVar19;
          bVar3 = false;
          bVar4 = false;
          if (fVar19 != 0.0) {
            bVar3 = false;
            bVar4 = true;
            if (!NAN(fVar19)) {
              bVar3 = fVar19 < 3.1415927;
              bVar4 = false;
            }
          }
          if (bVar3 == bVar4) goto LAB_0349c7d0;
          fVar17 = (float)NEON_fminnm(fVar19,fVar17);
          lVar9 = lVar9 + -1;
          fVar19 = fVar18;
        } while (lVar9 != 0);
        fVar17 = (float)NEON_fminnm(pfVar6[param_4 - 1] * -2.0 + 6.2831855,fVar17);
      }
LAB_0349c790:
      if (*(long *)(param_2 + 0x68) != 0) {
        (**(code **)(puVar2 + 0x30))(0);
      }
      *(float **)(param_2 + 0x68) = pfVar6;
      *(uint *)(param_2 + 0x70) = uVar7;
      uVar14 = 1;
      *(float *)(param_2 + 0x74) = 1.0 / fVar17;
      *(float *)(param_2 + 0x78) = param_1 * 0.017453294;
      goto LAB_0349c7e4;
    }
  }
LAB_0349c7d0:
  (**(code **)(puVar2 + 0x30))(0,pfVar6);
  uVar14 = 2;
LAB_0349c7e4:
  if (*(int *)(param_2 + 0xc0) != 0) {
    puVar15 = *(uint **)(param_2 + 0xb8);
    do {
      if ((*puVar15 & 0xff9c0000) == 0) {
        FUN_034cdb74(*puVar15,*(undefined8 *)(param_2 + 0x68),puVar15 + 2);
      }
      else {
        FUN_034cdef4(*(undefined4 *)(param_2 + 0x78));
      }
      puVar15 = puVar15 + 4;
    } while (puVar15 !=
             (uint *)(*(long *)(param_2 + 0xb8) + (ulong)*(uint *)(param_2 + 0xc0) * 0x10));
  }
  if (*(int *)(param_2 + 0x98) != 0) {
    lVar9 = *(long *)(param_2 + 0x90);
    do {
      (**(code **)(puVar2 + 0x30))(0,*(undefined8 *)(lVar9 + 8));
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != *(long *)(param_2 + 0x90) + (ulong)*(uint *)(param_2 + 0x98) * 0x10);
  }
  uVar7 = *(uint *)(param_2 + 0xf0);
  *(undefined4 *)(param_2 + 0x98) = 0;
  if (uVar7 != 0) {
    lVar8 = *(long *)(param_2 + 0xe8);
    lVar9 = lVar8;
    do {
      if (*(long *)(lVar9 + 8) != 0) {
        *(undefined4 *)(lVar9 + 0x10) = 0;
        (**(code **)(puVar2 + 0x30))(0);
        *(undefined8 *)(lVar9 + 8) = 0;
        *(undefined4 *)(lVar9 + 0x14) = 0;
        lVar8 = *(long *)(param_2 + 0xe8);
        uVar7 = *(uint *)(param_2 + 0xf0);
      }
      lVar9 = lVar9 + 0x18;
    } while (lVar9 != lVar8 + (ulong)uVar7 * 0x18);
  }
  *(undefined4 *)(param_2 + 0xf0) = 0;
  return uVar14;
}


