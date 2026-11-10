/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ecd684; name: FUN_01ecd684
 */


undefined8 FUN_01ecd684(long param_1)

{
  ulong uVar1;
  undefined8 local_8;
  
  if (*(int *)(param_1 + 0x48) != 2) {
    if ((*(int *)(param_1 + 0x48) != 1) ||
       (uVar1 = (**(code **)(**(long **)(param_1 + 0x50) + 0x70))(), (uVar1 & 1) != 0)) {
      return 0;
    }
    local_8 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    FUN_0186e214(&local_8);
    *(undefined4 *)(param_1 + 0x48) = 2;
  }
  return 1;
}


