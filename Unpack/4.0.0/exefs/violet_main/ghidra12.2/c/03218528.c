/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03218528; name: FUN_03218528
 */


void FUN_03218528(undefined8 *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong local_48;
  
  puVar8 = PTR_DAT_047d1a08;
  uVar12 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar12 <= param_3) {
    uVar12 = param_3;
  }
  if (0x7ffffffe < uVar12) {
    if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar12 = 0x7ffffffe;
  }
  local_48 = uVar12 * 0x30;
  puVar9 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (*(undefined1 *)(param_2 + 8),&local_48,*(undefined4 *)(param_2 + 0xc));
  iVar4 = *(int *)(param_1 + 1);
  if (0 < iVar4) {
    puVar17 = (undefined8 *)*param_1;
    iVar11 = 0;
    puVar13 = puVar9;
    puVar14 = puVar17;
    do {
      uVar3 = puVar14[1];
      *puVar13 = *puVar14;
      puVar13[1] = uVar3;
      uVar15 = puVar14[2];
      puVar13[2] = uVar15;
      if ((uVar15 & 1) != 0) {
        piVar1 = (int *)((uVar15 & 0xfffffffffffffffe) + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uVar3 = puVar14[4];
      puVar13[3] = puVar14[3];
      puVar13[4] = uVar3;
      uVar15 = puVar14[5];
      puVar13[5] = uVar15;
      if ((uVar15 & 1) != 0) {
        piVar1 = (int *)((uVar15 & 0xfffffffffffffffe) + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      iVar11 = iVar11 + 1;
      puVar13 = puVar13 + 6;
      puVar14 = puVar14 + 6;
    } while (iVar11 != iVar4);
    iVar11 = 0;
    do {
      if ((puVar17[5] & 1) != 0) {
        plVar10 = (long *)(puVar17[5] & 0xfffffffffffffffe);
        plVar2 = plVar10 + 1;
        do {
          lVar7 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = (int)lVar7 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar7 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      if ((puVar17[2] & 1) != 0) {
        plVar10 = (long *)(puVar17[2] & 0xfffffffffffffffe);
        plVar2 = plVar10 + 1;
        do {
          lVar7 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = (int)lVar7 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar7 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      iVar11 = iVar11 + 1;
      puVar17 = puVar17 + 6;
    } while (iVar11 != iVar4);
  }
  uVar15 = uVar12 * 0x30 + 0x30;
  uVar16 = uVar12;
  if (uVar15 <= local_48) {
    local_48 = local_48 - 0x30;
    uVar16 = uVar12 + 1;
    if (uVar15 <= local_48) {
      uVar16 = uVar16 + (local_48 + uVar12 * -0x30) / 0x30;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar8 + 8))(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar16;
  *param_1 = puVar9;
  return;
}


