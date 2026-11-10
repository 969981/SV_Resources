/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0226d508; name: FUN_0226d508
 */


void FUN_0226d508(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if (param_2 != (long *)0x0) {
    do {
      plVar6 = (long *)*param_2;
      lVar4 = param_2[6];
      if (lVar4 != 0) {
        lVar1 = param_2[8];
        plVar5 = (long *)param_2[9];
        param_2[7] = lVar4;
        uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
        if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar1 - lVar4,4);
        }
        else {
          FUN_00c48fe8(plVar5,lVar4,lVar1 - lVar4,4);
        }
      }
      if ((long *)param_2[5] != (long *)0x0) {
        (**(code **)(*(long *)param_2[5] + 0x20))();
      }
      plVar5 = *(long **)(param_1 + 0x38);
      uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,param_2,0x68,8);
      }
      else {
        FUN_00c48fe8(plVar5,param_2,0x68,8);
      }
      param_2 = plVar6;
    } while (plVar6 != (long *)0x0);
  }
  return;
}


