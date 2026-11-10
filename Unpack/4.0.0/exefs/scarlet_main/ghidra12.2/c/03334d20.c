/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03334d20; name: FUN_03334d20
 */


void FUN_03334d20(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong local_48;
  
  puVar7 = PTR_PTR_047d1a50;
  uVar15 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar11 = uVar15 * 2;
  if (uVar11 <= param_2) {
    uVar11 = param_2;
  }
  if (0x7ffffffe < uVar11) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar11 = 0x7ffffffe;
  }
  puVar8 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar11 * 0x30,&local_48)
  ;
  iVar3 = (int)param_1[1];
  if (0 < iVar3) {
    puVar16 = (undefined8 *)*param_1;
    puVar12 = puVar8;
    puVar13 = puVar16;
    iVar10 = iVar3;
    do {
      *puVar12 = *puVar13;
      puVar12[1] = puVar13[1];
      puVar12[2] = puVar13[2];
      puVar13[1] = 0;
      puVar13[2] = 0;
      *puVar13 = 0;
      puVar12[3] = puVar13[3];
      puVar12[4] = puVar13[4];
      iVar10 = iVar10 + -1;
      puVar12[5] = puVar13[5];
      puVar13[4] = 0;
      puVar13[5] = 0;
      puVar13[3] = 0;
      puVar13 = puVar13 + 6;
      puVar12 = puVar12 + 6;
    } while (iVar10 != 0);
    iVar10 = 0;
    do {
      if ((puVar16[5] & 1) != 0) {
        plVar9 = (long *)(puVar16[5] & 0xfffffffffffffffe);
        plVar1 = plVar9 + 1;
        do {
          lVar6 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = (int)lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar6 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      if ((puVar16[2] & 1) != 0) {
        plVar9 = (long *)(puVar16[2] & 0xfffffffffffffffe);
        plVar1 = plVar9 + 1;
        do {
          lVar6 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = (int)lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((plVar9 != (long *)0x0) && ((int)lVar6 == 1)) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      iVar10 = iVar10 + 1;
      puVar16 = puVar16 + 6;
    } while (iVar10 != iVar3);
  }
  uVar2 = uVar11 * 0x30 + 0x30;
  uVar14 = uVar11;
  if (uVar2 <= local_48) {
    local_48 = local_48 - 0x30;
    uVar14 = uVar11 + 1;
    if (uVar2 <= local_48) {
      uVar14 = uVar14 + (local_48 + uVar11 * -0x30) / 0x30;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar7 + 0x20))(puVar7,*param_1,uVar15 * 0x30);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar14;
  *param_1 = (long)puVar8;
  return;
}


