/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027e9c04; name: FUN_027e9c04
 */


void FUN_027e9c04(undefined8 *param_1)

{
  undefined1 auStack_8 [8];
  
  FUN_027e9b74(auStack_8);
  (*(code *)*param_1)(param_1 + 4,auStack_8);
  FUN_027e9c40(auStack_8);
  return;
}


