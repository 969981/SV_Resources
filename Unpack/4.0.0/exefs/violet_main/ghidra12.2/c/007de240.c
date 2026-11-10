/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007de240; name: FUN_007de240
 */


ulong FUN_007de240(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int local_60 [4];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_007969f0();
  uVar2 = FUN_00796a24(param_1);
  if ((uVar2 & 1) == 0) {
    FUN_00796868(auStack_40,param_1);
    uVar2 = FUN_0078a34c(auStack_40);
    FUN_0284e3d4(auStack_40);
    if ((uVar2 & 1) == 0) {
      local_60[0] = 0;
      FUN_00796868(auStack_40,param_1);
      FUN_0078a244(&local_50,auStack_40,local_60);
      FUN_0284e3d4(auStack_40);
      uVar2 = (ulong)(uint)(local_60[0] << 0x10);
    }
    else {
      local_50 = 0;
      uStack_48 = 0;
      FUN_00796868(auStack_40,param_1);
      FUN_0078a390(local_60,auStack_40,&local_50);
      FUN_0284e3d4(auStack_40);
      lVar3 = FUN_007cac9c(&local_50,0x10);
      uVar2 = lVar3 << 0x10;
    }
  }
  else {
    lVar3 = FUN_00796988(param_1);
    uVar2 = lVar3 << 0x10;
  }
  return uVar2 | uVar1 & 0xffff;
}


