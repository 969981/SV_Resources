/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021e89b8; name: FUN_021e89b8
 */


void FUN_021e89b8(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_2 != (long *)0x0) {
    do {
      lVar2 = param_2[6];
      param_2[6] = 0;
      plVar4 = (long *)*param_2;
      if (lVar2 != 0) {
        FUN_015f28f4(param_2 + 7);
      }
      if ((long *)param_2[5] != (long *)0x0) {
        (**(code **)(*(long *)param_2[5] + 0x20))();
      }
      plVar3 = *(long **)(param_1 + 0x38);
      uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2,0x50,8);
      }
      else {
        FUN_00c48fe8(plVar3,param_2,0x50,8);
      }
      param_2 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
  return;
}


