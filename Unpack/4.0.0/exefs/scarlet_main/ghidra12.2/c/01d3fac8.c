/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d3fac8; name: FUN_01d3fac8
 */


void FUN_01d3fac8(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  undefined8 local_18;
  
  if ((*param_3 == '\0') || (*param_3 == '\x01')) {
    local_18 = *(undefined8 *)(param_3 + 8);
  }
  else {
    local_18 = 0;
  }
  FUN_01d4669c(param_2,*param_1,param_1[1],&local_18);
  return;
}


