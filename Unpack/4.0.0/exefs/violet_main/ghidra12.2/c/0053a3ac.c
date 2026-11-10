/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0053a3ac; name: FUN_0053a3ac
 */


void FUN_0053a3ac(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  
  uVar2 = *(undefined8 *)(*param_2 + 0x18);
  plVar3 = *(long **)(*param_2 + 0x20);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if ((*(byte *)(param_2 + 10) & 1) == 0) {
    lVar7 = (long)param_2 + 0x51;
  }
  else {
    lVar7 = param_2[0xc];
  }
                    /* try { // try from 0053a408 to 0053a40b has its CatchHandler @ 0053a468 */
  uVar6 = FUN_00547240(uVar2,lVar7,param_3,param_4);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_00551d98(param_1,param_2,uVar6);
  return;
}


