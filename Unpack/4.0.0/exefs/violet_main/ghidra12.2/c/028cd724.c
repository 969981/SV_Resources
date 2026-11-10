/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028cd724; name: FUN_028cd724
 */


undefined8 FUN_028cd724(long param_1,ulong param_2,long *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_18;
  
  if ((((*(char *)(*(long *)(param_1 + 200) + param_2 * 0x18) != '\0') ||
       (*(long *)(*(long *)(param_1 + 200) + param_2 * 0x18 + 8) != 0)) &&
      (param_2 < *(ulong *)(param_1 + 0xb0))) &&
     ((*(ulong *)(param_1 + 0x48) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x40) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + param_2 * 0x40);
    local_18 = *param_4;
    bVar2 = (*(code *)*puVar1)(puVar1 + 4,&local_18);
    *(byte *)(param_1 + 0xc0) = bVar2 & 1;
    plVar3 = (long *)(*(long *)(param_1 + 200) + param_2 * 0x18 + 8);
    lVar4 = *plVar3;
    if (lVar4 != 0) {
      *plVar3 = lVar4 + -1;
    }
    if ((bVar2 & 1) != 0) {
      return 0;
    }
  }
  *param_3 = *param_3 + 0x10;
  return 1;
}


