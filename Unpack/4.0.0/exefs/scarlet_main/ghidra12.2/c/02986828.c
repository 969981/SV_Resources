/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02986828; name: FUN_02986828
 */


void FUN_02986828(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 0x28) == '\b') {
    uVar1 = FUN_01243584();
    FUN_0124dc24(uVar1,8,*(undefined4 *)(param_2 + 0x2c));
    return;
  }
  return;
}


