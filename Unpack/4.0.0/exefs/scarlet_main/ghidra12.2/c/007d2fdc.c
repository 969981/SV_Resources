/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d2fdc; name: FUN_007d2fdc
 */


void FUN_007d2fdc(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1308 + 0x88;
  param_1[-0xc] = (long)(PTR_DAT_047d1308 + 0x10);
  *param_1 = (long)puVar1;
  FUN_007e561c(param_1 + 0x24);
  FUN_007e51d0(param_1 + 0x11);
  FUN_0078cb10(param_1 + 1);
  FUN_007ec33c(param_1 + -0xc);
  return;
}


