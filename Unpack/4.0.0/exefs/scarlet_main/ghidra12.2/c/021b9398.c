/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021b9398; name: FUN_021b9398
 */


void FUN_021b9398(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)*param_1;
  if (plVar5 == (long *)0x0) {
    return;
  }
  plVar6 = (long *)param_1[1];
  plVar2 = plVar5;
  if (plVar6 != plVar5) {
    if ((long *)plVar6[-1] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[-1] + 0x20))();
    }
    if ((long *)plVar6[-2] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[-2] + 0x20))();
    }
    plVar2 = (long *)plVar6[-3];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
    if (plVar6 + -3 != plVar5) {
      if ((long *)plVar6[-4] != (long *)0x0) {
        (**(code **)(*(long *)plVar6[-4] + 0x20))();
      }
      if ((long *)plVar6[-5] != (long *)0x0) {
        (**(code **)(*(long *)plVar6[-5] + 0x20))();
      }
      plVar2 = (long *)plVar6[-6];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x20))();
      }
      if (plVar6 + -6 != plVar5) {
        do {
          if ((long *)plVar6[-7] != (long *)0x0) {
            (**(code **)(*(long *)plVar6[-7] + 0x20))();
          }
          if ((long *)plVar6[-8] != (long *)0x0) {
            (**(code **)(*(long *)plVar6[-8] + 0x20))();
          }
          if ((long *)plVar6[-9] != (long *)0x0) {
            (**(code **)(*(long *)plVar6[-9] + 0x20))();
          }
          plVar6 = plVar6 + -3;
        } while (plVar5 + 6 != plVar6);
      }
    }
    plVar2 = (long *)*param_1;
  }
  param_1[1] = plVar5;
  lVar1 = param_1[2];
  plVar5 = (long *)param_1[3];
  uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x021b9454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x18))(plVar5,plVar2,lVar1 - (long)plVar2,8);
    return;
  }
  FUN_00c48fe8(plVar5,plVar2,lVar1 - (long)plVar2,8);
  return;
}


