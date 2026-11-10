/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ff33a4; name: FUN_02ff33a4
 */


void FUN_02ff33a4(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  undefined *puVar6;
  bool bVar7;
  long *plVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  int *piVar14;
  int iVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  int iVar19;
  undefined4 uVar20;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  piVar9 = (int *)PTR_DAT_047e49c0;
  uVar18 = param_2 & 0xffffff;
  if (uVar18 == 0xffffff) {
    uVar13 = 0xffffffffffffffff;
  }
  else {
    uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar18 * 0xc0 + 0xb0);
  }
  lVar5 = tpidr_el0;
  if (*(long *)(param_1 + 0x800) == 0) {
    plVar8 = (long *)0x0;
    iVar19 = -1;
    bVar7 = false;
  }
  else {
    iVar15 = *(int *)PTR_DAT_047e49c0;
    lVar16 = (long)iVar15;
    lVar10 = *(long *)(lVar5 + 0x1000b8);
    if (lVar10 == 0) {
      lVar10 = FUN_00e5d3b4();
      *(long *)(lVar5 + 0x1000b8) = lVar10;
      iVar15 = *piVar9;
      iVar19 = (int)*(undefined8 *)(lVar10 + lVar16 * 8 + 1000);
      if (lVar10 == 0) {
        lVar10 = FUN_00e5d3b4();
        *(long *)(lVar5 + 0x1000b8) = lVar10;
      }
    }
    else {
      iVar19 = (int)*(undefined8 *)(lVar10 + lVar16 * 8 + 1000);
    }
    *(long *)(lVar10 + (long)iVar15 * 8 + 1000) = (long)(iVar19 + 1);
    plVar8 = *(long **)(param_1 + 0x800);
    bVar7 = iVar19 == 0;
  }
  bVar7 = (bool)(bVar7 & plVar8 != (long *)0x0);
  if (((*(char *)(param_1 + 0x999) != '\0') || (bVar7)) &&
     (local_a0 = 0x1d02000010, uStack_98 = uVar13, bVar7)) {
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_a0);
  }
  lVar10 = *(long *)(param_1 + 0x38);
  lVar16 = lVar10 + uVar18 * 0xc0;
  puVar17 = (undefined8 *)(lVar16 + 0x60);
  local_78 = *puVar17;
  local_70 = *(undefined8 *)(lVar16 + 0x68);
  uStack_68 = *(undefined8 *)(lVar16 + 0x70);
  if ((*(uint *)(lVar16 + 0x54) >> 1 & 1) == 0) {
    uStack_88 = *(undefined8 *)(lVar16 + 0x68);
    uStack_90 = *puVar17;
    uVar20 = (undefined4)((ulong)uStack_88 >> 0x20);
    local_a0 = *(undefined8 *)(lVar10 + uVar18 * 0xc0 + 0x70);
    uStack_98 = CONCAT44(uVar20,uVar20);
    FUN_02f3705c(param_1,&local_a0,param_2 & 0xffffffff);
    piVar14 = *(int **)(param_1 + 0x138);
    puVar1 = (undefined8 *)(param_1 + 0x138);
    piVar2 = piVar14 + 1;
    do {
      iVar15 = *piVar2;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      puVar6 = PTR_DAT_047d1a08;
    } while (cVar4 != '\0');
    if (0xff < iVar15) {
      do {
        local_a0 = 0x410;
        piVar9 = (int *)(**(code **)puVar6)(0,&local_a0,0);
        if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
          (**(code **)(puVar6 + 0x10))(piVar9,"Block");
        }
        lVar11 = 0;
        do {
          lVar3 = lVar11 + 0x20;
          *(undefined8 *)((long)piVar9 + lVar11 + 0x10) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar9 + lVar11 + 0x18) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar9 + lVar11 + 0x20) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar9 + lVar11 + 0x28) = 0xffffff00ffffff;
          lVar11 = lVar3;
        } while (lVar3 != 0x400);
        if (piVar14 == (int *)0x0) {
          iVar15 = 0;
        }
        else {
          iVar15 = *piVar14 + 1;
        }
        *piVar9 = iVar15;
        piVar9[1] = 0;
        piVar9[2] = 0;
        piVar9[3] = 0;
        do {
          if ((int *)*puVar1 != piVar14) {
            ClearExclusiveLocal();
            (**(code **)(puVar6 + 8))(0,piVar9,0);
            goto LAB_02ff35e0;
          }
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = piVar9;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (piVar14 != (int *)0x0) {
          *(int **)(piVar14 + 2) = piVar9;
        }
LAB_02ff35e0:
        piVar14 = (int *)*puVar1;
        piVar9 = piVar14 + 1;
        do {
          iVar15 = *piVar9;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar7) {
            *piVar9 = iVar15 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      } while (0xff < iVar15);
      piVar9 = (int *)PTR_DAT_047e49c0;
    }
    piVar14[(long)iVar15 + 4] = (int)param_2;
  }
  else if (((*(uint *)(lVar16 + 0x54) & 9) == 0) &&
          ((*(byte *)(lVar10 + uVar18 * 0xc0 + 0x88) & 1) != 0)) {
    FUN_02f35f08(param_1,param_2 & 0xffffffff,0);
  }
  else if ((*(long *)(param_1 + 0x698) != 0) &&
          (pcVar12 = (char *)(*(long *)(*(long *)(param_1 + 0x698) + 0x388) +
                              (long)*(int *)(lVar10 + uVar18 * 0xc0 + 0x80) * 0x20 + 0xb),
          *pcVar12 != -1)) {
    *pcVar12 = '\0';
  }
  lVar10 = lVar10 + uVar18 * 0xc0;
  *(undefined2 *)(lVar10 + 0x5e) = 0xffff;
  *(undefined4 *)(lVar10 + 0x5a) = 0xffffffff;
  *(ushort *)(lVar10 + 0x58) = *(ushort *)(lVar10 + 0x58) | 0x200;
  FUN_0300ebf8(*(undefined8 *)(param_1 + 0x498),lVar16,&local_78,puVar17);
  if (iVar19 != -1) {
    iVar15 = *piVar9;
    lVar10 = *(long *)(lVar5 + 0x1000b8);
    if (lVar10 == 0) {
      lVar10 = FUN_00e5d3b4();
      *(long *)(lVar5 + 0x1000b8) = lVar10;
    }
    *(long *)(lVar10 + (long)iVar15 * 8 + 1000) = (long)iVar19;
  }
  return;
}


