/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e3f470; name: FUN_01e3f470
 */


void FUN_01e3f470(undefined8 *param_1,long param_2,uint param_3)

{
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  if (param_2 != 0) {
    local_30 = *param_1;
    if ((param_3 & 1) == 0) {
      local_28 = *(undefined4 *)(param_1 + 1);
      FUN_01e3fb00(&local_30);
    }
    else {
      local_18 = *(undefined4 *)(param_1 + 1);
      local_20 = local_30;
      FUN_01e3fa40(&local_20);
    }
  }
  return;
}


