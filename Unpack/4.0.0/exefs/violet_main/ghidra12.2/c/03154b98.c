/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03154b98; name: FUN_03154b98
 */


void FUN_03154b98(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  
  puVar5 = PTR_PTR_047d1a50;
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar6 = (undefined4 *)
           (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,param_2 << 4);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    puVar12 = (undefined4 *)*param_1;
    puVar8 = puVar6;
    puVar9 = puVar12;
    if (uVar2 != 1) {
      iVar11 = -(uVar2 & 0xfffffffe);
      do {
        *puVar8 = *puVar9;
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar9 + 2);
        *(undefined8 *)(puVar9 + 2) = 0;
        puVar8[4] = puVar9[4];
        *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar9 + 6);
        *(undefined8 *)(puVar9 + 6) = 0;
        puVar8 = puVar8 + 8;
        puVar9 = puVar9 + 8;
        iVar11 = iVar11 + 2;
      } while (iVar11 != 0);
    }
    if ((uVar2 & 1) != 0) {
      *puVar8 = *puVar9;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar9 + 2);
      *(undefined8 *)(puVar9 + 2) = 0;
    }
    uVar13 = 0;
    do {
      plVar7 = *(long **)(puVar12 + 2);
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar1 = plVar7 + 2;
        do {
          lVar10 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar10 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
      uVar13 = uVar13 + 1;
      puVar12 = puVar12 + 4;
    } while (uVar13 != uVar2);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar5[8],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_2;
  *param_1 = puVar6;
  return;
}


