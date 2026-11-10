/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004fbbcc; name: FUN_004fbbcc
 */


void FUN_004fbbcc(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined1 *local_18;
  
  if (*(char *)(param_1 + 0x70) == '\n') {
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x90);
    if (*(char *)(param_1 + 0x70) == '\t') {
      uVar2 = uVar3 + 7;
      if (-1 < (int)uVar3) {
        uVar2 = uVar3;
      }
      iVar5 = (uVar2 & 0xfffffff8) + 8;
    }
    else {
      iVar5 = uVar3 + 1;
    }
    *(int *)(param_1 + 0x90) = iVar5;
  }
  piVar7 = (int *)(param_1 + 0x80);
  iVar5 = *piVar7;
  lVar1 = (long)*(int *)(param_1 + 0x84) + 1;
  iVar6 = (int)lVar1;
  *(int *)(param_1 + 0x84) = iVar6;
  if (iVar6 < iVar5) {
    *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(*(long *)(param_1 + 0x78) + lVar1);
    return;
  }
  if (*(char *)(param_1 + 0x88) != '\0') {
    *(undefined1 *)(param_1 + 0x70) = 0;
    return;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    iVar6 = *(int *)(param_1 + 0xa0);
    if (iVar6 < iVar5) {
      FUN_0021d540(*(long *)(param_1 + 0x98),*(long *)(param_1 + 0x78) + (long)iVar6,
                   (long)(iVar5 - iVar6));
      *(undefined4 *)(param_1 + 0xa0) = 0;
    }
  }
  local_18 = (undefined1 *)0x0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  do {
    uVar4 = (**(code **)(**(long **)(param_1 + 0x60) + 0x10))
                      (*(long **)(param_1 + 0x60),&local_18,piVar7);
    if ((uVar4 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x80) = 0;
      *(undefined1 *)(param_1 + 0x88) = 1;
      *(undefined1 *)(param_1 + 0x70) = 0;
      return;
    }
  } while (*piVar7 == 0);
  *(undefined1 **)(param_1 + 0x78) = local_18;
  *(undefined1 *)(param_1 + 0x70) = *local_18;
  return;
}


