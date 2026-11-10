/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ab31dc; name: FUN_01ab31dc
 */


void FUN_01ab31dc(undefined8 param_1,uint param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  short sVar7;
  
  plVar5 = (long *)FUN_01ab3298();
  if ((((*plVar5 != 0) && (*(short *)(*plVar5 + 0x1a) != 0)) && (lVar6 = *plVar5, lVar6 != 0)) &&
     (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01ab3250;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01ab3250:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar6 + 0x10) == 0) {
          return;
        }
        plVar5 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
        FUN_01101dbc(plVar5,param_2 & 1,0);
                    /* WARNING: Could not recover jumptable at 0x01ab3294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x60))(plVar5);
        return;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


