/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a3154; name: FUN_007a3154
 */


bool FUN_007a3154(long param_1)

{
  undefined1 auStack_30 [16];
  undefined *local_20;
  undefined1 local_17;
  ushort local_16;
  
  if (*(uint *)(param_1 + 0x10) < 4) {
    return false;
  }
  local_20 = PTR_DAT_047d0aa8 + 0x10;
  FUN_007a31cc(auStack_30,&local_20,*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x14) = local_17;
  *(uint *)(param_1 + 0x1c) = (uint)local_16;
  return *(int *)(param_1 + 0x18) + (uint)local_16 <= *(uint *)(param_1 + 0x10);
}


