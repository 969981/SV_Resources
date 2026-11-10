/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123ba5c; name: FUN_0123ba5c
 */


void FUN_0123ba5c(long param_1)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_0123bac0(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18),param_1 + 0x78);
  FUN_0123bab8(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18),0x15);
  *(undefined1 *)(param_1 + 0x2c0) = local_28;
  *(undefined8 *)(param_1 + 0x2b8) = uStack_30;
  *(undefined8 *)(param_1 + 0x2b0) = local_38;
  return;
}


