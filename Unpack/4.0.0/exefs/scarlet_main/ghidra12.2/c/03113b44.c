/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03113b44; name: FUN_03113b44
 */


void FUN_03113b44(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulong local_48;
  
  puVar7 = PTR_PTR_047d1a50;
  puVar6 = PTR_DAT_047d1a08;
  uVar10 = (ulong)(uint)(*(int *)((long)param_1 + 0xc) << 1);
  if (uVar10 <= param_2) {
    uVar10 = param_2;
  }
  if (0x7ffffffe < uVar10) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar10 = 0x7ffffffe;
  }
  local_48 = uVar10 * 0x10;
  puVar8 = (undefined8 *)
           (**(code **)PTR_DAT_047d1a08)
                     (PTR_PTR_047d1a50[8],&local_48,*(undefined4 *)(PTR_PTR_047d1a50 + 0xc));
  uVar3 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar3) {
    puVar16 = (undefined8 *)*param_1;
    puVar11 = puVar8;
    puVar12 = puVar16;
    if (uVar3 != 1) {
      iVar14 = -(uVar3 & 0xfffffffe);
      do {
        *puVar11 = *puVar12;
        puVar11[1] = puVar12[1];
        puVar12[1] = 0;
        puVar11[2] = puVar12[2];
        puVar11[3] = puVar12[3];
        puVar12[3] = 0;
        puVar11 = puVar11 + 4;
        puVar12 = puVar12 + 4;
        iVar14 = iVar14 + 2;
      } while (iVar14 != 0);
    }
    if ((uVar3 & 1) != 0) {
      *puVar11 = *puVar12;
      puVar11[1] = puVar12[1];
      puVar12[1] = 0;
    }
    uVar17 = 0;
    do {
      plVar9 = (long *)puVar16[1];
      if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
        plVar1 = plVar9 + 2;
        do {
          lVar13 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar13 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))();
        }
      }
      uVar17 = uVar17 + 1;
      puVar16 = puVar16 + 2;
    } while (uVar17 != uVar3);
  }
  uVar2 = uVar10 * 0x10 + 0x10;
  uVar15 = uVar10;
  if (uVar2 <= local_48) {
    local_48 = local_48 - 0x10;
    uVar15 = uVar10 + 1 + (local_48 + uVar10 * -0x10 >> 4);
    if (local_48 < uVar2) {
      uVar15 = uVar10 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar6 + 8))(puVar7[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar15;
  *param_1 = (long)puVar8;
  return;
}


