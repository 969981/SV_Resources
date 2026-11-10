/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01edc2a8; name: FUN_01edc2a8
 */


void FUN_01edc2a8(long param_1,long param_2)

{
  int *__dest;
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_1d0 [400];
  
  iVar3 = *(int *)(param_2 + 8);
  __dest = (int *)(param_1 + 0x7d50);
  piVar4 = __dest;
  do {
    if (*piVar4 == iVar3 && (char)piVar4[1] == *(char *)(param_2 + 0x13)) {
LAB_01edc324:
      if (piVar4 != (int *)(param_1 + 0x7ee0)) {
        return;
      }
      break;
    }
    if ((piVar4[2] == iVar3) && ((char)piVar4[3] == *(char *)(param_2 + 0x13))) {
      piVar4 = piVar4 + 2;
      goto LAB_01edc324;
    }
    piVar4 = piVar4 + 4;
  } while (piVar4 != (int *)(param_1 + 0x7ee0));
  FUN_020efca8(__dest,iVar3);
  uVar2 = 2;
  if (*__dest != iVar3) {
    uVar2 = 1;
  }
  uVar1 = (ulong)(*__dest == iVar3);
  if (*(int *)(param_1 + 0x7d58) == iVar3) {
    uVar1 = uVar2;
  }
  if (*(int *)(param_1 + 0x7d60) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7d68) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7d70) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7d78) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7d80) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7d88) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7d90) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7d98) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7da0) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7da8) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7db0) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7db8) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7dc0) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7dc8) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7dd0) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7dd8) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7de0) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7de8) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7df0) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7df8) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e00) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e08) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e10) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e18) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e20) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e28) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e30) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e38) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e40) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e48) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e50) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e58) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e60) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e68) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e70) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e78) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e80) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e88) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e90) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7e98) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7ea0) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7ea8) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7eb0) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7eb8) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7ec0) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7ec8) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7ed0) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)(param_1 + 0x7ed8) == iVar3) {
    uVar1 = uVar1 + 1;
  }
  if (*(byte *)(param_2 + 0x12) <= uVar1) {
    memset(auStack_1d0,0,400);
    puVar5 = (undefined1 *)(param_1 + 0x7edc);
    lVar6 = -400;
    do {
      if (*(int *)(puVar5 + -4) != iVar3) {
        FUN_020efca8(auStack_1d0,*(int *)(puVar5 + -4),*puVar5);
      }
      puVar5 = puVar5 + -8;
      lVar6 = lVar6 + 8;
    } while (lVar6 != 0);
    memcpy(__dest,auStack_1d0,400);
  }
  return;
}


