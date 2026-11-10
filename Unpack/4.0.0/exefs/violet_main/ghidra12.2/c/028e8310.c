/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028e8310; name: FUN_028e8310
 */


void FUN_028e8310(undefined8 *param_1,long *param_2,undefined1 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_1c [4];
  long local_18;
  
  local_18 = 0;
  if (*param_2 != 0) {
    local_18 = *param_2 + 0x20;
  }
  local_1c[0] = *param_3;
  uStack_28 = *param_4;
  local_30 = *param_5;
  (*(code *)*param_1)(param_1 + 4,&local_18,local_1c,&uStack_28,&local_30);
  return;
}


