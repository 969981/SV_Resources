/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0353a2d0; name: FUN_0353a2d0
 */


void FUN_0353a2d0(int param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  
  plVar1 = (long *)(*(ulong *)(&DAT_048d2178 + (long)param_1 * 0x638) & (ulong)param_2);
  if (plVar1 != (long *)0x0) {
    lVar10 = (long)param_1;
    if (*(uint *)((long)plVar1 + 0xc) < 0x7e) {
      if ((*(byte *)(plVar1 + 5) >> 2 & 1) != 0) {
        uVar2 = *(uint *)((long)plVar1 + 0x24);
        uVar5 = ((int)param_2 - (int)plVar1) - 0x80;
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar5 / uVar2;
        }
        param_2 = (long *)((long)param_2 + (long)(int)(uVar6 * uVar2 - uVar5));
      }
      plVar8 = (long *)plVar1[8];
      lVar13 = *plVar8;
      if (lVar13 != 0) {
        lVar10 = nn::os::GetTlsValue((&DAT_048d2d70)[lVar10]);
        plVar8 = (long *)plVar1[8];
        if ((lVar13 != lVar10) && (*(int *)((long)plVar8 + 0x189c) == 0)) {
          plVar8 = plVar1 + 3;
          do {
            lVar10 = *plVar8;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar4) {
              *plVar8 = -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar10 == -1) {
            iVar9 = 1000;
            do {
              Yield();
              iVar9 = iVar9 + -1;
              do {
                lVar10 = *plVar8;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar4) {
                  *plVar8 = -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            } while ((iVar9 != 0) && (lVar10 == -1));
            if (iVar9 == 0) {
              while (lVar10 == -1) {
                nn::os::SleepThread(100000);
                do {
                  lVar10 = *plVar8;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                  if (bVar4) {
                    *plVar8 = -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
            }
          }
          *param_2 = lVar10;
          iVar9 = (int)plVar1[4] + 1;
          *(int *)(plVar1 + 4) = iVar9;
          plVar1[3] = (long)param_2;
          if (iVar9 != (int)plVar1[1]) {
            return;
          }
          plVar8 = (long *)(plVar1[8] + 0x1860);
          do {
            lVar10 = *plVar8;
            *plVar1 = lVar10;
            while (*plVar8 == lVar10) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *plVar8 = (long)plVar1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                return;
              }
            }
            ClearExclusiveLocal();
          } while( true );
        }
      }
      lVar10 = *plVar1;
      if ((lVar10 == 0) && (*(uint *)(plVar1 + 1) <= *(uint *)(plVar1 + 2))) {
        *(uint *)((long)plVar1 + 0x14) = *(uint *)(plVar1 + 1);
        if ((long *)plVar8[(ulong)*(uint *)((long)plVar1 + 0xc) + 0xf50] == plVar1) {
          plVar8[(ulong)*(uint *)((long)plVar1 + 0xc) + 0xf50] = plVar1[9];
        }
        else {
          lVar10 = plVar1[9];
          lVar13 = plVar1[10];
          *(long *)(lVar13 + 0x48) = lVar10;
          if (lVar10 != 0) {
            *(long *)(lVar10 + 0x50) = lVar13;
          }
        }
        plVar12 = plVar8 + (ulong)*(uint *)((long)plVar1 + 0xc) * 3 + 2;
        lVar10 = 0;
        if (*plVar12 != 0) {
          *(long **)(*plVar12 + 0x50) = plVar1;
          lVar10 = *plVar12;
        }
        plVar1[9] = lVar10;
        *plVar12 = (long)plVar1;
        plVar8[0x30d] = plVar8[0x30d] + -1;
        lVar10 = *plVar1;
      }
      *param_2 = lVar10;
      iVar9 = *(int *)((long)plVar1 + 0x14) + -1;
      *(int *)((long)plVar1 + 0x14) = iVar9;
      *plVar1 = (long)param_2;
      if (iVar9 == (int)plVar1[4]) {
        if ((long *)plVar8[(ulong)*(uint *)((long)plVar1 + 0xc) * 3 + 2] == plVar1) {
          plVar8[(ulong)*(uint *)((long)plVar1 + 0xc) * 3 + 2] = plVar1[9];
        }
        else {
          lVar10 = plVar1[9];
          lVar13 = plVar1[10];
          *(long *)(lVar13 + 0x48) = lVar10;
          if (lVar10 != 0) {
            *(long *)(lVar10 + 0x50) = lVar13;
          }
        }
        if (*(int *)((long)plVar8 + 0x189c) != 0) {
          FUN_0353b6c0(param_1,plVar1);
          return;
        }
        uVar11 = (ulong)*(uint *)((long)plVar1 + 0xc);
        if (plVar8[uVar11 * 3 + 3] != 0) {
          FUN_0353b410(param_1,plVar8);
          uVar11 = (ulong)*(uint *)((long)plVar1 + 0xc);
        }
        plVar8[uVar11 * 3 + 3] = (long)plVar1;
      }
    }
    else {
      if (*(uint *)((long)plVar1 + 0xc) != 0x7e) {
        FUN_0353b560(param_1,plVar1);
        return;
      }
      plVar8 = (long *)plVar1[8];
      lVar13 = *plVar8;
      if (lVar13 != 0) {
        lVar7 = nn::os::GetTlsValue((&DAT_048d2d70)[lVar10]);
        plVar8 = (long *)plVar1[8];
        if ((lVar13 != lVar7) && (*(int *)((long)plVar8 + 0x189c) == 0)) {
          plVar8 = plVar8 + 0x30c;
          do {
            lVar10 = *plVar8;
            *plVar1 = lVar10;
            while (*plVar8 == lVar10) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar4) {
                *plVar8 = (long)plVar1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                return;
              }
            }
            ClearExclusiveLocal();
          } while( true );
        }
      }
      plVar8[0x30d] = plVar8[0x30d] + -1;
      if (*(long **)(plVar1[8] + 0x7e70) == plVar1) {
        *(long *)(plVar1[8] + 0x7e70) = plVar1[9];
      }
      else {
        lVar13 = plVar1[9];
        lVar7 = plVar1[10];
        *(long *)(lVar7 + 0x48) = lVar13;
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x50) = lVar7;
        }
      }
      lVar13 = plVar1[8];
      if ((((*(uint *)((long)plVar1 + 0x2c) < 2) || (*(long *)(lVar13 + 0xbd8) != 0)) ||
          (*(int *)(lVar13 + 0x189c) != 0)) || (*(int *)(lVar13 + 0x1880) != 0)) {
        FUN_0353b410(param_1,lVar13,plVar1);
        return;
      }
      *(long **)(lVar13 + 0x1870) = plVar1;
      *(undefined4 *)(lVar13 + 0x1880) = *(undefined4 *)((long)plVar1 + 0x2c);
      if ((*(byte *)(plVar1 + 5) & 1) == 0) {
        *(ulong *)(lVar13 + 0x1878) =
             (long)plVar1 - (&DAT_048d2168)[lVar10 * 199] * (ulong)*(uint *)((long)plVar1 + 0x34);
      }
      else {
        *(long **)(lVar13 + 0x1878) = plVar1;
      }
    }
  }
  return;
}


