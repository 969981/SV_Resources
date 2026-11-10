/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b15b8; name: FUN_034b15b8
 */


void FUN_034b15b8(long *param_1)

{
  undefined8 local_8;
  
  *param_1 = (long)(PTR_DAT_047e7168 + 0x10);
  local_8 = 0xffffffffffffffff;
  if (param_1[8] != 0) {
    FUN_034be534(&DAT_048b0298,param_1);
    FUN_034afae0(param_1[8],param_1,&local_8,1);
    param_1[8] = 0;
  }
  return;
}


