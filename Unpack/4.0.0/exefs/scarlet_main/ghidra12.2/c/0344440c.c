/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0344440c; name: FUN_0344440c
 */


void FUN_0344440c(long param_1,long *param_2,ulong param_3,char *param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  ulong *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  char *local_60;
  undefined8 auStack_58 [2];
  long local_48;
  
  lVar15 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
  nn::os::LockMutex((MutexType *)(lVar15 + 0x1e8));
  puVar5 = *(ulong **)(param_1 + 8);
  uVar14 = puVar5[2];
  if (((uVar14 != 0) && (*(long *)(*(long *)(uVar14 + 0x38) + 0x18) == 0)) &&
     (*(long *)(*(long *)(uVar14 + 0x38) + 0x20) == *(long *)(uVar14 + 0x40))) {
    uVar2 = (uint)puVar5[4];
    if (uVar2 != 0xffffffff) {
      iVar6 = *(uint *)(lVar15 + 0x2d8) - 1;
      lVar11 = *(long *)(lVar15 + 0x2d0);
      iVar9 = 0;
      iVar12 = iVar6;
      while( true ) {
        iVar4 = iVar12 - iVar9;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 1;
        }
        uVar1 = iVar9 + (iVar4 >> 1);
        puVar13 = *(ulong **)(lVar11 + (ulong)uVar1 * 8);
        if ((uint)puVar13[4] <= uVar2) break;
LAB_034444b0:
        iVar12 = uVar1 - 1;
LAB_034444c0:
        if (iVar12 < iVar9) goto LAB_0344452c;
      }
      if (uVar2 != (uint)puVar13[4]) {
LAB_034444bc:
        iVar9 = uVar1 + 1;
        goto LAB_034444c0;
      }
      if (*puVar13 < *puVar5) goto LAB_034444b0;
      if (*puVar5 < *puVar13) goto LAB_034444bc;
      if (puVar5[1] < puVar13[1]) goto LAB_034444b0;
      if (puVar13[1] < puVar5[1]) goto LAB_034444bc;
      puVar8 = (undefined8 *)((lVar11 + (ulong)*(uint *)(lVar15 + 0x2d8) * 8) - 8);
      puVar10 = (undefined8 *)(lVar11 + (ulong)uVar1 * 8);
      if (puVar10 < puVar8) {
        do {
          puVar7 = puVar10 + 1;
          *puVar10 = *puVar7;
          puVar10 = puVar7;
        } while (puVar7 < puVar8);
        iVar6 = *(int *)(lVar15 + 0x2d8) + -1;
      }
      *(int *)(lVar15 + 0x2d8) = iVar6;
LAB_0344452c:
      *(undefined4 *)(puVar5 + 4) = 0xffffffff;
    }
    cVar3 = *param_4;
    if ((param_3 & 1) != 0) {
      if ((*(byte *)(uVar14 + 0x48) & 1) == 0) {
        local_48 = uVar14 + 8;
        auStack_58[0] = *(undefined8 *)(*(long *)(uVar14 + 0x40) + 0x20);
        local_60 = param_4;
        (**(code **)(*param_2 + 0x40))(param_2,1,auStack_58,&local_60);
      }
      else {
        *param_4 = '\0';
      }
    }
    *(byte *)(uVar14 + 0x48) = *(byte *)(uVar14 + 0x48) | 1;
    if ((cVar3 == '\0') && (*param_4 != '\0')) {
      *param_4 = '\0';
    }
  }
  nn::os::UnlockMutex((MutexType *)(lVar15 + 0x1e8));
  return;
}


