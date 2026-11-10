/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317c874; name: FUN_0317c874
 */


void FUN_0317c874(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  uint uVar11;
  
  puVar4 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  plVar5 = (long *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 << 4);
  uVar1 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar1) {
    plVar10 = (long *)*param_1;
    plVar6 = plVar5;
    plVar7 = plVar10;
    if (uVar1 != 1) {
      iVar9 = -(uVar1 & 0xfffffffe);
      do {
        *plVar6 = *plVar7;
        *plVar7 = 0;
        *(int *)(plVar6 + 1) = (int)plVar7[1];
        plVar6[2] = plVar7[2];
        plVar7[2] = 0;
        *(int *)(plVar6 + 3) = (int)plVar7[3];
        plVar6 = plVar6 + 4;
        plVar7 = plVar7 + 4;
        iVar9 = iVar9 + 2;
      } while (iVar9 != 0);
    }
    if ((uVar1 & 1) != 0) {
      *plVar6 = *plVar7;
      *plVar7 = 0;
      *(int *)(plVar6 + 1) = (int)plVar7[1];
    }
    uVar11 = 0;
    do {
      plVar6 = (long *)*plVar10;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar7 = plVar6 + 2;
        do {
          lVar8 = *plVar7;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar8 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      uVar11 = uVar11 + 1;
      plVar10 = plVar10 + 2;
    } while (uVar11 != uVar1);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar4[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = plVar5;
  return;
}


