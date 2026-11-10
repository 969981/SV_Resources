/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015a4c34; name: FUN_015a4c34
 */


void FUN_015a4c34(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 auStack_18 [8];
  
  if (*(long *)(param_1 + 0x138) != 0) {
    uVar4 = *(long *)(param_1 + 0x138) - 1;
    uVar1 = FUN_0275c464(*(undefined4 *)(*(long *)(param_1 + 200) + param_2 * 0x18 + 0x10),param_1,
                         uVar4,0);
    lVar2 = *(long *)(param_1 + 0x100);
    if (uVar1 <= uVar4) {
      uVar4 = uVar1;
    }
    if (uVar4 != 0) {
      plVar3 = (long *)(lVar2 + uVar4 * 0x10);
      do {
        if (*plVar3 == param_2) break;
        uVar4 = uVar4 - 1;
        plVar3 = plVar3 + -2;
      } while (uVar4 != 0);
    }
    plVar3 = (long *)(lVar2 + uVar4 * 0x10);
    if (*plVar3 == param_2) {
      uVar1 = *(long *)(param_1 + 0x138) - 1;
      *(ulong *)(param_1 + 0x138) = uVar1;
      if ((uVar4 <= uVar1 && uVar1 - uVar4 != 0) &&
         (uVar4 + 1 < (ulong)(*(long *)(param_1 + 0x108) - lVar2 >> 4))) {
        memmove(plVar3,(void *)(lVar2 + (uVar4 + 1) * 0x10),(uVar1 - uVar4) * 0x10);
      }
    }
    FUN_0275c508(param_1 + 8,param_2,auStack_18);
  }
  return;
}


