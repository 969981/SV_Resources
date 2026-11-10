/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010b9b8c; name: FUN_010b9b8c
 */


void FUN_010b9b8c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  long *plVar1;
  long lVar2;
  
  if ((((*(char *)(*(long *)(param_1 + 0xc0) + param_2 * 0x18) != '\0') ||
       (*(long *)(*(long *)(param_1 + 0xc0) + param_2 * 0x18 + 8) != 0)) &&
      (param_2 < *(ulong *)(param_1 + 0xb0))) &&
     ((*(ulong *)(param_1 + 0x48) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x40) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    FUN_0221098c(*(long *)(param_1 + 8) + param_2 * 0x80,param_3,param_4,param_5,param_6,param_7,
                 param_8,param_9);
    plVar1 = (long *)(*(long *)(param_1 + 0xc0) + param_2 * 0x18 + 8);
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      *plVar1 = lVar2 + -1;
    }
  }
  return;
}


