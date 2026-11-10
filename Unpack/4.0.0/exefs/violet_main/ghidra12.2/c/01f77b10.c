/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f77b10; name: FUN_01f77b10
 */


long FUN_01f77b10(undefined8 param_1)

{
  undefined8 uVar1;
  long local_38 [3];
  undefined8 local_8;
  
  FUN_01d02230(local_38);
  uVar1 = FUN_01f77b68(param_1,&local_8,local_38[0] + 0x20);
  FUN_01d0229c(param_1,local_8,uVar1,local_38[0]);
  return local_38[0];
}


