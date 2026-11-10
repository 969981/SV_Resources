/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0148155c; name: FUN_0148155c
 */


void FUN_0148155c(long param_1,undefined4 param_2)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    uVar1 = *(uint *)(param_1 + 0x14);
    if (uVar1 < 5) {
      *(uint *)(param_1 + 0x14) = uVar1 + 1;
      *(undefined4 *)(param_1 + (ulong)uVar1 * 4) = param_2;
    }
  }
  return;
}


