/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f639b4; name: FUN_00f639b4
 */


void FUN_00f639b4(long param_1)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_0123bab8(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18),1);
  *(undefined8 *)(param_1 + 0x78) = local_38;
  *(undefined8 *)(param_1 + 0x80) = uStack_30;
  *(undefined1 *)(param_1 + 0x88) = local_28;
  FUN_00f63a08(*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18));
  return;
}


