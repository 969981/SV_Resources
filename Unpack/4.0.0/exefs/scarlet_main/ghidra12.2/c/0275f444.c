/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0275f444; name: FUN_0275f444
 */


void FUN_0275f444(long param_1,ulong param_2,long *param_3,undefined8 param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 local_8;
  
  if ((param_2 < *(ulong *)(param_1 + 0xb0)) &&
     ((*(ulong *)(param_1 + 0x48) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x40) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + param_2 * 0x40);
    local_8 = *param_5;
    (*(code *)*puVar1)(puVar1 + 4,param_4,&local_8);
  }
  *param_3 = *param_3 + 0x10;
  return;
}


