/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a5008; name: FUN_007a5008
 */


undefined8 FUN_007a5008(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_20 [16];
  
  (**(code **)(**(long **)(param_1 + 0x90) + 0x160))();
  puVar1 = PTR_LAB_047d0b38;
  if (*(char *)(*(long *)(param_1 + 0x90) + 0x24b) != '\0') {
    *(undefined1 *)(*(long *)(param_1 + 0x90) + 0x24b) = 0;
    *(char **)(param_1 + 0x40) = "NetEventJob::WaitConnectionStatusUpdated";
    *(undefined **)(param_1 + 0x30) = puVar1;
    *(undefined8 *)(param_1 + 0x38) = 0;
    FUN_007a521c(auStack_20,*(undefined8 *)(param_1 + 0x88),param_1 + 0x58);
    FUN_0078cd58(*(undefined8 *)(param_1 + 0x88),1);
  }
  return 5;
}


