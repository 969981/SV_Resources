/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a7e30; name: FUN_003a7e30
 */


undefined8 FUN_003a7e30(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = FUN_003f40c0(*(undefined8 *)(param_1 + 0x520),*(undefined8 *)(param_2 + 0x20),
                       *(int *)(param_2 + 8) + 0x400,*(undefined8 *)(param_2 + 0x28));
  if ((int)uVar1 < 0) {
    return 0;
  }
  *(ulong *)(param_2 + 8) = (ulong)uVar1;
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x20);
  return 1;
}


