/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012597e0; name: FUN_012597e0
 */


void FUN_012597e0(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 8);
  while (plVar2 = plVar7, plVar2 != param_2) {
    plVar7 = plVar2 + -7;
    lVar6 = *plVar7;
    if (lVar6 != 0) {
      lVar5 = plVar2[-6];
      if (lVar5 == lVar6) {
        lVar5 = lVar6;
      }
      else {
        do {
          if (*(long **)(lVar5 + -0x10) != (long *)0x0) {
            (**(code **)(**(long **)(lVar5 + -0x10) + 0x20))();
          }
          plVar1 = (long *)(lVar5 + -0x18);
          lVar5 = lVar5 + -0x18;
          if ((long *)*plVar1 != (long *)0x0) {
            (**(code **)(*(long *)*plVar1 + 0x20))();
          }
        } while (lVar6 != lVar5);
        lVar5 = *plVar7;
      }
      plVar2[-6] = lVar6;
      lVar6 = plVar2[-5];
      plVar2 = (long *)plVar2[-4];
      uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
      if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar6 - lVar5,8);
      }
      else {
        FUN_00c48fe8(plVar2,lVar5,lVar6 - lVar5,8);
      }
    }
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}


