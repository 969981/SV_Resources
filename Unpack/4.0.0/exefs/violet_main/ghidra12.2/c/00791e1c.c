/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00791e1c; name: FUN_00791e1c
 */


void FUN_00791e1c(undefined1 *param_1,undefined1 param_2)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  undefined1 auStack_30 [16];
  undefined8 local_18;
  
  memset(param_1,0xff,0x10);
  *param_1 = 0x20;
  param_1[3] = 1;
  param_1[1] = param_2;
  sVar2 = FUN_00792118();
  sVar3 = FUN_00791cec();
  *(short *)(param_1 + 4) = sVar3 + sVar2;
  FUN_007c70a8(auStack_30);
  local_18 = FUN_007c71ac(auStack_30);
  memcpy(param_1 + 6,&local_18,8);
  uVar1 = FUN_007c7184(auStack_30);
  param_1[0xe] = uVar1;
  FUN_0078fb00(param_1 + 0x10);
  return;
}


