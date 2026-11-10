/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f58a0; name: FUN_001f58a0
 */


undefined8 FUN_001f58a0(long param_1,ulong param_2)

{
  ulong uVar1;
  
  if (*(ulong *)(param_1 + 0x440) <= param_2) {
    param_2 = *(ulong *)(param_1 + 0x440);
  }
  *(ulong *)(param_1 + 0x30) = param_2;
  uVar1 = *(ulong *)(param_1 + 0x448);
  if (param_2 <= *(ulong *)(param_1 + 0x448)) {
    uVar1 = param_2;
  }
  *(ulong *)(param_1 + 0x448) = uVar1;
  *(undefined1 *)(param_1 + 0x450) = 1;
  FUN_001f58e4(param_1,param_1 + 0x40);
  return 0;
}


