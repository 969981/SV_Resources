/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021efeb8; name: FUN_021efeb8
 */


void FUN_021efeb8(long param_1,undefined8 *param_2)

{
  short sVar1;
  
  sVar1 = FUN_00cf44ec(param_2[1]);
  if (sVar1 != 0x84) {
    param_2 = param_2 + 1;
  }
  sVar1 = FUN_00cf44ec(*param_2);
  if (sVar1 == 0x1ea) {
    *(undefined2 *)(param_1 + 0x28) = 0x1e9;
  }
  return;
}


