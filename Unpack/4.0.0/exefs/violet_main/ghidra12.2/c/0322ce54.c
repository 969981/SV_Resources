/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0322ce54; name: FUN_0322ce54
 */


/* WARNING: Removing unreachable block (ram,0x0322d100) */
/* WARNING: Removing unreachable block (ram,0x0322cfb0) */
/* WARNING: Removing unreachable block (ram,0x0322d1dc) */

void FUN_0322ce54(undefined8 *param_1,long *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  ThreadType *pTVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  short *psVar18;
  undefined8 *puVar19;
  short *psVar20;
  long *plVar21;
  ulong uVar22;
  long *plVar23;
  long local_e0;
  long lStack_d8;
  ulong local_d0;
  undefined8 *local_c8;
  undefined8 *puStack_c0;
  ulong local_b8;
  undefined8 local_b0 [2];
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 local_97;
  undefined2 local_96;
  undefined4 local_94;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70;
  undefined8 uStack_68;
  
  plVar21 = param_1 + 6;
  if (*(int *)(param_1 + 7) != 0) {
    lVar12 = (long)*(int *)(param_1 + 7) << 3;
    puVar10 = (undefined8 *)*plVar21;
    do {
      if ((long *)*puVar10 == param_2) {
        return;
      }
      lVar12 = lVar12 + -8;
      puVar10 = puVar10 + 1;
    } while (lVar12 != 0);
  }
  if (param_1[3] != 0) {
    FUN_0322ce54(param_1[3],param_2,param_3);
  }
  local_a0 = *param_1;
  local_b0[0] = 0;
  local_98 = (undefined1)param_3;
  local_96 = 0;
  local_94 = 0;
  pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
  local_90 = nn::os::GetThreadId(pTVar5);
  puVar4 = PTR_DAT_047d1a08;
  local_88 = 0;
  plVar17 = (long *)0x0;
  plVar15 = (long *)0x0;
  local_80 = 0;
  iVar9 = 0;
  local_97 = 1;
  uStack_68 = 0;
  local_78 = param_1[4];
  local_70 = (ulong)*(uint *)(param_1 + 5);
  puVar10 = (undefined8 *)0x0;
LAB_0322cf14:
  plVar15 = plVar15 + 1;
  puVar19 = puVar10;
  if (plVar17 <= plVar15) {
    if ((undefined8 *)param_1[2] == puVar10) goto LAB_0322cfe0;
    psVar18 = (short *)0x0;
    puVar19 = (undefined8 *)0x0;
    puVar16 = (undefined8 *)param_1[2];
    do {
      uVar11 = (uint)*puVar16;
      if ((uVar11 >> 0x17 & 1) != 0) {
        uVar22 = CONCAT44(uVar11,uVar11) & 0x7fffff007fffff;
        psVar20 = (short *)puVar16[(ulong)(byte)(POPCOUNT((char)uVar22) +
                                                 POPCOUNT((char)(uVar22 >> 8)) +
                                                POPCOUNT((char)(uVar22 >> 0x10))) + 2];
        if (psVar20 != (short *)0x0) {
          if ((int)psVar20[1] + (int)*psVar20 != 0) {
            psVar18 = psVar20;
            puVar19 = puVar16;
          }
        }
      }
      puVar16 = (undefined8 *)puVar16[1];
    } while (puVar16 != puVar10);
    if (puVar19 == (undefined8 *)0x0) goto LAB_0322cfe0;
    plVar15 = (long *)(psVar18 + 4);
    plVar17 = plVar15 + (long)psVar18[1] + (long)*psVar18;
  }
  uVar11 = (uint)*(undefined8 *)*plVar15;
  puVar10 = puVar19;
  if (((uVar11 >> 0x11 & 1) != 0) &&
     (uVar22 = CONCAT44(uVar11,uVar11) & 0x1ffff0001ffff,
     (*(ushort *)
       (*plVar15 +
       (ulong)(byte)(POPCOUNT((char)uVar22) + POPCOUNT((char)(uVar22 >> 8)) +
                    POPCOUNT((char)(uVar22 >> 0x10))) * 8 + 0x12) >> 5 & 1) != 0)) {
    iVar9 = iVar9 + 1;
  }
  goto LAB_0322cf14;
LAB_0322cfe0:
  uVar11 = iVar9 - 1;
  uVar22 = -(ulong)(uVar11 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar11 << 3;
  local_c8 = (undefined8 *)(uVar22 + 0x10);
  plVar6 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_c8,0);
  local_c8 = (undefined8 *)(uVar22 + 8);
  plVar7 = (long *)(**(code **)puVar4)(0,&local_c8,0);
  *plVar6 = (long)(int)uVar11;
  plVar6[1] = (long)plVar7;
  plVar15 = (long *)0x0;
  *plVar7 = (long)(int)uVar11;
  local_c8 = (undefined8 *)param_1[1];
  puVar10 = (undefined8 *)param_1[2];
  uVar13 = *local_c8;
  local_b8 = 0;
  puVar19 = (undefined8 *)0x0;
  plVar17 = (long *)0x0;
  do {
    plVar23 = plVar17 + 1;
    if (plVar23 < plVar15) {
      puVar16 = puVar19;
    }
    else {
      plVar23 = plVar17;
      if (puVar10 == puVar19) {
        puVar19 = puVar10;
        break;
      }
      psVar18 = (short *)0x0;
      puVar16 = (undefined8 *)0x0;
      puVar14 = puVar10;
      do {
        uVar11 = (uint)*puVar14;
        if ((uVar11 >> 0x17 & 1) != 0) {
          uVar22 = CONCAT44(uVar11,uVar11) & 0x7fffff007fffff;
          psVar20 = (short *)puVar14[(ulong)(byte)(POPCOUNT((char)uVar22) +
                                                   POPCOUNT((char)(uVar22 >> 8)) +
                                                  POPCOUNT((char)(uVar22 >> 0x10))) + 2];
          if (psVar20 != (short *)0x0) {
            if ((int)psVar20[1] + (int)*psVar20 != 0) {
              psVar18 = psVar20;
              puVar16 = puVar14;
            }
          }
        }
        puVar14 = (undefined8 *)puVar14[1];
      } while (puVar14 != puVar19);
      if (puVar16 == (undefined8 *)0x0) break;
      plVar23 = (long *)(psVar18 + 4);
      plVar15 = plVar23 + (long)psVar18[1] + (long)*psVar18;
    }
    uVar11 = (uint)*(undefined8 *)*plVar23;
    puVar19 = puVar16;
    plVar17 = plVar23;
  } while (((uVar11 >> 0x11 & 1) == 0) ||
          (uVar22 = CONCAT44(uVar11,uVar11) & 0x1ffff0001ffff,
          (*(ushort *)
            (*plVar23 +
            (ulong)(byte)(POPCOUNT((char)uVar22) + POPCOUNT((char)(uVar22 >> 8)) +
                         POPCOUNT((char)(uVar22 >> 0x10))) * 8 + 0x12) >> 5 & 1) == 0));
  lVar12 = 0;
  puStack_c0 = puVar10;
  do {
    plVar23 = plVar23 + 1;
    puVar16 = puVar19;
    if (plVar15 <= plVar23) {
      if (puVar10 == puVar19) {
LAB_0322d268:
        FUN_0322c2f4(local_b0,uVar13,plVar6);
        puVar4 = PTR_DAT_047d1a08;
        if ((local_b8 & 1) != 0) {
          plVar17 = (long *)(local_b8 & 0xfffffffffffffffe);
          plVar15 = plVar17 + 1;
          do {
            lVar12 = *plVar15;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar2) {
              *(int *)plVar15 = (int)lVar12 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if ((plVar17 != (long *)0x0) && ((int)lVar12 == 1)) {
            (**(code **)(*plVar17 + 8))();
          }
        }
        (**(code **)(puVar4 + 8))(0,plVar7,0);
        (**(code **)(puVar4 + 8))(0,plVar6,0);
        (**(code **)(*param_2 + 0x20))(param_2,local_b0);
        iVar9 = *(int *)(param_1 + 7);
        lVar12 = (long)iVar9;
        if ((int)(*(uint *)((long)param_1 + 0x3c) & 0x7fffffff) <= iVar9) {
          FUN_0322e9a8(plVar21,lVar12 + 1);
          iVar9 = *(int *)(param_1 + 7);
        }
        *(long **)(*plVar21 + (long)iVar9 * 8) = param_2;
        if (param_2[1] != 0) {
          param_2 = param_2 + 2;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
            if (bVar2) {
              *param_2 = *param_2 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        *(int *)(param_1 + 7) = (int)(lVar12 + 1);
        if ((local_88 & 1) != 0) {
          (**(code **)(puVar4 + 8))(0,local_88 - 1,0);
        }
        return;
      }
      psVar18 = (short *)0x0;
      puVar16 = (undefined8 *)0x0;
      puVar14 = puVar10;
      do {
        uVar11 = (uint)*puVar14;
        if ((uVar11 >> 0x17 & 1) != 0) {
          uVar22 = CONCAT44(uVar11,uVar11) & 0x7fffff007fffff;
          psVar20 = (short *)puVar14[(ulong)(byte)(POPCOUNT((char)uVar22) +
                                                   POPCOUNT((char)(uVar22 >> 8)) +
                                                  POPCOUNT((char)(uVar22 >> 0x10))) + 2];
          if (psVar20 != (short *)0x0) {
            if ((int)psVar20[1] + (int)*psVar20 != 0) {
              psVar18 = psVar20;
              puVar16 = puVar14;
            }
          }
        }
        puVar14 = (undefined8 *)puVar14[1];
      } while (puVar14 != puVar19);
      if (puVar16 == (undefined8 *)0x0) goto LAB_0322d268;
      plVar23 = (long *)(psVar18 + 4);
      plVar15 = plVar23 + (long)psVar18[1] + (long)*psVar18;
    }
    uVar11 = (uint)*(undefined8 *)*plVar23;
    puVar19 = puVar16;
    if (((uVar11 >> 0x11 & 1) != 0) &&
       (uVar22 = CONCAT44(uVar11,uVar11) & 0x1ffff0001ffff,
       (*(ushort *)
         (*plVar23 +
         (ulong)(byte)(POPCOUNT((char)uVar22) + POPCOUNT((char)(uVar22 >> 8)) +
                      POPCOUNT((char)(uVar22 >> 0x10))) * 8 + 0x12) >> 5 & 1) != 0)) {
      FUN_031e32f0(&local_e0,&local_c8,*plVar23);
      plVar6[lVar12 + 2] = local_e0;
      plVar7[lVar12 + 1] = lStack_d8;
      if ((local_d0 & 1) != 0) {
        plVar8 = (long *)(local_d0 & 0xfffffffffffffffe);
        plVar17 = plVar8 + 1;
        do {
          lVar3 = *plVar17;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar2) {
            *(int *)plVar17 = (int)lVar3 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if ((plVar8 != (long *)0x0) && ((int)lVar3 == 1)) {
          (**(code **)(*plVar8 + 8))();
        }
      }
      lVar12 = lVar12 + 1;
    }
  } while( true );
}


