/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e7568; name: FUN_034e7568
 */


void FUN_034e7568(uint *param_1,undefined1 param_2 [16],float param_3,long *param_4,long param_5,
                 float *param_6)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  float *pfVar10;
  long lVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  *param_6 = 0.0;
  fVar12 = (float)FUN_034ad5d0();
  *param_1 = 0x42480000;
  param_1[3] = (uint)fVar12;
  param_1[4] = (uint)param_3;
  fVar14 = fVar12;
  if (fVar12 <= 0.0) {
    fVar14 = 0.0;
  }
  uVar13 = NEON_fminnm(fVar14,0x42c80000);
  if ((~uVar13 & 0x7f800000) != 0) {
    *param_1 = uVar13;
  }
  uVar4 = (**(code **)(*param_4 + 0x108))(param_4,param_6);
  if ((uVar4 & 1) != 0) {
    lVar11 = *(long *)(param_5 + 0x28);
    *param_6 = *param_6 * *(float *)(lVar11 + 0x50);
    puVar3 = PTR_DAT_047e6cb8;
    if (param_3 != 0.0) {
      plVar5 = *(long **)(param_5 + 0x30);
      if ((plVar5 == (long *)0x0) && (plVar5 = *(long **)PTR_DAT_047e6cb8, plVar5 == (long *)0x0)) {
        plVar5 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
        *plVar5 = (long)(PTR_DAT_047e6e40 + 0x10);
        plVar5[1] = 0;
        puVar1 = PTR_DAT_047e6958;
        lVar7 = *(long *)(PTR_DAT_047e6958 + 8);
        plVar5[2] = 0;
        plVar5[3] = lVar7;
        plVar6 = (long *)(puVar1 + 0x10);
        if (*(long *)(puVar1 + 0x10) != 0) {
          plVar6 = (long *)(lVar7 + 0x10);
        }
        *plVar6 = (long)plVar5;
        *(long **)(puVar1 + 8) = plVar5;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        puVar1 = PTR_DAT_047e6e48 + 0x10;
        plVar5[8] = 0;
        plVar5[9] = 0;
        *plVar5 = (long)puVar1;
        plVar5[0xc] = 0;
        plVar5[0xd] = 0;
        plVar5[0x12] = 0;
        plVar5[0x13] = 0;
        plVar5[0x16] = 0;
        plVar5[0x17] = 0;
        plVar5[0x1a] = 0;
        plVar5[0x1b] = 0;
        *(long **)puVar3 = plVar5;
        *(undefined2 *)(plVar5 + 0x1c) = 0x101;
      }
      if (*(uint *)(plVar5 + 0x1b) == 0) {
        fVar14 = 1e+10;
      }
      else {
        plVar6 = (long *)plVar5[0x1a];
        fVar14 = 1e+10;
        plVar5 = plVar6 + *(uint *)(plVar5 + 0x1b);
        uVar13 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
        do {
          if (uVar13 != 0) {
            uVar2 = 0;
            uVar8 = (uint)*plVar6;
            if (uVar13 != 0) {
              uVar2 = uVar8 / uVar13;
            }
            for (plVar9 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                                    (ulong)(uVar8 - uVar2 * uVar13) * 8); plVar9 != (long *)0x0;
                plVar9 = (long *)*plVar9) {
              if (plVar9[1] == *plVar6) {
                if (plVar9[2] != 0) {
                  lVar7 = *(long *)(plVar9[2] + 0x40);
                  uVar4 = (ulong)*(ushort *)(lVar11 + 0x38);
                  if (lVar7 != 0 && *(ushort *)(lVar11 + 0x38) != 0) {
                    pfVar10 = (float *)(*(long *)(lVar11 + 0x20) + 0x20);
                    do {
                      fVar16 = *(float *)(lVar7 + 0x7c) - pfVar10[-1];
                      fVar17 = *(float *)(lVar7 + 0x80) - *pfVar10;
                      fVar15 = *(float *)(lVar7 + 0x78) - pfVar10[-2];
                      fVar14 = (float)NEON_fminnm(fVar14,SQRT(fVar15 * fVar15 + fVar16 * fVar16 +
                                                              fVar17 * fVar17) *
                                                         (1.0 / *(float *)(lVar7 + 0x84)));
                      uVar4 = uVar4 - 1;
                      pfVar10 = pfVar10 + 10;
                    } while (uVar4 != 0);
                  }
                }
                break;
              }
            }
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar5);
      }
      if (fVar14 < *param_6) {
        param_3 = (fVar14 * param_3) / *param_6;
      }
      param_3 = param_3 + fVar12;
      if (param_3 <= 0.0) {
        param_3 = 0.0;
      }
      uVar13 = NEON_fminnm(param_3,0x42c80000);
      if ((~uVar13 & 0x7f800000) != 0) {
        *param_1 = uVar13;
      }
    }
  }
  return;
}


