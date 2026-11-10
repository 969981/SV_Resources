/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034cb90; name: FUN_0034cb90
 */


undefined8 FUN_0034cb90(int param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0x48;
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    lVar1 = 0x49;
  }
  return *(undefined8 *)(*(long *)PTR_DAT_047ccae0 + lVar1 * 8);
}


