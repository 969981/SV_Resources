/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01171dd4; name: FUN_01171dd4
 */


void FUN_01171dd4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = (long *)*param_1;
  *(long *)(*plVar7 + 8) = plVar7[1];
  *(long *)plVar7[1] = *plVar7;
  param_1[2] = param_1[2] + -1;
  plVar4 = (long *)plVar7[8];
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
    }
  }
  plVar4 = (long *)param_1[3];
  uVar5 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if ((uVar5 & 1) != 0) {
    lVar6 = FUN_00c4e600();
    if (0 < *(int *)(lVar6 + 0x12c8)) {
      FUN_00c48fe8(plVar4,plVar7,0x50,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01171e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))(plVar4,plVar7,0x50,0x10);
  return;
}


