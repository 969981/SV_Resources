/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00129760; name: FUN_00129760
 */


void FUN_00129760(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 0x38);
  lVar1 = *plVar4;
  if ((lVar1 != 0) && (uVar3 = *(ulong *)(lVar1 + 0x10), param_2 <= uVar3)) {
    do {
      lVar2 = lVar1;
      if (uVar3 == param_2) {
        return;
      }
      lVar1 = *(long *)(lVar2 + 0x18);
    } while ((lVar1 != 0) && (uVar3 = *(ulong *)(lVar1 + 0x10), param_2 <= uVar3));
    plVar4 = (long *)(lVar2 + 0x18);
  }
  lVar1 = FUN_00129fd0(param_1,9,0x28);
  lVar2 = *plVar4;
  *(ulong *)(lVar1 + 0x10) = param_2;
  *(undefined1 *)(lVar1 + 10) = 0;
  *(long *)(lVar1 + 0x18) = lVar2;
  *(long **)(lVar1 + 0x20) = plVar4;
  if (lVar2 != 0) {
    *(long **)(lVar2 + 0x20) = (long *)(lVar1 + 0x18);
  }
  *plVar4 = lVar1;
  if (*(long *)(param_1 + 0x50) == param_1) {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xf8);
    *(long *)(*(long *)(param_1 + 0x18) + 0xf8) = param_1;
    return;
  }
  return;
}


