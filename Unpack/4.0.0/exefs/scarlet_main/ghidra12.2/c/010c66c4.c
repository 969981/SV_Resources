/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010c66c4; name: FUN_010c66c4
 */


void FUN_010c66c4(long param_1,undefined8 param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00e47950();
  if (((uVar1 & 0xff) == 0) && (uVar1 = FUN_00e4b15c(param_1), (uVar1 & 0xff) == 0)) {
    return;
  }
  FUN_00e489d4(*param_3,param_1 + (uVar1 >> 0x20) * 0x78 + 0x38,param_2);
  return;
}


