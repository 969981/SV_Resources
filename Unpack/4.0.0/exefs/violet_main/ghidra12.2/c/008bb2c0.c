/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008bb2c0; name: FUN_008bb2c0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_008bb2c0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],long *param_4,
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
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  float local_68;
  float fStack_64;
  
  uVar22 = param_3._4_4_;
  uVar21 = param_3._0_4_;
  uVar19 = param_2._12_4_;
  uVar14 = param_2._4_4_;
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
      if (plVar6 == (long *)PTR_DAT_047d21b8) goto LAB_008bb344;
    }
    plVar8 = (long *)0x0;
  }
LAB_008bb344:
  *(long **)(param_5 + 4) = param_4;
  *param_5 = *(float *)((long)param_4 + 0x54);
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
LAB_008bb384:
    if (puVar7 != (undefined8 *)PTR_DAT_047d2090) goto code_r0x008bb38c;
    if (param_4 != (long *)0x0) {
      bVar1 = *(byte *)(param_4 + 0xb);
      local_68 = 3.4028235e+38;
      fStack_64 = -3.4028235e+38;
      FUN_008bc150(param_4);
      uStack_98 = CONCAT44(extraout_var_03,extraout_var_01);
      local_a0 = CONCAT44(extraout_var,extraout_s0);
      uStack_88 = (ulong)uVar19 << 0x20;
      uStack_90 = CONCAT44(uVar14,uVar11);
      fVar9 = 0.0;
      local_80 = CONCAT44(uVar22,uVar21);
      plVar6 = (long *)param_4[5];
      if (plVar6 != param_4 + 4) {
        do {
          FUN_008bca80(plVar6 + -1,&fStack_64,&local_68,&local_a0);
          plVar6 = (long *)plVar6[1];
        } while (plVar6 != param_4 + 4);
        if (local_68 <= fStack_64) {
          fStack_64 = fStack_64 - uStack_88._4_4_;
          local_68 = local_68 - uStack_88._4_4_;
          fVar9 = fStack_64 - local_68;
          param_5[2] = (fStack_64 + local_68) * 0.5;
        }
      }
      *param_5 = fVar9;
      goto joined_r0x008bb424;
    }
  }
