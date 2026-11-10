/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01021c7c; name: FUN_01021c7c
 */


undefined8 FUN_01021c7c(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x30));
  return uVar1;
}


