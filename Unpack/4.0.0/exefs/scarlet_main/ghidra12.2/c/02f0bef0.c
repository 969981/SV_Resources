/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f0bef0; name: FUN_02f0bef0
 */


void FUN_02f0bef0(long param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  long *plVar4;
  uint *puVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  
  puVar5 = (uint *)(*(long *)(param_1 + 0x38) + (long)(int)param_2 * 0x38 + 0x1c);
  lVar10 = (long)(int)param_2;
  if (*puVar5 != 0) {
    iVar8 = *(int *)(*(long *)(param_1 + 0x38) + lVar10 * 0x38 + 0x18);
    uVar6 = 0;
    do {
      lVar9 = *(long *)(param_1 + 8) + (long)iVar8 * 0x68;
      iVar8 = *(int *)(lVar9 + 0x38);
      *(undefined4 *)(lVar9 + 0x34) = 0x7fffffff;
      *(undefined4 *)(lVar9 + 0x38) = *(undefined4 *)(lVar9 + 0x30);
      *(undefined4 *)(lVar9 + 0x3c) = *(undefined4 *)(lVar9 + 0x30);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *puVar5);
  }
  if (*(int *)(param_1 + 0x40) <= (int)param_2) {
    return;
  }
  lVar9 = *(long *)(param_1 + 0x38);
  if (*(int *)(lVar9 + lVar10 * 0x38 + 0x14) == 0x7fffffff) {
    return;
  }
  plVar4 = *(long **)(lVar9 + lVar10 * 0x38 + 0x28);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
    lVar9 = *(long *)(param_1 + 0x38);
  }
  *(undefined4 *)(lVar9 + lVar10 * 0x38 + 0x14) = 0x7fffffff;
  uVar2 = *(uint *)(param_1 + 0x54);
  uVar6 = uVar2 & 0xffffff;
  if (uVar6 == 0xffffff) {
    uVar6 = 0xffffffff;
  }
  puVar5 = (uint *)(param_1 + 0x54);
  *(uint *)(*(long *)(param_1 + 0x38) + lVar10 * 0x38 + 0x18) = uVar6;
  uVar6 = *puVar5;
  if (uVar6 == uVar2) {
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar7) {
      *puVar5 = uVar2 & 0xff000000 | param_2 & 0xffffff;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      bVar7 = true;
      goto LAB_02f0c00c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  bVar7 = false;
LAB_02f0c00c:
  if (!bVar7) {
    do {
      uVar2 = uVar6 & 0xffffff;
      if (uVar2 == 0xffffff) {
        uVar2 = 0xffffffff;
      }
      *(uint *)(*(long *)(param_1 + 0x38) + lVar10 * 0x38 + 0x18) = uVar2;
      uVar2 = *puVar5;
      if (uVar2 == uVar6) {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar5,0x10);
        if (bVar7) {
          *puVar5 = uVar6 & 0xff000000 | param_2 & 0xffffff;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02f0c05c;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02f0c05c:
        bVar7 = false;
      }
      uVar6 = uVar2;
    } while (!bVar7);
  }
  piVar1 = (int *)(param_1 + 0x58);
  do {
    cVar3 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = *piVar1 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return;
}


