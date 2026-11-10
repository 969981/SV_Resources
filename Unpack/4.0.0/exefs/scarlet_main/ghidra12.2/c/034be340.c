/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034be340; name: FUN_034be340
 */


void FUN_034be340(undefined8 *param_1)

{
  undefined8 local_8;
  
  *param_1 = &PTR_FUN_047c45c0;
  local_8 = 0xffffffffffffffff;
  if (param_1[8] != 0) {
    FUN_034be534(&DAT_048b0298,param_1);
    FUN_034afae0(param_1[8],param_1,&local_8,1);
    param_1[8] = 0;
  }
  return;
}


