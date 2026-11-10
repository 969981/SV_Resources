/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024ad058; name: FUN_024ad058
 */


void FUN_024ad058(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  long *local_30;
  undefined8 local_28;
  
  local_28 = *param_4;
  FUN_024ad1d0(&local_30,param_2,param_3,&local_28);
  plVar2 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = local_30;
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      piVar6 = (int *)((long)plVar2 + 0xc);
      local_30 = plVar2;
      (**(code **)(*plVar2 + 0x10))(plVar2);
      do {
        iVar5 = *piVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar4) {
          *piVar6 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
  }
  return;
}


