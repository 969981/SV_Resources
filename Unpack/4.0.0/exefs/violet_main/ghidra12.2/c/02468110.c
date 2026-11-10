/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02468110; name: FUN_02468110
 */


undefined8 FUN_02468110(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)FUN_02467c40(param_1,1);
  plVar2 = (long *)FUN_02467c40(param_1,2);
  FUN_00c419e0(param_1,*plVar1 == *plVar2);
  return 1;
}


