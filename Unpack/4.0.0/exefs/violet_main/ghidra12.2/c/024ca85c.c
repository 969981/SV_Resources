/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024ca85c; name: FUN_024ca85c
 */


void FUN_024ca85c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  undefined8 local_50 [2];
  undefined1 local_40 [16];
  undefined8 uStack_30;
  
  local_50[0] = param_2;
  local_40 = FUN_024cc870(param_5,*param_4,param_4[1],local_50);
  *param_1 = 1;
  uStack_30 = param_3;
  FUN_024cc8b0(param_1 + 8,local_40);
  return;
}


