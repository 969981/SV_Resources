/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022364e8; name: FUN_022364e8
 */


void FUN_022364e8(undefined8 param_1)

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
    FUN_02235de0(param_1);
  }
  return;
}


