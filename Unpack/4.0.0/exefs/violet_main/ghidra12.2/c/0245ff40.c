/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0245ff40; name: FUN_0245ff40
 */


void FUN_0245ff40(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_8;
  
  FUN_02460004(&local_8,param_2);
  uVar1 = local_8;
  *param_1 = 1;
  local_8 = 0;
  *(undefined8 *)(param_1 + 8) = uVar1;
  FUN_0245beb4(&local_8);
  return;
}


