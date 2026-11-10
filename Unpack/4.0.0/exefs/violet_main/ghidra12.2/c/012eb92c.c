/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012eb92c; name: FUN_012eb92c
 */


void FUN_012eb92c(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_8;
  
  uVar1 = FUN_012ec3f4(*(undefined8 *)(*param_1 + 8));
  FUN_012ebc58(&local_28,uVar1);
  local_8 = *param_2;
  *param_2 = 0;
  FUN_012eb990(&local_8);
  uVar1 = local_28;
  local_28 = 0;
  *param_2 = uVar1;
  FUN_012eb990(&local_28);
  return;
}


