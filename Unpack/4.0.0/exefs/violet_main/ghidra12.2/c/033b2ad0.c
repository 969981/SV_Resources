/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033b2ad0; name: FUN_033b2ad0
 */


void FUN_033b2ad0(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (-1 < *(int *)(param_1 + 0x24)) {
    lVar4 = 0;
    lVar7 = -1;
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar4) = 0xffffffffffffffff;
      lVar7 = lVar7 + 1;
      lVar4 = lVar4 + 0x18;
    } while (lVar7 < *(int *)(param_1 + 0x24));
  }
  uVar1 = *(uint *)(param_1 + 0x84);
  uVar5 = (ulong)uVar1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(uint *)(param_1 + 0x80) = uVar1;
  if (0x400 < (int)uVar1) {
    memmove(*(void **)(param_1 + 0x90),(void *)((long)*(void **)(param_1 + 0x90) + uVar5),
            (long)*(int *)(param_1 + 0x98) - (long)(int)uVar1);
    lVar7 = (long)*(int *)(param_1 + 0x98) - (long)*(int *)(param_1 + 0x80);
    if (*(int *)(param_1 + 0x80) != 0) {
      *(int *)(param_1 + 0x98) = (int)lVar7;
    }
    *(undefined1 *)(*(long *)(param_1 + 0x90) + lVar7) = 0;
    uVar1 = *(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80);
    uVar5 = (ulong)uVar1;
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) - (long)*(int *)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(uint *)(param_1 + 0x84) = uVar1;
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  while( true ) {
    for (pcVar6 = (char *)(*(long *)(param_1 + 0x90) + (long)(int)uVar5);
        pcVar6 < *(char **)(param_1 + 0x88); pcVar6 = pcVar6 + 1) {
      if (*pcVar6 == '\r' || *pcVar6 == '\n') {
        *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
        *(undefined4 *)(param_1 + 0xac) = 0;
      }
    }
    *(int *)(param_1 + 0x84) = (int)*(char **)(param_1 + 0x88) - (int)*(long *)(param_1 + 0x90);
    if ((*(byte *)(param_1 + 0xb0) & 1) == 0) {
      iVar2 = FUN_033b3c20(param_1 + 0x50);
    }
    else {
      iVar2 = FUN_033b38e0(param_1 + 0x50);
    }
    if (iVar2 != 4) break;
    uVar5 = (ulong)*(uint *)(param_1 + 0x84);
  }
  switch(iVar2) {
  case 0:
    uVar3 = FUN_033b2244(param_1);
    break;
  case 1:
    uVar3 = FUN_033b2844(param_1);
    break;
  case 2:
    uVar3 = 4;
    break;
  case 3:
    uVar3 = 5;
    break;
  default:
    uVar3 = 6;
    break;
  case 5:
    uVar3 = 7;
  }
  *(undefined4 *)(param_1 + 200) = uVar3;
  return;
}


