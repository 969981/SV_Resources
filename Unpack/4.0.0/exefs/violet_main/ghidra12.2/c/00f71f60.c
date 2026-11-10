/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f71f60; name: FUN_00f71f60
 */


void FUN_00f71f60(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if (param_2 != (long *)0x0) {
    do {
      plVar6 = (long *)*param_2;
      lVar5 = param_2[6];
      if (lVar5 != 0) {
        lVar4 = param_2[7];
        if (lVar4 == lVar5) {
          lVar4 = lVar5;
        }
        else {
          do {
            lVar4 = lVar4 + -0x68;
            FUN_00f720b4(lVar4);
          } while (lVar5 != lVar4);
          lVar4 = param_2[6];
        }
        lVar1 = param_2[8];
        plVar3 = (long *)param_2[9];
        param_2[7] = lVar5;
        uVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,lVar1 - lVar4,8);
        }
        else {
          FUN_00c48fe8(plVar3,lVar4,lVar1 - lVar4,8);
        }
      }
      if ((long *)param_2[5] != (long *)0x0) {
        (**(code **)(*(long *)param_2[5] + 0x20))();
      }
      plVar3 = *(long **)(param_1 + 0x38);
      uVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2,0x80,8);
      }
      else {
        FUN_00c48fe8(plVar3,param_2,0x80,8);
      }
      param_2 = plVar6;
    } while (plVar6 != (long *)0x0);
  }
  return;
}


