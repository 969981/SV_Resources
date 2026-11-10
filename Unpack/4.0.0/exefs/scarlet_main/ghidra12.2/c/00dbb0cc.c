/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dbb0cc; name: FUN_00dbb0cc
 */


void FUN_00dbb0cc(void *param_1,uint param_2,undefined4 param_3,long param_4,uint param_5)

{
  undefined2 *puVar1;
  void *__dest;
  void *__src;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  short sVar5;
  undefined2 uVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  undefined8 *puVar11;
  undefined8 *puVar10;
  long lVar12;
  long *plVar13;
  undefined4 *puVar14;
  int iVar15;
  void *__dest_00;
  long *plVar16;
  undefined8 local_68;
  
  puVar10 = (undefined8 *)PTR_DAT_047d1a08;
  local_68 = 0x50;
  plVar7 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
  if (*(code **)((long)puVar10 + 0x10) != (code *)0x0) {
    (**(code **)((long)puVar10 + 0x10))(plVar7,"StepCharactersTask");
  }
  plVar16 = plVar7 + 2;
  *plVar16 = 1;
  *(undefined4 *)(plVar7 + 5) = 0;
  *plVar7 = (long)&PTR_LAB_04612b78;
  plVar7[1] = 0xffffffff;
  plVar7[4] = (long)&PTR_LAB_04612bb8;
  plVar8 = plVar7 + 6;
  *plVar8 = 0;
  plVar7[7] = -0x8000000000000000;
  *(char *)(plVar7 + 8) = (char)param_5;
  plVar7[9] = 0;
  if ((int)param_2 < 1) {
    *(uint *)(plVar7 + 7) = param_2;
  }
  else {
    FUN_02ffec98(plVar8,param_2);
    __dest_00 = (void *)*plVar8;
    if (param_2 - 1 != 0) {
      iVar15 = -(param_2 & 0xfffffffe);
      do {
        memcpy(__dest_00,param_1,0x30);
        __dest = (void *)((long)__dest_00 + 0x30);
        __src = (void *)((long)param_1 + 0x30);
        __dest_00 = (void *)((long)__dest_00 + 0x60);
        param_1 = (void *)((long)param_1 + 0x60);
        memcpy(__dest,__src,0x30);
        iVar15 = iVar15 + 2;
      } while (iVar15 != 0);
      puVar10 = (undefined8 *)PTR_DAT_047d1a08;
    }
    if ((param_2 & 1) != 0) {
      memcpy(__dest_00,param_1,0x30);
    }
    *(uint *)(plVar7 + 7) = param_2;
    if (1 < (int)param_2) {
      FUN_02ffee30(*plVar8,0,param_2 - 1);
    }
  }
  if ((param_5 >> 2 & 1) == 0) {
    sVar5 = -1;
  }
  else {
    local_68 = 0x40;
    plVar8 = (long *)(*(code *)*puVar10)(0,&local_68,0);
    if ((code *)puVar10[2] != (code *)0x0) {
      (*(code *)puVar10[2])(plVar8,"ApplyAllDeferredUpdatesTask");
    }
    lVar12 = plVar7[6];
    iVar15 = (int)plVar7[7];
    plVar13 = plVar8 + 2;
    *plVar13 = 1;
    *plVar8 = (long)&PTR_LAB_04612c18;
    plVar8[1] = 0xffffffff;
    plVar8[4] = (long)&PTR_LAB_04612c58;
    plVar8[5] = lVar12;
    plVar8[6] = 0;
    plVar8[7] = -0x8000000000000000;
    if (iVar15 < 1) {
      iVar9 = 0;
    }
    else {
      FUN_02fff6cc(plVar8 + 6,iVar15);
      iVar9 = (int)plVar8[7];
    }
    if (iVar9 < iVar15) {
      lVar12 = plVar8[6];
      *(int *)(plVar8 + 7) = iVar15;
      puVar10 = (undefined8 *)(lVar12 + (long)iVar9 * 0x10);
      do {
        puVar11 = puVar10 + 2;
        *puVar10 = 0;
        puVar10[1] = 0x8000000000000000;
        puVar10 = puVar11;
      } while (puVar11 != (undefined8 *)(lVar12 + (long)iVar15 * 0x10));
    }
    else if (iVar15 < iVar9) {
      *(int *)(plVar8 + 7) = iVar15;
      puVar4 = PTR_PTR_047d1a50;
      lVar12 = (long)iVar15 * 0x10 + (long)iVar9 * -0x10;
      puVar14 = (undefined4 *)(plVar8[6] + (long)iVar9 * 0x10 + -8);
      do {
        *puVar14 = 0;
        if ((-1 < (int)puVar14[1]) && (*(long *)(puVar14 + -2) != 0)) {
          (**(code **)(*(long *)puVar4 + 0x20))
                    (puVar4,*(long *)(puVar14 + -2),(ulong)(uint)puVar14[1] * 0x30);
        }
        *(undefined8 *)(puVar14 + -2) = 0;
        lVar12 = lVar12 + 0x10;
        puVar14[1] = 0x80000000;
        puVar14 = puVar14 + -4;
      } while (lVar12 != 0);
    }
    sVar5 = FUN_0323f360(param_4,plVar8,0x40);
    plVar7[9] = plVar8[6];
    if (plVar8[1] != 0) {
      do {
        lVar12 = *plVar13;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
  }
  uVar6 = FUN_0323f458(param_4,plVar7,param_3,1,0x40);
  if (plVar7[1] != 0) {
    do {
      lVar12 = *plVar16;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
  }
  if (sVar5 != -1) {
    iVar15 = *(int *)(param_4 + 0x330);
    lVar12 = (long)iVar15;
    if ((int)(*(uint *)(param_4 + 0x334) & 0x7fffffff) <= iVar15) {
      FUN_02e7f7cc(param_4 + 0x328,PTR_PTR_047d1a50,lVar12 + 1);
      iVar15 = *(int *)(param_4 + 0x330);
    }
    puVar1 = (undefined2 *)(*(long *)(param_4 + 0x328) + (long)iVar15 * 4);
    *(int *)(param_4 + 0x330) = (int)(lVar12 + 1);
    *puVar1 = uVar6;
    puVar1[1] = sVar5;
  }
  return;
}


