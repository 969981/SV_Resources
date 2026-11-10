/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031f220c; name: FUN_031f220c
 */


undefined8 * FUN_031f220c(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 local_40;
  ulong *puStack_38;
  undefined4 local_30;
  uint local_2c;
  ulong local_28;
  
  if (param_1 != param_2) {
    local_40 = *param_2;
    local_30 = *(undefined4 *)(param_2 + 1);
    puStack_38 = (ulong *)param_2[2];
    uVar3 = *(undefined4 *)(param_1 + 1);
    local_2c = 0;
    local_28 = 0;
    if (puStack_38 != (ulong *)0x0) {
      puVar9 = puStack_38;
      do {
        uVar11 = (uint)*puVar9;
        puVar8 = puStack_38;
        if ((uVar11 >> 0x14 & 1) != 0) {
          local_2c = 0;
          if (puVar9 != (ulong *)0x0) {
            uVar10 = CONCAT44(uVar11,uVar11) & 0xfffff000fffff;
            local_2c = (uint)(ushort)puVar9[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                          POPCOUNT((char)(uVar10 >> 8)) +
                                                         POPCOUNT((char)(uVar10 >> 0x10))) + 2];
          }
          goto LAB_031f2294;
        }
        if ((*puVar9 & 1) != 0) {
          local_2c = 0;
          goto LAB_031f2294;
        }
        puVar9 = (ulong *)puVar9[1];
      } while (puVar9 != (ulong *)0x0);
      local_2c = 0;
LAB_031f2294:
      do {
        uVar10 = *puVar8;
        if (((uint)uVar10 >> 2 & 1) != 0) {
          local_28 = puVar8[(uVar10 >> 1 & 1) + (uVar10 & 1) + 2];
          if ((local_28 & 1) != 0) {
            piVar1 = (int *)((local_28 & 0xfffffffffffffffe) + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          goto LAB_031f22dc;
        }
        puVar9 = puVar8 + 1;
        puVar8 = (ulong *)*puVar9;
      } while ((ulong *)*puVar9 != (ulong *)0x0);
      local_28 = 0;
    }
LAB_031f22dc:
    (**(code **)(*(long *)PTR_DAT_047e5cc8 + 0x60))
              (PTR_DAT_047e5cc8,param_1,PTR_DAT_047e5cd0,0,uVar3,&local_40);
    if ((local_28 & 1) != 0) {
      plVar7 = (long *)(local_28 & 0xfffffffffffffffe);
      plVar2 = plVar7 + 1;
      do {
        lVar6 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = (int)lVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
        (**(code **)(*plVar7 + 8))();
      }
    }
  }
  return param_1;
}


