/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020a13a0; name: FUN_020a13a0
 */


void FUN_020a13a0(long param_1,undefined4 param_2)

{
  if (*(long *)(param_1 + 0x328) != *(long *)(param_1 + 0x330)) {
    *(undefined4 *)(*(long *)(param_1 + 0x330) + -4) = param_2;
  }
  return;
}


