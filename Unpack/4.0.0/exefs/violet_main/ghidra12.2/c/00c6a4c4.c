/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c6a4c4; name: FUN_00c6a4c4
 */


void FUN_00c6a4c4(long param_1,void *param_2)

{
  *(undefined4 *)(param_1 + 300) = 7;
  memcpy((void *)(param_1 + 0x1b0),param_2,0x30);
  FUN_0116fc5c(param_2,param_1 + 0x120);
  *(undefined1 *)(param_1 + 0x129) = 1;
  FUN_00c6a514(param_1 + 0x38,0);
  return;
}


