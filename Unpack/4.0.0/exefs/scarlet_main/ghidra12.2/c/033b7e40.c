/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033b7e40; name: FUN_033b7e40
 */


void FUN_033b7e40(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
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
  undefined8 *puVar17;
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
  local_48 = uVar13 * 0x28;
  puVar10 = (undefined8 *)
            (**(code **)PTR_DAT_047d1a08)
                      (PTR_PTR_047d1a50[8],&local_48,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  iVar4 = *(int *)(param_1 + 1);
  if (0 < iVar4) {
    puVar17 = (undefined8 *)*param_1;
    puVar14 = puVar10;
    puVar15 = puVar17;
    iVar12 = iVar4;
    do {
      uVar3 = puVar15[1];
      iVar12 = iVar12 + -1;
      *puVar14 = *puVar15;
      puVar14[1] = uVar3;
      puVar14[2] = puVar15[2];
      puVar14[3] = puVar15[3];
      puVar14[4] = puVar15[4];
      puVar15[2] = 0;
      puVar15[3] = 0;
      puVar15[4] = 0;
      puVar14 = puVar14 + 5;
      puVar15 = puVar15 + 5;
    } while (iVar12 != 0);
    iVar12 = 0;
    do {
      if ((puVar17[4] & 1) != 0) {
        plVar11 = (long *)(puVar17[4] & 0xfffffffffffffffe);
        plVar1 = plVar11 + 1;
        do {
          lVar7 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = (int)lVar7 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar11 != (long *)0x0) && ((int)lVar7 == 1)) {
          (**(code **)(*plVar11 + 8))();
        }
      }
      iVar12 = iVar12 + 1;
      puVar17 = puVar17 + 5;
    } while (iVar12 != iVar4);
  }
  uVar2 = uVar13 * 0x28 + 0x28;
  uVar16 = uVar13;
  if (uVar2 <= local_48) {
    local_48 = local_48 - 0x28;
    uVar16 = uVar13 + 1;
    if (uVar2 <= local_48) {
      uVar16 = uVar16 + (local_48 + uVar13 * -0x28) / 0x28;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar8 + 8))(puVar9[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar16;
  *param_1 = puVar10;
  return;
}


