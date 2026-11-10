/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02982ba4; name: FUN_02982ba4
 */


void FUN_02982ba4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_38 = param_4;
  uStack_30 = param_3;
  local_28 = param_2;
  uStack_20 = param_5;
  local_18 = param_6;
  uVar1 = FUN_02982bdc(*(undefined8 *)(param_1 + 0x78));
  FUN_029813c8(uVar1,auStack_40,&local_38);
  return;
}


