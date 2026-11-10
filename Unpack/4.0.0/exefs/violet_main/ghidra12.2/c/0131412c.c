/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0131412c; name: FUN_0131412c
 */


void FUN_0131412c(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long local_88;
  long lStack_80;
  long local_78;
  long *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long *local_48;
  
  FUN_013144c8();
  *(undefined1 *)(param_1 + 0x498) = 0;
  if (((*PTR_DAT_047d8a70 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8a70), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047ddc70,PTR_DAT_047d8a78,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8a70);
  }
  lVar7 = *(long *)PTR_DAT_047d8a78;
  *(long *)PTR_DAT_047d8a80 = lVar7;
  if (lVar7 != 0) {
    plVar8 = *(long **)(param_1 + 0x468);
    plVar1 = (long *)PTR_DAT_047d8b70;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 6;
    }
    local_88 = *plVar1;
    plVar1 = (long *)PTR_PTR_047d4508;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 7;
    }
    lStack_80 = *plVar1;
    if (plVar8 == (long *)0x0) {
      local_78 = 0;
    }
    else {
      local_78 = plVar8[8];
    }
    local_70 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    local_70 = plVar8;
    FUN_01314f00(&local_68,lVar7,&local_88);
    plVar1 = local_48;
    *(undefined8 *)(param_1 + 0x470) = local_68;
    *(undefined8 *)(param_1 + 0x478) = local_60;
    *(undefined8 *)(param_1 + 0x480) = local_58;
    *(undefined8 *)(param_1 + 0x488) = local_50;
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))(local_48);
    }
    plVar8 = *(long **)(param_1 + 0x490);
    *(long **)(param_1 + 0x490) = plVar1;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    puVar4 = PTR_DAT_047d8290;
    puVar3 = PTR_DAT_047d8288;
    puVar2 = PTR_DAT_047d8280;
    if (*(long *)(param_1 + 0x470) != 0) {
      if (*(long *)(*(long *)(param_1 + 0x470) + 0x50) == 0) {
        if (((*PTR_DAT_047d8280 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar5 != 0)) {
          FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8280);
        }
        lVar7 = *(long *)puVar3;
        *(long *)puVar4 = lVar7;
        if (*(long *)(lVar7 + 0x48) == 0) {
          return;
        }
      }
      lVar7 = FUN_00cf8198();
      if (lVar7 != -1) {
        if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar5 != 0)) {
          FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8280);
        }
        lVar6 = *(long *)puVar3;
        *(long *)puVar4 = lVar6;
        if (*(long *)(lVar6 + 0x48) == 0) {
          lVar6 = -1;
        }
        else {
          lVar6 = FUN_00cf8198();
        }
        if (lVar7 != lVar6) {
          FUN_013143f8(param_1,lVar7);
          if (*(int *)(param_1 + 0x3f4) != 1) {
            nn::os::LockMutex((MutexType *)(param_1 + 0x1c8));
            *(undefined1 *)(param_1 + 0x323) = 0;
            nn::os::UnlockMutex((MutexType *)(param_1 + 0x1c8));
          }
          *(undefined1 *)(param_1 + 0x498) = 1;
        }
      }
    }
  }
  return;
}


