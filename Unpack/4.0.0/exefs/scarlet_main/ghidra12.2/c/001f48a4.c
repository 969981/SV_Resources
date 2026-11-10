/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f48a4; name: FUN_001f48a4
 */


void FUN_001f48a4(long param_1,undefined8 param_2)

{
  if (*(undefined8 **)(param_1 + 0x10) == (undefined8 *)0x0) {
    return;
  }
  FUN_001f45b0(param_2,**(undefined8 **)(param_1 + 0x10));
  return;
}


