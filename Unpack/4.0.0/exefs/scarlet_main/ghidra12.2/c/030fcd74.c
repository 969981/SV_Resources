/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030fcd74; name: FUN_030fcd74
 */


void FUN_030fcd74(long param_1,int param_2)

{
  undefined4 *puVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  int *piVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined *local_108;
  undefined1 local_100;
  long local_f8;
  long lStack_f0;
  int local_e8;
  long local_e0;
  undefined4 *puStack_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70 [2];
  
  lVar13 = *(long *)(param_1 + 0xb0);
  piVar7 = (int *)(lVar13 + (long)param_2 * 0x60);
  iVar6 = *piVar7;
  lVar2 = (long)piVar7[1];
  lVar15 = *(long *)(param_1 + 0xa0);
  lVar11 = *(long *)(param_1 + 0x90);
  local_70[0] = (undefined *)0x1;
  local_80 = PTR_DAT_047e51e0 + 0x10;
  local_78 = 0xffffffff;
  ppuVar12 = *(undefined ***)(param_1 + 400);
  if (ppuVar12 == (undefined **)0x0) {
    ppuVar8 = local_70;
    ppuVar12 = &local_80;
  }
  else {
    if (ppuVar12[1] == (undefined *)0x0) goto LAB_030fce04;
    ppuVar8 = ppuVar12 + 2;
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
    if (bVar4) {
      *ppuVar8 = *ppuVar8 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_030fce04:
  if (ppuVar12[1] != (undefined *)0x0) {
    ppuVar8 = ppuVar12 + 2;
    do {
      puVar9 = *ppuVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
      if (bVar4) {
        *ppuVar8 = puVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar9 + -1 == (undefined *)0x0) {
      (**(code **)(*ppuVar12 + 0x18))(ppuVar12);
    }
  }
  if (*(char *)(lVar13 + (long)param_2 * 0x60 + 8) != '\0') {
    local_c8 = 0xffffffff;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = PTR_DAT_047e4fa0 + 0x10;
    puVar10 = (undefined8 *)(lVar15 + (long)iVar6 * 0x60);
    local_b0 = *puVar10;
    lVar13 = lVar13 + (long)param_2 * 0x60;
    lVar16 = lVar11 + lVar2 * 0xd0;
    puVar14 = (undefined8 *)(lVar13 + 0x10);
    uStack_98 = *(undefined8 *)(lVar13 + 0x18);
    local_a0 = *puVar14;
    uStack_88 = *(undefined8 *)(lVar13 + 0x28);
    local_90 = *(undefined8 *)(lVar13 + 0x20);
    piVar7 = (int *)(lVar16 + 0xc0);
    iVar6 = *piVar7;
    lVar15 = (long)iVar6;
    if ((int)(*(uint *)(lVar16 + 0xc4) & 0x7fffffff) <= iVar6) {
      FUN_030fdd38((long *)(lVar16 + 0xb8),lVar15 + 1);
      iVar6 = *piVar7;
    }
    puVar1 = (undefined4 *)(*(long *)(lVar16 + 0xb8) + (long)iVar6 * 0x40);
    *piVar7 = (int)(lVar15 + 1);
    *(undefined8 *)(puVar1 + 0xc) = 0;
    *(undefined8 *)(puVar1 + 0xe) = 0x8000000000000000;
    if (*(int *)(param_1 + 0x188) < 1) {
      uVar17 = 0x3f800000;
    }
    else {
      uVar17 = (**(code **)(*ppuVar12 + 0x28))(ppuVar12,*puVar10,puVar14,param_1 + 0x150);
    }
    *puVar1 = uVar17;
    uVar18 = *puVar14;
    *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(lVar13 + 0x18);
    *(undefined8 *)(puVar1 + 4) = uVar18;
    uVar18 = *(undefined8 *)(lVar13 + 0x20);
    *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(lVar13 + 0x28);
    *(undefined8 *)(puVar1 + 8) = uVar18;
    local_100 = 0;
    local_108 = &DAT_0464dd78;
    local_f8 = *(long *)(param_1 + 0xb0);
    lStack_f0 = local_f8 + (long)*(int *)(param_1 + 0xb8) * 0x60;
    plVar5 = *(long **)(lVar11 + lVar2 * 0xd0 + 0x10);
    local_e8 = param_2;
    local_e0 = lVar11 + lVar2 * 0xd0;
    puStack_d8 = puVar1;
    (**(code **)(*plVar5 + 0x48))(plVar5,&local_d0,&local_108);
  }
  return;
}


