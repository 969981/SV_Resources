/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03225e90; name: FUN_03225e90
 */


uint FUN_03225e90(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  double dVar2;
  undefined8 local_30;
  char local_28;
  
  local_30 = 0;
  local_28 = '\0';
  (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
            ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_30);
  dVar2 = (double)NEON_ucvtf(local_30);
  if (local_28 != '\0') {
    dVar2 = -dVar2;
  }
  uVar1 = (**(code **)(*(long *)(param_1[2] & 0xfffffffffffffffe) + 0x30))
                    (dVar2,(long *)(param_1[2] & 0xfffffffffffffffe),*param_1,param_1[1]);
  return ~uVar1 >> 0x1f;
}


