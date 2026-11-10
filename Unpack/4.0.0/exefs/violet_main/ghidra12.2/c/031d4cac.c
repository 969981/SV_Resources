/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d4cac; name: FUN_031d4cac
 */


undefined8 FUN_031d4cac(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  uint uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  long local_50;
  ulong *local_48;
  ulong local_40;
  undefined1 auStack_38 [8];
  
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar13 = 0;
    do {
      local_50 = *(long *)(*(long *)(param_1 + 0x20) + uVar13 * 8);
      local_48 = *(ulong **)(param_1 + 8);
      local_40 = 0;
      puVar8 = local_48;
      if (local_48 != (ulong *)0x0) {
        do {
          uVar10 = *puVar8;
          if (((uint)uVar10 >> 2 & 1) != 0) {
            local_40 = puVar8[(uVar10 >> 1 & 1) + (uVar10 & 1) + 2];
            goto LAB_031d4d14;
          }
          puVar8 = (ulong *)puVar8[1];
        } while (puVar8 != (ulong *)0x0);
        local_40 = 0;
      }
LAB_031d4d14:
      if ((local_40 & 1) != 0) {
        piVar1 = (int *)((local_40 & 0xfffffffffffffffe) + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar9 = *param_2;
      if (lVar9 == 0) {
        uVar7 = (uint)(local_50 != 0);
LAB_031d4d6c:
        iVar5 = uVar7 - (lVar9 != 0);
      }
      else {
        uVar7 = 0;
        if (local_50 == 0) goto LAB_031d4d6c;
        puVar11 = (ulong *)param_2[1];
        puVar8 = puVar11;
        if ((*puVar11 & 1) == 0) {
          do {
            puVar8 = (ulong *)puVar8[1];
          } while ((*puVar8 & 1) == 0);
        }
        puVar12 = local_48;
        if ((*local_48 & 1) == 0) {
          do {
            puVar12 = (ulong *)puVar12[1];
          } while ((*puVar12 & 1) == 0);
        }
        iVar5 = ((uint)puVar8[2] & 0x1f) - ((uint)puVar12[2] & 0x1f);
        if (iVar5 == 0) {
          if ((lVar9 == local_50) && (puVar11 == local_48)) {
            iVar5 = 0;
          }
          else {
            iVar5 = FUN_031e845c(auStack_38,param_2,&local_50);
          }
        }
      }
      if ((local_40 & 1) != 0) {
        plVar6 = (long *)(local_40 & 0xfffffffffffffffe);
        plVar2 = plVar6 + 1;
        do {
          lVar9 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = (int)lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((plVar6 != (long *)0x0) && ((int)lVar9 == 1)) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      if (iVar5 == 0) {
        return *(undefined8 *)(*(long *)(param_1 + 0x18) + (uVar13 & 0xffffffff) * 8);
      }
      uVar13 = uVar13 + 1;
    } while ((long)uVar13 < (long)*(int *)(param_1 + 0x10));
  }
  return 0;
}


