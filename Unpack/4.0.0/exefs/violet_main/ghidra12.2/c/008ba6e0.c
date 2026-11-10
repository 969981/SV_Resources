/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ba6e0; name: FUN_008ba6e0
 */


/* WARNING: Removing unreachable block (ram,0x008bab04) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_008ba6e0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],long *param_4,
            float *param_5)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  float fVar9;
  float fVar10;
  float extraout_s0_01;
  float extraout_s0_02;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float extraout_var_01;
  float extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  float extraout_var_05;
  float extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  float extraout_var_09;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_80;
  float local_68;
  float fStack_64;
  
  uVar15 = param_3._4_4_;
  uVar13 = param_3._0_4_;
  uVar12 = param_2._4_4_;
  uVar11 = param_2._0_4_;
  uVar5 = FUN_008a8c78();
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  plVar8 = (long *)param_4[3];
  if (((*PTR_DAT_047d21b0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d21b0), iVar4 != 0))
  {
    if (((*PTR_DAT_047d2098 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar4 != 0)) {
      *(undefined8 *)PTR_DAT_047d20a0 = 0;
      __cxa_guard_release(PTR_DAT_047d2098);
    }
    *(undefined **)PTR_DAT_047d21b8 = PTR_DAT_047d20a0;
    __cxa_guard_release(PTR_DAT_047d21b0);
  }
  if (plVar8 != (long *)0x0) {
    for (plVar6 = (long *)(**(code **)(*plVar8 + 0x10))(plVar8); plVar6 != (long *)0x0;
        plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)PTR_DAT_047d21b8) goto LAB_008ba764;
    }
    plVar8 = (long *)0x0;
  }
LAB_008ba764:
  *(long **)(param_5 + 4) = param_4;
  *param_5 = *(float *)(param_4 + 10);
  param_5[1] = 0.0;
  param_5[2] = 0.0;
  bVar1 = *(byte *)(param_4 + 0xb);
  if (((*PTR_DAT_047d2088 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d2088), iVar4 != 0))
  {
    if (((*PTR_DAT_047d2098 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar4 != 0)) {
      *(undefined8 *)PTR_DAT_047d20a0 = 0;
      __cxa_guard_release(PTR_DAT_047d2098);
    }
    *(undefined **)PTR_DAT_047d2090 = PTR_DAT_047d20a0;
    __cxa_guard_release(PTR_DAT_047d2088);
  }
  puVar7 = (undefined8 *)(**(code **)(*param_4 + 0x10))(param_4);
  if (puVar7 != (undefined8 *)0x0) {
LAB_008ba7a4:
    if (puVar7 != (undefined8 *)PTR_DAT_047d2090) goto code_r0x008ba7ac;
    if (param_4 != (long *)0x0) {
      bVar1 = *(byte *)(param_4 + 0xb);
      local_68 = -3.4028235e+38;
      fStack_64 = 3.4028235e+38;
      FUN_008bc150(param_4);
      uStack_98 = CONCAT44(extraout_var_07,extraout_var_03);
      local_a0 = CONCAT44(extraout_var,extraout_s0);
      uStack_90 = CONCAT44(uVar12,uVar11);
      fVar9 = 0.0;
      local_80 = CONCAT44(uVar15,uVar13);
      plVar6 = (long *)param_4[5];
      if (plVar6 != param_4 + 4) {
        do {
          FUN_008bc300(plVar6 + -1,&fStack_64,&local_68,&local_a0);
          plVar6 = (long *)plVar6[1];
        } while (plVar6 != param_4 + 4);
        if (fStack_64 <= local_68) {
          local_68 = local_68 - uStack_98._4_4_;
          fStack_64 = fStack_64 - uStack_98._4_4_;
          fVar9 = local_68 - fStack_64;
          param_5[2] = (local_68 + fStack_64) * 0.5;
        }
      }
      *param_5 = fVar9;
      goto joined_r0x008ba844;
    }
  }
LAB_008ba854:
  uVar5 = FUN_008a8d40(param_4);
  if ((uVar5 & 1) != 0) {
    plVar6 = (long *)param_4[5];
    if (plVar6 != param_4 + 4) {
      bVar1 = *(byte *)(param_4 + 0xb);
      local_68 = -3.4028235e+38;
      fStack_64 = 3.4028235e+38;
      FUN_008bc150(param_4);
      uStack_98 = CONCAT44(extraout_var_08,extraout_var_04);
      local_a0 = CONCAT44(extraout_var_00,extraout_s0_00);
      uStack_90 = CONCAT44(uVar12,uVar11);
      local_80 = CONCAT44(uVar15,uVar13);
      do {
        FUN_008bc300(plVar6 + -1,&fStack_64,&local_68,&local_a0);
        plVar6 = (long *)plVar6[1];
      } while (plVar6 != param_4 + 4);
      if (local_68 < fStack_64) {
        fVar9 = 0.0;
        *param_5 = 0.0;
      }
      else {
        local_68 = local_68 - uStack_98._4_4_;
        fStack_64 = fStack_64 - uStack_98._4_4_;
        fVar9 = local_68 - fStack_64;
        param_5[2] = (local_68 + fStack_64) * 0.5;
        *param_5 = fVar9;
      }
joined_r0x008ba844:
      if (((bVar1 & 1) != 0) && (fVar9 != 0.0)) goto LAB_008babb0;
      goto LAB_008bacd0;
    }
  }
  if (((*PTR_DAT_047d2160 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_047d2160), puVar3 = PTR_DAT_047d20a0, iVar4 != 0)) {
    if (((*PTR_DAT_047d2098 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar4 != 0)) {
      *(undefined8 *)puVar3 = 0;
      __cxa_guard_release(PTR_DAT_047d2098);
    }
    *(undefined **)PTR_DAT_047d2168 = puVar3;
    __cxa_guard_release(PTR_DAT_047d2160);
  }
  for (plVar6 = (long *)(**(code **)(*param_4 + 0x10))(param_4); plVar6 != (long *)0x0;
      plVar6 = (long *)*plVar6) {
    if (plVar6 == (long *)PTR_DAT_047d2168) {
      if (param_4 != (long *)0x0) {
        (**(code **)(*param_4 + 0x140))(&local_a0,param_4);
        fVar20 = (float)uStack_98;
        fVar9 = (float)local_a0;
        (**(code **)(*param_4 + 0x140))(&local_a0,param_4);
        fVar10 = 0.0;
        bVar2 = *(byte *)((long)param_4 + 0x5b) & 3;
        fVar21 = *(float *)(param_4 + 10);
        fVar19 = *(float *)((long)param_4 + 0x54);
        if (bVar2 != 1) {
          if (bVar2 == 2) {
            fVar10 = -fVar21;
          }
          else {
            fVar10 = fVar21 * -0.5;
          }
        }
        bVar2 = *(byte *)((long)param_4 + 0x5b) >> 2 & 3;
        fVar14 = 0.0;
        if ((bVar2 != 1) && (fVar14 = fVar19, bVar2 != 2)) {
          fVar14 = fVar19 * 0.5;
        }
        FUN_008bbc70(fVar21,fVar19,fVar10,fVar14,fVar20 - fVar9,local_a0._4_4_ - uStack_98._4_4_,
                     &local_a0,param_4);
        *param_5 = (float)uStack_98 - (float)local_a0;
        param_5[2] = ((float)uStack_98 - (float)local_a0) * 0.5 +
                     ((float)local_a0 - *(float *)(param_4 + 6));
        goto joined_r0x008baccc;
      }
      break;
    }
  }
  fVar9 = 0.0;
  fVar21 = *(float *)(param_4 + 10);
  fVar20 = *(float *)((long)param_4 + 0x54);
  bVar2 = *(byte *)((long)param_4 + 0x5b) & 3;
  if (bVar2 != 1) {
    if (bVar2 == 2) {
      fVar9 = -fVar21;
    }
    else {
      fVar9 = fVar21 * -0.5;
    }
  }
  bVar2 = *(byte *)((long)param_4 + 0x5b) >> 2 & 3;
  fVar19 = 0.0;
  if ((bVar2 != 1) && (fVar19 = fVar20, bVar2 != 2)) {
    fVar19 = fVar20 * 0.5;
  }
  fVar10 = fVar20 * 0.5;
  FUN_008bc150(param_4);
  fVar16 = extraout_s0_01 * 1.0 + extraout_var_01 * 0.0 + (float)_DAT_03caa5b0 * extraout_var_05 +
           0.0;
  fVar17 = extraout_s0_01 * 0.0 + extraout_var_01 * 1.0 +
           (float)((ulong)_DAT_03caa5b0 >> 0x20) * extraout_var_05 + 0.0;
  fVar18 = extraout_s0_01 * 0.0 + extraout_var_01 * 0.0 + (float)_UNK_03caa5b8 * extraout_var_05 +
           0.0;
  fVar19 = extraout_var_09 +
           (fVar21 * 0.5 + fVar9) * extraout_s0_01 + (fVar19 - fVar10) * extraout_var_01 +
           (float)((ulong)_UNK_03caa5b8 >> 0x20) * extraout_var_05;
  fVar14 = fVar16 * fVar21 * -0.5;
  fVar16 = fVar16 * fVar21 * 0.5;
  fVar21 = fVar19 + fVar16 + fVar17 * fVar20 * -0.5 + fVar18 * 0.0;
  fVar9 = fVar19 + fVar14 + fVar17 * fVar10 + fVar18 * 0.0;
  fVar10 = fVar19 + fVar16 + fVar17 * fVar10 + fVar18 * 0.0;
  fVar19 = fVar19 + fVar14 + fVar17 * fVar20 * -0.5 + fVar18 * 0.0;
  fVar20 = fVar9;
  if (fVar9 <= fVar10) {
    fVar20 = fVar10;
  }
  if (fVar10 <= fVar9) {
    fVar9 = fVar10;
  }
  if (fVar20 <= fVar21) {
    fVar20 = fVar21;
  }
  if (fVar21 <= fVar9) {
    fVar9 = fVar21;
  }
  if (fVar20 <= fVar19) {
    fVar20 = fVar19;
  }
  if (fVar19 <= fVar9) {
    fVar9 = fVar19;
  }
  *param_5 = fVar20 - fVar9;
  bVar2 = *(byte *)((long)param_4 + 0x5b);
  if ((bVar2 & 0xf) != 0) {
    fVar9 = *(float *)(param_4 + 10);
    fVar20 = 0.0;
    if ((bVar2 & 3) != 1) {
      if ((bVar2 & 3) == 2) {
        fVar20 = -fVar9;
      }
      else {
        fVar20 = fVar9 * -0.5;
      }
    }
    fVar19 = *(float *)((long)param_4 + 0x54);
    bVar2 = bVar2 >> 2 & 3;
    fVar21 = 0.0;
    if ((bVar2 != 1) && (fVar21 = fVar19, bVar2 != 2)) {
      fVar21 = fVar19 * 0.5;
    }
    FUN_008bc150(param_4);
    param_5[2] = param_5[2] +
                 extraout_s0_02 * (fVar9 * 0.5 + fVar20) + extraout_var_02 * (fVar21 - fVar19 * 0.5)
                 + extraout_var_06 * 0.0 + 0.0;
  }
joined_r0x008baccc:
  if ((bVar1 & 1) != 0) {
LAB_008babb0:
    uVar5 = FUN_008a8cdc(param_4);
    if ((uVar5 & 1) == 0) {
      param_5[1] = *(float *)(plVar8 + 0x1b);
    }
    else {
      fVar9 = (float)FUN_008a8da4(*(undefined8 *)(param_5 + 4));
      param_5[1] = fVar9;
    }
    return 1;
  }
LAB_008bacd0:
  param_5[1] = 0.0;
  return 0;
code_r0x008ba7ac:
  puVar7 = (undefined8 *)*puVar7;
  if (puVar7 == (undefined8 *)0x0) goto LAB_008ba854;
  goto LAB_008ba7a4;
}


