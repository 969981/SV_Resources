/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024ae740; name: FUN_024ae740
 */


void FUN_024ae740(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  undefined4 local_50;
  undefined1 local_4c;
  undefined7 uStack_4b;
  long local_40;
  long *local_38;
  
  FUN_024ae854(&local_40);
  local_4c = 0;
  local_50 = 2;
  FUN_024ae8e0(*(undefined8 *)*param_2,&local_50,&local_40);
  *(undefined4 *)(local_40 + 0x40) = 2;
  *(ulong *)(local_40 + 0x44) = CONCAT71(uStack_4b,local_4c);
  if (local_38 == (long *)0x0) {
    *param_1 = local_40;
    param_1[1] = 0;
  }
  else {
    piVar5 = (int *)((long)local_38 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar4) {
        *piVar5 = *piVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *param_1 = local_40;
    param_1[1] = (long)local_38;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar4) {
        *piVar5 = *piVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      iVar2 = *piVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar4) {
        *piVar5 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(*local_38 + 0x18))();
    }
  }
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 1;
    do {
      iVar2 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar2;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == 0) {
      piVar5 = (int *)((long)local_38 + 0xc);
      (**(code **)(*local_38 + 0x10))(local_38);
      do {
        iVar2 = *piVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar4) {
          *piVar5 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        (**(code **)(*local_38 + 0x18))(local_38);
      }
    }
  }
  return;
}


