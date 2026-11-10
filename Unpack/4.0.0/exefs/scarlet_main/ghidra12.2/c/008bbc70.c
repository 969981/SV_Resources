/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008bbc70; name: FUN_008bbc70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008bbc70(float param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5,
                 float param_6,float *param_7,long *param_8)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  float extraout_s0;
  float fVar5;
  float extraout_var;
  float fVar6;
  float extraout_var_00;
  float extraout_var_01;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_a0;
  float fStack_9c;
  float fStack_90;
  float fStack_8c;
  float local_80;
  float fStack_7c;
  float fStack_70;
  float fStack_6c;
  
  fVar15 = param_2._12_4_;
  fVar5 = param_2._8_4_;
  fVar7 = param_2._4_4_;
  fVar8 = param_2._0_4_;
  FUN_008bc150(param_8);
  local_a0 = param_5 * -0.5;
  param_1 = param_1 * 0.5;
  fVar11 = param_2._0_4_ * 0.5;
  fStack_90 = param_5 * 0.5;
  fVar14 = (float)_UNK_03caa5b8;
  fVar6 = (float)((ulong)_UNK_03caa5b8 >> 0x20);
  fVar12 = (float)_DAT_03caa5b0;
  fVar13 = (float)((ulong)_DAT_03caa5b0 >> 0x20);
  fStack_9c = param_6 * 0.5;
  fStack_6c = param_6 * -0.5;
  if ((*PTR_DAT_047d2160 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_047d2160);
    puVar2 = PTR_DAT_047d20a0;
    if (iVar3 != 0) {
      if (((*PTR_DAT_047d2098 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar3 != 0)) {
        *(undefined8 *)puVar2 = 0;
        __cxa_guard_release(PTR_DAT_047d2098);
      }
      *(undefined **)PTR_DAT_047d2168 = puVar2;
      __cxa_guard_release(PTR_DAT_047d2160);
    }
  }
  fVar16 = extraout_s0 * 1.0 + extraout_var * 0.0 + fVar12 * extraout_var_00 + 0.0;
  fVar17 = extraout_s0 * 0.0 + extraout_var * 1.0 + fVar13 * extraout_var_00 + 0.0;
  fVar18 = extraout_s0 * 0.0 + extraout_var * 0.0 + fVar14 * extraout_var_00 + 0.0;
  fVar19 = extraout_var_01 +
           (param_1 + param_3) * extraout_s0 + (param_4 - fVar11) * extraout_var +
           fVar6 * extraout_var_00;
  fVar12 = fVar8 * 1.0 + fVar7 * 0.0 + fVar12 * fVar5 + 0.0;
  fVar13 = fVar8 * 0.0 + fVar7 * 1.0 + fVar13 * fVar5 + 0.0;
  fVar14 = fVar8 * 0.0 + fVar7 * 0.0 + fVar14 * fVar5 + 0.0;
  fVar15 = fVar15 + (param_1 + param_3) * fVar8 + (param_4 - fVar11) * fVar7 + fVar6 * fVar5;
  fStack_70 = local_a0;
  fStack_8c = fStack_9c;
  local_80 = fStack_90;
  fStack_7c = fStack_6c;
  if (param_8 != (long *)0x0) {
    for (plVar4 = (long *)(**(code **)(*param_8 + 0x10))(param_8); plVar4 != (long *)0x0;
        plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)PTR_DAT_047d2168) {
        bVar1 = *(byte *)((long)param_8 + 0x116) & 3;
        if (bVar1 == 2) {
          param_1 = param_1 - fStack_90;
          fVar8 = param_1 + local_a0;
          fVar7 = param_1 + fStack_90;
          local_80 = param_1 + fStack_90;
          fStack_70 = param_1 + local_a0;
LAB_008bbe7c:
          local_a0 = fVar8;
          fStack_90 = fVar7;
        }
        else if (bVar1 == 1) {
          param_1 = param_1 - fStack_90;
          fVar8 = local_a0 - param_1;
          fVar7 = fStack_90 - param_1;
          local_80 = fStack_90 - param_1;
          fStack_70 = local_a0 - param_1;
          goto LAB_008bbe7c;
        }
        if ((*(byte *)((long)param_8 + 0x115) >> 4 & 1) == 0) {
          bVar1 = *(byte *)((long)param_8 + 0x116) >> 2 & 3;
          if (bVar1 == 2) {
            fVar11 = fVar11 - fStack_9c;
            fStack_8c = fStack_9c - fVar11;
            fStack_9c = fStack_9c - fVar11;
            fStack_7c = fStack_6c - fVar11;
            fStack_6c = fStack_6c - fVar11;
          }
          else if (bVar1 == 1) {
            fVar11 = fVar11 - fStack_9c;
            fStack_8c = fVar11 + fStack_9c;
            fStack_9c = fVar11 + fStack_9c;
            fStack_7c = fVar11 + fStack_6c;
            fStack_6c = fVar11 + fStack_6c;
          }
        }
        break;
      }
    }
  }
  fVar8 = fVar19 + fVar16 * local_a0 + fVar17 * fStack_9c + fVar18 * 0.0;
  fVar11 = fVar15 + fVar12 * local_a0 + fVar13 * fStack_9c + fVar14 * 0.0;
  fVar9 = fVar19 + fVar16 * fStack_90 + fVar17 * fStack_8c + fVar18 * 0.0;
  fVar10 = fVar15 + fVar12 * fStack_90 + fVar13 * fStack_8c + fVar14 * 0.0;
  fVar5 = fVar19 + fVar16 * fStack_70 + fVar17 * fStack_6c + fVar18 * 0.0;
  fVar6 = fVar15 + fVar12 * fStack_70 + fVar13 * fStack_6c + fVar14 * 0.0;
  fVar19 = fVar19 + fVar16 * local_80 + fVar17 * fStack_7c + fVar18 * 0.0;
  fVar15 = fVar15 + fVar12 * local_80 + fVar13 * fStack_7c + fVar14 * 0.0;
  fVar7 = fVar8;
  if (fVar8 <= -3.4028235e+38) {
    fVar7 = -3.4028235e+38;
  }
  if (3.4028235e+38 < fVar8) {
    fVar8 = 3.4028235e+38;
  }
  fVar12 = fVar11;
  if (3.4028235e+38 < fVar11) {
    fVar12 = 3.4028235e+38;
  }
  if (fVar7 <= fVar9) {
    fVar7 = fVar9;
  }
  if (fVar11 <= fVar10) {
    fVar11 = fVar10;
  }
  if (fVar9 <= fVar8) {
    fVar8 = fVar9;
  }
  if (fVar10 <= fVar12) {
    fVar12 = fVar10;
  }
  if (fVar7 <= fVar19) {
    fVar7 = fVar19;
  }
  if (fVar11 <= fVar15) {
    fVar11 = fVar15;
  }
  if (fVar19 <= fVar8) {
    fVar8 = fVar19;
  }
  if (fVar15 <= fVar12) {
    fVar12 = fVar15;
  }
  if (fVar7 <= fVar5) {
    fVar7 = fVar5;
  }
  if (fVar11 <= fVar6) {
    fVar11 = fVar6;
  }
  if (fVar5 <= fVar8) {
    fVar8 = fVar5;
  }
  if (fVar6 <= fVar12) {
    fVar12 = fVar6;
  }
  param_7[2] = fVar7;
  param_7[3] = fVar12;
  *param_7 = fVar8;
  param_7[1] = fVar11;
  return;
}


