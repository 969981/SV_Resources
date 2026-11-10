/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03225a94; name: FUN_03225a94
 */


uint FUN_03225a94(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_8;
  
  local_8 = 0;
  (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
            ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_8);
  uVar1 = (**(code **)(*(long *)(param_1[2] & 0xfffffffffffffffe) + 0x30))
                    (local_8,(long *)(param_1[2] & 0xfffffffffffffffe),*param_1,param_1[1]);
  return ~uVar1 >> 0x1f;
}


