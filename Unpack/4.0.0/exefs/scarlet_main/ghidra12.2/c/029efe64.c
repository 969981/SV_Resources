/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029efe64; name: thunk_FUN_029efe68
 */


void thunk_FUN_029efe68(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_1 + 0x30);
  FUN_029efe90(param_1 + 1);
  FUN_029efec4(uVar1);
  return;
}


