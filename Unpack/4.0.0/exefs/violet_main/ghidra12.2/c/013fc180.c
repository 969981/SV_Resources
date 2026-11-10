/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013fc180; name: FUN_013fc180
 */


void FUN_013fc180(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = param_1[1];
  if (uVar1 < (ulong)param_1[2]) {
    FUN_013fc44c(param_1 + 3,uVar1,param_2);
    param_1[1] = uVar1 + 0xd0;
    return;
  }
  uVar2 = FUN_013fc280(param_1,(param_1[1] - *param_1 >> 4) * 0x4ec4ec4ec4ec4ec5 + 1);
  FUN_013fc2e4(auStack_58,uVar2,(param_1[1] - *param_1 >> 4) * 0x4ec4ec4ec4ec4ec5,param_1 + 3);
  FUN_013fc44c(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0xd0;
  FUN_013fc544(param_1,auStack_58);
  FUN_013fc374(auStack_58);
  return;
}


