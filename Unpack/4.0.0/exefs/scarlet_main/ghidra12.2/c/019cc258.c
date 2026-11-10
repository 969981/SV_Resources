/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019cc258; name: FUN_019cc258
 */


undefined8 FUN_019cc258(long param_1,byte param_2)

{
  MutexType *pMVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong local_80;
  long *local_78;
  undefined1 local_68;
  
  if ((*(char *)(param_1 + 0xfa) == '\0') || (*(int *)(param_1 + 0x74) != 2)) {
    uVar6 = 0;
  }
  else {
    *(byte *)(param_1 + 0xf9) = param_2 & 1;
    if (((*PTR_DAT_047d8c00 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
    lVar7 = *(long *)PTR_DAT_047d8c08;
    *(long *)PTR_DAT_047d8c10 = lVar7;
    pMVar1 = (MutexType *)(*(long *)(lVar7 + 0x70) + 0x120);
    nn::os::LockMutex(pMVar1);
    lVar7 = (**(code **)(**(long **)(param_1 + 0xd0) + 0xa0))();
    FUN_019cc3d4(&local_80,*(long *)(lVar7 + 0x48) + (ulong)*(ushort *)(param_1 + 0xe0) * 0x50);
    local_68 = 2;
    if ((param_2 & 1) == 0) {
      local_68 = 0;
    }
    FUN_019cc4d8(*(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x8a8),*(undefined2 *)(param_1 + 0xe0),
                 &local_80);
    if ((local_78 != (long *)0x0) && (local_78[1] != 0)) {
      plVar2 = local_78 + 2;
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
        (**(code **)(*local_78 + 0x18))();
      }
    }
    if ((local_80 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_80 - 1,0);
    }
    nn::os::UnlockMutex(pMVar1);
    uVar6 = 1;
  }
  return uVar6;
}


