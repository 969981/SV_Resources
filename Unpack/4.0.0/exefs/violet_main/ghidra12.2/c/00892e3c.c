/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00892e3c; name: FUN_00892e3c
 */


void FUN_00892e3c(long param_1,undefined8 param_2)

{
  FUN_00c6cfb4(param_2,1,param_1 + 0xf8,*(undefined8 *)(param_1 + 0x150));
  FUN_00c6cf4c(param_2,0,1,param_1 + 0x130);
  FUN_00c6d064(param_2,0,1,param_1 + 0x100);
  if (*(long *)(param_1 + 0x158) != 0) {
    FUN_00c5b0c4(param_2);
  }
  if (*(long *)(param_1 + 0x160) == 0) {
    return;
  }
  FUN_00c6d118(param_2);
  return;
}


