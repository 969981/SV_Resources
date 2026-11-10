/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0225a604; name: FUN_0225a604
 */


void FUN_0225a604(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 auStack_18 [8];
  
  if (*(long *)(param_1 + 0x130) != 0) {
    uVar4 = *(long *)(param_1 + 0x130) - 1;
    uVar1 = FUN_0225a9d0(*(undefined4 *)(*(long *)(param_1 + 0xc0) + param_2 * 0x18 + 0x10),param_1,
                         uVar4,0);
    lVar2 = *(long *)(param_1 + 0xf8);
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
      uVar1 = *(long *)(param_1 + 0x130) - 1;
      *(ulong *)(param_1 + 0x130) = uVar1;
      if ((uVar4 <= uVar1 && uVar1 - uVar4 != 0) &&
         (uVar4 + 1 < (ulong)(*(long *)(param_1 + 0x100) - lVar2 >> 4))) {
        memmove(plVar3,(void *)(lVar2 + (uVar4 + 1) * 0x10),(uVar1 - uVar4) * 0x10);
      }
    }
    FUN_0225aa74(param_1 + 8,param_2,auStack_18);
  }
  return;
}


