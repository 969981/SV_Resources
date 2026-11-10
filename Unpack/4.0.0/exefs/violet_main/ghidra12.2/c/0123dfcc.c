/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0123dfcc; name: FUN_0123dfcc
 */


void FUN_0123dfcc(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  byte local_30 [4];
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 auStack_8 [8];
  
  FUN_0124e480();
  local_30[0] = FUN_0123e058();
  if (local_30[0] != 0) {
    local_28 = 0x100;
    local_30[1] = 0xff;
    local_30[2] = 0;
    local_2c = 0;
    FUN_01461214(param_1);
    uVar1 = FUN_0123e064();
    FUN_01249ed0(uVar1,auStack_8,local_30);
    FUN_0124e480(param_1);
    lVar2 = FUN_0123e06c();
    if (*(char *)(lVar2 + 7) == '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_01242850(uVar1,0);
    }
  }
  return;
}


