/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029422f0; name: FUN_029422f0
 */


undefined1 FUN_029422f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_8 [8];
  
  uVar1 = FUN_016fa02c(*(undefined8 *)(param_1 + 0x28));
  FUN_016fa034(uVar1,local_8,param_2);
  return local_8[0];
}


