/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c49b48; name: FUN_00c49b48
 */


void FUN_00c49b48(long *param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  short sVar6;
  long *plVar7;
  
  lVar5 = param_1[0x6c];
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
        if (cVar3 != '\0') goto LAB_00c49bfc;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00c49bfc:
        bVar4 = false;
      }
      if (bVar4) {
        plVar7 = (long *)0x0;
        if (*(long *)(lVar5 + 0x10) != 0) {
          plVar7 = (long *)(*(long *)(lVar5 + 0x10) + -8);
        }
        break;
      }
      plVar7 = (long *)0x0;
      sVar6 = sVar2;
    } while (sVar2 != 0);
  }
  if ((plVar7 != (long *)0x0) || (*(char *)((long)param_1 + 0x374) == '\0')) {
    FUN_00c49c28(param_1 + 0x3e,param_2);
    (**(code **)(*param_1 + 0x98))(param_1,param_2);
    if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c49bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x18))(plVar7);
      return;
    }
  }
  return;
}


