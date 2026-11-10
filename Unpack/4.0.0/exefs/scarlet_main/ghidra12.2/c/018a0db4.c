/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018a0db4; name: FUN_018a0db4
 */


undefined8 FUN_018a0db4(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((*(char *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x704) == '\0') ||
     (uVar2 = FUN_018a0dec(param_2), (uVar2 & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


