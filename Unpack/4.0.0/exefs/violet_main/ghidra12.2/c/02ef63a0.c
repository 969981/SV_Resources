/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ef63a0; name: FUN_02ef63a0
 */


void FUN_02ef63a0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined *puVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = *(uint *)(param_2 + 1);
  lVar1 = 0;
  if (*param_2 != 0) {
    lVar1 = *param_2 + (long)param_2;
  }
  uVar7 = uVar3 - 1;
  if (0 < (int)uVar3 && lVar1 != 0) {
    uVar4 = uVar7 | (int)uVar7 >> 0x10;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    puVar8 = PTR_DAT_047d1a08;
    uVar4 = uVar4 | (int)uVar4 >> 8;
    uVar4 = uVar4 | (int)uVar4 >> 4;
    uVar4 = uVar4 | (int)uVar4 >> 2;
    uVar4 = (uVar4 | (int)uVar4 >> 1) + 1;
    if ((int)uVar4 < (int)uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow");
    }
    local_38 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3;
    plVar9 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
    plVar10 = (long *)0x0;
    if (*param_1 != 0) {
      plVar10 = (long *)(*param_1 + (long)param_1);
    }
    uVar11 = (ulong)*(uint *)(param_1 + 1);
    if (0 < (int)*(uint *)(param_1 + 1)) {
      plVar13 = plVar9;
      do {
        *plVar13 = 0;
        lVar12 = 0;
        if (*plVar10 != 0) {
          lVar12 = (long)plVar10 + (*plVar10 - (long)plVar13);
        }
        uVar11 = uVar11 - 1;
        *plVar13 = lVar12;
        *plVar10 = 0;
        plVar10 = plVar10 + 1;
        plVar13 = plVar13 + 1;
      } while (uVar11 != 0);
    }
    if (*(int *)((long)param_1 + 0xc) < 0) {
      lVar12 = 0;
      if (*param_1 != 0) {
        lVar12 = *param_1 + (long)param_1;
      }
      (**(code **)(puVar8 + 8))(0,lVar12,0);
    }
    lVar12 = 0;
    if (plVar9 != (long *)0x0) {
      lVar12 = (long)plVar9 - (long)param_1;
    }
    *param_1 = lVar12;
    *(uint *)(param_1 + 1) = uVar3;
    *(uint *)((long)param_1 + 0xc) = uVar4 | 0x80000000;
    memset((void *)(lVar12 + (long)param_1),0,(ulong)uVar7 * 8 + 8);
    lVar12 = *param_1;
    uVar11 = 0;
    do {
      plVar10 = (long *)((long)param_1 + uVar11 * 8 + lVar12);
      *plVar10 = 0;
      plVar9 = (long *)(lVar1 + uVar11 * 8);
      lVar14 = *plVar9;
      lVar2 = 0;
      if (lVar14 != 0) {
        lVar2 = (long)plVar9 + (lVar14 - (long)plVar10);
      }
      *plVar10 = lVar2;
      lVar14 = lVar2 + (long)plVar10;
      if ((lVar2 != 0 && lVar14 != 0) && (*(long *)(lVar14 + 8) != 0)) {
        plVar10 = (long *)(lVar14 + 0x10);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = *plVar10 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar3);
  }
  return;
}


