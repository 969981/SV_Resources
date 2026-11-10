/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00298290; name: FUN_00298290
 */


undefined8 FUN_00298290(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *local_28;
  
  lVar1 = FUN_002ed9b0(param_2);
  if (lVar1 == 0) {
    uVar2 = FUN_00305820(param_1,param_2,0);
    return uVar2;
  }
  local_28 = "grpc.channel_credentials";
  uVar2 = FUN_003438e0(param_2,&local_28,1);
  uVar3 = FUN_002eaca0(lVar1,param_1,uVar2,0);
  FUN_00343d90(uVar2);
  return uVar3;
}


