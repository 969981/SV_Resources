/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00534760; name: FUN_00534760
 */


void FUN_00534760(long param_1)

{
  byte local_28 [16];
  undefined8 local_18;
  
  if (param_1 != 0) {
    FUN_00532640(local_28," \'%s\'",param_1);
    if ((local_28[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_18);
    }
  }
  return;
}


