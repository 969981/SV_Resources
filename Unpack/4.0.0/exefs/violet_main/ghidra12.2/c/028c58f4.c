/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028c58f4; name: FUN_028c58f4
 */


void FUN_028c58f4(long param_1,ulong param_2,long *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  if ((((*(char *)(*(long *)(param_1 + 0xe0) + param_2 * 0x18) != '\0') ||
       (*(long *)(*(long *)(param_1 + 0xe0) + param_2 * 0x18 + 8) != 0)) &&
      (param_2 < *(ulong *)(param_1 + 0xb0))) &&
     ((*(ulong *)(param_1 + 0x48) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x40) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + param_2 * 0x80);
    auVar4 = (*(code *)*puVar1)(puVar1 + 4);
    *(undefined1 (*) [16])(param_1 + 0xd0) = auVar4;
    plVar2 = (long *)(*(long *)(param_1 + 0xe0) + param_2 * 0x18 + 8);
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      *plVar2 = lVar3 + -1;
    }
  }
  *param_3 = *param_3 + 0x10;
  return;
}


