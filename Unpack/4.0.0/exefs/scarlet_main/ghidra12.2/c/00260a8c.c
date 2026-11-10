/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00260a8c; name: FUN_00260a8c
 */


void FUN_00260a8c(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  
  *param_2 = &PTR_LAB_0448bc20;
  uVar4 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar4;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x28);
  param_2[5] = lVar5;
  if (lVar5 != 0) {
    plVar3 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_2[10] = 0;
  if ((undefined8 *)(param_1 + 0x10) != param_2 + 2) {
    plVar3 = *(long **)(param_1 + 0x50);
    if (plVar3 == (long *)0x0) {
      param_2[10] = 0;
      param_2[0x10] = 0;
      plVar3 = *(long **)(param_1 + 0x80);
    }
    else if (plVar3 == (long *)(param_1 + 0x30)) {
      param_2[10] = param_2 + 6;
      (**(code **)(**(long **)(param_1 + 0x50) + 0x28))();
      param_2[0x10] = 0;
      plVar3 = *(long **)(param_1 + 0x80);
    }
    else {
      uVar4 = (**(code **)(*plVar3 + 0x38))();
      param_2[10] = uVar4;
      param_2[0x10] = 0;
      plVar3 = *(long **)(param_1 + 0x80);
    }
    if (plVar3 != (long *)0x0) {
      if (plVar3 == (long *)(param_1 + 0x60)) {
        param_2[0x10] = param_2 + 0xc;
                    /* WARNING: Could not recover jumptable at 0x00260bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x80) + 0x28))();
        return;
      }
      uVar4 = (**(code **)(*plVar3 + 0x38))();
      param_2[0x10] = uVar4;
      return;
    }
  }
  param_2[0x10] = 0;
  return;
}


