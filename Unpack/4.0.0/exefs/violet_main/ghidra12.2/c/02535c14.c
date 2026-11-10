/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02535c14; name: FUN_02535c14
 */


void FUN_02535c14(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_60 [56];
  ulong local_28;
  undefined4 local_4;
  
  puVar1 = &LAB_02b9f720;
  if (DAT_04850a58 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_4 = param_3;
  FUN_02535d84(auStack_60,param_2,puVar1,0,&local_4);
  FUN_02535dd0(param_1,auStack_60);
  if ((local_28 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_28 - 1,0);
  }
  return;
}


