/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022010e4; name: FUN_022010e4
 */


undefined8
FUN_022010e4(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            long param_5)

{
  MutexType *pMVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong local_90;
  long *local_88;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_72;
  
  if ((*(char *)(param_5 + 0xf8) == '\0') || (*(int *)(param_5 + 0x74) != 2)) {
    uVar6 = 0;
  }
  else {
    *(int *)(param_5 + 0xe8) = (int)param_1;
    *(undefined4 *)(param_5 + 0xec) = param_2;
    *(undefined4 *)(param_5 + 0xf0) = param_3;
    *(undefined4 *)(param_5 + 0xf4) = param_4;
    if (((*PTR_DAT_047d8c00 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
    lVar7 = *(long *)PTR_DAT_047d8c08;
    *(long *)PTR_DAT_047d8c10 = lVar7;
    pMVar1 = (MutexType *)(*(long *)(lVar7 + 0x70) + 0x120);
    nn::os::LockMutex(pMVar1);
    (**(code **)(**(long **)(param_5 + 0xd0) + 0x208))
              (param_1,*(long **)(param_5 + 0xd0),*(undefined8 *)(param_5 + 0xd8),0);
    lVar7 = (**(code **)(**(long **)(param_5 + 0xd0) + 0xa0))();
    FUN_019cc3d4(&local_90,*(long *)(lVar7 + 0x48) + (ulong)*(ushort *)(param_5 + 0xe0) * 0x50);
    local_74 = (undefined2)((uint)param_3 >> 0x10);
    local_76 = (undefined2)((uint)param_2 >> 0x10);
    local_72 = (undefined2)((uint)param_4 >> 0x10);
    FUN_019cc4d8(*(undefined8 *)(*(long *)(param_5 + 0xd0) + 0x8a8),*(undefined2 *)(param_5 + 0xe0),
                 &local_90);
    if ((local_88 != (long *)0x0) && (local_88[1] != 0)) {
      plVar2 = local_88 + 2;
      do {
        lVar7 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*local_88 + 0x18))();
      }
    }
    if ((local_90 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_90 - 1,0);
    }
    nn::os::UnlockMutex(pMVar1);
    uVar6 = 1;
  }
  return uVar6;
}


