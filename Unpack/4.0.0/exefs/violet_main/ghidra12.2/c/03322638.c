/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03322638; name: FUN_03322638
 */


/* WARNING: Removing unreachable block (ram,0x03322908) */

void FUN_03322638(long param_1,long *param_2,int param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  byte *pbVar11;
  uint uVar12;
  short *psVar13;
  long lVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined8 *puVar17;
  short *psVar18;
  ulong *puVar19;
  int iVar20;
  byte *pbVar21;
  byte *pbVar22;
  long *plVar23;
  long local_78;
  ulong *puStack_70;
  ulong local_68;
  
  if (0 < param_3) {
    pbVar22 = (byte *)param_2[1];
    pbVar21 = pbVar22;
    if ((*pbVar22 & 1) == 0) {
      do {
        pbVar21 = *(byte **)(pbVar21 + 8);
      } while ((*pbVar21 & 1) == 0);
    }
    uVar12 = *(uint *)(param_1 + 0x54);
    iVar20 = *(int *)(param_1 + 0x1e8);
    if ((int)uVar12 < *(int *)(param_1 + 0x50) * 2) {
      FUN_02ef5fd4((long *)(param_1 + 0x48),PTR_PTR_047d1a50,uVar12 * 2 + 2);
      uVar12 = *(uint *)(param_1 + 0x54);
    }
    uVar4 = (int)pbVar21 * -0x61c8864f;
    uVar5 = (int)((ulong)pbVar21 >> 0x20) * -0x61c8864f;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    lVar14 = *(long *)(param_1 + 0x48);
    uVar9 = (ulong)(uVar12 & (uVar4 + (uVar4 >> 2) + uVar5 * 0x40 + 0x9e3779b9 ^ uVar5));
    puVar17 = (undefined8 *)(lVar14 + uVar9 * 0x10);
    if ((byte *)*puVar17 == (byte *)0xffffffffffffffff) {
LAB_03322740:
      *puVar17 = pbVar21;
      *(long *)(*(long *)(param_1 + 0x48) + uVar9 * 0x10 + 8) = (long)iVar20;
      lVar14 = *(long *)(param_1 + 0x48);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    }
    else if ((byte *)*puVar17 != pbVar21) {
      do {
        uVar9 = (ulong)((int)uVar9 + 1U & uVar12);
        puVar17 = (undefined8 *)(lVar14 + uVar9 * 0x10);
        if ((byte *)*puVar17 == (byte *)0xffffffffffffffff) goto LAB_03322740;
      } while ((byte *)*puVar17 != pbVar21);
    }
    lVar14 = *(long *)(lVar14 + ((long)(uVar9 << 0x20) >> 0x1c) + 8);
    iVar20 = (int)lVar14;
    if (*(int *)(param_1 + 0x1e8) == iVar20) {
      iVar1 = iVar20 + 1;
      if ((int)(*(uint *)(param_1 + 0x1ec) & 0x7fffffff) <= iVar20) {
        FUN_033273cc(param_1 + 0x1e0,(long)iVar1);
        iVar20 = *(int *)(param_1 + 0x1e8);
      }
      puVar17 = (undefined8 *)(*(long *)(param_1 + 0x1e0) + (long)iVar20 * 0x10);
      *(int *)(param_1 + 0x1e8) = iVar1;
      *puVar17 = 0;
      puVar17[1] = 0x8000000000000000;
    }
    plVar10 = (long *)(*(long *)(param_1 + 0x1e0) + ((lVar14 << 0x20) >> 0x1c));
    plVar23 = plVar10 + 1;
    iVar20 = (int)*plVar23;
    lVar14 = (long)iVar20;
    if ((int)(*(uint *)((long)plVar10 + 0xc) & 0x7fffffff) <= iVar20) {
      FUN_0332764c(plVar10,PTR_PTR_047d1a50,lVar14 + 1);
      iVar20 = (int)*plVar23;
    }
    plVar10 = (long *)(*plVar10 + (long)iVar20 * 0x18);
    *(int *)plVar23 = (int)(lVar14 + 1);
    *(undefined4 *)(plVar10 + 2) = 0;
    *plVar10 = *param_2;
    *(int *)(plVar10 + 1) = param_3;
    *(undefined4 *)((long)plVar10 + 0xc) = param_4;
    uVar12 = param_6;
    if (param_5 != 0xffffffff) {
      uVar12 = param_5;
    }
    *(uint *)(plVar10 + 2) = uVar12 & 0x7fffffff | (uint)(param_5 == 0xffffffff) << 0x1f;
    pbVar21 = pbVar22;
    if ((*pbVar22 & 1) == 0) {
      do {
        pbVar21 = *(byte **)(pbVar21 + 8);
      } while ((*pbVar21 & 1) == 0);
    }
    if ((pbVar22 != (byte *)0x0) && ((*(ulong *)(pbVar21 + 0x10) & 0x1f) == 7)) {
      plVar23 = (long *)0x0;
      plVar10 = (long *)0x0;
      pbVar21 = (byte *)0x0;
      do {
        do {
          plVar10 = plVar10 + 1;
          pbVar11 = pbVar21;
          if (plVar23 <= plVar10) {
            if (pbVar22 == pbVar21) {
              return;
            }
            psVar13 = (short *)0x0;
            pbVar11 = (byte *)0x0;
            pbVar15 = pbVar22;
            do {
              uVar12 = (uint)*(undefined8 *)pbVar15;
              if ((uVar12 >> 0x17 & 1) != 0) {
                uVar9 = CONCAT44(uVar12,uVar12) & 0x7fffff007fffff;
                psVar18 = *(short **)
                           (pbVar15 +
                           (ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) +
                                        POPCOUNT((char)(uVar9 >> 0x10))) * 8 + 0x10);
                if (psVar18 != (short *)0x0) {
                  if ((int)psVar18[1] + (int)*psVar18 != 0) {
                    psVar13 = psVar18;
                    pbVar11 = pbVar15;
                  }
                }
              }
              pbVar15 = *(byte **)(pbVar15 + 8);
            } while (pbVar15 != pbVar21);
            if (pbVar11 == (byte *)0x0) {
              return;
            }
            plVar10 = (long *)(psVar13 + 4);
            plVar23 = plVar10 + (long)psVar13[1] + (long)*psVar13;
          }
          uVar12 = (uint)*(undefined8 *)*plVar10;
          pbVar21 = pbVar11;
        } while (((uVar12 >> 0x11 & 1) == 0) ||
                (uVar9 = CONCAT44(uVar12,uVar12) & 0x1ffff0001ffff,
                (*(ushort *)
                  (*plVar10 +
                  (ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) +
                               POPCOUNT((char)(uVar9 >> 0x10))) * 8 + 0x12) >> 5 & 1) == 0));
        puStack_70 = (ulong *)*plVar10;
        uVar9 = *puStack_70;
        uVar12 = (uint)uVar9;
        if ((uVar12 >> 0x11 & 1) == 0) {
          uVar16 = 0;
          if (puStack_70 != (ulong *)0x0) goto LAB_03322970;
LAB_033229a4:
          uVar9 = 0;
        }
        else {
          uVar16 = CONCAT44(uVar12,uVar12) & 0x1ffff0001ffff;
          uVar16 = (ulong)(ushort)puStack_70
                                  [(ulong)(byte)(POPCOUNT((char)uVar16) +
                                                 POPCOUNT((char)(uVar16 >> 8)) +
                                                POPCOUNT((char)(uVar16 >> 0x10))) + 2];
          if (puStack_70 == (ulong *)0x0) goto LAB_033229a4;
LAB_03322970:
          puVar19 = puStack_70;
          if ((uVar12 >> 2 & 1) == 0) {
            do {
              puVar19 = (ulong *)puVar19[1];
              if (puVar19 == (ulong *)0x0) goto LAB_033229a4;
              uVar9 = *puVar19;
            } while (((uint)uVar9 >> 2 & 1) == 0);
          }
          uVar9 = puVar19[(uVar9 >> 1 & 1) + (uVar9 & 1) + 2];
        }
        local_78 = uVar16 + *param_2;
        local_68 = uVar9;
        if ((uVar9 & 1) == 0) {
          FUN_03322638(param_1,&local_78,param_3,param_4,param_5,param_6);
        }
        else {
          piVar2 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = *piVar2 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = *piVar2 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          FUN_03322638(param_1,&local_78,param_3,param_4,param_5,param_6);
          if ((uVar9 & 1) != 0) {
            plVar8 = (long *)(uVar9 & 0xfffffffffffffffe);
            plVar3 = plVar8 + 1;
            do {
              lVar14 = *plVar3;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar7) {
                *(int *)plVar3 = (int)lVar14 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((plVar8 != (long *)0x0) && ((int)lVar14 == 1)) {
              (**(code **)(*plVar8 + 8))();
            }
          }
          plVar8 = (long *)(uVar9 & 0xfffffffffffffffe);
          plVar3 = plVar8 + 1;
          do {
            lVar14 = *plVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar7) {
              *(int *)plVar3 = (int)lVar14 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((plVar8 != (long *)0x0) && ((int)lVar14 == 1)) {
            (**(code **)(*plVar8 + 8))();
          }
        }
      } while( true );
    }
  }
  return;
}


