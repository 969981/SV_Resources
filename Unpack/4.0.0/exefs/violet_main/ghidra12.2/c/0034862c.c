/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034862c; name: FUN_0034862c
 */


void FUN_0034862c(long param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_2;
  FUN_0038db40(param_1 + 0xe0);
                    /* try { // try from 0034864c to 00348653 has its CatchHandler @ 0034866c */
  FUN_0034ab84(param_1 + 0x100,&local_18);
                    /* try { // try from 00348654 to 0034865b has its CatchHandler @ 00348668 */
  FUN_0038db60(param_1 + 0xe0);
  return;
}


