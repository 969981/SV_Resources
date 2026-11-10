/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00247ddc; name: FUN_00247ddc
 */


void FUN_00247ddc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  if (lVar6 == 0) {
    return;
  }
  lVar7 = param_1[1];
  if (lVar7 == lVar6) {
    lVar7 = lVar6;
  }
  else {
    do {
      plVar5 = *(long **)(lVar7 + -8);
      lVar7 = lVar7 + -0x10;
      if (plVar5 != (long *)0x0) {
        plVar1 = plVar5 + 1;
        do {
          lVar4 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar4 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          std::__shared_weak_count::__release_weak();
        }
      }
    } while (lVar7 != lVar6);
    lVar7 = *param_1;
  }
  param_1[1] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00247e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar7,param_1[2] - lVar7,8);
  return;
}


