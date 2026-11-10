/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b1790; name: FUN_034b1790
 */


undefined8 FUN_034b1790(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  float *pfVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  plVar6 = *(long **)(param_1 + 6);
  if (plVar6 == (long *)0x0) {
    uVar3 = 2;
  }
  else {
    *(undefined1 *)(param_1 + 0xb) = 1;
    if ((int)plVar6[1] < 1) {
      uVar3 = 0x25;
    }
    else {
      *(undefined2 *)(param_1 + 9) = 0;
      pfVar5 = (float *)*plVar6;
      *(undefined2 *)(param_1 + 9) = 1;
      fVar13 = *pfVar5;
      param_1[0x17] = fVar13;
      fVar14 = pfVar5[1];
      param_1[0x18] = fVar14;
      fVar12 = pfVar5[2];
      param_1[0x19] = fVar12;
      iVar1 = *(int *)PTR_DAT_047e6fc0;
      uVar4 = 0;
      if (iVar1 != 0) {
        uVar4 = ((int)pfVar5[3] + iVar1 + -1) / iVar1;
      }
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      param_1[0x13] = uVar4;
      puVar2 = PTR_DAT_047e7068;
      if ((int)plVar6[1] < 2) {
        fVar16 = 0.0;
        *(undefined8 *)(param_1 + 0x1a) = 0;
      }
      else {
        lVar7 = *plVar6;
        fVar17 = *(float *)(lVar7 + 0x10);
        fVar15 = *(float *)(lVar7 + 0x14);
        fVar16 = *(float *)(lVar7 + 0x18);
        if ((((fVar17 == fVar13) && (fVar15 == fVar14)) && ((int)plVar6[1] < 3)) &&
           (fVar16 == fVar12)) {
          lVar7 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
          lVar8 = lVar7 * 0x5851f42d4c957f2d + 1;
          fVar13 = fVar13 + *(float *)((long)plVar6 + 0xc) *
                            ((float)(uint)((ulong)lVar7 >> 0x21) * 9.313226e-10 + -1.0);
          param_1[0x17] = fVar13;
          fVar12 = fVar12 + *(float *)(plVar6 + 2) *
                            ((float)(uint)((ulong)lVar8 >> 0x21) * 9.313226e-10 + -1.0);
          lVar7 = lVar8 * 0x5851f42d4c957f2d + 1;
          param_1[0x19] = fVar12;
          *(long *)puVar2 = lVar7;
          fVar14 = fVar14 + *(float *)((long)plVar6 + 0x14) *
                            ((float)(uint)((ulong)lVar7 >> 0x21) * 9.313226e-10 + -1.0);
          param_1[0x18] = fVar14;
          fVar16 = fVar12;
          fVar15 = fVar14;
          fVar17 = fVar13;
        }
        else {
          lVar7 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
          lVar8 = lVar7 * 0x5851f42d4c957f2d + 1;
          lVar9 = lVar8 * 0x5851f42d4c957f2d + 1;
          fVar13 = fVar13 + *(float *)((long)plVar6 + 0xc) *
                            ((float)(uint)((ulong)lVar7 >> 0x21) * 9.313226e-10 + -1.0);
          param_1[0x17] = fVar13;
          lVar10 = lVar9 * 0x5851f42d4c957f2d + 1;
          lVar11 = lVar10 * 0x5851f42d4c957f2d + 1;
          lVar7 = lVar11 * 0x5851f42d4c957f2d + 1;
          fVar12 = fVar12 + *(float *)(plVar6 + 2) *
                            ((float)(uint)((ulong)lVar8 >> 0x21) * 9.313226e-10 + -1.0);
          param_1[0x19] = fVar12;
          fVar14 = fVar14 + *(float *)((long)plVar6 + 0x14) *
                            ((float)(uint)((ulong)lVar9 >> 0x21) * 9.313226e-10 + -1.0);
          param_1[0x18] = fVar14;
          fVar18 = *(float *)((long)plVar6 + 0xc);
          fVar19 = *(float *)(plVar6 + 2);
          *(long *)puVar2 = lVar7;
          fVar17 = fVar17 + fVar18 * ((float)(uint)((ulong)lVar10 >> 0x21) * 9.313226e-10 + -1.0);
          fVar16 = fVar16 + fVar19 * ((float)(uint)((ulong)lVar11 >> 0x21) * 9.313226e-10 + -1.0);
          fVar15 = fVar15 + *(float *)((long)plVar6 + 0x14) *
                            ((float)(uint)((ulong)lVar7 >> 0x21) * 9.313226e-10 + -1.0);
        }
        param_1[0x1a] = fVar17 - fVar13;
        param_1[0x1b] = fVar15 - fVar14;
        fVar16 = fVar16 - fVar12;
      }
      param_1[0x1c] = fVar16;
      if (param_1[0xe] != 0) {
        plVar6 = *(long **)(param_1 + 0xc);
        lVar7 = *(long *)(*plVar6 + 0x168);
        *(float *)(lVar7 + 8) = *(float *)(lVar7 + 8) + fVar14;
        *(float *)(lVar7 + 4) = *(float *)(lVar7 + 4) + fVar13;
        *(float *)(lVar7 + 0xc) = *(float *)(lVar7 + 0xc) + fVar12;
        while (plVar6 = plVar6 + 1,
              plVar6 != (long *)(*(long *)(param_1 + 0xc) + (ulong)(uint)param_1[0xe] * 8)) {
          fVar13 = (float)param_1[0x18];
          fVar14 = (float)param_1[0x19];
          lVar7 = *(long *)(*plVar6 + 0x168);
          *(float *)(lVar7 + 4) = *(float *)(lVar7 + 4) + (float)param_1[0x17];
          *(float *)(lVar7 + 8) = *(float *)(lVar7 + 8) + fVar13;
          *(float *)(lVar7 + 0xc) = *(float *)(lVar7 + 0xc) + fVar14;
        }
        uVar4 = param_1[0x13];
      }
      param_1[0x1f] = param_1[0x19];
      param_1[0x11] = param_2;
      param_1[0x12] = uVar4 + param_2;
      uVar3 = 1;
      *(undefined8 *)(param_1 + 0x1d) = *(undefined8 *)(param_1 + 0x17);
      *param_1 = 1;
      param_1[0x14] = 1.0 / (float)uVar4;
      param_1[0x15] = (1.0 / (float)uVar4) * -(float)param_2;
    }
  }
  return uVar3;
}


