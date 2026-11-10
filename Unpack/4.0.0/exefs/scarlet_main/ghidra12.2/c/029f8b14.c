/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029f8b14; name: FUN_029f8b14
 */


void FUN_029f8b14(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  void *__dest;
  void *__src;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  void *__src_00;
  long lVar15;
  void *__dest_00;
  int iVar16;
  
  FUN_0229a214();
  param_1[0x110] = 1;
  *param_1 = *param_2;
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar14;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  if (param_1 != param_2) {
    uVar4 = *(uint *)(param_2 + 0x90);
    lVar15 = *(long *)(param_2 + 0x88);
    if ((int)(*(uint *)(param_1 + 0x94) & 0x7fffffff) < (int)uVar4) {
      FUN_029f8de4(param_1 + 0x88,(long)(int)uVar4);
    }
    uVar5 = *(uint *)(param_1 + 0x90);
    lVar10 = *(long *)(param_1 + 0x88);
    uVar2 = uVar5;
    if ((int)uVar4 <= (int)uVar5) {
      uVar2 = uVar4;
    }
    if ((lVar10 != lVar15) && (0 < (int)uVar2)) {
      uVar12 = (ulong)uVar2;
      puVar13 = (undefined8 *)(lVar15 + 0x10);
      puVar11 = (undefined8 *)(lVar10 + 0x10);
      do {
        uVar14 = puVar13[-2];
        puVar11[-1] = puVar13[-1];
        puVar11[-2] = uVar14;
        puVar11[1] = puVar13[1];
        uVar14 = *puVar13;
        puVar1 = puVar13 + 2;
        uVar12 = uVar12 - 1;
        puVar13 = puVar13 + 6;
        puVar11[2] = *puVar1;
        *puVar11 = uVar14;
        puVar11 = puVar11 + 6;
      } while (uVar12 != 0);
      lVar10 = *(long *)(param_1 + 0x88);
    }
    if ((int)uVar5 < (int)uVar4) {
      __src_00 = (void *)(lVar15 + (long)(int)uVar2 * 0x30);
      __dest_00 = (void *)(lVar10 + (long)(int)uVar2 * 0x30);
      if (uVar4 != uVar2 + 1) {
        iVar16 = -(uVar4 - uVar2 & 0xfffffffe);
        do {
          memcpy(__dest_00,__src_00,0x30);
          __dest = (void *)((long)__dest_00 + 0x30);
          __src = (void *)((long)__src_00 + 0x30);
          __dest_00 = (void *)((long)__dest_00 + 0x60);
          __src_00 = (void *)((long)__src_00 + 0x60);
          memcpy(__dest,__src,0x30);
          iVar16 = iVar16 + 2;
        } while (iVar16 != 0);
      }
      if ((uVar4 - uVar2 & 1) != 0) {
        memcpy(__dest_00,__src_00,0x30);
      }
    }
    *(uint *)(param_1 + 0x90) = uVar4;
  }
  uVar14 = *(undefined8 *)(param_2 + 0x98);
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0x98) = uVar14;
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  uVar14 = *(undefined8 *)(param_2 + 0xb0);
  plVar8 = *(long **)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 0xd0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = uVar14;
  uVar14 = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = uVar14;
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  plVar9 = *(long **)(param_2 + 0xf8);
  if (plVar8 != plVar9) {
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar9 = plVar9 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = *plVar9 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar8 = *(long **)(param_1 + 0xf8);
      plVar9 = *(long **)(param_2 + 0xf8);
    }
    *(long **)(param_1 + 0xf8) = plVar9;
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar9 = plVar8 + 2;
      do {
        lVar15 = *plVar9;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = lVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))();
      }
    }
  }
  plVar8 = *(long **)(param_1 + 0x100);
  plVar9 = *(long **)(param_2 + 0x100);
  if (plVar8 != plVar9) {
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar9 = plVar9 + 2;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = *plVar9 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      plVar8 = *(long **)(param_1 + 0x100);
      plVar9 = *(long **)(param_2 + 0x100);
    }
    *(long **)(param_1 + 0x100) = plVar9;
    if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
      plVar9 = plVar8 + 2;
      do {
        lVar15 = *plVar9;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = lVar15 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (lVar15 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x029f8dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x18))();
        return;
      }
    }
  }
  return;
}


