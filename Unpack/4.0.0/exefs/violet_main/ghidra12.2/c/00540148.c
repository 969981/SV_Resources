/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00540148; name: FUN_00540148
 */


void FUN_00540148(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_48 [8];
  long local_40;
  long *local_38;
  
  *param_1 = (long)(PTR_DAT_047cde90 + 0x10);
  param_1[1] = *param_2;
  lVar6 = param_2[1];
  param_1[2] = lVar6;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = param_2[2];
  lVar6 = param_2[3];
  param_1[4] = lVar6;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[5] = param_2[4];
  lVar6 = param_2[5];
  param_1[6] = lVar6;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(char *)(param_1 + 7) = (char)param_2[6];
  local_40 = param_1[3];
  local_38 = (long *)param_1[4];
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
                    /* try { // try from 00540218 to 00540227 has its CatchHandler @ 00540370 */
  FUN_0058669c(param_1 + 8,&local_40,auStack_48);
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*local_38 + 0x10))(local_38);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (((*PTR_DAT_047cde98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047cde98), iVar4 != 0))
  {
                    /* try { // try from 005402bc to 005402db has its CatchHandler @ 005402f8 */
    uVar5 = FUN_0025d880(PTR_DAT_047cdea0,0x60,
                         "static const char *nn::npln::ServiceClient<nn::npln::gamesync::v1::GamesyncServiceTraits>::GetNameForExecutor() [TServiceTraits = nn::npln::gamesync::v1::GamesyncServiceTraits]"
                         ,"ServiceClient");
    *(undefined8 *)PTR_DAT_047cdea8 = uVar5;
    __cxa_guard_release(PTR_DAT_047cde98);
  }
  param_1[9] = *param_3;
  lVar6 = param_3[1];
  param_1[10] = lVar6;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


