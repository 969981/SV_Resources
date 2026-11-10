/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024ad570; name: FUN_024ad570
 */


uint * FUN_024ad570(undefined8 param_1,uint *param_2,long param_3,uint *param_4)

{
  uint *puVar1;
  uint *local_18;
  
  if (param_3 != 0) {
    puVar1 = param_4;
    do {
      local_18 = puVar1 + 2;
      param_3 = param_3 + -1;
      FUN_024ad5cc(param_2,&local_18);
      param_4 = puVar1 + 6;
      *puVar1 = *param_2 ^ (int)*param_2 >> 0x1f;
      puVar1 = param_4;
      param_2 = param_2 + 6;
    } while (param_3 != 0);
  }
  return param_4;
}


