/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f8ef74; name: FUN_01f8ef74
 */


void FUN_01f8ef74(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  short sVar6;
  long *plVar7;
  
  lVar5 = *(long *)(param_1 + 0x188);
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
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
        if (cVar3 != '\0') goto LAB_01f8efc8;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01f8efc8:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar5 + 0x10) == 0) {
          return;
        }
        plVar7 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
        FUN_01f8c02c(plVar7,1);
                    /* WARNING: Could not recover jumptable at 0x01f8f008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x60))(plVar7);
        return;
      }
      sVar6 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


