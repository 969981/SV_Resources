/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033bdde0; name: FUN_033bdde0
 */


void FUN_033bdde0(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  int *piVar16;
  void *pvVar17;
  uint uVar18;
  int local_80;
  undefined4 local_7c;
  float local_78 [5];
  int local_64;
  
  bVar10 = *(byte *)(param_1 + 0x20);
  if (((bVar10 >> 1 & 1) == 0) || (*PTR_DAT_047e6980 != '\0')) {
    if (*PTR_DAT_047e6980 != '\0') {
LAB_033bde88:
      *(byte *)(param_1 + 0x20) = bVar10 & 0xfd;
    }
    iVar6 = 0x2d;
  }
  else {
    plVar15 = *(long **)(param_1 + 0x58);
    iVar9 = *(int *)(param_1 + 0x68);
    iVar6 = (**(code **)(*plVar15 + 0x58))(plVar15,local_78);
    if (iVar6 - 0x2dU < 2) {
      uVar18 = (int)local_78[0] + iVar9;
      uVar7 = (**(code **)(*plVar15 + 0x60))(plVar15);
      if (uVar7 <= uVar18) goto LAB_033bde84;
      iVar6 = 0x2e;
    }
    else if (iVar6 == 0x11) {
LAB_033bde84:
      bVar10 = *(byte *)(param_1 + 0x20);
      goto LAB_033bde88;
    }
  }
  if ((*(byte *)(*(long *)(param_1 + 0x18) + 10) >> 6 & 1) != 0) {
    plVar15 = *(long **)(param_1 + 0x58);
    iVar9 = *(int *)(param_1 + 0x68);
    iVar8 = (**(code **)(*plVar15 + 0x58))(plVar15,&local_64);
    local_80 = 0;
    if (iVar8 == 2) {
      local_7c = 2;
    }
    else {
      (**(code **)(*plVar15 + 0x28))(plVar15,local_78);
      uVar18 = local_64 + iVar9;
      local_80 = (int)((float)uVar18 / local_78[0]);
      local_7c = 0x11;
      if (iVar8 != 0x11) {
        uVar7 = (**(code **)(*plVar15 + 0x60))(plVar15);
        local_7c = 0x11;
        if (uVar18 < uVar7) {
          local_7c = 1;
        }
      }
    }
    FUN_034b49fc(*(undefined8 *)PTR_DAT_047e6988,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x228),
                 param_1,&local_80);
  }
  if (iVar6 != 0x2d) {
    *(int *)(param_2 + 0x2c) = iVar6;
    return;
  }
  lVar14 = *(long *)(param_1 + 0x90);
  piVar16 = (int *)(lVar14 + 0x3c);
  if (*piVar16 == 0) {
    uVar18 = 0;
  }
  else {
    lVar11 = *(long *)(lVar14 + 0x30);
    uVar12 = (ulong)*(ushort *)(lVar14 + 0x3a);
    lVar13 = lVar11 + uVar12 * 0xf08;
    iVar9 = *(int *)(lVar13 + 0xf04);
    uVar18 = *(uint *)(lVar13 + 0xf00);
    if (iVar9 == 0) {
      pvVar17 = (void *)(lVar11 + uVar12 * 0xf08);
      uVar7 = *(int *)(lVar14 + 0x4c) * uVar18;
    }
    else {
      uVar18 = uVar18 - iVar9;
      pvVar17 = (void *)(lVar11 + uVar12 * 0xf08 +
                        (ulong)(uint)(*(int *)(lVar14 + 0x4c) * iVar9) * 2);
      uVar7 = *(int *)(lVar14 + 0x4c) * uVar18;
    }
    memcpy(*(void **)(param_1 + 0xd0),pvVar17,(ulong)uVar7 << 1);
    uVar7 = *(ushort *)(lVar14 + 0x3a) + 1;
    uVar1 = *(uint *)(lVar14 + 0x40);
    sVar5 = 0;
    if (uVar1 != 0) {
      sVar5 = (short)(uVar7 / uVar1);
    }
    *(short *)(lVar14 + 0x3a) = (short)uVar7 - sVar5 * (short)uVar1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
      if (bVar4) {
        *piVar16 = *piVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar14 = *(long *)(param_1 + 0x90);
  }
  if (*(int *)(lVar14 + 0x28) == *(int *)(lVar14 + 0x24)) {
    bVar4 = false;
LAB_033be010:
    if ((uVar18 != 0) || (bVar4)) {
LAB_033be124:
      nn::os::SignalEvent((EventType *)(PTR_DAT_047e6970 + 0xa38));
    }
    else if (*(char *)(*(long *)(param_1 + 0x90) + 0x54) != '\0') goto LAB_033be024;
    if (*(short *)(param_1 + 0x54) == 1) {
      uVar7 = *(uint *)(param_1 + 0x24);
    }
    else {
      uVar7 = *(int *)(param_1 + 0x38) + 1;
    }
    uVar1 = uVar7 - *(int *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x28) + (uVar18 & 0xffff) <= uVar7) {
      uVar1 = uVar18;
    }
    FUN_034f9790(param_1,*(undefined8 *)(param_1 + 0xd0),uVar1,*(undefined4 *)(param_1 + 0x84),
                 *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x25c),param_2);
  }
  else {
    iVar9 = FUN_033bdc00(param_1);
    if (iVar9 == 0x2d) {
      do {
        uVar1 = *(uint *)(param_1 + 0xb4);
        lVar14 = *(long *)(param_1 + 0x90);
        uVar7 = uVar1;
        if (*(uint *)(param_1 + 0x98) <= uVar1) {
          uVar7 = *(uint *)(param_1 + 0x98);
        }
        *(uint *)(param_1 + 0xb4) = uVar1 - uVar7;
        pvVar17 = (void *)(*(long *)(lVar14 + 0x18) + (ulong)*(ushort *)(lVar14 + 0x20) * 0x5f0);
        uVar1 = *(uint *)(param_1 + 0xe0);
        uVar2 = *(undefined1 *)(param_1 + 0xb8);
        memcpy(pvVar17,*(void **)(param_1 + 0xd8),(ulong)uVar1);
        *(uint *)((long)pvVar17 + 0x5e4) = uVar1;
        *(uint *)((long)pvVar17 + 0x5e8) = uVar7;
        *(undefined1 *)((long)pvVar17 + 0x5ec) = uVar2;
        uVar1 = *(uint *)(lVar14 + 0x28);
        uVar7 = *(ushort *)(lVar14 + 0x20) + 1;
        sVar5 = 0;
        if (uVar1 != 0) {
          sVar5 = (short)(uVar7 / uVar1);
        }
        *(short *)(lVar14 + 0x20) = (short)uVar7 - sVar5 * (short)uVar1;
        piVar16 = (int *)(lVar14 + 0x24);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar16,0x10);
          if (bVar4) {
            *piVar16 = *piVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        *(undefined1 *)(param_1 + 0xb8) = 0;
        if ((*(char *)(param_1 + 0xe4) != '\0') && (*(long *)(param_1 + 0xd8) != 0)) {
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
          *(undefined1 *)(param_1 + 0xe4) = 0;
        }
        *(undefined8 *)(param_1 + 0xd8) = 0;
        *(undefined4 *)(param_1 + 0xe0) = 0;
        if (*(int *)(*(long *)(param_1 + 0x90) + 0x28) == *(int *)(*(long *)(param_1 + 0x90) + 0x24)
           ) goto LAB_033be124;
        iVar9 = FUN_033bdc00(param_1);
      } while (iVar9 == 0x2d);
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((((uVar18 != 0) || (iVar9 != 0x11)) || (*(int *)(*(long *)(param_1 + 0x90) + 0x24) != 0)) ||
       (*(int *)(*(long *)(param_1 + 0x90) + 0x3c) != 0)) goto LAB_033be010;
LAB_033be024:
    *(undefined2 *)(param_2 + 0x12) = 0;
    *(undefined4 *)(param_2 + 0x2c) = 2;
  }
  return;
}


