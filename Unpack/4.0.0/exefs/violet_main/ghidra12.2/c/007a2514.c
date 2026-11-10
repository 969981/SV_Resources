/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a2514; name: FUN_007a2514
 */


void FUN_007a2514(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)PTR_DAT_047d0a08;
  if (lVar1 == 0) {
    return;
  }
  FUN_007cdbbc(lVar1);
  FUN_007cd7e4(lVar1,param_2,0xffffffff);
  return;
}


