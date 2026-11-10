/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a51910; name: FUN_00a51910
 */


void FUN_00a51910(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x6450) = *(undefined8 *)(param_1 + 0x6448);
  FUN_00a62084(param_1 + 0x63d0,param_1 + 0x6448,param_2,param_3);
  FUN_00a5f210(*(undefined8 *)(param_1 + 0x6448),*(undefined8 *)(param_1 + 0x6450));
  return;
}


