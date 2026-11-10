/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0025ede8; name: FUN_0025ede8
 */


void FUN_0025ede8(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  *param_2 = &PTR_FUN_0448baa8;
  uVar3 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x28);
  param_2[5] = lVar5;
  if (lVar5 != 0) {
    plVar4 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_2[10] = 0;
  if ((undefined8 *)(param_1 + 0x10) != param_2 + 2) {
    plVar4 = *(long **)(param_1 + 0x50);
    if (plVar4 == (long *)0x0) {
      param_2[10] = 0;
      return;
    }
    if (plVar4 == (long *)(param_1 + 0x30)) {
      param_2[10] = param_2 + 6;
                    /* WARNING: Could not recover jumptable at 0x0025eea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x50) + 0x28))();
      return;
    }
    uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
    param_2[10] = uVar3;
  }
  return;
}


