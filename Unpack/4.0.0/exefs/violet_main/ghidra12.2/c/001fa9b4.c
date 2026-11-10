/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001fa9b4; name: FUN_001fa9b4
 */


undefined8 FUN_001fa9b4(long *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return 0xffffffff;
    }
    if (*plVar1 == param_2) break;
    plVar1 = (long *)plVar1[2];
  }
  FUN_001cb600(param_1,plVar1,0);
  return 0;
}


