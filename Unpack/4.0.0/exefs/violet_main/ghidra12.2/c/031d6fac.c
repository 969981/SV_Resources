/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d6fac; name: FUN_031d6fac
 */


void FUN_031d6fac(long *param_1,long *param_2)

{
  undefined *puVar1;
  int *piVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  byte *pbVar12;
  ulong *puVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 local_80;
  ulong *puStack_78;
  ulong local_70;
  undefined8 local_68;
  
  lVar16 = *param_1;
  for (pbVar12 = *(byte **)(lVar16 + 8); (*pbVar12 & 1) == 0; pbVar12 = *(byte **)(pbVar12 + 8)) {
  }
  local_80 = (**(code **)(**(long **)PTR_DAT_047ddc48 + 0x60))
                       (*(long **)PTR_DAT_047ddc48,*(undefined4 *)(pbVar12 + 0x10));
  FUN_031c8978(param_2,"hk::Presets(type = {}, builtinType={}, strict = {}, {{",&DAT_046a5798,
               (undefined8 *)(lVar16 + 8),&local_80,lVar16);
  if (0 < *(int *)(lVar16 + 0x10)) {
    lVar17 = 0;
    puVar1 = PTR_PTR_047d1a50 + 0x20;
    do {
      local_68 = *(undefined8 *)(*(long *)(lVar16 + 0x18) + lVar17 * 8);
      local_80 = *(undefined8 *)(*(long *)(lVar16 + 0x20) + lVar17 * 8);
      puStack_78 = *(ulong **)(lVar16 + 8);
      local_70 = 0;
      puVar13 = puStack_78;
      if (puStack_78 != (ulong *)0x0) {
        do {
          uVar15 = *puVar13;
          if (((uint)uVar15 >> 2 & 1) != 0) {
            local_70 = puVar13[(uVar15 >> 1 & 1) + (uVar15 & 1) + 2];
            goto LAB_031d70ac;
          }
          puVar13 = (ulong *)puVar13[1];
        } while (puVar13 != (ulong *)0x0);
        local_70 = 0;
      }
LAB_031d70ac:
      if ((local_70 & 1) != 0) {
        piVar2 = (int *)((local_70 & 0xfffffffffffffffe) + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = *piVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (lVar17 != 0) {
        iVar5 = (int)param_2[1];
        uVar4 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
        iVar8 = uVar4 - 1;
        iVar9 = iVar5;
        if (iVar8 <= iVar5) {
          iVar9 = iVar8;
        }
        if ((int)param_2[0x12] != 0) {
          iVar9 = iVar5;
        }
        iVar8 = iVar9 + 1;
        iVar14 = iVar5;
        if ((int)uVar4 <= iVar9) {
          FUN_030b4a20(param_2,puVar1,(long)iVar8);
          iVar14 = (int)param_2[1];
        }
        if (iVar14 <= iVar9 || iVar8 < iVar14) {
          *(int *)(param_2 + 1) = iVar8;
        }
        *(undefined1 *)(*param_2 + (long)iVar9) = 0;
        memcpy((void *)(*param_2 + (long)iVar5 + -1),&DAT_03c16438,(long)((int)param_2[1] - iVar5));
      }
      FUN_031c8b2c(param_2,"{}={:*!}",&DAT_046a57b8,&local_68,&local_80);
      if ((local_70 & 1) != 0) {
        plVar11 = (long *)(local_70 & 0xfffffffffffffffe);
        plVar3 = plVar11 + 1;
        do {
          lVar10 = *plVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *(int *)plVar3 = (int)lVar10 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((plVar11 != (long *)0x0) && ((int)lVar10 == 1)) {
          (**(code **)(*plVar11 + 8))();
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(lVar16 + 0x10));
  }
  iVar5 = (int)param_2[1];
  uVar4 = *(uint *)((long)param_2 + 0xc) & 0x7fffffff;
  iVar9 = uVar4 - 1;
  if (iVar5 + 1 < iVar9) {
    iVar9 = iVar5 + 1;
  }
  if ((int)param_2[0x12] != 0) {
    iVar9 = iVar5 + 1;
  }
  iVar8 = iVar9 + 1;
  iVar14 = iVar5;
  if ((int)uVar4 <= iVar9) {
    FUN_030b4a20(param_2,PTR_PTR_047d1a50 + 0x20,(long)iVar8);
    iVar14 = (int)param_2[1];
  }
  if ((iVar14 <= iVar9) || (iVar8 < iVar14)) {
    *(int *)(param_2 + 1) = iVar8;
  }
  *(undefined1 *)(*param_2 + (long)iVar9) = 0;
  memcpy((void *)((long)iVar5 + *param_2 + -1),&DAT_03c0d635,(long)((int)param_2[1] - iVar5));
  return;
}


