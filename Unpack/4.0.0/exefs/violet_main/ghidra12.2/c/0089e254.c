/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0089e254; name: FUN_0089e254
 */


uint FUN_0089e254(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00897bf0();
  if ((uVar1 & 1) != 0) {
    (**(code **)(*param_1 + 0xd0))(param_1,param_3);
  }
  return uVar1 & 1;
}


