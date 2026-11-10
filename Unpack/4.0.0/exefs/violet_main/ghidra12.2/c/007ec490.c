/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ec490; name: FUN_007ec490
 */


void FUN_007ec490(long param_1,char *param_2)

{
  if (*param_2 == '\x02') {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x10);
  }
  return;
}


