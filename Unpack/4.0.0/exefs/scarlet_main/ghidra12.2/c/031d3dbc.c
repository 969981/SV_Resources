/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d3dbc; name: FUN_031d3dbc
 */


void FUN_031d3dbc(long param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  ulong uVar11;
  long *plVar12;
  long local_28;
  
  puVar6 = PTR_DAT_047d1a08;
  plVar12 = (long *)(param_1 + 8);
  lVar8 = *plVar12;
  if (*(long *)(param_1 + 0x18) - lVar8 != (long)param_2) {
    if ((lVar8 != 0) && (*(char *)(param_1 + 0x40) != '\0')) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(3,lVar8,0);
    }
    *(undefined1 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *plVar12 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    lVar8 = DAT_048840b8;
    if (0 < param_2) {
      *(undefined1 *)(param_1 + 0x40) = 1;
      local_28 = (long)param_2;
      lVar7 = (**(code **)puVar6)(3,&local_28,0);
      lVar9 = lVar7 + param_2;
      *(long *)(param_1 + 8) = lVar7;
      *(long *)(param_1 + 0x10) = lVar7;
      *(long *)(param_1 + 0x18) = lVar9;
      *(long *)(param_1 + 0x20) = lVar9 + -0x20;
      piVar1 = (int *)(lVar8 + 0x30);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(int *)(param_1 + 0x2c) = iVar3;
      if (iVar3 == 0) {
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(int *)(param_1 + 0x2c) = iVar3;
      }
      lVar8 = tpidr_el0;
      lVar9 = *(long *)(lVar8 + 0x1000b8);
      if (lVar9 == 0) {
        lVar9 = FUN_00e5d3b4();
        *(long *)(lVar8 + 0x1000b8) = lVar9;
      }
      lVar8 = *(long *)(lVar9 + 0x3e0);
      if (lVar8 != 0) {
        puVar2 = *(undefined8 **)(lVar8 + 0x10);
        uVar11 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
        if ((uVar11 <= *(ulong *)(lVar8 + 0x18)) &&
           (*(ulong *)(lVar8 + 0x10) = uVar11, puVar2 != (undefined8 *)0x0)) {
          *puVar2 = "FiFrameId";
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(lVar8 + 0x2c);
        }
      }
      pcVar10 = *(code **)(puVar6 + 0x10);
      if (pcVar10 != (code *)0x0) {
        (*pcVar10)(*plVar12,"buffer_hkMonitorStream");
      }
    }
  }
  return;
}


