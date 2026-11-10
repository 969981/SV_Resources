/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028cd68c; name: FUN_028cd68c
 */


undefined8 FUN_028cd68c(long param_1,ulong param_2,long *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 local_28;
  
  if ((param_2 < *(ulong *)(param_1 + 0xb0)) &&
     ((*(ulong *)(param_1 + 0x48) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x40) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + param_2 * 0x40);
    local_28 = *param_4;
    bVar2 = (*(code *)*puVar1)(puVar1 + 4,&local_28);
    *(byte *)(param_1 + 0xc0) = bVar2 & 1;
    if ((bVar2 & 1) != 0) {
      return 0;
    }
  }
  *param_3 = *param_3 + 0x10;
  return 1;
}


