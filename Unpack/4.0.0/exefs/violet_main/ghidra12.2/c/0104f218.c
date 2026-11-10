/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0104f218; name: FUN_0104f218
 */


void FUN_0104f218(long *param_1,long param_2,uint param_3,undefined8 param_4,undefined4 param_5,
                 undefined8 *param_6,undefined8 param_7)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x27;
  long *local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_180;
  code *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [96];
  undefined8 local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [96];
  undefined8 local_80;
  uint local_6c;
  long *local_68;
  
  local_6c = param_3;
  nn::os::LockMutex((MutexType *)(param_1 + 0xd));
  local_1a0 = (long *)0x0;
  pcVar5 = *(char **)(param_2 + 8);
  if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
    plVar8 = (long *)FUN_00d44228();
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    local_1a0 = plVar8;
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar4 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar4;
    FUN_00cf9884(&local_68,uVar4,pcVar5);
    plVar8 = local_1a0;
    local_1a0 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    local_1a0 = local_68;
  }
  local_180 = 0;
  local_178 = (code *)0x0;
  local_170 = 0;
  uStack_168 = 0;
  local_100 = 0;
  local_f8 = (code *)0x0;
  local_f0 = 0;
  local_e8 = 0;
  local_198 = param_4;
  local_190 = param_5;
  if ((code *)param_6[3] != (code *)0x0) {
    (*(code *)param_6[3])(param_6 + 4,auStack_e0);
    local_f0 = param_6[2];
    local_e8 = param_6[3];
    local_100 = *param_6;
    local_f8 = (code *)param_6[1];
    pcVar6 = (code *)param_6[1];
    if (pcVar6 != (code *)0x0) {
      param_6[2] = 0;
      param_6[3] = 0;
      *param_6 = 0;
      param_6[1] = 0;
      (*pcVar6)(param_6 + 4);
    }
  }
  uVar2 = local_6c;
  uVar11 = (ulong)local_6c;
  uVar10 = param_1[1];
  local_80 = param_7;
  if (uVar10 != 0) {
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x27 = (ulong)((int)uVar10 - 1U & local_6c);
      plVar8 = *(long **)(*param_1 + unaff_x27 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          plVar8 = (long *)*plVar8;
          if ((plVar8 == (long *)0x0) ||
             (plVar8[1] != uVar11 && (plVar8[1] & uVar10 - 1) != unaff_x27)) goto LAB_0104f33c;
        } while (*(uint *)(plVar8 + 2) != local_6c);
        goto LAB_0104f3f4;
      }
    }
    else {
      unaff_x27 = uVar11;
      if (uVar10 <= uVar11) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar11 / uVar10;
        }
        unaff_x27 = uVar11 - uVar9 * uVar10;
      }
      plVar8 = *(long **)(*param_1 + unaff_x27 * 8);
      if (plVar8 != (long *)0x0) {
        do {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_0104f33c;
          uVar9 = plVar8[1];
          if (uVar9 != uVar11) {
            if (uVar10 <= uVar9) {
              uVar1 = 0;
              if (uVar10 != 0) {
                uVar1 = uVar9 / uVar10;
              }
              uVar9 = uVar9 - uVar1 * uVar10;
            }
            if (uVar9 != unaff_x27) goto LAB_0104f33c;
          }
        } while (*(uint *)(plVar8 + 2) != local_6c);
        goto LAB_0104f3f4;
      }
    }
  }
LAB_0104f33c:
  plVar7 = param_1 + 7;
  plVar8 = (long *)(**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,0x150,0x10);
  if (plVar8 == (long *)0x0) {
    (**(code **)(*(long *)*plVar7 + 0xe8))();
  }
  FUN_0104f63c(plVar7,plVar8 + 2,&local_6c,&local_1a0);
  *plVar8 = 0;
  plVar8[1] = uVar11;
  if ((uVar10 == 0) || (*(float *)(param_1 + 0xc) * (float)uVar10 < (float)(param_1[0xb] + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar9 = (ulong)((float)(param_1[0xb] + 1) / *(float *)(param_1 + 0xc));
    if (uVar9 <= uVar10) {
      uVar9 = uVar10;
    }
    FUN_01605878(param_1,uVar9);
    uVar10 = param_1[1];
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x27 = (ulong)((int)uVar10 - 1U & uVar2);
    }
    else if (uVar11 < uVar10) {
      unaff_x27 = uVar11;
    }
    else {
      uVar9 = 0;
      if (uVar10 != 0) {
        uVar9 = uVar11 / uVar10;
      }
      unaff_x27 = uVar11 - uVar9 * uVar10;
    }
  }
  plVar7 = *(long **)(*param_1 + unaff_x27 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 6;
    *plVar8 = *plVar7;
    *plVar7 = (long)plVar8;
    *(long **)(*param_1 + unaff_x27 * 8) = plVar7;
    if (*plVar8 != 0) {
      uVar11 = *(ulong *)(*plVar8 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else if (uVar10 <= uVar11) {
        uVar9 = 0;
        if (uVar10 != 0) {
          uVar9 = uVar11 / uVar10;
        }
        uVar11 = uVar11 - uVar9 * uVar10;
      }
      plVar7 = (long *)(*param_1 + uVar11 * 8);
      goto LAB_0104f3e4;
    }
  }
  else {
    *plVar8 = *plVar7;
LAB_0104f3e4:
    *plVar7 = (long)plVar8;
  }
  param_1[0xb] = param_1[0xb] + 1;
LAB_0104f3f4:
  pcVar6 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = 0;
    local_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar6)(auStack_e0);
  }
  pcVar6 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    local_178 = (code *)0x0;
    (*pcVar6)(auStack_160);
  }
  if (local_1a0 != (long *)0x0) {
    (**(code **)(*local_1a0 + 0x20))();
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xd));
  return;
}


