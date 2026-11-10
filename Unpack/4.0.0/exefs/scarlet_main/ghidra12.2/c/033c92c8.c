/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033c92c8; name: FUN_033c92c8
 */


undefined8
FUN_033c92c8(long *param_1,long *param_2,long *param_3,uint param_4,uint param_5,float *param_6)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  float local_a8;
  
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    *param_1 = 0;
  }
  uVar2 = param_4 & 0xff;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((param_4 & 0xff) != 0) {
    lVar4 = (**(code **)(*param_2 + 0x10))
                      (param_2,(ulong)uVar2 << 5,"../../Common\\LFOMultiChannel.h",0x48);
    *param_1 = lVar4;
    if (lVar4 == 0) {
      return 0x34;
    }
    lVar4 = (long)&local_d0 - ((ulong)(uVar2 * 4 + 0xf) & 0x7f0);
    *(uint *)(param_1 + 1) = uVar2;
    FUN_033ca770(param_3,param_4,param_6 + 4,lVar4);
    if ((int)param_1[1] != 0) {
      local_b8 = (double)param_5;
      uVar6 = 0;
      lVar7 = 0xc;
      local_c8 = local_b8 * 3.141592653589793;
      local_c0 = local_b8 * 0.5;
      local_d0 = 1.0 / local_b8;
      do {
        if (*param_1 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = *param_1 + lVar7;
          *(undefined8 *)(lVar8 + 0xc) = 0;
          *(undefined8 *)(lVar8 + 4) = 0;
          *(undefined8 *)(lVar8 + -4) = 0;
          *(undefined8 *)(lVar8 + -0xc) = 0;
          lVar8 = *param_1;
        }
        fVar14 = *(float *)(lVar4 + uVar6 * 4);
        iVar3 = (**(code **)(*param_3 + 0xe0))(param_3);
        fVar13 = param_6[1];
        fVar12 = param_6[2];
        fVar9 = 0.0;
        fVar11 = 1.0;
        if (fVar12 != 0.0) {
          dVar10 = (double)NEON_fminnm((double)fVar13,local_b8);
          dVar10 = log(local_c0 / dVar10);
          dVar10 = exp(dVar10 * -(double)fVar12);
          dVar10 = cos(local_c8 * dVar10 * local_d0);
          dVar10 = 2.0 - dVar10;
          fVar9 = (float)(SQRT(dVar10 * dVar10 + -1.0) - dVar10);
          fVar11 = fVar9 + 1.0;
        }
        fVar12 = fVar13 * (1.0 / (float)param_5);
        pfVar1 = (float *)(lVar8 + lVar7);
        if ((float)param_5 <= fVar13) {
          fVar12 = 1.0;
        }
        pfVar1[1] = fVar12;
        if (*param_6 == 0.0) {
          pfVar1[1] = fVar12 * 6.2831855;
        }
        pfVar1[-2] = fVar11;
        pfVar1[-1] = fVar9;
        fVar9 = pfVar1[2];
        if (fVar9 != *param_6) {
          if (fVar9 == 0.0) {
            fVar9 = 0.15915494;
LAB_033c9504:
            *(float *)(lVar8 + lVar7) = *(float *)(lVar8 + lVar7) * fVar9;
          }
          else {
            fVar9 = 6.2831855;
            if (*param_6 == 0.0) goto LAB_033c9504;
          }
          fVar9 = *param_6;
        }
        pfVar1[2] = fVar9;
        pfVar5 = pfVar1 + -3;
        local_b0 = *(undefined8 *)pfVar5;
        local_a8 = pfVar1[-1];
        fVar11 = 6.2831855;
        if (*param_6 != 0.0) {
          fVar11 = 1.0;
        }
        fVar12 = fVar14 * 0.0027777778 * fVar11;
        fVar13 = 0.25;
        if (fVar9 == 1.4013e-45) {
LAB_033c9568:
          fVar12 = fVar12 + fVar13;
          fVar13 = fVar12 + fVar11;
          if (0.0 <= fVar12) {
            fVar13 = fVar12;
          }
          pfVar1[-1] = local_a8;
          *(undefined8 *)pfVar5 = local_b0;
          if (fVar11 <= fVar13) {
            fVar13 = fVar13 - fVar11;
          }
          *(float *)(lVar8 + lVar7) = fVar13;
          pfVar1[2] = fVar9;
LAB_033c962c:
          fVar9 = 1.0;
LAB_033c9630:
          fVar9 = fmodf(fVar13,fVar9);
          *(float *)(lVar8 + lVar7) = fVar9;
        }
        else {
          if (fVar9 != 7.00649e-45) {
            if (fVar9 == 4.2039e-45) {
              fVar13 = 0.5;
              goto LAB_033c9568;
            }
            fVar13 = fVar12 + fVar11;
            if (0.0 <= fVar12) {
              fVar13 = fVar12;
            }
            pfVar1[-1] = local_a8;
            *(undefined8 *)pfVar5 = local_b0;
            if (fVar11 <= fVar13) {
              fVar13 = fVar13 - fVar11;
            }
            *(float *)(lVar8 + lVar7) = fVar13;
            pfVar1[2] = fVar9;
            if (fVar9 != 0.0) goto LAB_033c962c;
            fVar9 = 6.2831855;
            goto LAB_033c9630;
          }
          pfVar1[-1] = local_a8;
          *(undefined8 *)pfVar5 = local_b0;
          pfVar1[2] = 7.00649e-45;
          fVar9 = fVar12 + fVar11;
          if (0.0 <= fVar12) {
            fVar9 = fVar12;
          }
          *(long *)(pfVar1 + 3) = (long)iVar3 * 0x5851f42d4c957f2d + 1;
          if (fVar11 <= fVar9) {
            fVar9 = fVar9 - fVar11;
          }
          *pfVar1 = fVar9;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x20;
      } while (uVar6 < *(uint *)(param_1 + 1));
    }
  }
  return 1;
}


