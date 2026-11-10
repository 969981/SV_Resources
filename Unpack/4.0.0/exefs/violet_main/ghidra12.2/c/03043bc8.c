/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03043bc8; name: FUN_03043bc8
 */


void FUN_03043bc8(undefined8 *param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  puVar5 = (undefined4 *)(**(code **)(*param_2 + 0x18))(param_2,param_3 << 4);
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    puVar11 = (undefined4 *)*param_1;
    puVar7 = puVar5;
    puVar8 = puVar11;
    if (uVar2 != 1) {
      iVar10 = -(uVar2 & 0xfffffffe);
      do {
        *puVar7 = *puVar8;
        *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar8 + 2);
        *(undefined8 *)(puVar8 + 2) = 0;
        puVar7[4] = puVar8[4];
        *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(puVar8 + 6);
        *(undefined8 *)(puVar8 + 6) = 0;
        puVar7 = puVar7 + 8;
        puVar8 = puVar8 + 8;
        iVar10 = iVar10 + 2;
      } while (iVar10 != 0);
    }
    if ((uVar2 & 1) != 0) {
      *puVar7 = *puVar8;
      *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar8 + 2);
      *(undefined8 *)(puVar8 + 2) = 0;
    }
    uVar12 = 0;
    do {
      plVar6 = *(long **)(puVar11 + 2);
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar9 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
      uVar12 = uVar12 + 1;
      puVar11 = puVar11 + 4;
    } while (uVar12 != uVar2);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = puVar5;
  return;
}


