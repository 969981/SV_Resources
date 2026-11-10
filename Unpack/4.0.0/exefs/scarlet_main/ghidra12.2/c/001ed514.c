/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ed514; name: FUN_001ed514
 */


void FUN_001ed514(undefined2 *param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = nnsocketInetHtons(param_2);
  *param_1 = uVar1;
  return;
}


