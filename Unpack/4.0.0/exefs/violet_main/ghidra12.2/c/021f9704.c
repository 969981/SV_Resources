/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f9704; name: FUN_021f9704
 */


void FUN_021f9704(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_2 != (long *)0x0) {
    do {
      plVar2 = *(long **)(param_1 + 0x38);
      plVar3 = (long *)*param_2;
      uVar1 = FUN_00c4e564(plVar2);
      if ((uVar1 & 1) == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2,0x28,8);
      }
      else {
        FUN_00c48fe8(plVar2,param_2,0x28,8);
      }
      param_2 = plVar3;
    } while (plVar3 != (long *)0x0);
  }
  return;
}


