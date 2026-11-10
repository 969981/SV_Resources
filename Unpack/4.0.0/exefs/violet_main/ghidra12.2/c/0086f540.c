/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0086f540; name: FUN_0086f540
 */


undefined4 FUN_0086f540(long param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0x80040200;
  }
  uVar1 = FUN_02ed42dc(*(long *)(param_1 + 0x18) + 0x18,param_2 << 1);
  return uVar1;
}


