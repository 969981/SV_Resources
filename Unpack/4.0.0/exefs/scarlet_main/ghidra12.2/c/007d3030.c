/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d3030; name: FUN_007d3030
 */


void FUN_007d3030(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1308 + 0x88;
  *param_1 = (long)(PTR_DAT_047d1308 + 0x10);
  param_1[0xc] = (long)puVar1;
  FUN_007e561c(param_1 + 0x30);
  FUN_007e51d0(param_1 + 0x1d);
  FUN_0078cb10(param_1 + 0xd);
  FUN_007ec33c(param_1);
  operator_delete(param_1);
  return;
}


