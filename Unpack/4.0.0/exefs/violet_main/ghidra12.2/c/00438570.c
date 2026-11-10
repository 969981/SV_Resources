/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00438570; name: FUN_00438570
 */


void FUN_00438570(undefined4 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,int param_6)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = *param_1;
  uStack_14 = param_1[1];
  if (param_6 == 0) {
    FUN_004366c0(&local_18,param_3,param_4,param_5);
  }
  else {
    FUN_004365c0();
  }
  *param_2 = (char)local_18;
  param_2[4] = (char)uStack_14;
  param_2[1] = (char)((uint)local_18 >> 8);
  param_2[3] = (char)((uint)local_18 >> 0x18);
  param_2[2] = (char)((uint)local_18 >> 0x10);
  param_2[6] = (char)((uint)uStack_14 >> 0x10);
  param_2[5] = (char)((uint)uStack_14 >> 8);
  param_2[7] = (char)((uint)uStack_14 >> 0x18);
  return;
}


