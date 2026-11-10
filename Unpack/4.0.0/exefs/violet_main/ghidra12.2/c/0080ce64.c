/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0080ce64; name: FUN_0080ce64
 */


undefined8 FUN_0080ce64(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 local_38;
  long *local_30;
  undefined4 local_28 [2];
  
  lVar5 = FUN_00808b1c(*(undefined8 *)PTR_DAT_047d15d8);
  nn::os::LockMutex((MutexType *)(lVar5 + 0x18));
  *(undefined4 *)(param_1 + 0x94) = 1;
  uVar6 = FUN_0080d0ac(param_1);
  if ((uVar6 & 1) == 0) {
    *(undefined **)(param_1 + 0x30) = PTR_FUN_047d17b0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar7 = "AttachMeshJob::CompleteFailure";
  }
  else {
    if (*(long **)(param_1 + 0x98) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x98) + 0xb8))(&local_38);
      plVar1 = local_30;
      uVar10 = local_38;
      local_38 = 0;
      local_30 = (long *)0x0;
      plVar9 = *(long **)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0xa8) = uVar10;
      *(long **)(param_1 + 0xb0) = plVar1;
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_30 != (long *)0x0) {
        plVar1 = local_30 + 1;
        do {
          lVar8 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
          std::__shared_weak_count::__release_weak();
        }
      }
      puVar4 = PTR_FUN_047d17a8;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "AttachMeshJob::WaitGameSessionFixedData";
      *(undefined **)(param_1 + 0x30) = puVar4;
      *(undefined4 *)(param_1 + 0x94) = 2;
      uVar10 = 5;
      goto LAB_0080cfc4;
    }
    local_38 = CONCAT44(local_38._4_4_,0x10408);
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_38 | 4),(Result *)local_28);
    FUN_018ff39c(param_1 + 0xc0,&local_38);
    *(undefined **)(param_1 + 0x30) = PTR_FUN_047d17b8;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar7 = "AttachMeshJob::ProcessSendMonitoringData";
  }
  uVar10 = 0;
  *(char **)(param_1 + 0x40) = pcVar7;
LAB_0080cfc4:
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0x18));
  return uVar10;
}


