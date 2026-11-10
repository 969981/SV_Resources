/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03153160; name: FUN_03153160
 */


void FUN_03153160(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
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
  plVar6 = (long *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 * 0x60);
  iVar1 = *(int *)(param_1 + 1);
  if (0 < iVar1) {
    plVar11 = (long *)*param_1;
    plVar9 = plVar6;
    plVar7 = plVar11;
    iVar8 = iVar1;
    do {
      *plVar9 = *plVar7;
      lVar10 = plVar7[5];
      *plVar7 = 0;
      plVar9[3] = plVar7[3];
      plVar9[5] = lVar10;
      lVar10 = plVar7[2];
      plVar9[4] = plVar7[4];
      plVar9[2] = lVar10;
      plVar9[7] = plVar7[7];
      plVar9[6] = plVar7[6];
      plVar9[9] = plVar7[9];
      plVar9[8] = plVar7[8];
      uVar2 = *(undefined1 *)((long)plVar7 + 0x52);
      iVar8 = iVar8 + -1;
      *(short *)(plVar9 + 10) = (short)plVar7[10];
      *(undefined1 *)((long)plVar9 + 0x52) = uVar2;
      plVar7 = plVar7 + 0xc;
      plVar9 = plVar9 + 0xc;
    } while (iVar8 != 0);
    iVar8 = 0;
    do {
      plVar7 = (long *)*plVar11;
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
      iVar8 = iVar8 + 1;
      plVar11 = plVar11 + 0xc;
    } while (iVar8 != iVar1);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar5[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = plVar6;
  return;
}


