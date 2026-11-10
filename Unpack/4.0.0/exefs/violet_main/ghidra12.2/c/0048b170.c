/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048b170; name: FUN_0048b170
 */


undefined8 FUN_0048b170(int param_1,long *param_2)

{
  long lVar1;
  
  if (((*param_2 != 0) && (param_1 == 5)) && (lVar1 = *(long *)(*param_2 + 0x30), lVar1 != 0)) {
    FUN_0047d9e0(lVar1,&LAB_0048b0d0);
  }
  return 1;
}


