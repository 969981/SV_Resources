/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00124340; name: FUN_00124340
 */


undefined8 FUN_00124340(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int local_14;
  
  uVar4 = param_2 & 0xffffffff;
  uVar2 = FUN_00c92df0(param_1,param_2,&local_14);
  if (local_14 == 0) {
    iVar1 = FUN_00121e90(param_1,uVar4);
    if (iVar1 == 0) {
      uVar3 = FUN_01b2ccf0(param_1,3);
      FUN_00123c80(param_1,uVar4,uVar3);
    }
    else {
      FUN_00123970(param_1,uVar4,"number has no integer representation");
    }
  }
  return uVar2;
}


