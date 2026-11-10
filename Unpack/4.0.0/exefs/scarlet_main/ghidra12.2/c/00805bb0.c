/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00805bb0; name: FUN_00805bb0
 */


void FUN_00805bb0(long *param_1)

{
  undefined *puVar1;
  
  FUN_007a5da0();
  puVar1 = PTR_DAT_047d16f8;
  param_1[0x1a] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_02899764(param_1 + 0x1b);
  param_1[0x1b] = (long)(PTR_DAT_047d1700 + 0x10);
  FUN_008015b4(param_1 + 0x1f);
  param_1[0x9c] = 0;
  param_1[0x1c] = (long)(param_1 + 0x1f);
  FUN_00805f80(param_1 + 0x9d);
  return;
}


