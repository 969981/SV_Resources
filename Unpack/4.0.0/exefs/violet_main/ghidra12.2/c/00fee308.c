/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fee308; name: FUN_00fee308
 */


void FUN_00fee308(undefined1 *param_1,undefined8 param_2,long param_3,long *param_4)

{
  if (*(char *)(*param_4 + (ulong)*(uint *)(param_3 + 0x14)) == '\0') {
    FUN_00c91c88(param_3,param_4[2]);
  }
  FUN_00fee37c(param_1,param_3,param_2,param_4);
  *(undefined1 *)(*param_4 + (ulong)*(uint *)(param_3 + 0xc)) = *param_1;
  return;
}


