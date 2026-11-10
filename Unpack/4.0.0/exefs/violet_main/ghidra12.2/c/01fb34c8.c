/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fb34c8; name: FUN_01fb34c8
 */


void FUN_01fb34c8(long param_1,ulong param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  double dVar5;
  undefined1 auStack_b0 [128];
  
  if (((uint)param_2 & 0xffff) < 0x12a) {
    pcVar4 = (&PTR_s_timestamp_0456a308)[param_2 & 0xffff];
  }
  else {
    pcVar4 = (char *)0x0;
  }
  cVar1 = FUN_01fb1e70(param_2 & 0xffffffff);
  if (cVar1 == '\x01') {
    dVar5 = (double)FUN_01fb2594(param_1,param_2 & 0xffffffff);
    nn::prepo::PlayReport::Add((char *)(param_1 + 0x30),dVar5);
    if ((param_3 & 1) != 0) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x128));
      if (((*PTR_DAT_047d4c98 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar2 != 0)) {
        FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4c98);
      }
      lVar3 = *(long *)PTR_DAT_047d4ca0;
      *(long *)PTR_DAT_047d4ca8 = lVar3;
      if ((lVar3 != 0) && (lVar3 = FUN_01fb2084(), lVar3 != 0)) {
        pcVar4 = (&PTR_s_timestamp_0456a308)[param_2 & 0xffff];
        cVar1 = *pcVar4;
        while (cVar1 != '\0') {
          pcVar4 = pcVar4 + 1;
          cVar1 = *pcVar4;
        }
        FUN_01fb23e4(0xbff0000000000000,lVar3,auStack_b0 + 0x88);
      }
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
      return;
    }
  }
  else if (cVar1 == '\x02') {
    FUN_01fb2ebc();
    nn::prepo::PlayReport::Add((char *)(param_1 + 0x30),pcVar4);
    if ((param_3 & 1) != 0) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x128));
      if (((*PTR_DAT_047d4c98 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar2 != 0)) {
        FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4c98);
      }
      lVar3 = *(long *)PTR_DAT_047d4ca0;
      *(long *)PTR_DAT_047d4ca8 = lVar3;
      if ((lVar3 != 0) && (lVar3 = FUN_01fb2084(), lVar3 != 0)) {
        pcVar4 = (&PTR_s_timestamp_0456a308)[param_2 & 0xffff];
        cVar1 = *pcVar4;
        while (cVar1 != '\0') {
          pcVar4 = pcVar4 + 1;
          cVar1 = *pcVar4;
        }
        FUN_01fb2938(lVar3,auStack_b0 + 0x88,&DAT_03c886bc);
      }
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
      return;
    }
  }
  else {
    FUN_01fb216c();
    nn::prepo::PlayReport::Add((char *)(param_1 + 0x30),(long)pcVar4);
    if ((param_3 & 1) != 0) {
      nn::os::LockMutex((MutexType *)(param_1 + 0x128));
      if (((*PTR_DAT_047d4c98 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar2 != 0)) {
        FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d4c98);
      }
      lVar3 = *(long *)PTR_DAT_047d4ca0;
      *(long *)PTR_DAT_047d4ca8 = lVar3;
      if ((lVar3 != 0) && (lVar3 = FUN_01fb2084(), lVar3 != 0)) {
        pcVar4 = (&PTR_s_timestamp_0456a308)[param_2 & 0xffff];
        cVar1 = *pcVar4;
        while (cVar1 != '\0') {
          pcVar4 = pcVar4 + 1;
          cVar1 = *pcVar4;
        }
        FUN_01fb20f4(lVar3,auStack_b0 + 0x88,0xffffffffffffffff);
      }
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x128));
      return;
    }
  }
  return;
}


