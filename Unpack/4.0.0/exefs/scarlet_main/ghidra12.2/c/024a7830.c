/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a7830; name: FUN_024a7830
 */


uint * FUN_024a7830(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *local_18;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      local_18 = puVar1 + 2;
      FUN_024a7704(param_1,&local_18);
      puVar2 = param_1 + 6;
      param_3 = puVar1 + 6;
      *puVar1 = *param_1 ^ (int)*param_1 >> 0x1f;
      puVar1 = param_3;
      param_1 = puVar2;
    } while (param_2 != puVar2);
  }
  return param_3;
}


