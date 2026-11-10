/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032153fc; name: FUN_032153fc
 */


void FUN_032153fc(undefined8 *param_1,ulong param_2)

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
  ulong uVar17;
  undefined8 *puVar18;
  ulong local_48;
  
  puVar8 = PTR_PTR_047d1a50;
  uVar17 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar12 = uVar17 * 2;
  if (uVar12 <= param_2) {
    uVar12 = param_2;
  }
  if (0x7ffffffe < uVar12) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar12 = 0x7ffffffe;
  }
  puVar9 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar12 * 0x30,&local_48)
  ;
  iVar4 = *(int *)(param_1 + 1);
  if (0 < iVar4) {
    puVar18 = (undefined8 *)*param_1;
    iVar11 = 0;
    puVar13 = puVar9;
    puVar14 = puVar18;
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
      if ((puVar18[5] & 1) != 0) {
        plVar10 = (long *)(puVar18[5] & 0xfffffffffffffffe);
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
      if ((puVar18[2] & 1) != 0) {
        plVar10 = (long *)(puVar18[2] & 0xfffffffffffffffe);
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
      puVar18 = puVar18 + 6;
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
    (**(code **)(*(long *)puVar8 + 0x20))(puVar8,*param_1,uVar17 * 0x30);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar16;
  *param_1 = puVar9;
  return;
}


