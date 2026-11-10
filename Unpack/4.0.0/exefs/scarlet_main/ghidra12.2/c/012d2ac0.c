/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012d2ac0; name: FUN_012d2ac0
 */


void FUN_012d2ac0(MultiWaitType *param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_012d2e40(param_1 + 0x48);
  FUN_012d2efc(param_1 + 0x30);
  nn::os::InitializeMultiWait(param_1);
  return;
}


