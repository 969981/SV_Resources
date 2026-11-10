/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022591f0; name: FUN_022591f0
 */


undefined8 FUN_022591f0(long param_1,ulong param_2,long *param_3,long *param_4,undefined1 *param_5)

{
  undefined8 *puVar1;
  undefined1 local_24 [4];
  long local_8;
  
  if ((param_2 < *(ulong *)(param_1 + 0xb0)) &&
     ((*(ulong *)(param_1 + 0x48) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x40) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    local_8 = 0;
    if (*param_4 != 0) {
      local_8 = *param_4 + 0x20;
    }
    local_24[0] = *param_5;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + param_2 * 0x80);
    (*(code *)*puVar1)(puVar1 + 4,&local_8,local_24);
  }
  *param_3 = *param_3 + 0x10;
  return 1;
}


