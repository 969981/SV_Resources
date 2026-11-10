/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03225e1c; name: FUN_03225e1c
 */


uint FUN_03225e1c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  char local_8 [8];
  
  local_8[0] = '\0';
  (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
            ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],local_8);
  uVar2 = 0x3ff0000000000000;
  if (local_8[0] == '\0') {
    uVar2 = 0;
  }
  uVar1 = (**(code **)(*(long *)(param_1[2] & 0xfffffffffffffffe) + 0x30))
                    (uVar2,(long *)(param_1[2] & 0xfffffffffffffffe),*param_1,param_1[1]);
  return ~uVar1 >> 0x1f;
}


