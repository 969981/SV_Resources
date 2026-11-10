/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032259b8; name: FUN_032259b8
 */


uint FUN_032259b8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_30;
  ulong local_28;
  
  local_30 = 0;
  local_28 = local_28 & 0xffffffffffffff00;
  (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
            ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_30);
  uVar1 = (**(code **)(*(long *)(param_1[2] & 0xfffffffffffffffe) + 0x30))
                    ((long *)(param_1[2] & 0xfffffffffffffffe),*param_1,param_1[1],&local_30);
  return ~uVar1 >> 0x1f;
}


