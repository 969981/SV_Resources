/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003fa880; name: FUN_003fa880
 */


undefined8 FUN_003fa880(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  iVar2 = FUN_003fa8f0(param_3,&local_28);
  lVar1 = local_28;
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  else {
    local_30 = *(undefined8 *)(local_28 + 8);
    uVar3 = (*param_2)(param_4,&local_30,iVar2);
  }
  FUN_003f3160(lVar1);
  return uVar3;
}


