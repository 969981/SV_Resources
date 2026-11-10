/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031e1bb4; name: FUN_031e1bb4
 */


void FUN_031e1bb4(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  do {
    FUN_031dbdbc(param_1,param_2,param_3);
    if (*param_1 != 0) {
      return;
    }
    if ((param_1[2] & 1U) != 0) {
      plVar5 = (long *)(param_1[2] & 0xfffffffffffffffe);
      plVar1 = plVar5 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
        (**(code **)(*plVar5 + 8))();
      }
    }
    param_2 = *(long *)(param_2 + 8);
  } while (param_2 != 0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


