/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00129910; name: FUN_00129910
 */


void FUN_00129910(long param_1,ulong param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar2 = *(long *)(param_1 + 0x38);
  while ((lVar2 != 0 && (param_2 <= *(ulong *)(lVar2 + 0x10)))) {
    plVar4 = (long *)(lVar2 + 0x18);
    **(long **)(lVar2 + 0x20) = *plVar4;
    if (*plVar4 != 0) {
      *(undefined8 *)(*plVar4 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
    }
    lVar3 = **(long **)(lVar2 + 0x10);
    *(long *)(lVar2 + 0x18) = lVar3;
    bVar1 = *(byte *)(*(long **)(lVar2 + 0x10) + 1);
    *(long **)(lVar2 + 0x10) = plVar4;
    *(byte *)(lVar2 + 0x20) = bVar1;
    if ((((*(byte *)(lVar2 + 9) & 0x18) == 0) &&
        (*(byte *)(lVar2 + 9) = *(byte *)(lVar2 + 9) | 0x20, (bVar1 >> 6 & 1) != 0)) &&
       ((*(byte *)(lVar3 + 9) & 0x18) != 0)) {
      FUN_00129d70(param_1);
    }
    lVar2 = *(long *)(param_1 + 0x38);
  }
  return;
}


