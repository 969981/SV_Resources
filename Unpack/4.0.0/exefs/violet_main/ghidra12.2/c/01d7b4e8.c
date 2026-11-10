/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d7b4e8; name: FUN_01d7b4e8
 */


void FUN_01d7b4e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *local_18;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  FUN_017c3fdc(&local_18,param_3);
  FUN_01d7c37c(param_2,uVar1,uVar2,&local_18);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x60))();
  }
  return;
}


