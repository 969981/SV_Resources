/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ecaa5c; name: FUN_02ecaa5c
 */


undefined8 FUN_02ecaa5c(long *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x20))();
  if (param_2 < iVar1) {
    (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3);
    uVar2 = 3;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x20))(param_1);
    (**(code **)(*param_1 + 0x48))(param_1,param_2 - iVar1,param_3);
    uVar2 = 4;
  }
  return uVar2;
}


