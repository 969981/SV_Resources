/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028ec994; name: FUN_028ec994
 */


void FUN_028ec994(long param_1,long *param_2,undefined8 param_3,long *param_4,undefined8 param_5)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  short sVar6;
  long *plVar7;
  
  if (*(char *)(*(long *)(param_1 + 0x398) + 0x22d) == '\0') {
    lVar5 = (**(code **)(*param_4 + 0x30))(param_4);
    if ((param_2 != (long *)0x0) && (lVar5 == param_1)) {
      FUN_00ee6f00(*(undefined8 *)(param_1 + 0x398),param_2,param_3,param_4,param_5);
      return;
    }
  }
  else {
    lVar5 = *(long *)(*(long *)(param_1 + 0x398) + 0x198);
    if ((lVar5 == 0) || (*(short *)(lVar5 + 0x1a) == 0)) {
      plVar7 = (long *)0x0;
    }
    else {
      psVar1 = (short *)(lVar5 + 0x1a);
      sVar6 = *(short *)(lVar5 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar6) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_028eca94;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_028eca94:
          bVar4 = false;
        }
        if (bVar4) {
          plVar7 = (long *)0x0;
          if (*(long *)(lVar5 + 0x10) != 0) {
            plVar7 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
          }
          break;
        }
        plVar7 = (long *)0x0;
        sVar6 = sVar2;
      } while (sVar2 != 0);
    }
    (**(code **)(*param_2 + 0x30))(param_2);
    if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x028eca5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x60))(plVar7);
      return;
    }
  }
  return;
}


