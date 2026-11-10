/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0175cc20; name: FUN_0175cc20
 */


void FUN_0175cc20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  
  FUN_0175cc74(auStack_48,param_2);
  FUN_0175cef0(&local_68,param_2,auStack_48);
  *param_1 = local_68;
  param_1[1] = uStack_60;
  param_1[2] = local_58;
  param_1[3] = uStack_50;
  return;
}


