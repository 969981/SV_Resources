/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b1d10; name: FUN_003b1d10
 */


int * FUN_003b1d10(long param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(long *)(param_1 + 8) + 0x90))(param_2);
  if (((piVar1 == (int *)0x0) || (param_3 != 0)) || (*piVar1 != 0)) {
    return piVar1;
  }
  return (int *)0x0;
}


