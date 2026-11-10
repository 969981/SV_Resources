/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f7d510; name: FUN_00f7d510
 */


void FUN_00f7d510(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_24 [4];
  
  uVar2 = FUN_01497d84();
  uVar3 = FUN_014f5f08(param_1);
  uVar1 = FUN_00f7d58c(uVar2,uVar3,local_24);
  uVar2 = FUN_01497d84(param_1);
  FUN_00f7d570(uVar2,uVar1,local_24[0],0);
  return;
}


