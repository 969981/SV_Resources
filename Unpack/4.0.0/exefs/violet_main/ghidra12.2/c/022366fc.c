/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022366fc; name: FUN_022366fc
 */


void FUN_022366fc(undefined8 param_1)

{
  bool bVar1;
  ushort uVar2;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  undefined *puStack_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0xda0252037cbfb442;
  puStack_38 = &DAT_03c8c68c;
  local_30 = 4;
  local_28 = (long *)0x0;
  uVar2 = FUN_0141f968(param_1,&local_40);
  if (((uVar2 & 0xff) == 0) || (uVar2 < 0x100)) {
    local_60 = 0x42ee6f2cf758cea4;
    pcStack_58 = "SkipOnly";
    local_50 = 8;
    local_48 = (long *)0x0;
    uVar2 = FUN_0141f968(param_1,&local_60);
    bVar1 = (uVar2 & 0xff) != 0 && 0xff < uVar2;
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  else {
    bVar1 = true;
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (bVar1) {
    FUN_019ace40(param_1);
  }
  return;
}


