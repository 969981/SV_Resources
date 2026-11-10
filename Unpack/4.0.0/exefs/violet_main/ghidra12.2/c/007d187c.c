/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007d187c; name: FUN_007d187c
 */


void FUN_007d187c(long *param_1,byte param_2)

{
  undefined *puVar1;
  
  FUN_007eafa4();
  puVar1 = PTR_DAT_047d12f8;
  *(byte *)((long)param_1 + 0x729) = param_2 & 1;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined1 *)(param_1 + 0xe5) = 0xfd;
  return;
}


