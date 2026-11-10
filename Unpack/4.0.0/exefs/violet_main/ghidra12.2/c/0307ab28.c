/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0307ab28; name: FUN_0307ab28
 */


void FUN_0307ab28(long param_1,int *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  int local_48 [2];
  int local_28 [2];
  
  plVar2 = (long *)(*(long *)(param_1 + 0x38) + (long)*param_2 * 0x100);
  lVar7 = plVar2[3];
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar5 = FUN_0307f764();
  }
  FUN_0086fc44(uVar5,(int)lVar7);
  *(undefined4 *)(plVar2 + 3) = 0xffffffff;
  local_28[0] = *param_2;
  FUN_0307ac14(param_1,local_28);
  plVar6 = (long *)*plVar2;
  *plVar2 = 0;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  *(byte *)(plVar2 + 0x1e) = *(byte *)(plVar2 + 0x1e) | 1;
  local_48[0] = *param_2;
  FUN_03079ee0(param_1,local_48,0xffffffff);
  return;
}


