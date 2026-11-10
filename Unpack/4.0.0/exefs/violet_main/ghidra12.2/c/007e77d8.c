/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e77d8; name: FUN_007e77d8
 */


void FUN_007e77d8(undefined8 param_1,long param_2,undefined8 param_3,long *param_4,ulong param_5)

{
  undefined2 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined1 auStack_480 [16];
  undefined4 local_470 [4];
  int local_460 [4];
  undefined4 local_450 [2];
  byte local_448;
  byte local_447;
  char acStack_446 [24];
  undefined2 auStack_42e [24];
  undefined2 auStack_3fe [25];
  undefined1 auStack_3cc [388];
  undefined4 local_248 [128];
  undefined4 local_48 [2];
  
  uVar3 = FUN_007f0128(param_2,param_4,*(undefined1 *)(param_2 + 0x10));
  if ((uVar3 & 1) == 0) {
    local_450[0] = 0;
    local_248[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_450 | 4),(Result *)local_248);
    puVar4 = local_450;
  }
  else {
    uVar1 = *(undefined2 *)((long)param_4 + 10);
    FUN_007e7974(local_450);
    uVar2 = (**(code **)(*param_4 + 0x20))(param_4);
    FUN_007eee88(local_248,param_3,uVar1,uVar2);
    FUN_007e7e44(local_460,local_450,local_248,uVar1);
    if (local_460[0] == 0) {
      if ((ushort)((ushort)local_447 * 0x15 + 2) == *(short *)((long)param_4 + 10)) {
        uVar3 = (ulong)*(byte *)(param_2 + 0x10);
        if ((*(byte *)(param_2 + 0x10) < local_447) &&
           (acStack_446[uVar3] == *(char *)(param_2 + 0x36))) {
          *(undefined2 *)(*(long *)(param_2 + 0xb0) + (param_5 & 0xff) * 2) = auStack_3fe[uVar3];
          if ((local_448 & 1) != 0) {
            *(undefined1 *)(param_2 + 0x48) = 1;
          }
          uVar1 = auStack_42e[uVar3];
          memcpy(auStack_480,auStack_3cc + uVar3 * 0x10,0x10);
          FUN_007f2854(param_2,param_5 & 0xffffffff,uVar1,auStack_480,
                       acStack_446[*(byte *)(param_2 + 0x10)]);
        }
        local_470[0] = 0;
      }
      else {
        local_470[0] = 0x2c03;
      }
    }
    else {
      local_470[0] = 0x10407;
    }
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_470 | 4),(Result *)local_48);
    puVar4 = local_470;
  }
  FUN_00cbd7c0(param_1,puVar4);
  return;
}


