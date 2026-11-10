/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ee8638; name: FUN_02ee8638
 */


void FUN_02ee8638(long *param_1,void *param_2,int param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  void *pvVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  void *pvVar15;
  void *pvVar16;
  uint uVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  void *local_90;
  long *local_70;
  void *local_68;
  
  if (param_4 != (long *)0x0) {
    local_68 = param_2;
    lVar8 = FUN_02e8d824(param_4,&local_68);
    if (lVar8 == 0) {
      uVar14 = 0;
      uVar17 = 0xffffffff;
    }
    else {
      uVar17 = *(uint *)(lVar8 + 4);
      uVar14 = ((int)lVar8 - (int)param_4[2]) * 0x20000000;
    }
    if (-1 < (int)(uVar17 | uVar14)) {
      local_68 = param_2;
      lVar8 = FUN_02e8d824(param_4,&local_68);
      if (lVar8 != 0) {
        plVar12 = (long *)(*param_4 + (long)*(int *)(lVar8 + 4) * 0x10 + 8);
        plVar9 = (long *)*plVar12;
        if (plVar9 != (long *)0x0) {
          if (plVar9[1] == 0) {
            *param_1 = (long)plVar9;
          }
          else {
            plVar9 = plVar9 + 2;
            do {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar7) {
                *plVar9 = *plVar9 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            plVar9 = (long *)*plVar12;
            *param_1 = (long)plVar9;
            if (plVar9 == (long *)0x0) {
              return;
            }
          }
          if (plVar9[1] == 0) {
            return;
          }
          plVar12 = plVar9 + 2;
          do {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar7) {
              *plVar12 = *plVar12 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            lVar8 = *plVar12;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar7) {
              *plVar12 = lVar8 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar8 + -1 == 0) {
            (**(code **)(*plVar9 + 0x18))();
            return;
          }
          return;
        }
      }
      *param_1 = 0;
      return;
    }
  }
  puVar6 = PTR_DAT_047d1a08;
  uVar17 = (uint)*(undefined8 *)((long)param_2 + 8);
  if (uVar17 == 0) {
    iVar4 = *(int *)((long)param_2 + 0x54);
    if (iVar4 < 4) {
      uVar17 = (*(int *)((long)param_2 + 0x44) * 0xc + 0xfU & 0xfffffff0) +
               (param_3 + 0xfU & 0xfffffff0);
      local_68 = (void *)(long)(int)uVar17;
      plVar12 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
      pvVar15 = local_68;
      uVar20 = (ulong)local_68 >> 2;
      plVar9 = plVar12;
      if (((ulong)plVar12 & 0xf) == 0) {
        uVar18 = uVar20;
      }
      else {
        uVar13 = 4 - (((ulong)plVar12 & 0xf) >> 2);
        uVar18 = uVar20;
        if (uVar13 <= uVar20) {
          uVar18 = uVar13;
        }
        plVar10 = (long *)((long)plVar12 + uVar18 * 4);
        if (plVar12 < plVar10) {
          memset(plVar12,0,uVar18 * 4);
          uVar13 = uVar18 * 4 - 1;
          uVar14 = ((uint)(uVar13 >> 2) & 0x3fffffff) + 1;
          if ((uVar14 & 7) != 0) {
            lVar8 = -((ulong)uVar14 & 7);
            do {
              plVar9 = (long *)((long)plVar9 + 4);
              bVar7 = lVar8 != -1;
              lVar8 = lVar8 + 1;
            } while (bVar7);
          }
          if (0x1b < uVar13) {
            do {
              plVar9 = plVar9 + 4;
            } while (plVar9 < plVar10);
          }
        }
        uVar18 = uVar20 - uVar18;
      }
      plVar10 = (long *)((long)plVar12 + uVar20 * 4);
      if ((3 < uVar18) && (0 < (long)(uVar18 & 0xfffffffffffffffc))) {
        plVar19 = (long *)((long)plVar9 + (uVar18 & 0xfffffffffffffffc) * 4);
        plVar21 = plVar19;
        if (plVar19 <= plVar9 + 2) {
          plVar21 = plVar9 + 2;
        }
        memset(plVar9,0,(long)plVar21 + ~(ulong)plVar9 + 0x10 & 0xfffffffffffffff0);
        do {
          plVar9 = plVar9 + 2;
        } while (plVar9 < plVar19);
      }
    }
    else {
      uVar17 = (iVar4 << 4 | 0xfU) + (param_3 + 0xfU & 0xfffffff0) +
               (*(int *)((long)param_2 + 0x44) * 0xc + 0xfU & 0xfffffff0) +
               (*(int *)((long)param_2 + 0x5c) + 3U & 0xfffffffc) +
               (*(int *)((long)param_2 + 100) + iVar4 + *(int *)((long)param_2 + 0x6c)) * 4 &
               0xfffffff0;
      local_68 = (void *)(long)(int)uVar17;
      plVar12 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
      pvVar15 = local_68;
      uVar20 = (ulong)local_68 >> 2;
      plVar9 = plVar12;
      if (((ulong)plVar12 & 0xf) == 0) {
        uVar18 = uVar20;
      }
      else {
        uVar13 = 4 - (((ulong)plVar12 & 0xf) >> 2);
        uVar18 = uVar20;
        if (uVar13 <= uVar20) {
          uVar18 = uVar13;
        }
        plVar10 = (long *)((long)plVar12 + uVar18 * 4);
        if (plVar12 < plVar10) {
          memset(plVar12,0,uVar18 * 4);
          uVar13 = uVar18 * 4 - 1;
          uVar14 = ((uint)(uVar13 >> 2) & 0x3fffffff) + 1;
          if ((uVar14 & 7) != 0) {
            lVar8 = -((ulong)uVar14 & 7);
            do {
              plVar9 = (long *)((long)plVar9 + 4);
              bVar7 = lVar8 != -1;
              lVar8 = lVar8 + 1;
            } while (bVar7);
          }
          if (0x1b < uVar13) {
            do {
              plVar9 = plVar9 + 4;
            } while (plVar9 < plVar10);
          }
        }
        uVar18 = uVar20 - uVar18;
      }
      plVar10 = (long *)((long)plVar12 + uVar20 * 4);
      if ((3 < uVar18) && (0 < (long)(uVar18 & 0xfffffffffffffffc))) {
        plVar19 = (long *)((long)plVar9 + (uVar18 & 0xfffffffffffffffc) * 4);
        plVar21 = plVar19;
        if (plVar19 <= plVar9 + 2) {
          plVar21 = plVar9 + 2;
        }
        memset(plVar9,0,(long)plVar21 + ~(ulong)plVar9 + 0x10 & 0xfffffffffffffff0);
        do {
          plVar9 = plVar9 + 2;
        } while (plVar9 < plVar19);
      }
    }
    if (plVar9 < plVar10) {
      memset(plVar9,0,(long)plVar12 + ((ulong)pvVar15 & 0xfffffffffffffffc) + ~(ulong)plVar9 + 4 &
                      0xfffffffffffffffc);
    }
    if (*(code **)(PTR_DAT_047d1a08 + 0x10) != (code *)0x0) {
      (**(code **)(PTR_DAT_047d1a08 + 0x10))(plVar12,"hknpConvexShape");
    }
    memcpy(plVar12,param_2,(long)param_3);
    uVar2 = (param_3 + 0xfU | 0xf) + *(int *)((long)param_2 + 0x44) * 0xc & 0xfff0;
    uVar14 = uVar2 + *(int *)((long)param_2 + 0x54) * 0x10;
    uVar1 = uVar14 + *(int *)((long)param_2 + 0x54) * 4;
    uVar3 = *(int *)((long)param_2 + 0x5c) + uVar1 + 3 & 0xfffc;
    plVar9 = plVar12 + 0xd;
    *(uint *)plVar9 = (uVar3 + *(int *)((long)param_2 + 100) * 4 & 0xfffc) - 0x68;
    iVar4 = (param_3 + 0xfU & 0xfff0) - 0x40;
    *(int *)(plVar12 + 8) = iVar4;
    plVar19 = plVar12 + 9;
    *(uint *)plVar19 = uVar2 - 0x48;
    plVar21 = plVar12 + 10;
    *(uint *)plVar21 = (uVar14 & 0xfff0) - 0x50;
    plVar22 = plVar12 + 0xb;
    *(uint *)plVar22 = (uVar1 & 0xfffc) - 0x58;
    plVar10 = plVar12 + 0xc;
    *(uint *)plVar10 = uVar3 - 0x60;
    pvVar11 = (void *)0x0;
    if (iVar4 != 0) {
      pvVar11 = (void *)((long)(plVar12 + 8) + (long)iVar4);
    }
    pvVar16 = (void *)0x0;
    if (*(int *)((long)param_2 + 0x40) != 0) {
      pvVar16 = (void *)((long)param_2 + (long)*(int *)((long)param_2 + 0x40) + 0x40);
    }
    memcpy(pvVar11,pvVar16,(long)*(int *)((long)param_2 + 0x44) * 0xc);
    iVar4 = *(int *)((long)param_2 + 0x48);
    pvVar11 = (void *)0x0;
    if ((int)*plVar19 != 0) {
      pvVar11 = (void *)((long)(int)*plVar19 + (long)plVar19);
    }
    pvVar16 = (void *)0x0;
    if (iVar4 != 0) {
      pvVar16 = (void *)((long)iVar4 + (long)param_2 + 0x48);
    }
    memcpy(pvVar11,pvVar16,(long)*(int *)((long)param_2 + 0x4c) << 4);
    pvVar11 = (void *)0x0;
    if ((int)*plVar21 != 0) {
      pvVar11 = (void *)((long)(int)*plVar21 + (long)plVar21);
    }
    pvVar16 = (void *)0x0;
    if (*(int *)((long)param_2 + 0x50) != 0) {
      pvVar16 = (void *)((long)param_2 + (long)*(int *)((long)param_2 + 0x50) + 0x50);
    }
    memcpy(pvVar11,pvVar16,(long)*(int *)((long)param_2 + 0x54) << 2);
    iVar4 = *(int *)((long)param_2 + 0x58);
    pvVar11 = (void *)0x0;
    if ((int)*plVar22 != 0) {
      pvVar11 = (void *)((long)(int)*plVar22 + (long)plVar22);
    }
    pvVar16 = (void *)0x0;
    if (iVar4 != 0) {
      pvVar16 = (void *)((long)iVar4 + (long)param_2 + 0x58);
    }
    memcpy(pvVar11,pvVar16,(long)*(int *)((long)param_2 + 0x5c));
    iVar4 = *(int *)((long)param_2 + 0x60);
    pvVar11 = (void *)0x0;
    if ((int)*plVar10 != 0) {
      pvVar11 = (void *)((long)(int)*plVar10 + (long)plVar10);
    }
    pvVar16 = (void *)0x0;
    if (iVar4 != 0) {
      pvVar16 = (void *)((long)iVar4 + (long)param_2 + 0x60);
    }
    memcpy(pvVar11,pvVar16,(long)*(int *)((long)param_2 + 100) << 2);
    iVar4 = *(int *)((long)param_2 + 0x68);
    plVar10 = (long *)0x0;
    if ((int)*plVar9 != 0) {
      plVar10 = (long *)((long)(int)*plVar9 + (long)plVar9);
    }
    pvVar11 = (void *)0x0;
    if (iVar4 != 0) {
      pvVar11 = (void *)((long)iVar4 + (long)param_2 + 0x68);
    }
    pvVar16 = (void *)((long)*(int *)((long)param_2 + 0x6c) << 2);
  }
  else {
    pvVar16 = (void *)(long)(int)uVar17;
    local_68 = pvVar16;
    plVar10 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_68,0);
    if (*(code **)(puVar6 + 0x10) != (code *)0x0) {
      (**(code **)(puVar6 + 0x10))(plVar10,"hknpConvexShape");
    }
    pvVar11 = param_2;
    plVar12 = plVar10;
  }
  memcpy(plVar10,pvVar11,(size_t)pvVar16);
  plVar12[6] = 0;
  plVar12[7] = 0;
  FUN_02ee8d2c(plVar12 + 6,(long)param_2 + 0x30);
  plVar9 = plVar12 + 2;
  *plVar9 = 1;
  plVar12[1] = (long)(int)uVar17;
  if (param_4 != (long *)0x0) {
    if ((plVar12 != (long *)0x0) && (uVar17 != 0)) {
      do {
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = *plVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_70 = plVar12;
    local_68 = param_2;
    FUN_02e84a60(param_4,&local_68,&local_70);
    if ((local_70 != (long *)0x0) && (local_70[1] != 0)) {
      plVar9 = local_70 + 2;
      do {
        lVar8 = *plVar9;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar7) {
          *plVar9 = lVar8 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*local_70 + 0x18))();
      }
    }
  }
  *param_1 = (long)plVar12;
  return;
}


