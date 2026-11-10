/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f983c; name: FUN_007f983c
 */


void FUN_007f983c(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d15a0 + 0x10;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = (long)puVar1;
  FUN_007e9a98(param_1 + 2);
  FUN_007e9a98(param_1 + 0x324);
  FUN_007e9a98(param_1 + 0x646);
  FUN_007e9a98(param_1 + 0x968);
  FUN_007f9594(param_1 + 0xc8a);
  *(undefined8 *)((long)param_1 + 0x68d4) = 0;
  *(undefined4 *)((long)param_1 + 0x68dc) = 0;
  param_1[0xd1c] = 0;
  return;
}


