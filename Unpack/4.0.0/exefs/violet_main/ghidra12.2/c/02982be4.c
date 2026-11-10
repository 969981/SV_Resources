/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02982be4; name: FUN_02982be4
 */


void FUN_02982be4(long param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined4 local_68;
  undefined8 local_64;
  undefined2 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_38 = param_10;
  uStack_40 = param_9;
  local_5c = 0xffff;
  local_64 = 0xffffffffffffffff;
  local_58 = param_6;
  uStack_50 = param_7;
  local_48 = param_8;
  local_30 = param_5;
  uStack_28 = param_4;
  uVar1 = FUN_02982c58(*(undefined8 *)(param_1 + 0x78));
  FUN_02981cc0(uVar1,&local_68,&local_58);
  *param_2 = local_68;
  *(undefined2 *)(param_3 + 1) = local_5c;
  *param_3 = local_64;
  return;
}


