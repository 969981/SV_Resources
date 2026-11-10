/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298364c; name: FUN_0298364c
 */


undefined1
FUN_0298364c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18 [8];
  
  local_30 = 0x101;
  local_2e = 1;
  local_28 = 0;
  local_50 = param_5;
  uStack_48 = param_4;
  local_40 = param_3;
  uStack_38 = param_6;
  uStack_20 = param_2;
  FUN_01461214();
  uVar1 = FUN_029836e8();
  FUN_0167a9bc(uVar1,local_18,&local_50);
  return local_18[0];
}


