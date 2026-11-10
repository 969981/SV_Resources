/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01404884; name: FUN_01404884
 */


undefined8 FUN_01404884(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 local_4;
  
  uVar1 = (**(code **)(*(long *)*param_1 + 0x10))
                    ((long *)*param_1,*(undefined8 *)(param_2 + 8),&local_4);
  if ((int)uVar1 == 1) {
    *param_3 = local_4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


