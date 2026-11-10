/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013ee528; name: FUN_013ee528
 */


void FUN_013ee528(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 local_64;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x148));
  lVar7 = *(long *)(param_1 + 0x220);
  lVar9 = *(long *)(param_1 + 0x228);
  if (lVar9 != lVar7) {
    if (*(long **)(lVar9 + -0x10) != (long *)0x0) {
      (**(code **)(**(long **)(lVar9 + -0x10) + 0x20))();
    }
    if (lVar9 + -0x28 != lVar7) {
      do {
        if (*(long **)(lVar9 + -0x38) != (long *)0x0) {
          (**(code **)(**(long **)(lVar9 + -0x38) + 0x20))();
        }
        lVar9 = lVar9 + -0x28;
      } while (lVar7 + 0x28 != lVar9);
    }
  }
  *(long *)(param_1 + 0x228) = lVar7;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x148));
  nn::os::LockMutex((MutexType *)(param_1 + 0x128));
  puVar1 = PTR_DAT_047d8280;
  if (((*PTR_DAT_047d8280 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8280);
  }
  puVar3 = PTR_DAT_047d8290;
  puVar2 = PTR_DAT_047d8288;
  lVar8 = *(long *)PTR_DAT_047d8288;
  *(long *)PTR_DAT_047d8290 = lVar8;
  lVar7 = *(long *)(param_1 + 0x1e8);
  lVar9 = *(long *)(param_1 + 0x1f0);
  if (lVar7 != lVar9) {
    do {
      FUN_013ee33c(*(undefined8 *)(lVar8 + 0x220),*(undefined4 *)(lVar7 + 0x20));
      FUN_013ee4a0(0,lVar8,*(undefined4 *)(lVar7 + 0x20),4);
      if (*(code **)(lVar7 + 0x30) != (code *)0x0) {
        local_64 = *(undefined4 *)(lVar7 + 0x20);
        (**(code **)(lVar7 + 0x30))(lVar7 + 0x50,&local_64);
      }
      for (lVar10 = *(long *)(param_1 + 0x308); lVar10 != 0; lVar10 = *(long *)(lVar10 + 0x68)) {
        nn::os::LockMutex((MutexType *)(lVar10 + 0x100));
        iVar4 = *(int *)(lVar10 + 0x120) + -1;
        if (*(int *)(lVar10 + 0x120) < 1) {
          iVar4 = 0;
        }
        *(int *)(lVar10 + 0x120) = iVar4;
        nn::os::UnlockMutex((MutexType *)(lVar10 + 0x100));
      }
      lVar7 = lVar7 + 0xb0;
    } while (lVar7 != lVar9);
    lVar7 = *(long *)(param_1 + 0x1e8);
    lVar9 = *(long *)(param_1 + 0x1f0);
    if (lVar9 != lVar7) {
      pcVar6 = *(code **)(lVar9 + -0x78);
      if (pcVar6 != (code *)0x0) {
        *(undefined8 *)(lVar9 + -0x70) = 0;
        *(undefined8 *)(lVar9 + -0x68) = 0;
        *(undefined8 *)(lVar9 + -0x80) = 0;
        *(undefined8 *)(lVar9 + -0x78) = 0;
        (*pcVar6)(lVar9 + -0x60);
      }
      if (*(long **)(lVar9 + -0x98) != (long *)0x0) {
        (**(code **)(**(long **)(lVar9 + -0x98) + 0x20))();
      }
      if (lVar9 + -0xb0 != lVar7) {
        pcVar6 = *(code **)(lVar9 + -0x128);
        if (pcVar6 != (code *)0x0) {
          *(undefined8 *)(lVar9 + -0x118) = 0;
          *(undefined8 *)(lVar9 + -0x120) = 0;
          *(undefined8 *)(lVar9 + -0x128) = 0;
          *(undefined8 *)(lVar9 + -0x130) = 0;
          (*pcVar6)(lVar9 + -0x110);
        }
        if (*(long **)(lVar9 + -0x148) != (long *)0x0) {
          (**(code **)(**(long **)(lVar9 + -0x148) + 0x20))();
        }
        if (lVar9 + -0x160 != lVar7) {
          do {
            pcVar6 = *(code **)(lVar9 + -0x1d8);
            if (pcVar6 != (code *)0x0) {
              *(undefined8 *)(lVar9 + -0x1d0) = 0;
              *(undefined8 *)(lVar9 + -0x1c8) = 0;
              *(undefined8 *)(lVar9 + -0x1e0) = 0;
              *(undefined8 *)(lVar9 + -0x1d8) = 0;
              (*pcVar6)(lVar9 + -0x1c0);
            }
            if (*(long **)(lVar9 + -0x1f8) != (long *)0x0) {
              (**(code **)(**(long **)(lVar9 + -0x1f8) + 0x20))();
            }
            lVar9 = lVar9 + -0xb0;
          } while (lVar7 + 0x160 != lVar9);
        }
      }
    }
  }
  *(long *)(param_1 + 0x1f0) = lVar7;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
  if ((*(char *)(param_1 + 0x321) != '\0') && (*(char *)(param_1 + 800) != '\0')) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x1a8));
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar7 = *(long *)puVar2;
    *(long *)puVar3 = lVar7;
    plVar5 = *(long **)(*(long *)(lVar7 + 0x200) + 0x60);
    (**(code **)(*plVar5 + 0x68))(plVar5,*(undefined8 *)(param_1 + 0x318));
    *(undefined1 *)(param_1 + 800) = 0;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x1a8));
  }
  return;
}


