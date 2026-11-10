/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025ac200; name: FUN_025ac200
 */


undefined8 FUN_025ac200(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)FUN_025ac250(param_1,1);
  plVar2 = (long *)FUN_025ac250(param_1,2);
  FUN_00c419e0(param_1,*plVar1 == *plVar2);
  return 1;
}


