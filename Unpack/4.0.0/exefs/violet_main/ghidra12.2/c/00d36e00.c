/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d36e00; name: FUN_00d36e00
 */


void FUN_00d36e00(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  char *pcVar8;
  long *local_60;
  long *local_58;
  long *local_38;
  
  local_58 = (long *)0x0;
  pcVar8 = *(char **)(param_3 + 8);
  if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
    plVar7 = (long *)FUN_00d44228();
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  else {
    if (((*PTR_DAT_047d4240 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4240);
    }
    uVar6 = *(undefined8 *)PTR_DAT_047d4248;
    *(undefined8 *)PTR_DAT_047d4250 = uVar6;
    FUN_00cf9884(&local_38,uVar6,pcVar8);
    plVar7 = local_58;
    local_58 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))();
    }
    plVar7 = local_38;
  }
  local_58 = plVar7;
  puVar4 = PTR_DAT_047d20a0;
  puVar3 = PTR_DAT_047d2098;
  puVar2 = PTR_DAT_047d2090;
  puVar1 = PTR_DAT_047d2088;
  if (**(char **)(param_3 + 8) == '\0') {
    if (((*PTR_DAT_047d8c28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar5 != 0)) {
      local_38 = (long *)FUN_00d44228();
      puVar1 = PTR_DAT_047d8c30;
      FUN_00d1e764(PTR_DAT_047d8c30,&local_38);
      FUN_00100190(PTR_LAB_047d9240,puVar1,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c28);
    }
    plVar7 = *(long **)PTR_DAT_047d8c30;
    *param_1 = (long)plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))();
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  }
  else {
    if (param_2 != (long *)0x0) {
      do {
        if (((*puVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar1), iVar5 != 0)) {
          if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
            *(undefined8 *)puVar4 = 0;
            __cxa_guard_release(puVar3);
          }
          *(undefined **)puVar2 = puVar4;
          __cxa_guard_release(puVar1);
        }
        for (plVar7 = (long *)(**(code **)(*param_2 + 0x10))(param_2); plVar7 != (long *)0x0;
            plVar7 = (long *)*plVar7) {
          if (plVar7 == (long *)puVar2) {
            local_60 = param_2 + 0x16;
            FUN_00faaf70(&local_38,&local_60,&DAT_03bdfb3b,&local_58);
            plVar7 = local_58;
            local_58 = (long *)0x0;
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x20))();
            }
            local_58 = local_38;
            break;
          }
        }
        param_2 = (long *)param_2[3];
      } while (param_2 != (long *)0x0);
    }
    *param_1 = (long)local_58;
  }
  return;
}


