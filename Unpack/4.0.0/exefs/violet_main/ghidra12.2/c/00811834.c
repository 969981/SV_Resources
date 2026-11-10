/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00811834; name: FUN_00811834
 */


undefined8 FUN_00811834(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_60 [16];
  undefined4 local_50 [4];
  int local_40 [4];
  undefined4 local_28;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if (*(long *)(param_1 + 0x38) != 0) {
      lVar2 = *(long *)(param_1 + 0x38) + 0x10;
    }
  }
  local_24 = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
  FUN_008127cc(auStack_60,lVar2 + 0x20,local_50,&local_28,0x10);
  FUN_018ff39c(local_40,auStack_60);
  uVar1 = 0;
  if (local_40[0] == 0) {
    FUN_007929a0(auStack_60,*(undefined8 *)(param_1 + 0x20),local_50,local_28,lVar2,&local_24);
    FUN_018ff39c(local_40,auStack_60);
    if (local_40[0] == 0) {
      FUN_0284e3d4(lVar2);
      FUN_0078fa2c(param_1 + 0x30,lVar2 + -0x10);
      FUN_0078fa04(param_1 + 0x48,param_1 + 0x48,lVar2 + -0x10 + (long)*(int *)(param_1 + 0x5c));
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}


