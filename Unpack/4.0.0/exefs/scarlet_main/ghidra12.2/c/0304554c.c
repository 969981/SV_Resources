/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0304554c; name: FUN_0304554c
 */


void FUN_0304554c(long *param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  long *plVar9;
  ulong *puVar10;
  
  *param_1 = (long)(PTR_DAT_047e4a28 + 0x10);
  lVar6 = param_1[7];
  if (lVar6 != 0) {
    plVar5 = (long *)(*(ulong *)(lVar6 + 0x788) & 0xfffffffffffffffc);
    if (plVar5 != (long *)0x0) {
      puVar10 = (ulong *)(lVar6 + 0x788);
      do {
        puVar7 = (ulong *)(plVar5 + 1);
        plVar9 = (long *)(*puVar7 & 0xfffffffffffffffc);
        if ((long *)plVar5[2] == param_1) {
          if ((*(byte *)(lVar6 + 0x788) & 3) == 0) {
            *puVar10 = *puVar10 & 3 | (ulong)plVar9;
            (**(code **)(*plVar5 + 8))();
            puVar7 = puVar10;
          }
          else {
            *puVar7 = (ulong)plVar9 | 1;
          }
        }
        plVar5 = plVar9;
        puVar10 = puVar7;
      } while (plVar9 != (long *)0x0);
      lVar6 = param_1[7];
    }
    plVar5 = (long *)(*(ulong *)(lVar6 + 0x790) & 0xfffffffffffffffc);
    if (plVar5 != (long *)0x0) {
      puVar10 = (ulong *)(lVar6 + 0x790);
      do {
        puVar7 = (ulong *)(plVar5 + 1);
        plVar9 = (long *)(*puVar7 & 0xfffffffffffffffc);
        if ((long *)plVar5[2] == param_1) {
          if ((*(byte *)(lVar6 + 0x790) & 3) == 0) {
            *puVar10 = *puVar10 & 3 | (ulong)plVar9;
            (**(code **)(*plVar5 + 8))();
            puVar7 = puVar10;
          }
          else {
            *puVar7 = (ulong)plVar9 | 1;
          }
        }
        plVar5 = plVar9;
        puVar10 = puVar7;
      } while (plVar9 != (long *)0x0);
      lVar6 = param_1[7];
    }
    plVar5 = (long *)(*(ulong *)(lVar6 + 0x6a0) & 0xfffffffffffffffc);
    if (plVar5 != (long *)0x0) {
      puVar10 = (ulong *)(lVar6 + 0x6a0);
      do {
        puVar7 = (ulong *)(plVar5 + 1);
        plVar9 = (long *)(*puVar7 & 0xfffffffffffffffc);
        if ((long *)plVar5[2] == param_1) {
          if ((*(byte *)(lVar6 + 0x6a0) & 3) == 0) {
            *puVar10 = *puVar10 & 3 | (ulong)plVar9;
            (**(code **)(*plVar5 + 8))();
            puVar7 = puVar10;
          }
          else {
            *puVar7 = (ulong)plVar9 | 1;
          }
        }
        plVar5 = plVar9;
        puVar10 = puVar7;
      } while (plVar9 != (long *)0x0);
    }
    param_1[7] = 0;
  }
  plVar5 = (long *)param_1[6];
  *param_1 = (long)(PTR_DAT_047e4ea8 + 0x10);
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar9 = plVar5 + 2;
    do {
      lVar6 = *plVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  if (0 < (int)*(uint *)((long)param_1 + 0x2c)) {
    lVar8 = 0;
    lVar6 = (ulong)*(uint *)((long)param_1 + 0x2c) + 1;
    do {
      plVar5 = (long *)(param_1[4] + lVar8);
      if (*plVar5 != -1 && plVar5[1] != -1) {
        *plVar5 = -1;
        plVar5[1] = -1;
      }
      lVar6 = lVar6 + -1;
      lVar8 = lVar8 + 0x18;
    } while (lVar6 != 0);
  }
  uVar1 = *(uint *)(param_1 + 5);
  *(uint *)(param_1 + 5) = uVar1 & 0x80000000;
  if ((-1 < (int)uVar1) && (param_1[4] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[4],(long)*(int *)((long)param_1 + 0x2c) * 0x18 + 0x18);
  }
  puVar4 = PTR_DAT_047d1a00;
  param_1[4] = 0;
  param_1[5] = -0x100000000;
  *param_1 = (long)(puVar4 + 0x10);
  return;
}


