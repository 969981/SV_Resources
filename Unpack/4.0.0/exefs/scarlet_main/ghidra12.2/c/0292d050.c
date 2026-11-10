/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0292d050; name: FUN_0292d050
 */


undefined8 FUN_0292d050(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 - 1U < 3) {
    uVar1 = (*(code *)(&switchD_0292d070::switchdataD_045f1170)[(ulong)(param_1 - 1U) * 2])(param_2)
    ;
    return uVar1;
  }
  *param_2 = 0;
  return 0;
}


