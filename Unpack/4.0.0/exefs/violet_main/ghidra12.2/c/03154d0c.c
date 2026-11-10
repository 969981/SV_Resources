/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03154d0c; name: FUN_03154d0c
 */


void FUN_03154d0c(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  puVar5 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  plVar6 = (long *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 * 0x18);
  puVar4 = PTR_DAT_047d1a08;
  iVar1 = *(int *)(param_1 + 1);
  if (0 < iVar1) {
    plVar11 = (long *)*param_1;
    plVar7 = plVar6;
    plVar9 = plVar11;
    iVar8 = iVar1;
    do {
      *plVar7 = *plVar9;
      iVar8 = iVar8 + -1;
      *plVar9 = 0;
      plVar7[1] = 0;
      plVar7[1] = plVar9[1];
      *(char *)(plVar7 + 2) = (char)plVar9[2];
      plVar9[1] = 0;
      plVar7 = plVar7 + 3;
      plVar9 = plVar9 + 3;
    } while (iVar8 != 0);
    iVar8 = 0;
    do {
      lVar10 = plVar11[1];
      if (lVar10 != 0) {
        nn::os::FinalizeMutex((MutexType *)(lVar10 + 8));
        (**(code **)(puVar4 + 8))(0,lVar10,0);
      }
      plVar7 = (long *)*plVar11;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar9 = plVar7 + 2;
        do {
          lVar10 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = lVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
      iVar8 = iVar8 + 1;
      plVar11 = plVar11 + 3;
    } while (iVar8 != iVar1);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(puVar4 + 8))(puVar5[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = plVar6;
  return;
}


