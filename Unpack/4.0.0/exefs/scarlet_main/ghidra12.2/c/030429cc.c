/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030429cc; name: FUN_030429cc
 */


void FUN_030429cc(undefined8 *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  plVar7 = (long *)(**(code **)(*param_2 + 0x18))(param_2,param_3 * 0x30);
  puVar6 = PTR_DAT_047d1a08;
  iVar3 = *(int *)(param_1 + 1);
  if (0 < iVar3) {
    plVar12 = (long *)*param_1;
    plVar10 = plVar7;
    plVar8 = plVar12;
    iVar9 = iVar3;
    do {
      *plVar10 = *plVar8;
      lVar11 = plVar8[1];
      lVar2 = plVar8[2];
      *plVar8 = 0;
      *(short *)(plVar10 + 3) = (short)plVar8[3];
      plVar10[1] = lVar11;
      plVar10[2] = lVar2;
      plVar10[4] = plVar8[4];
      plVar1 = plVar8 + 5;
      plVar8[4] = 0;
      iVar9 = iVar9 + -1;
      plVar8 = plVar8 + 6;
      plVar10[5] = *plVar1;
      plVar10 = plVar10 + 6;
    } while (iVar9 != 0);
    iVar9 = 0;
    do {
      if ((plVar12[4] & 1U) != 0) {
        (**(code **)(puVar6 + 8))(0,plVar12[4] - 1,0);
      }
      plVar8 = (long *)*plVar12;
      if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
        plVar10 = plVar8 + 2;
        do {
          lVar11 = *plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar8 + 0x18))();
        }
      }
      iVar9 = iVar9 + 1;
      plVar12 = plVar12 + 6;
    } while (iVar9 != iVar3);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar6 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = plVar7;
  return;
}


