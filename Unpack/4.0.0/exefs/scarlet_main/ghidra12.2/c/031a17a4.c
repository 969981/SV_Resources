/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031a17a4; name: FUN_031a17a4
 */


void FUN_031a17a4(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  uint uVar15;
  ulong local_48;
  
  puVar5 = PTR_PTR_047d1a50;
  uVar13 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar8 = uVar13 * 2;
  if (uVar8 <= param_2) {
    uVar8 = param_2;
  }
  if (0x7ffffffe < uVar8) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar8 = 0x7ffffffe;
  }
  plVar6 = (long *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))
                             (PTR_PTR_047d1a50,uVar8 * 0x10,&local_48);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    plVar14 = (long *)*param_1;
    plVar7 = plVar6;
    plVar9 = plVar14;
    if (uVar2 != 1) {
      iVar11 = -(uVar2 & 0xfffffffe);
      do {
        *plVar7 = *plVar9;
        *plVar9 = 0;
        *(int *)(plVar7 + 1) = (int)plVar9[1];
        plVar7[2] = plVar9[2];
        plVar9[2] = 0;
        *(int *)(plVar7 + 3) = (int)plVar9[3];
        plVar7 = plVar7 + 4;
        plVar9 = plVar9 + 4;
        iVar11 = iVar11 + 2;
      } while (iVar11 != 0);
    }
    if ((uVar2 & 1) != 0) {
      *plVar7 = *plVar9;
      *plVar9 = 0;
      *(int *)(plVar7 + 1) = (int)plVar9[1];
    }
    uVar15 = 0;
    do {
      plVar7 = (long *)*plVar14;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar9 = plVar7 + 2;
        do {
          lVar10 = *plVar9;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
      uVar15 = uVar15 + 1;
      plVar14 = plVar14 + 2;
    } while (uVar15 != uVar2);
  }
  uVar1 = uVar8 * 0x10 + 0x10;
  uVar12 = uVar8;
  if (uVar1 <= local_48) {
    local_48 = local_48 - 0x10;
    uVar12 = uVar8 + 1 + (local_48 + uVar8 * -0x10 >> 4);
    if (local_48 < uVar1) {
      uVar12 = uVar8 + 1;
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*(long *)puVar5 + 0x20))(puVar5,*param_1,uVar13 << 4);
  }
  *(int *)((long)param_1 + 0xc) = (int)uVar12;
  *param_1 = plVar6;
  return;
}


