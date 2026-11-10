/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e2a57c; name: FUN_01e2a57c
 */


undefined4 FUN_01e2a57c(long param_1)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [64];
  undefined1 auStack_78 [64];
  char local_38;
  
  FUN_00fb9f24(auStack_b8,param_1 + 0x928);
  FUN_00fb9f24(auStack_78,param_1 + 0x968);
  local_38 = *(char *)(param_1 + 0x9a8);
  if (local_38 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x14ec);
  }
  FUN_00db239c(auStack_78);
  FUN_00db239c(auStack_b8);
  return uVar1;
}


