/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0186d9ac; name: FUN_0186d9ac
 */


void FUN_0186d9ac(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = param_1[1];
  if (uVar1 < (ulong)param_1[2]) {
    FUN_0186db10(param_1 + 3,uVar1,param_2);
    param_1[1] = uVar1 + 0x68;
    return;
  }
  uVar2 = FUN_0186daac(param_1,(param_1[1] - *param_1 >> 3) * 0x4ec4ec4ec4ec4ec5 + 1);
  FUN_0186dc68(auStack_58,uVar2,(param_1[1] - *param_1 >> 3) * 0x4ec4ec4ec4ec4ec5,param_1 + 3);
  FUN_0186db10(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x68;
  FUN_0186ddc0(param_1,auStack_58);
  FUN_0186dcfc(auStack_58);
  return;
}


