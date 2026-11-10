/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02006570; name: FUN_02006570
 */


void FUN_02006570(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0456fa58;
  param_1[4] = &PTR_LAB_0456fb98;
  param_1[5] = &DAT_0456fcc0;
  param_1[6] = &PTR_LAB_0456fd18;
  param_1[7] = &PTR_LAB_0456fd40;
  FUN_0159a808(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)((long)param_1 + 0x124),param_1 + 0x25
              );
  FUN_00db239c(param_1 + 0x25);
  FUN_00e6bfa4(param_1);
  return;
}


