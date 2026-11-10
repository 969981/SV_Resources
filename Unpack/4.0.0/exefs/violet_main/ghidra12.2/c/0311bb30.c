/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0311bb30; name: FUN_0311bb30
 */


void FUN_0311bb30(undefined8 *param_1,long param_2,long param_3,long param_4,long param_5,
                 byte param_6,undefined4 param_7)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uStack_68;
  
  lVar10 = tpidr_el0;
  lVar8 = *(long *)(lVar10 + 0x1000b8);
  if (lVar8 == 0) {
    lVar8 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar8;
  }
  plVar11 = *(long **)(lVar8 + 0x3e0);
  if (plVar11 != (long *)0x0) {
    lVar10 = *plVar11;
    if (*(code **)(lVar10 + 0x18) != (code *)0x0) {
      (**(code **)(lVar10 + 0x18))
                ("hkaiPathRequestsTasks::makeContext",0x22,*(undefined8 *)(lVar10 + 0x28));
    }
    puVar5 = (undefined8 *)plVar11[2];
    uVar9 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar11[3]) && (plVar11[2] = uVar9, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = "TthkaiPathRequestsTasks::makeContext";
      uVar4 = nn::os::GetSystemTick();
      puVar5[1] = uVar4;
    }
    if (((*(byte *)(lVar10 + 0x38) & 1) != 0) && (plVar11[6] != 0)) {
      puVar5 = (undefined8 *)plVar11[2];
      uVar9 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar11[3]) && (plVar11[2] = uVar9, puVar5 != (undefined8 *)0x0)) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(plVar11[6] + 8);
      }
    }
  }
  puVar3 = PTR_DAT_047d1a08;
  uStack_68 = 0x78;
  puVar5 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&uStack_68,0);
  if (*(code **)(puVar3 + 0x10) != (code *)0x0) {
    (**(code **)(puVar3 + 0x10))(puVar5,"Context");
  }
  memset(puVar5 + 3,0,0x60);
  puVar5[6] = 0;
  *puVar5 = &PTR_LAB_0464f3d0;
  puVar5[1] = 0xffffffff;
  puVar5[2] = 1;
  puVar5[9] = 0;
  puVar5[10] = 0x8000000000000000;
  plVar7 = puVar5 + 5;
  *plVar7 = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0x8000000000000000;
  *param_1 = puVar5;
  *(undefined4 *)(puVar5 + 3) = param_7;
  puVar5[4] = param_2;
  if ((param_3 == 0) || (*(long *)(param_3 + 8) == 0)) {
    *plVar7 = param_3;
  }
  else {
    plVar6 = (long *)(param_3 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar6 = (long *)*plVar7;
    *plVar7 = param_3;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar7 = plVar6 + 2;
      do {
        lVar10 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
  }
  if ((param_5 != 0) && (*(long *)(param_5 + 8) != 0)) {
    plVar7 = (long *)(param_5 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar7 = (long *)puVar5[6];
  puVar5[6] = param_5;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar6 = plVar7 + 2;
    do {
      lVar10 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar10 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  *(undefined4 *)(puVar5 + 7) = *(undefined4 *)(param_4 + 0x54);
  *(undefined4 *)((long)puVar5 + 0x3c) = *(undefined4 *)(param_4 + 0x4c);
  *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(param_4 + 0x50);
  uVar9 = *(ulong *)(param_2 + 0x80);
  *(byte *)(puVar5 + 0xe) = param_6 & 1;
  *(bool *)(puVar5 + 0xb) = 3 < uVar9;
  if (plVar11 != (long *)0x0) {
    lVar10 = *plVar11;
    if (((*(byte *)(lVar10 + 0x38) & 1) != 0) && (plVar11[6] != 0)) {
      puVar5 = (undefined8 *)plVar11[2];
      uVar9 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
      if ((uVar9 <= (ulong)plVar11[3]) && (plVar11[2] = uVar9, puVar5 != (undefined8 *)0x0)) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(plVar11[6] + 8);
      }
    }
    puVar5 = (undefined8 *)plVar11[2];
    uVar9 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar9 <= (ulong)plVar11[3]) && (plVar11[2] = uVar9, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = &DAT_03c2d363;
      uVar4 = nn::os::GetSystemTick();
      puVar5[1] = uVar4;
    }
    if (*(code **)(lVar10 + 0x20) != (code *)0x0) {
      (**(code **)(lVar10 + 0x20))(*(undefined8 *)(lVar10 + 0x28));
    }
  }
  return;
}


