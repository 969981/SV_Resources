/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0321abfc; name: FUN_0321abfc
 */


void FUN_0321abfc(long *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
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
  undefined8 *puVar16;
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
  local_48 = uVar12 * 0x20;
  puVar9 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (*(undefined1 *)(param_2 + 8),&local_48,*(undefined4 *)(param_2 + 0xc));
  iVar4 = (int)param_1[1];
  if (0 < iVar4) {
    puVar16 = (undefined8 *)*param_1;
    puVar13 = puVar9;
    puVar14 = puVar16;
    iVar11 = iVar4;
    do {
      *puVar13 = *puVar14;
      puVar13[1] = puVar14[1];
      puVar13[2] = puVar14[2];
      puVar1 = puVar14 + 3;
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      iVar11 = iVar11 + -1;
      puVar14 = puVar14 + 4;
      *(undefined4 *)(puVar13 + 3) = *(undefined4 *)puVar1;
      puVar13 = puVar13 + 4;
    } while (iVar11 != 0);
    iVar11 = 0;
    do {
      if ((puVar16[2] & 1) != 0) {
        plVar10 = (long *)(puVar16[2] & 0xfffffffffffffffe);
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
      puVar16 = puVar16 + 4;
    } while (iVar11 != iVar4);
  }
  uVar3 = uVar12 * 0x20 + 0x20;
  uVar15 = uVar12;
  if (uVar3 <= local_48) {
    local_48 = local_48 - 0x20;
    uVar15 = uVar12 + 1 + (local_48 + uVar12 * -0x20 >> 5);
    if (local_48 < uVar3) {
      uVar15 = uVar12 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar8 + 8))(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar15;
  *param_1 = (long)puVar9;
  return;
}


