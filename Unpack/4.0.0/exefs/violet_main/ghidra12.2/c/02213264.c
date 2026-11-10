/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02213264; name: FUN_02213264
 */


void FUN_02213264(long param_1,long param_2,undefined8 param_3)

{
  FUN_02f2d868(param_2 + 0x530,*(long *)(param_1 + 0x18),
               *(long *)(param_2 + 0x150) +
               (ulong)*(uint *)(*(long *)(param_2 + 0x38) +
                                ((ulong)*(uint *)(*(long *)(param_1 + 0x18) + 8) & 0xffffff) * 0xc0
                               + 0x80) * 0x80,1,param_3);
  return;
}


