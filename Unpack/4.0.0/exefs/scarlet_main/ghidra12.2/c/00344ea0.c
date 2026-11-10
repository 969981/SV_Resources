/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00344ea0; name: FUN_00344ea0
 */


void FUN_00344ea0(long param_1,undefined4 param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    param_3 = (undefined8 *)*param_3;
    if ((param_3 != (undefined8 *)0x0) && (plVar6 = (long *)*param_3, plVar6 != (long *)0x0)) {
      do {
        lVar3 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00344f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_3[3])(param_3[4]);
        return;
      }
    }
  }
  else {
    lVar3 = FUN_0049e770(PTR_FUN_047cba38,0x50);
    if (lVar3 != 0) {
      FUN_00344d2c(lVar3,param_2,param_3);
    }
    plVar7 = (long *)(param_1 + 0x38);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    plVar6 = (long *)(param_1 + 0x40);
    if (*plVar7 == 0) {
      lVar4 = lVar3;
    }
    else {
      lVar4 = *plVar7;
      plVar7 = plVar6;
      plVar6 = (long *)(*plVar6 + 0x38);
    }
    *plVar6 = lVar3;
    *plVar7 = lVar3;
    uVar5 = *(long *)(param_1 + 0x28) + *(long *)(lVar3 + 0x48);
    *(ulong *)(param_1 + 0x28) = uVar5;
    if (*(ulong *)(param_1 + 0x30) < uVar5) {
      while( true ) {
        *(ulong *)(param_1 + 0x28) = uVar5 - *(long *)(lVar4 + 0x48);
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar4 + 0x38);
        FUN_00345e64();
        uVar5 = *(ulong *)(param_1 + 0x28);
        if (uVar5 <= *(ulong *)(param_1 + 0x30)) break;
        lVar4 = *(long *)(param_1 + 0x38);
      }
    }
  }
  return;
}


