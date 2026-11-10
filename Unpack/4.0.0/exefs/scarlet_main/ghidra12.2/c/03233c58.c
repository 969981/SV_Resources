/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03233c58; name: FUN_03233c58
 */


void FUN_03233c58(long param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  
  iVar9 = *(int *)(param_2 + 8);
  iVar4 = *(int *)PTR_DAT_047e6018;
  lVar7 = tpidr_el0;
  lVar10 = *(long *)(lVar7 + 0x1000b8);
  if (lVar10 == 0) {
    lVar10 = FUN_00e5d3b4();
    *(long *)(lVar7 + 0x1000b8) = lVar10;
  }
  *(long *)(lVar10 + (long)iVar4 * 8 + 1000) = (long)iVar9;
  iVar9 = *(int *)(param_1 + 0x170);
  if (0 < iVar9) {
    lVar10 = *(long *)(lVar7 + 0x1000b8);
    if (lVar10 == 0) {
      lVar10 = FUN_00e5d3b4();
      *(long *)(lVar7 + 0x1000b8) = lVar10;
      iVar9 = *(int *)(param_1 + 0x170);
    }
    FUN_031d3dbc(*(undefined8 *)(lVar10 + 0x3e0),iVar9);
  }
  lVar10 = *(long *)(lVar7 + 0x1000b8);
  if (lVar10 == 0) {
    lVar10 = FUN_00e5d3b4();
    *(long *)(lVar7 + 0x1000b8) = lVar10;
  }
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(*(long *)(lVar10 + 0x3e0) + 8);
  if (lVar10 == 0) {
    lVar10 = FUN_00e5d3b4();
    *(long *)(lVar7 + 0x1000b8) = lVar10;
  }
  *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(*(long *)(lVar10 + 0x3e0) + 0x10);
  nn::os::AcquireSemaphore((SemaphoreType *)(param_2 + 0x20));
  puVar8 = PTR_DAT_047e6020;
  if (*(char *)(param_2 + 0x18) == '\0') {
    do {
      lVar10 = *(long *)(lVar7 + 0x1000b8);
      if (lVar10 == 0) {
        lVar10 = FUN_00e5d3b4();
        *(long *)(lVar7 + 0x1000b8) = lVar10;
      }
      if (*(char *)(param_2 + 0x19) != '\0') {
        plVar15 = *(long **)(lVar10 + 0x3e0);
        lVar10 = *(long *)puVar8;
        *plVar15 = lVar10;
        plVar15[2] = plVar15[1];
        piVar1 = (int *)(lVar10 + 0x30);
        do {
          iVar9 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar9 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        *(int *)((long)plVar15 + 0x2c) = iVar9;
        if (iVar9 == 0) {
          do {
            iVar9 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar9 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          *(int *)((long)plVar15 + 0x2c) = iVar9;
        }
        lVar11 = *(long *)(lVar7 + 0x1000b8);
        if (lVar11 == 0) {
          lVar11 = FUN_00e5d3b4();
          *(long *)(lVar7 + 0x1000b8) = lVar11;
        }
        lVar12 = *(long *)(lVar11 + 0x3e0);
        if (lVar12 != 0) {
          puVar3 = *(undefined8 **)(lVar12 + 0x10);
          uVar14 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
          if ((uVar14 <= *(ulong *)(lVar12 + 0x18)) &&
             (*(ulong *)(lVar12 + 0x10) = uVar14, puVar3 != (undefined8 *)0x0)) {
            *puVar3 = "FiFrameId";
            *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(lVar12 + 0x2c);
            lVar11 = *(long *)(lVar7 + 0x1000b8);
          }
        }
        uVar2 = 0x1f;
        if (-1 < (int)*(uint *)(lVar10 + 0x3c)) {
          uVar2 = *(uint *)(lVar10 + 0x3c) & 0xff;
        }
        lVar13 = plVar15[7] + (ulong)uVar2 * 0xe8;
        lVar10 = lVar13 + 0x28;
        plVar15[6] = lVar10;
        lVar12 = 0;
        if (0 < *(long *)(lVar13 + 0x38)) {
          lVar12 = lVar10;
        }
        plVar15[6] = lVar12;
        if (lVar11 == 0) {
          lVar11 = FUN_00e5d3b4();
          *(long *)(lVar7 + 0x1000b8) = lVar11;
        }
        *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(*(long *)(lVar11 + 0x3e0) + 0x10);
        *(undefined1 *)(param_2 + 0x19) = 0;
      }
      (**(code **)(param_1 + 0x128))(*(undefined8 *)(param_1 + 0x130));
      lVar10 = *(long *)(lVar7 + 0x1000b8);
      if (lVar10 == 0) {
        lVar10 = FUN_00e5d3b4();
        *(long *)(lVar7 + 0x1000b8) = lVar10;
      }
      *(undefined8 *)(param_2 + 0x50) = *(undefined8 *)(*(long *)(lVar10 + 0x3e0) + 0x10);
      nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x148),1);
      nn::os::AcquireSemaphore((SemaphoreType *)(param_2 + 0x20));
    } while (*(char *)(param_2 + 0x18) == '\0');
  }
  return;
}


