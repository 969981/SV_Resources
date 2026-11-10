/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f56a68; name: FUN_01f56a68
 */


void FUN_01f56a68(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(long *)(param_1 + 0x130) == 0) {
    return;
  }
  uVar5 = *(long *)(param_1 + 0x130) - 1;
  uVar1 = FUN_01f56e08(*(undefined4 *)(*(long *)(param_1 + 0xc0) + param_2 * 0x18 + 0x10),param_1,
                       uVar5);
  lVar2 = *(long *)(param_1 + 0xf8);
  uVar3 = uVar5;
  if (uVar1 <= uVar5) {
    uVar3 = uVar1;
  }
  if (uVar3 != 0) {
    plVar4 = (long *)(lVar2 + uVar3 * 0x10);
    do {
      if (*plVar4 == param_2) break;
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + -2;
    } while (uVar3 != 0);
  }
  plVar4 = (long *)(lVar2 + uVar3 * 0x10);
  if (*plVar4 == param_2) {
    *(ulong *)(param_1 + 0x130) = uVar5;
    if ((uVar3 <= uVar5 && uVar5 - uVar3 != 0) &&
       (uVar3 + 1 < (ulong)(*(long *)(param_1 + 0x100) - lVar2 >> 4))) {
      memmove(plVar4,(void *)(lVar2 + (uVar3 + 1) * 0x10),(uVar5 - uVar3) * 0x10);
    }
  }
  FUN_01f56eb8(param_1 + 8,param_2);
  return;
}


