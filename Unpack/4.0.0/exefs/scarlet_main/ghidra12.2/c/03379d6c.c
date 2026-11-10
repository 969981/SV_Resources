/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03379d6c; name: FUN_03379d6c
 */


void FUN_03379d6c(undefined8 *param_1,ulong param_2)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong local_48;
  
  puVar9 = PTR_PTR_047d1a50;
  puVar8 = PTR_DAT_047d1a08;
  uVar13 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar13 <= param_2) {
    uVar13 = param_2;
  }
  if (0x7ffffffe < uVar13) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar13 = 0x7ffffffe;
  }
  local_48 = uVar13 * 0x18;
  puVar10 = (undefined8 *)
            (**(code **)PTR_DAT_047d1a08)
                      (PTR_PTR_047d1a50[8],&local_48,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  iVar4 = *(int *)(param_1 + 1);
  if (0 < iVar4) {
    puVar18 = (undefined8 *)*param_1;
    iVar12 = 0;
    puVar14 = puVar10;
    puVar15 = puVar18;
    do {
      uVar3 = puVar15[1];
      *puVar14 = *puVar15;
      puVar14[1] = uVar3;
      uVar16 = puVar15[2];
      puVar14[2] = uVar16;
      if ((uVar16 & 1) != 0) {
        piVar1 = (int *)((uVar16 & 0xfffffffffffffffe) + 8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = *piVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      iVar12 = iVar12 + 1;
      puVar14 = puVar14 + 3;
      puVar15 = puVar15 + 3;
    } while (iVar12 != iVar4);
    iVar12 = 0;
    do {
      if ((puVar18[2] & 1) != 0) {
        plVar11 = (long *)(puVar18[2] & 0xfffffffffffffffe);
        plVar2 = plVar11 + 1;
        do {
          lVar7 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = (int)lVar7 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar11 != (long *)0x0) && ((int)lVar7 == 1)) {
          (**(code **)(*plVar11 + 8))();
        }
      }
      iVar12 = iVar12 + 1;
      puVar18 = puVar18 + 3;
    } while (iVar12 != iVar4);
  }
  uVar16 = uVar13 * 0x18 + 0x18;
  uVar17 = uVar13;
  if (uVar16 <= local_48) {
    local_48 = local_48 - 0x18;
    uVar17 = uVar13 + 1;
    if (uVar16 <= local_48) {
      uVar17 = uVar17 + (local_48 + uVar13 * -0x18) / 0x18;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar8 + 8))(puVar9[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar17;
  *param_1 = puVar10;
  return;
}


