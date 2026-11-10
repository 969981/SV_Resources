/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0104b710; name: FUN_0104b710
 */


void FUN_0104b710(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  if (param_2 != (long *)0x0) {
    do {
      plVar6 = (long *)*param_2;
      lVar5 = param_2[6];
      if (lVar5 != 0) {
        lVar3 = param_2[7];
        if (lVar3 == lVar5) {
          lVar3 = lVar5;
        }
        else {
          do {
            plVar4 = (long *)(lVar3 + -0x50);
            lVar3 = lVar3 + -0x68;
            if ((long *)*plVar4 != (long *)0x0) {
              (**(code **)(*(long *)*plVar4 + 0x20))();
            }
          } while (lVar5 != lVar3);
          lVar3 = param_2[6];
        }
        lVar1 = param_2[8];
        plVar4 = (long *)param_2[9];
        param_2[7] = lVar5;
        uVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar4 + 0x18))(plVar4,lVar3,lVar1 - lVar3,8);
        }
        else {
          FUN_00c48fe8(plVar4,lVar3,lVar1 - lVar3,8);
        }
      }
      if ((long *)param_2[5] != (long *)0x0) {
        (**(code **)(*(long *)param_2[5] + 0x20))();
      }
      plVar4 = *(long **)(param_1 + 0x38);
      uVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar4 + 0x18))(plVar4,param_2,0x68,8);
      }
      else {
        FUN_00c48fe8(plVar4,param_2,0x68,8);
      }
      param_2 = plVar6;
    } while (plVar6 != (long *)0x0);
  }
  return;
}


