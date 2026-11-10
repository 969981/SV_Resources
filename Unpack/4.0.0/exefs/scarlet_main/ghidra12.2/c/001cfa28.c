/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cfa28; name: FUN_001cfa28
 */


undefined8 FUN_001cfa28(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x1e0) == '\0') {
    uVar1 = FUN_001ce818();
    if ((int)uVar1 == 0) {
      FUN_001e7c7c(param_2,0);
      if (*(int *)(param_2 + 0x60) != 0xe) {
        *(undefined4 *)(param_2 + 0x60) = 0xe;
      }
      uVar1 = 0;
      *(undefined8 *)(param_2 + 0x10) = param_3;
      *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) | 1;
    }
  }
  else {
    uVar1 = 8;
  }
  return uVar1;
}


