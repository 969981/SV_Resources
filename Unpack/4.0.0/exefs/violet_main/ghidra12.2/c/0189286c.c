/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0189286c; name: FUN_0189286c
 */


void FUN_0189286c(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_2 != (long *)0x0) {
    do {
      plVar4 = (long *)*param_2;
      if ((long *)param_2[3] != (long *)0x0) {
        (**(code **)(*(long *)param_2[3] + 0x60))();
      }
      plVar3 = *(long **)(param_1 + 0x38);
      uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
      if ((uVar1 & 1) == 0) {
LAB_018928c0:
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2,0x28,8);
      }
      else {
        lVar2 = FUN_00c4e600();
        if (*(int *)(lVar2 + 0x12c8) < 1) goto LAB_018928c0;
        FUN_00c48fe8(plVar3,param_2,0x28,8);
      }
      param_2 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
  return;
}