LAB_008bb434:
  uVar5 = FUN_008a8d40(param_4);
  if ((uVar5 & 1) != 0) {
    plVar6 = (long *)param_4[5];
    if (plVar6 != param_4 + 4) {
      bVar1 = *(byte *)(param_4 + 0xb);
      local_68 = 3.4028235e+38;
      fStack_64 = -3.4028235e+38;
      FUN_008bc150(param_4);
      uStack_98 = CONCAT44(extraout_var_04,extraout_var_02);
      local_a0 = CONCAT44(extraout_var_00,extraout_s0_00);
      uStack_88 = (ulong)uVar19 << 0x20;
      uStack_90 = CONCAT44(uVar14,uVar11);
      local_80 = CONCAT44(uVar22,uVar21);
      do {
        FUN_008bca80(plVar6 + -1,&fStack_64,&local_68,&local_a0);
        plVar6 = (long *)plVar6[1];
      } while (plVar6 != param_4 + 4);
      if (fStack_64 < local_68) {
        fVar9 = 0.0;
        *param_5 = 0.0;
      }
      else {
        fStack_64 = fStack_64 - uStack_88._4_4_;
        local_68 = local_68 - uStack_88._4_4_;
        fVar9 = fStack_64 - local_68;
        param_5[2] = (fStack_64 + local_68) * 0.5;
        *param_5 = fVar9;
      }
joined_r0x008bb424:
      if (((bVar1 & 1) != 0) && (fVar9 != 0.0)) goto LAB_008bb7a0;
      goto LAB_008bb8c8;
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
        fVar25 = (float)uStack_98;
        fVar9 = (float)local_a0;
        (**(code **)(*param_4 + 0x140))(&local_a0,param_4);
        fVar24 = 0.0;
        bVar2 = *(byte *)((long)param_4 + 0x5b) & 3;
        fVar26 = *(float *)(param_4 + 10);
        fVar23 = *(float *)((long)param_4 + 0x54);
        if (bVar2 != 1) {
          if (bVar2 == 2) {
            fVar24 = -fVar26;
          }
          else {
            fVar24 = fVar26 * -0.5;
          }
        }
        bVar2 = *(byte *)((long)param_4 + 0x5b) >> 2 & 3;
        fVar10 = 0.0;
        if ((bVar2 != 1) && (fVar10 = fVar23, bVar2 != 2)) {
          fVar10 = fVar23 * 0.5;
        }
        FUN_008bbc70(fVar26,fVar23,fVar24,fVar10,fVar25 - fVar9,local_a0._4_4_ - uStack_98._4_4_,
                     &local_a0,param_4);
        *param_5 = local_a0._4_4_ - uStack_98._4_4_;
        param_5[2] = -((local_a0._4_4_ - uStack_98._4_4_) * 0.5 -
                      (local_a0._4_4_ - *(float *)((long)param_4 + 0x34)));
        goto joined_r0x008bb8c4;
      }
      break;
    }
  }
  fVar9 = 0.0;
  fVar26 = *(float *)(param_4 + 10);
  fVar25 = *(float *)((long)param_4 + 0x54);
  bVar2 = *(byte *)((long)param_4 + 0x5b) & 3;
  if (bVar2 != 1) {
    if (bVar2 == 2) {
      fVar9 = -fVar26;
    }
    else {
      fVar9 = fVar26 * -0.5;
    }
  }
  bVar2 = *(byte *)((long)param_4 + 0x5b) >> 2 & 3;
  fVar23 = 0.0;
  if ((bVar2 != 1) && (fVar23 = fVar25, bVar2 != 2)) {
    fVar23 = fVar25 * 0.5;
  }
  fVar12 = fVar26 * 0.5;
  fVar15 = 0.0;
  fVar17 = 0.0;
  fVar20 = 0.0;
  fVar10 = fVar25 * 0.5;
  fVar24 = fVar12;
  FUN_008bc150(param_4);
  fVar13 = fVar24 * 1.0 + fVar15 * 0.0 + (float)_DAT_03caa5b0 * fVar17 + 0.0;
  fVar16 = fVar24 * 0.0 + fVar15 * 1.0 + (float)((ulong)_DAT_03caa5b0 >> 0x20) * fVar17 + 0.0;
  fVar18 = fVar24 * 0.0 + fVar15 * 0.0 + (float)_UNK_03caa5b8 * fVar17 + 0.0;
  fVar20 = fVar20 + (fVar12 + fVar9) * fVar24 + (fVar23 - fVar10) * fVar15 +
                    (float)((ulong)_UNK_03caa5b8 >> 0x20) * fVar17;
  fVar9 = fVar13 * fVar26 * -0.5;
  fVar13 = fVar13 * fVar12;
  fVar24 = fVar20 + fVar13 + fVar16 * fVar10 + fVar18 * 0.0;
  fVar26 = fVar20 + fVar9 + fVar16 * fVar10 + fVar18 * 0.0;
  fVar23 = fVar20 + fVar13 + fVar16 * fVar25 * -0.5 + fVar18 * 0.0;
  fVar20 = fVar20 + fVar9 + fVar16 * fVar25 * -0.5 + fVar18 * 0.0;
  fVar9 = fVar26;
  if (3.4028235e+38 < fVar26) {
    fVar9 = 3.4028235e+38;
  }
  if (fVar26 <= fVar24) {
    fVar26 = fVar24;
  }
  if (fVar24 <= fVar9) {
    fVar9 = fVar24;
  }
  if (fVar26 <= fVar23) {
    fVar26 = fVar23;
  }
  if (fVar23 <= fVar9) {
    fVar9 = fVar23;
  }
  if (fVar26 <= fVar20) {
    fVar26 = fVar20;
  }
  if (fVar20 <= fVar9) {
    fVar9 = fVar20;
  }
  *param_5 = fVar26 - fVar9;
  bVar2 = *(byte *)((long)param_4 + 0x5b);
  if ((bVar2 & 0xf) != 0) {
    fVar9 = *(float *)(param_4 + 10);
    fVar25 = 0.0;
    if ((bVar2 & 3) != 1) {
      if ((bVar2 & 3) == 2) {
        fVar25 = -fVar9;
      }
      else {
        fVar25 = fVar9 * -0.5;
      }
    }
    fVar23 = *(float *)((long)param_4 + 0x54);
    bVar2 = bVar2 >> 2 & 3;
    fVar26 = 0.0;
    if ((bVar2 != 1) && (fVar26 = fVar23, bVar2 != 2)) {
      fVar26 = fVar23 * 0.5;
    }
    fVar25 = fVar9 * 0.5 + fVar25;
    fVar24 = 0.0;
    fVar10 = 0.0;
    fVar9 = fVar25;
    FUN_008bc150(param_4);
    param_5[2] = param_5[2] + fVar9 * fVar25 + fVar24 * (fVar26 - fVar23 * 0.5) + fVar10 * 0.0 + 0.0
    ;
  }
joined_r0x008bb8c4:
  if ((bVar1 & 1) != 0) {
LAB_008bb7a0:
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
LAB_008bb8c8:
  param_5[1] = 0.0;
  return 0;
code_r0x008bb38c:
  puVar7 = (undefined8 *)*puVar7;
  if (puVar7 == (undefined8 *)0x0) goto LAB_008bb434;
  goto LAB_008bb384;
}


