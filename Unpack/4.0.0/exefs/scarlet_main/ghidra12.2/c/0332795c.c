/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0332795c; name: FUN_0332795c
 */


void FUN_0332795c(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong local_48;
  
  puVar8 = PTR_PTR_047d1a50;
  puVar7 = PTR_DAT_047d1a08;
  uVar12 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
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
  local_48 = uVar12 * 0x30;
  puVar9 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (PTR_PTR_047d1a50[8],&local_48,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  iVar3 = (int)param_1[1];
  if (0 < iVar3) {
    puVar16 = (undefined8 *)*param_1;
    puVar13 = puVar9;
    puVar14 = puVar16;
    iVar11 = iVar3;
    do {
      *puVar13 = *puVar14;
      puVar13[1] = puVar14[1];
      puVar13[2] = puVar14[2];
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      puVar13[3] = puVar14[3];
      puVar13[4] = puVar14[4];
      iVar11 = iVar11 + -1;
      puVar13[5] = puVar14[5];
      puVar14[4] = 0;
      puVar14[5] = 0;
      puVar14[3] = 0;
      puVar14 = puVar14 + 6;
      puVar13 = puVar13 + 6;
    } while (iVar11 != 0);
    iVar11 = 0;
    do {
      if ((puVar16[5] & 1) != 0) {
        plVar10 = (long *)(puVar16[5] & 0xfffffffffffffffe);
        plVar1 = plVar10 + 1;
        do {
          lVar6 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = (int)lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar6 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      if ((puVar16[2] & 1) != 0) {
        plVar10 = (long *)(puVar16[2] & 0xfffffffffffffffe);
        plVar1 = plVar10 + 1;
        do {
          lVar6 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = (int)lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar6 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      iVar11 = iVar11 + 1;
      puVar16 = puVar16 + 6;
    } while (iVar11 != iVar3);
  }
  uVar2 = uVar12 * 0x30 + 0x30;
  uVar15 = uVar12;
  if (uVar2 <= local_48) {
    local_48 = local_48 - 0x30;
    uVar15 = uVar12 + 1;
    if (uVar2 <= local_48) {
      uVar15 = uVar15 + (local_48 + uVar12 * -0x30) / 0x30;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar7 + 8))(puVar8[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar15;
  *param_1 = (long)puVar9;
  return;
}


