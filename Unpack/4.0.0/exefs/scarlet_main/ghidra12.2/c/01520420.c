/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01520420; name: FUN_01520420
 */


void FUN_01520420(long param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x11e) == '\0') {
    uVar1 = 0xffffff82;
    if (*(char *)(param_1 + 0x11f) != '\0') {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  FUN_00c6a514(param_1 + 0x38,uVar1);
  return;
}


