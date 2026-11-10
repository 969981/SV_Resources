/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033b5234; name: FUN_033b5234
 */


void FUN_033b5234(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong *puVar7;
  long *plVar8;
  int iVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  
  puVar6 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar7 = (ulong *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 * 0x18)
  ;
  puVar5 = PTR_DAT_047d1a08;
  iVar2 = *(int *)(param_1 + 1);
  if (0 < iVar2) {
    puVar14 = (ulong *)*param_1;
    iVar9 = 0;
    puVar10 = puVar7;
    puVar12 = puVar14;
    do {
      *puVar10 = *puVar12;
      *puVar12 = 0;
      puVar10[1] = puVar12[1];
      uVar13 = puVar12[2];
      puVar12[1] = 0;
      puVar10[2] = uVar13;
      if ((uVar13 != 0) && (*(long *)(uVar13 + 8) != 0)) {
        plVar8 = (long *)(uVar13 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar4) {
            *plVar8 = *plVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      iVar9 = iVar9 + 1;
      puVar10 = puVar10 + 3;
      puVar12 = puVar12 + 3;
    } while (iVar9 != iVar2);
    iVar9 = 0;
    do {
      plVar8 = (long *)puVar14[2];
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar1 = plVar8 + 2;
        do {
          lVar11 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
      if ((puVar14[1] & 1) != 0) {
        (**(code **)(puVar5 + 8))(0,puVar14[1] - 1,0);
      }
      if ((*puVar14 & 1) != 0) {
        (**(code **)(puVar5 + 8))(0,*puVar14 - 1,0);
      }
      iVar9 = iVar9 + 1;
      puVar14 = puVar14 + 3;
    } while (iVar9 != iVar2);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar5 + 8))(puVar6[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = puVar7;
  return;
}


