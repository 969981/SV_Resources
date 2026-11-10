/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03405410; name: FUN_03405410
 */


void FUN_03405410(undefined8 *param_1,ulong *param_2,long param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  uint *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  
  iVar8 = *(int *)(param_1 + 2);
  if (0 < iVar8) {
    iVar4 = 0;
    if (iVar8 != 0) {
      iVar4 = param_4 / iVar8;
    }
    lVar6 = 0;
    do {
      *(long *)(param_1[4] + lVar6 * 8) = param_3;
      lVar6 = lVar6 + 1;
      param_3 = param_3 + iVar4;
    } while (lVar6 < *(int *)(param_1 + 2));
  }
  puVar7 = (uint *)(*param_2 & 0xfffffffffffffffc);
  *param_1 = puVar7;
  uVar9 = *param_2 & 3;
  *(char *)(param_1 + 1) = (char)uVar9;
  iVar8 = (int)param_2[1] + (int)uVar9;
  *(int *)((long)param_1 + 0xc) = iVar8;
  bVar5 = (byte)(uVar9 << 3);
  *(byte *)(param_1 + 1) = bVar5;
  uVar2 = *puVar7;
  *param_1 = puVar7;
  iVar4 = *(int *)((long)param_1 + 0x3c);
  lVar6 = param_1[3];
  *(int *)((long)param_1 + 0xc) = iVar8;
  *(byte *)(param_1 + 1) = bVar5 | 1;
  *(int *)(param_1 + 7) = iVar4;
  uVar9 = (ulong)(uVar2 >> (uVar9 << 3)) & 1;
  *(uint *)((long)param_1 + 0x3c) = (uint)*(byte *)(*(long *)(lVar6 + 0x20) + uVar9 * 2);
  uVar2 = *(uint *)(lVar6 + (long)iVar4 * 4);
  if (*(char *)(param_1 + 9) == '\0') {
    uVar1 = uVar2 + 3;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    lVar10 = 0;
    do {
      memcpy(*(void **)(param_1[5] + lVar10 * 8),
             (void *)(*(long *)(param_1[4] + lVar10 * 8) +
                     ((long)((ulong)uVar1 << 0x20) >> 0x22) * 4),(ulong)(uVar1 & 0xfffffffc));
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 2));
    *(undefined1 *)(param_1 + 9) = 1;
  }
  iVar8 = *(int *)(param_1 + 6);
  *(undefined4 *)(param_1 + 6) = 0;
  if (iVar8 == -1) {
    *(undefined4 *)((long)param_1 + 0x34) = 0;
    iVar8 = *(int *)(lVar6 + 4);
    if (iVar8 < 0) {
      iVar8 = iVar8 + 1;
    }
    if ((uint)(iVar8 >> 1) <= *(uint *)(param_1 + 8)) {
      return;
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 8);
    iVar4 = *(int *)(lVar6 + (long)*(int *)((long)param_1 + 0x3c) * 4);
    uVar1 = uVar2 + 3;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    iVar3 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    iVar4 = (iVar3 >> 2) + ((int)uVar1 >> 2);
    *(int *)((long)param_1 + 0x34) = iVar4;
    if (iVar8 != 0) {
      uVar2 = iVar8 - iVar4;
      *(int *)(param_1 + 6) = iVar8;
      if (uVar2 == 0 || iVar8 < iVar4) {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      else {
        *(int *)(param_1 + 6) = iVar4;
        *(uint *)(param_1 + 8) = uVar2;
        iVar3 = *(int *)(lVar6 + 4);
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar8 = iVar4;
        if ((uint)(iVar3 >> 1) <= uVar2) {
          return;
        }
      }
    }
    if ((char)param_2[2] != '\0') {
      iVar4 = iVar4 - *(int *)((long)param_1 + 0x44);
      if (iVar8 <= iVar4) {
        iVar8 = iVar4;
      }
      *(int *)((long)param_1 + 0x34) = iVar8;
    }
  }
  FUN_0340bbf0(param_1,*(long *)(lVar6 + 0x28) +
                       (ulong)*(byte *)(*(long *)(lVar6 + 0x20) + uVar9 * 2 + 1) * 0x28);
  return;
}


