/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080a538; name: FUN_0080a538
 */


void FUN_0080a538(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long *local_60;
  long local_58 [3];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x18));
  puVar5 = PTR_DAT_047d15d8;
  lVar6 = thunk_FUN_00799c50(*(undefined8 *)PTR_DAT_047d15d8);
  FUN_007965fc(lVar6 + 0xb8);
  lVar6 = thunk_FUN_00799c50(*(undefined8 *)puVar5);
  FUN_007965fc(lVar6 + 0x98);
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x48))(&local_60);
    while (local_60 != local_58) {
      FUN_00809c74(param_1,local_60 + 8);
      plVar9 = (long *)local_60[1];
      if ((long *)local_60[1] == (long *)0x0) {
        plVar9 = local_60 + 2;
        if (*(long **)*plVar9 == local_60) {
          local_60 = (long *)*plVar9;
        }
        else {
          do {
            lVar6 = *plVar9;
            plVar9 = (long *)(lVar6 + 0x10);
            local_60 = (long *)*plVar9;
          } while (*local_60 != lVar6);
        }
      }
      else {
        do {
          local_60 = plVar9;
          plVar9 = (long *)*local_60;
        } while ((long *)*local_60 != (long *)0x0);
      }
    }
    FUN_00558b48(&local_60,local_58[0]);
    lVar6 = thunk_FUN_00799c50(*(undefined8 *)puVar5);
    *(undefined1 *)(lVar6 + 0x24b) = 1;
    plVar9 = *(long **)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  lVar7 = thunk_FUN_00799c50(*(undefined8 *)puVar5);
  nn::os::LockMutex((MutexType *)(lVar7 + 0x250));
  lVar8 = thunk_FUN_00799c50(*(undefined8 *)puVar5);
  nn::os::LockMutex((MutexType *)(lVar8 + 0x1378));
  lVar6 = thunk_FUN_00799c50(*(undefined8 *)puVar5);
  plVar9 = *(long **)(lVar6 + 0x270);
  lVar6 = thunk_FUN_00799c50(*(undefined8 *)puVar5);
  uVar11 = *(undefined8 *)(lVar6 + 0x1308);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  FUN_00800fd4(uVar11);
  lVar10 = *(long *)(param_1 + 0x690);
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  for (lVar6 = *(long *)(param_1 + 0x698); lVar6 != lVar10; lVar6 = lVar6 + -0x48) {
    if ((*(byte *)(lVar6 + -0x28) & 1) == 0) {
      bVar2 = *(byte *)(lVar6 + -0x48);
    }
    else {
      (**(code **)(**(long **)(lVar6 + -0x10) + 0x18))
                (*(long **)(lVar6 + -0x10),*(undefined8 *)(lVar6 + -0x18),
                 *(ulong *)(lVar6 + -0x28) & 0xfffffffffffffffe,1);
      bVar2 = *(byte *)(lVar6 + -0x48);
    }
    if ((bVar2 & 1) != 0) {
      (**(code **)(**(long **)(lVar6 + -0x30) + 0x18))
                (*(long **)(lVar6 + -0x30),*(undefined8 *)(lVar6 + -0x38),
                 *(ulong *)(lVar6 + -0x48) & 0xfffffffffffffffe,1);
    }
  }
  *(long *)(param_1 + 0x698) = lVar10;
  nn::os::UnlockMutex((MutexType *)(lVar8 + 0x1378));
  nn::os::UnlockMutex((MutexType *)(lVar7 + 0x250));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x18));
  return;
}


