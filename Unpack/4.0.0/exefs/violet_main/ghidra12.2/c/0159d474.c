/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0159d474; name: FUN_0159d474
 */


undefined8 FUN_0159d474(long param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  char *pcVar14;
  ulong unaff_x27;
  ulong uVar15;
  code *local_228;
  long local_210 [12];
  long *local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined1 *local_190;
  code *local_188;
  undefined1 *local_180;
  code *pcStack_178;
  undefined1 auStack_170 [96];
  undefined8 local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [96];
  long local_90;
  uint local_74;
  long *local_70 [2];
  
  local_228 = FUN_02e416e8;
  uVar4 = 0x206000;
  if (*(long *)(param_1 + 0x110) != 0) {
    uVar4 = 0x206200;
  }
  if (*(long *)(param_1 + 0x1a0) != 0) {
    uVar4 = uVar4 | 0x100;
  }
  if (*(long *)(param_1 + 0x230) != 0) {
    uVar4 = uVar4 | 0x1000;
  }
  local_210[0] = param_1;
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  lVar13 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar13;
  plVar12 = *(long **)(param_1 + 0x40);
  plVar6 = (long *)PTR_PTR_047d4508;
  if (plVar12 != (long *)0x0) {
    plVar6 = plVar12 + 7;
  }
  pcVar14 = (char *)*plVar6;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  plVar6 = *(long **)(*(long *)(lVar13 + 0x200) + 0x60);
  uVar4 = (**(code **)(*plVar6 + 0xd0))(plVar6,pcVar14,param_2,uVar4 | 1,&LAB_01080c70,lVar13,0,0,0)
  ;
  if (uVar4 == 0) goto LAB_0159d744;
  plVar6 = *(long **)(lVar13 + 0x220);
  local_74 = uVar4;
  nn::os::LockMutex((MutexType *)(plVar6 + 0xd));
  local_1b0 = (long *)0x0;
  if ((pcVar14 == (char *)0x0) || (*pcVar14 == '\0')) {
    plVar9 = (long *)FUN_00d44228();
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
    local_1b0 = plVar9;
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar7 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar7;
    FUN_00cf9884(local_70,uVar7,pcVar14);
    plVar9 = local_1b0;
    local_1b0 = (long *)0x0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))();
    }
    local_1b0 = local_70[0];
  }
  local_1a0 = 0;
  local_190 = (undefined1 *)0x0;
  local_188 = (code *)0x0;
  local_180 = (undefined1 *)0x0;
  pcStack_178 = (code *)0x0;
  local_1a8 = param_2;
  FUN_02e416f8(local_210,auStack_170);
  local_180 = &LAB_02e416ec;
  pcStack_178 = FUN_02e416f8;
  local_190 = &LAB_0188f394;
  local_188 = FUN_02e416e8;
  local_228 = (code *)0x0;
  FUN_02e416e8(local_210);
  uVar3 = local_74;
  local_100 = 0;
  uStack_f8 = 0;
  uVar15 = (ulong)local_74;
  local_110 = 0;
  local_108 = (code *)0x0;
  uVar11 = plVar6[1];
  local_90 = param_1;
  if (uVar11 == 0) {
LAB_0159d66c:
    plVar8 = plVar6 + 7;
    plVar9 = (long *)(**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,0x150,0x10);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*(long *)*plVar8 + 0xe8))();
    }
    FUN_0104f63c(plVar8,plVar9 + 2,&local_74,&local_1b0);
    *plVar9 = 0;
    plVar9[1] = uVar15;
    if ((uVar11 == 0) || (*(float *)(plVar6 + 0xc) * (float)uVar11 < (float)(plVar6[0xb] + 1))) {
      uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
      uVar10 = (ulong)((float)(plVar6[0xb] + 1) / *(float *)(plVar6 + 0xc));
      if (uVar10 <= uVar11) {
        uVar10 = uVar11;
      }
      FUN_01605878(plVar6,uVar10);
      uVar11 = plVar6[1];
      if ((uVar11 & uVar11 - 1) == 0) {
        unaff_x27 = (ulong)((int)uVar11 - 1U & uVar3);
      }
      else if (uVar15 < uVar11) {
        unaff_x27 = uVar15;
      }
      else {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = uVar15 / uVar11;
        }
        unaff_x27 = uVar15 - uVar10 * uVar11;
      }
    }
    pcVar2 = local_108;
    plVar8 = *(long **)(*plVar6 + unaff_x27 * 8);
    if (plVar8 == (long *)0x0) {
      plVar8 = plVar6 + 6;
      *plVar9 = *plVar8;
      *plVar8 = (long)plVar9;
      *(long **)(*plVar6 + unaff_x27 * 8) = plVar8;
      if (*plVar9 != 0) {
        uVar15 = *(ulong *)(*plVar9 + 8);
        if ((uVar11 & uVar11 - 1) == 0) {
          uVar15 = uVar15 & uVar11 - 1;
        }
        else if (uVar11 <= uVar15) {
          uVar10 = 0;
          if (uVar11 != 0) {
            uVar10 = uVar15 / uVar11;
          }
          uVar15 = uVar15 - uVar10 * uVar11;
        }
        plVar8 = (long *)(*plVar6 + uVar15 * 8);
        goto LAB_0159d714;
      }
    }
    else {
      *plVar9 = *plVar8;
LAB_0159d714:
      *plVar8 = (long)plVar9;
    }
    plVar6[0xb] = plVar6[0xb] + 1;
    if (local_108 != (code *)0x0) {
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = 0;
      local_108 = (code *)0x0;
      (*pcVar2)(auStack_f0);
    }
  }
  else if ((uVar11 & uVar11 - 1) == 0) {
    unaff_x27 = (ulong)((int)uVar11 - 1U & local_74);
    plVar9 = *(long **)(*plVar6 + unaff_x27 * 8);
    if (plVar9 == (long *)0x0) goto LAB_0159d66c;
    do {
      plVar9 = (long *)*plVar9;
      if ((plVar9 == (long *)0x0) || (plVar9[1] != uVar15 && (plVar9[1] & uVar11 - 1) != unaff_x27))
      goto LAB_0159d66c;
    } while (*(uint *)(plVar9 + 2) != local_74);
  }
  else {
    unaff_x27 = uVar15;
    if (uVar11 <= uVar15) {
      uVar10 = 0;
      if (uVar11 != 0) {
        uVar10 = uVar15 / uVar11;
      }
      unaff_x27 = uVar15 - uVar10 * uVar11;
    }
    plVar9 = *(long **)(*plVar6 + unaff_x27 * 8);
    if (plVar9 == (long *)0x0) goto LAB_0159d66c;
    do {
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) goto LAB_0159d66c;
      uVar10 = plVar9[1];
      if (uVar10 != uVar15) {
        if (uVar11 <= uVar10) {
          uVar1 = 0;
          if (uVar11 != 0) {
            uVar1 = uVar10 / uVar11;
          }
          uVar10 = uVar10 - uVar1 * uVar11;
        }
        if (uVar10 != unaff_x27) goto LAB_0159d66c;
      }
    } while (*(uint *)(plVar9 + 2) != local_74);
  }
  pcVar2 = local_188;
  if (local_188 != (code *)0x0) {
    local_180 = (undefined1 *)0x0;
    pcStack_178 = (code *)0x0;
    local_190 = (undefined1 *)0x0;
    local_188 = (code *)0x0;
    (*pcVar2)(auStack_170);
  }
  if (local_1b0 != (long *)0x0) {
    (**(code **)(*local_1b0 + 0x20))();
  }
  nn::os::UnlockMutex((MutexType *)(plVar6 + 0xd));
LAB_0159d744:
  *(uint *)(param_1 + 0x38) = uVar4;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12);
    uVar4 = *(uint *)(param_1 + 0x38);
  }
  if (uVar4 == 0) {
    uVar7 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 0x5b) = 0;
    *(undefined2 *)(param_1 + 0x59) = 0x100;
    if (((*PTR_DAT_047d8a70 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8a70), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047ddc70,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8a70);
    }
    lVar13 = *(long *)PTR_DAT_047d8a78;
    *(long *)PTR_DAT_047d8a80 = lVar13;
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(lVar13 + 0x488);
    uVar7 = 1;
  }
  if (local_228 != (code *)0x0) {
    (*local_228)(local_210);
  }
  return uVar7;
}


