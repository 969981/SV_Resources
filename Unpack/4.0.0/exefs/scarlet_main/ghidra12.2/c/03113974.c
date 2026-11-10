/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03113974; name: FUN_03113974
 */


void FUN_03113974(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulong local_48;
  
  puVar6 = PTR_PTR_047d1a50;
  uVar15 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar9 = uVar15 * 2;
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
  puVar7 = (undefined8 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar9 * 0x10,&local_48);
  uVar3 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar3) {
    puVar16 = (undefined8 *)*param_1;
    puVar10 = puVar7;
    puVar11 = puVar16;
    if (uVar3 != 1) {
      iVar13 = -(uVar3 & 0xfffffffe);
      do {
        *puVar10 = *puVar11;
        puVar10[1] = puVar11[1];
        puVar11[1] = 0;
        puVar10[2] = puVar11[2];
        puVar10[3] = puVar11[3];
        puVar11[3] = 0;
        puVar10 = puVar10 + 4;
        puVar11 = puVar11 + 4;
        iVar13 = iVar13 + 2;
      } while (iVar13 != 0);
    }
    if ((uVar3 & 1) != 0) {
      *puVar10 = *puVar11;
      puVar10[1] = puVar11[1];
      puVar11[1] = 0;
    }
    uVar17 = 0;
    do {
      plVar8 = (long *)puVar16[1];
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar1 = plVar8 + 2;
        do {
          lVar12 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
      uVar17 = uVar17 + 1;
      puVar16 = puVar16 + 2;
    } while (uVar17 != uVar3);
  }
  uVar2 = uVar9 * 0x10 + 0x10;
  uVar14 = uVar9;
  if (uVar2 <= local_48) {
    local_48 = local_48 - 0x10;
    uVar14 = uVar9 + 1 + (local_48 + uVar9 * -0x10 >> 4);
    if (local_48 < uVar2) {
      uVar14 = uVar9 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar6 + 0x20))(puVar6,*param_1,uVar15 << 4);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar14;
  *param_1 = (long)puVar7;
  return;
}


