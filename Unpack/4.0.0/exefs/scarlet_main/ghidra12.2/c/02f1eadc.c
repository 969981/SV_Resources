/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f1eadc; name: FUN_02f1eadc
 */


void FUN_02f1eadc(long param_1,ushort param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong *puVar11;
  long *plVar12;
  ulong *puVar13;
  ulong *puVar14;
  
  puVar11 = (ulong *)(param_1 + 0x30);
  plVar6 = (long *)(*puVar11 & 0xfffffffffffffffc);
  if (plVar6 != (long *)0x0) {
    *puVar11 = (ulong)plVar6 | 1;
    puVar13 = puVar11;
    do {
      puVar14 = (ulong *)(plVar6 + 1);
      plVar12 = (long *)(*puVar14 & 0xfffffffffffffffc);
      if ((*puVar14 & 3) == 0) {
        (**(code **)(*plVar6 + 0x20))(plVar6,param_1,param_2);
      }
      else {
        (**(code **)(*plVar6 + 8))();
        *puVar13 = *puVar13 & 3 | (ulong)plVar12;
        puVar14 = puVar13;
      }
      plVar6 = plVar12;
      puVar13 = puVar14;
    } while (plVar12 != (long *)0x0);
    *puVar11 = *puVar11 & 0xfffffffffffffffc;
  }
  uVar10 = (ulong)param_2;
  uVar9 = (uint)param_2;
  if (*(int *)(param_1 + 0x48) <= (int)uVar9) {
    return;
  }
  puVar7 = (undefined4 *)(*(long *)(param_1 + 0x40) + uVar10 * 0x70);
  if (*(char *)(puVar7 + 0xe) == -1) {
    return;
  }
  *puVar7 = 0;
  FUN_00cb4dc0(0x411cf5c3,puVar7,1);
  *(char *)(puVar7 + 0xe) = -1;
  uVar3 = *(uint *)(param_1 + 0x5c);
  uVar8 = uVar3 & 0xffffff;
  if (uVar8 == 0xffffff) {
    uVar8 = 0xffffffff;
  }
  *(uint *)(*(long *)(param_1 + 0x40) + uVar10 * 0x70) = uVar8;
  puVar1 = (uint *)(param_1 + 0x5c);
  uVar8 = *puVar1;
  if (uVar8 == uVar3) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 & 0xff000000 | uVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_02f1ec78;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    uVar3 = uVar8 & 0xffffff;
    if (uVar3 == 0xffffff) {
      uVar3 = 0xffffffff;
    }
    *(uint *)(*(long *)(param_1 + 0x40) + uVar10 * 0x70) = uVar3;
    uVar3 = *puVar1;
    if (uVar3 == uVar8) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar8 & 0xff000000 | uVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02f1ec6c;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_02f1ec6c:
      bVar5 = false;
    }
    uVar8 = uVar3;
  } while (!bVar5);
LAB_02f1ec78:
  piVar2 = (int *)(param_1 + 0x60);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = *piVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  return;
}


