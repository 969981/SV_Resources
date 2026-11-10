/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007aec94; name: FUN_007aec94
 */


void FUN_007aec94(long param_1,long param_2)

{
  FUN_0079824c();
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  memcpy((void *)(param_1 + 0x40),(void *)(param_2 + 0x40),0x40);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  *(undefined2 *)(param_1 + 0x202) = *(undefined2 *)(param_2 + 0x202);
  return;
}


