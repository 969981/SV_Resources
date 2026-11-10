/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a65bc; name: FUN_024a65bc
 */


void FUN_024a65bc(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined1 auStack_30 [8];
  long *local_28;
  
  iVar4 = *(int *)((long)param_1 + 0x1c) + -1;
  *(int *)((long)param_1 + 0x1c) = iVar4;
  if (iVar4 == 0) {
    (**(code **)(*param_1 + 0x28))(auStack_30);
    FUN_024a6d0c(param_2,auStack_30);
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 1;
      do {
        iVar4 = (int)*plVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        piVar5 = (int *)((long)local_28 + 0xc);
        (**(code **)(*local_28 + 0x10))(local_28);
        do {
          iVar4 = *piVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
          if (bVar3) {
            *piVar5 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          (**(code **)(*local_28 + 0x18))(local_28);
        }
      }
    }
  }
  return;
}


