/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b9cd4; name: FUN_007b9cd4
 */


void FUN_007b9cd4(long param_1,void *param_2,uint param_3)

{
  if ((param_2 != (void *)0x0) && (param_3 < 0x21)) {
    memcpy((void *)(param_1 + 0x1259),param_2,(ulong)param_3);
    *(undefined1 *)(param_1 + 0x1279) = 1;
  }
  return;
}


