/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0225a28c; name: FUN_0225a28c
 */


undefined8
FUN_0225a28c(long param_1,ulong param_2,long *param_3,long *param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  undefined8 *puVar1;
  undefined4 local_28;
  undefined4 local_24;
  long local_8;
  
  if ((param_2 < *(ulong *)(param_1 + 0xb0)) &&
     ((*(ulong *)(param_1 + 0x48) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x40) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    local_8 = 0;
    if (*param_4 != 0) {
      local_8 = *param_4 + 0x20;
    }
    local_24 = *param_5;
    local_28 = *param_6;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + param_2 * 0x80);
    (*(code *)*puVar1)(puVar1 + 4,&local_8,&local_24,&local_28);
  }
  *param_3 = *param_3 + 0x10;
  return 1;
}


