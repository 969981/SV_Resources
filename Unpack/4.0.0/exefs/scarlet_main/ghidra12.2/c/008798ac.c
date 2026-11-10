/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008798ac; name: FUN_008798ac
 */


void FUN_008798ac(long param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  
  if (*param_2 == 0) {
    return;
  }
  uVar7 = 0;
LAB_00879900:
  plVar8 = *(long **)(*(long *)(param_2 + 4) + uVar7 * 8);
  uVar1 = *(uint *)(param_1 + 0x510);
  uVar2 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    plVar3 = *(long **)(param_1 + 0x508);
    uVar5 = 0;
    lVar6 = 0x168;
    lVar4 = *plVar8;
    do {
      if (plVar3[uVar5] == lVar4) {
        if (((uint)uVar5 < uVar1) && (*(long *)(*(long *)(param_1 + 0x500) + lVar6) != lVar4)) {
          uVar5 = uVar2;
          goto LAB_0087996c;
        }
        if ((uint)uVar5 < uVar1) goto LAB_008798f0;
        break;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x170;
    } while (uVar2 != uVar5);
  }
  goto joined_r0x008799c0;
  while( true ) {
    plVar3 = plVar3 + 1;
    uVar5 = uVar5 - 1;
    if (uVar5 == 0) break;
LAB_0087996c:
    if (*plVar3 == lVar4) {
      *plVar3 = -1;
      uVar1 = *(uint *)(param_1 + 0x510);
      uVar2 = (ulong)uVar1;
      break;
    }
  }
joined_r0x008799c0:
  if (uVar1 == 0) {
    uVar5 = 0;
    uVar1 = 0;
LAB_008799c8:
    if ((uint)uVar5 < uVar1) {
      *(long *)(*(long *)(param_1 + 0x508) + (uVar5 & 0xffffffff) * 8) = *plVar8;
      lVar6 = *(long *)(param_1 + 0x500) + (uVar5 & 0xffffffff) * 0x170;
      memset((void *)(lVar6 + 4),0,0x160);
      *(long *)(lVar6 + 0x168) = *plVar8;
      *(int *)(param_1 + 0x514) = *(int *)(param_1 + 0x514) + 1;
    }
  }
  else {
    uVar1 = (uint)uVar2;
    uVar5 = 0;
    plVar3 = (long *)(*(long *)(param_1 + 0x500) + 0x168);
    do {
      if (*plVar3 == -1) goto LAB_008799c8;
      uVar5 = uVar5 + 1;
      plVar3 = plVar3 + 0x2e;
    } while (uVar2 != uVar5);
  }
LAB_008798f0:
  uVar7 = uVar7 + 1;
  if (*param_2 <= uVar7) {
    return;
  }
  goto LAB_00879900;
}


