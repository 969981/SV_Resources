/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02987790; name: FUN_02987790
 */


bool FUN_02987790(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long local_30;
  undefined1 local_28;
  char local_8 [8];
  
  FUN_0124e480();
  uVar2 = FUN_0159fe8c();
  local_30 = FUN_01248380(param_1,uVar2,0);
  bVar1 = false;
  if (local_30 != 0) {
    local_28 = 1;
    FUN_01461214(param_1);
    uVar3 = FUN_01242178();
    FUN_0124cd84(uVar3,local_8,&local_30);
    bVar1 = local_8[0] != '\0';
  }
  return bVar1;
}


