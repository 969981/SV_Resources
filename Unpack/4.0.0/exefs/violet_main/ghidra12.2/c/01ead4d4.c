/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ead4d4; name: FUN_01ead4d4
 */


void FUN_01ead4d4(long param_1,undefined2 *param_2)

{
  undefined2 local_68 [4];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined2 local_28;
  
  local_68[0] = *param_2;
  local_50 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_48 = 1;
  local_40 = *(undefined8 *)(param_2 + 2);
  uStack_38 = *(undefined8 *)(param_2 + 6);
  local_44 = 1;
  local_30 = 0;
  local_28 = 0x100;
  FUN_01eadf84(param_1,local_68);
  FUN_01eae7cc(param_1 + 0x100,local_68);
  FUN_01eab838(local_68);
  return;
}


