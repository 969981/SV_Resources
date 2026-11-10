/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f03430; name: FUN_02f03430
 */


void FUN_02f03430(long *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong local_38;
  
  if (param_2 != 0) {
    plVar6 = (long *)(*param_1 + (long)param_1);
    uVar2 = *(uint *)(param_1 + 1);
    lVar12 = (long)(int)uVar2;
    plVar7 = (long *)0x0;
    if (*param_1 != 0) {
      plVar7 = plVar6;
    }
    if (uVar2 != 0) {
      lVar9 = lVar12 << 3;
      do {
        lVar1 = *plVar7 + (long)plVar7;
        if ((*plVar7 != 0 && lVar1 != 0) && (*(short *)(lVar1 + 0x18) == *(short *)(param_2 + 0x18))
           ) {
          local_38 = param_2 - (long)&local_38;
          if (*(long *)(param_2 + 8) != 0) {
            plVar6 = (long *)(param_2 + 0x10);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar4) {
                *plVar6 = *plVar6 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (((*plVar7 != 0) && (plVar6 = (long *)(*plVar7 + (long)plVar7), plVar6 != (long *)0x0))
             && (plVar6[1] != 0)) {
            plVar11 = plVar6 + 2;
            do {
              lVar12 = *plVar11;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
              if (bVar4) {
                *plVar11 = lVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar12 + -1 == 0) {
              (**(code **)(*plVar6 + 0x18))();
            }
          }
          lVar12 = 0;
          if (local_38 != 0) {
            lVar12 = (long)&local_38 + (local_38 - (long)plVar7);
          }
          *plVar7 = lVar12;
          return;
        }
        plVar7 = plVar7 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
    uVar8 = *(uint *)((long)param_1 + 0xc);
    if (*(uint *)((long)param_1 + 0xc) == 0) {
      *(uint *)((long)param_1 + 0xc) = uVar2;
      uVar8 = uVar2;
    }
    puVar5 = PTR_DAT_047d1a08;
    if ((int)(uVar8 & 0x7fffffff) <= (int)uVar2) {
      uVar8 = uVar2 | (int)uVar2 >> 0x10;
      uVar8 = uVar8 | (int)uVar8 >> 8;
      uVar8 = uVar8 | (int)uVar8 >> 4;
      uVar8 = uVar8 | (int)uVar8 >> 2;
      uVar8 = uVar8 | (int)uVar8 >> 1;
      if ((int)uVar8 < (int)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                     "Capacity reservation overflow");
      }
      uVar8 = uVar8 + 1;
      local_38 = -(ulong)(uVar8 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar8 << 3;
      plVar6 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_38,0);
      plVar7 = (long *)0x0;
      if (*param_1 != 0) {
        plVar7 = (long *)(*param_1 + (long)param_1);
      }
      uVar10 = (ulong)*(uint *)(param_1 + 1);
      if (0 < (int)*(uint *)(param_1 + 1)) {
        plVar11 = plVar6;
        do {
          lVar9 = 0;
          if (*plVar7 != 0) {
            lVar9 = (*plVar7 - (long)plVar11) + (long)plVar7;
          }
          uVar10 = uVar10 - 1;
          *plVar11 = lVar9;
          *plVar7 = 0;
          plVar7 = plVar7 + 1;
          plVar11 = plVar11 + 1;
        } while (uVar10 != 0);
      }
      if (*(int *)((long)param_1 + 0xc) < 0) {
        lVar9 = 0;
        if (*param_1 != 0) {
          lVar9 = *param_1 + (long)param_1;
        }
        (**(code **)(puVar5 + 8))(0,lVar9,0);
      }
      lVar9 = 0;
      if (plVar6 != (long *)0x0) {
        lVar9 = (long)plVar6 - (long)param_1;
      }
      *param_1 = lVar9;
      plVar6 = (long *)(lVar9 + (long)param_1);
      *(uint *)((long)param_1 + 0xc) = uVar8 | 0x80000000;
    }
    *(uint *)(param_1 + 1) = uVar2 + 1;
    plVar6[lVar12] = 0;
    param_1 = (long *)((long)param_1 + lVar12 * 8 + *param_1);
    *param_1 = param_2 - (long)param_1;
    if (*(long *)(param_2 + 8) != 0) {
      plVar7 = (long *)(param_2 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  return;
}


