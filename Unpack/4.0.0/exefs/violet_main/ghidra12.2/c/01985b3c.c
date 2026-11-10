/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01985b3c; name: FUN_01985b3c
 */


void FUN_01985b3c(undefined1 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 *param_4
                 )

{
  undefined1 local_40 [16];
  undefined8 uStack_30;
  
  local_40 = (*(code *)*param_4)();
  *param_1 = 1;
  uStack_30 = param_3;
  FUN_01985d14(param_1 + 8,local_40);
  return;
}


