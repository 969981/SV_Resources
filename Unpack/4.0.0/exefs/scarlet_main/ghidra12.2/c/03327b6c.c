/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03327b6c; name: FUN_03327b6c
 */


void FUN_03327b6c(undefined8 *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong local_68;
  
  puVar6 = PTR_PTR_047d1a50;
  uVar10 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar9 = uVar10 * 2;
  if (uVar9 <= param_2) {
    uVar9 = param_2;
  }
  if (0x7ffffffe < uVar9) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar9 = 0x7ffffffe;
  }
  plVar7 = (long *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))
                             (PTR_PTR_047d1a50,uVar9 * 0x10,&local_68);
  iVar12 = *(int *)(param_1 + 1);
  if (0 < iVar12) {
    plVar16 = (long *)*param_1;
    plVar14 = plVar7;
    plVar8 = plVar16;
    iVar11 = iVar12;
    do {
      FUN_03327dc8(plVar8);
      *plVar14 = *plVar8;
      *(int *)(plVar14 + 1) = (int)plVar8[1];
      *(undefined4 *)((long)plVar14 + 0xc) = *(undefined4 *)((long)plVar8 + 0xc);
      iVar11 = iVar11 + -1;
      plVar14 = plVar14 + 2;
      *plVar8 = 0;
      plVar8[1] = 0;
      plVar8 = plVar8 + 2;
    } while (iVar11 != 0);
    iVar11 = 0;
    do {
      if ((int)plVar16[1] != 0) {
        lVar13 = *plVar16;
        lVar15 = lVar13 + (long)(int)plVar16[1] * 0x30;
        do {
          if ((*(ulong *)(lVar15 + -8) & 1) != 0) {
            plVar8 = (long *)(*(ulong *)(lVar15 + -8) & 0xfffffffffffffffe);
            plVar14 = plVar8 + 1;
            do {
              lVar5 = *plVar14;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar4) {
                *(int *)plVar14 = (int)lVar5 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((plVar8 != (long *)0x0) && ((int)lVar5 == 1)) {
              (**(code **)(*plVar8 + 8))();
            }
          }
          puVar1 = (ulong *)(lVar15 + -0x20);
          lVar15 = lVar15 + -0x30;
          if ((*puVar1 & 1) != 0) {
            plVar8 = (long *)(*puVar1 & 0xfffffffffffffffe);
            plVar14 = plVar8 + 1;
            do {
              lVar5 = *plVar14;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar4) {
                *(int *)plVar14 = (int)lVar5 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((plVar8 != (long *)0x0) && ((int)lVar5 == 1)) {
              (**(code **)(*plVar8 + 8))();
            }
          }
        } while (lVar15 != lVar13);
      }
      *(undefined4 *)(plVar16 + 1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar16 + 0xc)) && (*plVar16 != 0)) {
        (**(code **)(*(long *)puVar6 + 0x20))
                  (puVar6,*plVar16,(ulong)*(uint *)((long)plVar16 + 0xc) * 0x30);
      }
      iVar11 = iVar11 + 1;
      *plVar16 = 0;
      *(undefined4 *)((long)plVar16 + 0xc) = 0x80000000;
      plVar16 = plVar16 + 2;
    } while (iVar11 != iVar12);
  }
  uVar2 = uVar9 * 0x10 + 0x10;
  iVar12 = (int)uVar9;
  if (uVar2 <= local_68) {
    local_68 = local_68 - 0x10;
    iVar11 = iVar12 + 1 + (int)(local_68 + uVar9 * -0x10 >> 4);
    if (local_68 < uVar2) {
      iVar11 = iVar12 + 1;
    }
    iVar12 = iVar11;
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar6 + 0x20))(puVar6,*param_1,uVar10 << 4);
  }
  *(int *)((long)param_1 + 0xc) = iVar12;
  *param_1 = plVar7;
  return;
}


