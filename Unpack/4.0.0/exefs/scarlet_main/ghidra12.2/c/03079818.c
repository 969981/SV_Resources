/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03079818; name: FUN_03079818
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03079818(long param_1,long param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  plVar1 = (long *)(param_1 + 0x38);
  if ((*(uint *)(param_1 + 0x44) & 0x7fffffff) == 0) {
    FUN_0307f25c(plVar1,1);
  }
  uVar2 = *(uint *)(param_1 + 0x40);
  if ((int)uVar2 < 1) {
    puVar14 = *(undefined8 **)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = 1;
    uVar11 = _UNK_03cabe68;
    uVar10 = _DAT_03cabe60;
    uVar9 = _UNK_03cabe58;
    uVar8 = _DAT_03cabe50;
    uVar7 = DAT_03cab628;
    uVar6 = DAT_03cab620;
    uVar5 = _UNK_03caa5b8;
    uVar4 = _DAT_03caa5b0;
    puVar16 = puVar14 + (long)(int)uVar2 * 0x20;
    do {
      *puVar16 = 0;
      puVar16[1] = 0;
      bVar12 = puVar16 != puVar14;
      puVar16[4] = 0;
      puVar16[0x18] = &DAT_03d7702c;
      *(undefined4 *)(puVar16 + 0x19) = 0;
      puVar16[0x1c] = &DAT_03d7702c;
      *(undefined4 *)(puVar16 + 0x1d) = 0;
      *(undefined1 *)(puVar16 + 0x1e) = 0;
      *(undefined1 *)(puVar16 + 0x12) = 0;
      puVar16[2] = 0;
      puVar16[3] = 0xffffffffffffffff;
      puVar16[0xe] = 0;
      puVar16[0xf] = 0;
      puVar16[0x10] = 0;
      puVar16[0x11] = 0;
      puVar16[0x16] = 0;
      puVar16[0x17] = 0x8000000000000000;
      puVar16[0x1a] = 0;
      puVar16[0x1b] = 0x8000000000000000;
      puVar16[0x14] = 0;
      puVar16[0x15] = 0;
      puVar16[7] = uVar7;
      puVar16[6] = uVar6;
      puVar16[9] = uVar11;
      puVar16[8] = uVar10;
      puVar16[0xb] = uVar5;
      puVar16[10] = uVar4;
      puVar16[0xd] = uVar9;
      puVar16[0xc] = uVar8;
      puVar16 = puVar16 + 0x20;
    } while (bVar12);
  }
  else if (uVar2 != 1) {
    lVar18 = (ulong)uVar2 - 1;
    lVar17 = *(long *)(param_1 + 0x38) + lVar18 * 0x100;
    *(undefined4 *)(param_1 + 0x40) = 1;
    do {
      FUN_0307e0e0(lVar17);
      lVar18 = lVar18 + -1;
      lVar17 = lVar17 + -0x100;
    } while (lVar18 != 0);
  }
  plVar15 = (long *)*plVar1;
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar13 = (long *)(param_2 + 0x10);
    do {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar12) {
        *plVar13 = *plVar13 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar13 = (long *)*plVar15;
  *plVar15 = param_2;
  if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
    plVar15 = plVar13 + 2;
    do {
      lVar17 = *plVar15;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar12) {
        *plVar15 = lVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar17 + -1 == 0) {
      (**(code **)(*plVar13 + 0x18))();
    }
  }
  lVar17 = *plVar1;
  if ((param_3 != 0) && (*(long *)(param_3 + 8) != 0)) {
    plVar15 = (long *)(param_3 + 0x10);
    do {
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar12) {
        *plVar15 = *plVar15 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar15 = *(long **)(lVar17 + 0x10);
  *(long *)(lVar17 + 0x10) = param_3;
  if ((plVar15 != (long *)0x0) && (plVar15[1] != 0)) {
    plVar13 = plVar15 + 2;
    do {
      lVar17 = *plVar13;
      cVar3 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar12) {
        *plVar13 = lVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar17 + -1 == 0) {
      (**(code **)(*plVar15 + 0x18))();
    }
  }
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + (long)*(int *)(*(long *)(param_2 + 0x20) + 0x180) * 4 + 0x60) =
         *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x20) + 0x68) + 0xb0);
    *(byte *)(*(long *)(param_1 + 0x38) + 0xf0) = *(byte *)(*(long *)(param_1 + 0x38) + 0xf0) | 1;
  }
  if (param_3 != 0) {
    *(byte *)(*plVar1 + 0xf0) = *(byte *)(*plVar1 + 0xf0) | 4;
  }
  return;
}


