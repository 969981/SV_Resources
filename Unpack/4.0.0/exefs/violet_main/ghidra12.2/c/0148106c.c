/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0148106c; name: FUN_0148106c
 */


undefined1 FUN_0148106c(undefined8 param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined1 local_40;
  uint local_3c;
  undefined1 local_38;
  undefined8 local_36;
  undefined8 local_28;
  
  local_3c = 0;
  local_38 = 0;
  local_28 = 0;
  local_40 = 0;
  local_36 = 0;
  local_48 = (ulong)*param_2;
  uVar1 = (**(code **)(**(long **)(param_2 + 2) + 0x98))();
  local_48 = CONCAT44(uVar1,(undefined4)local_48);
  local_40 = (undefined1)param_2[4];
  local_3c = param_2[5];
  local_38 = (undefined1)param_2[6];
  local_36 = *(undefined8 *)((long)param_2 + 0x1a);
  local_28 = *(undefined8 *)(param_2 + 10);
  FUN_01461214(param_1);
  uVar2 = FUN_01481124();
  FUN_0148112c(uVar2,local_50,&local_48);
  return local_50[0];
}


