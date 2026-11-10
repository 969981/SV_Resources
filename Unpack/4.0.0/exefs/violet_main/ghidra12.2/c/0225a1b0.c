/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0225a1b0; name: FUN_0225a1b0
 */


undefined8
FUN_0225a1b0(long param_1,ulong param_2,undefined8 param_3,long *param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  if ((((*(char *)(*(long *)(param_1 + 0xc0) + param_2 * 0x18) != '\0') ||
       (*(long *)(*(long *)(param_1 + 0xc0) + param_2 * 0x18 + 8) != 0)) &&
      (param_2 < *(ulong *)(param_1 + 0xb0))) &&
     ((*(ulong *)(param_1 + 0x48) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x40) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    local_28 = 0;
    if (*param_4 != 0) {
      local_28 = *param_4 + 0x20;
    }
    uStack_2c = *param_5;
    local_30 = *param_6;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + param_2 * 0x80);
    (*(code *)*puVar1)(puVar1 + 4,&local_28,&uStack_2c,&local_30);
    plVar2 = (long *)(*(long *)(param_1 + 0xc0) + param_2 * 0x18 + 8);
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      *plVar2 = lVar3 + -1;
    }
  }
  return 1;
}


