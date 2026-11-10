/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c5af98; name: FUN_00c5af98
 */


undefined8 FUN_00c5af98(long param_1)

{
  if (*(uint *)(param_1 + 0x10) == 3) {
    return 0;
  }
  return *(undefined8 *)
          (*(long *)(*(long *)(param_1 + 8) + 0x238) + (ulong)*(uint *)(param_1 + 0x10) * 8 + 0x340)
  ;
}


