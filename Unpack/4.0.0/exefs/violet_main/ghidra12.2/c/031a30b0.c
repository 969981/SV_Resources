/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031a30b0; name: FUN_031a30b0
 */


void FUN_031a30b0(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  puVar4 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  plVar5 = (long *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 * 0x18);
  iVar1 = *(int *)(param_1 + 1);
  if (0 < iVar1) {
    plVar10 = (long *)*param_1;
    plVar8 = plVar5;
    plVar6 = plVar10;
    iVar7 = iVar1;
    do {
      *plVar8 = *plVar6;
      lVar9 = plVar6[1];
      iVar7 = iVar7 + -1;
      *plVar6 = 0;
      *(char *)(plVar8 + 2) = (char)plVar6[2];
      plVar8[1] = lVar9;
      plVar6 = plVar6 + 3;
      plVar8 = plVar8 + 3;
    } while (iVar7 != 0);
    iVar7 = 0;
    do {
      plVar6 = (long *)*plVar10;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar8 = plVar6 + 2;
        do {
          lVar9 = *plVar8;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      iVar7 = iVar7 + 1;
      plVar10 = plVar10 + 3;
    } while (iVar7 != iVar1);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar4[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = plVar5;
  return;
}


