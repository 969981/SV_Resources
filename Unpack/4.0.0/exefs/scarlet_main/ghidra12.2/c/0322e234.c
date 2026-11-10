/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0322e234; name: FUN_0322e234
 */


void FUN_0322e234(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  ulong local_48;
  
  puVar7 = PTR_PTR_047d1a50;
  puVar6 = PTR_DAT_047d1a08;
  uVar11 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
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
  local_48 = uVar11 * 0x10;
  plVar8 = (long *)(**(code **)PTR_DAT_047d1a08)
                             (PTR_PTR_047d1a50[8],&local_48,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc))
  ;
  iVar3 = (int)param_1[1];
  if (0 < iVar3) {
    plVar15 = (long *)*param_1;
    iVar10 = 0;
    plVar12 = plVar8;
    plVar9 = plVar15;
    do {
      lVar13 = *plVar9;
      *plVar12 = lVar13;
      if ((lVar13 != 0) && (*(long *)(lVar13 + 8) != 0)) {
        plVar1 = (long *)(lVar13 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar1 = plVar9 + 1;
      iVar10 = iVar10 + 1;
      plVar9 = plVar9 + 2;
      *(char *)(plVar12 + 1) = (char)*plVar1;
      plVar12 = plVar12 + 2;
    } while (iVar10 != iVar3);
    iVar10 = 0;
    do {
      plVar9 = (long *)*plVar15;
      if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
        plVar12 = plVar9 + 2;
        do {
          lVar13 = *plVar12;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))();
        }
      }
      iVar10 = iVar10 + 1;
      plVar15 = plVar15 + 2;
    } while (iVar10 != iVar3);
  }
  uVar2 = uVar11 * 0x10 + 0x10;
  uVar14 = uVar11;
  if (uVar2 <= local_48) {
    local_48 = local_48 - 0x10;
    uVar14 = uVar11 + 1 + (local_48 + uVar11 * -0x10 >> 4);
    if (local_48 < uVar2) {
      uVar14 = uVar11 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar6 + 8))(puVar7[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar14;
  *param_1 = (long)plVar8;
  return;
}


