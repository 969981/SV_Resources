/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0321a4b4; name: FUN_0321a4b4
 */


/* WARNING: Removing unreachable block (ram,0x0321a5f8) */

void FUN_0321a4b4(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  short *psVar12;
  ulong uVar13;
  ulong *puVar14;
  short *psVar15;
  ulong *puVar16;
  int iVar17;
  long local_78;
  ulong *local_70;
  undefined8 local_68;
  ulong local_60;
  long local_58;
  ulong *local_50;
  ulong local_48;
  
  puVar16 = (ulong *)param_1[1];
  puVar7 = puVar16;
  if ((*puVar16 & 1) == 0) {
    do {
      puVar7 = (ulong *)puVar7[1];
    } while ((*puVar7 & 1) == 0);
  }
  switch((uint)puVar7[2] & 0x1f) {
  case 2:
  case 4:
  case 5:
  case 6:
    goto switchD_0321a518_caseD_2;
  case 3:
    puVar7 = puVar16;
    do {
      uVar13 = *puVar7;
      if (((uint)uVar13 >> 2 & 1) != 0) {
        plVar6 = (long *)puVar7[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
        goto LAB_0321a824;
      }
      puVar7 = (ulong *)puVar7[1];
    } while (puVar7 != (ulong *)0x0);
    plVar6 = (long *)0x0;
LAB_0321a824:
                    /* WARNING: Could not recover jumptable at 0x0321a848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x40))(plVar6,*param_1,puVar16);
    return;
  case 7:
    plVar4 = (long *)0x0;
    plVar6 = (long *)0x0;
    puVar7 = (ulong *)0x0;
    do {
      do {
        plVar6 = plVar6 + 1;
        puVar8 = puVar7;
        if (plVar4 <= plVar6) {
          if (puVar16 == puVar7) {
            return;
          }
          psVar12 = (short *)0x0;
          puVar8 = (ulong *)0x0;
          puVar14 = puVar16;
          do {
            uVar11 = (uint)*puVar14;
            if ((uVar11 >> 0x17 & 1) != 0) {
              uVar13 = CONCAT44(uVar11,uVar11) & 0x7fffff007fffff;
              psVar15 = (short *)puVar14[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                                       POPCOUNT((char)(uVar13 >> 8)) +
                                                      POPCOUNT((char)(uVar13 >> 0x10))) + 2];
              if (psVar15 != (short *)0x0) {
                if ((int)psVar15[1] + (int)*psVar15 != 0) {
                  psVar12 = psVar15;
                  puVar8 = puVar14;
                }
              }
            }
            puVar14 = (ulong *)puVar14[1];
          } while (puVar14 != puVar7);
          if (puVar8 == (ulong *)0x0) {
            return;
          }
          plVar6 = (long *)(psVar12 + 4);
          plVar4 = plVar6 + (long)psVar12[1] + (long)*psVar12;
        }
        uVar11 = (uint)*(undefined8 *)*plVar6;
        puVar7 = puVar8;
      } while (((uVar11 >> 0x11 & 1) == 0) ||
              (uVar13 = CONCAT44(uVar11,uVar11) & 0x1ffff0001ffff,
              (*(ushort *)
                (*plVar6 +
                (ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                             POPCOUNT((char)(uVar13 >> 0x10))) * 8 + 0x12) >> 5 & 1) == 0));
      FUN_031e32f0(&local_58,param_1,*plVar6);
      if ((local_50 < (ulong *)0x2) ||
         ((uVar11 = (uint)*local_50, (uVar11 >> 0x11 & 1) == 0 ||
          (uVar13 = CONCAT44(uVar11,uVar11) & 0x1ffff0001ffff,
          (local_50[(ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                                 POPCOUNT((char)(uVar13 >> 0x10))) + 2] & 0x300000) == 0 ||
          (local_50[(ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                                 POPCOUNT((char)(uVar13 >> 0x10))) + 2] & 0x400000) == 0)))) {
        local_70 = local_50;
        local_68 = local_48;
        if ((local_48 & 1) != 0) {
          piVar1 = (int *)((local_48 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      else {
        local_70 = (ulong *)local_50[1];
        local_68 = 0;
        puVar8 = local_70;
        if (local_70 != (ulong *)0x0) {
          do {
            uVar13 = *puVar8;
            if (((uint)uVar13 >> 2 & 1) != 0) {
              local_68 = puVar8[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
              goto LAB_0321a758;
            }
            puVar8 = (ulong *)puVar8[1];
          } while (puVar8 != (ulong *)0x0);
          local_68 = 0;
        }
LAB_0321a758:
        if ((local_68 & 1) != 0) {
          piVar1 = (int *)((local_68 & 0xfffffffffffffffe) + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      FUN_0321a4b4(&local_78);
      if ((local_68 & 1) != 0) {
        plVar5 = (long *)(local_68 & 0xfffffffffffffffe);
        plVar10 = plVar5 + 1;
        do {
          lVar9 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *(int *)plVar10 = (int)lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar5 != (long *)0x0) && ((int)lVar9 == 1)) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      if ((local_48 & 1) != 0) {
        plVar5 = (long *)(local_48 & 0xfffffffffffffffe);
        plVar10 = plVar5 + 1;
        do {
          lVar9 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *(int *)plVar10 = (int)lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar5 != (long *)0x0) && ((int)lVar9 == 1)) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    } while( true );
  case 8:
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x261011c5,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",
                 0x3c,"Bad var visitor switch");
  }
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = (ulong *)0x0;
  (**(code **)(*(long *)(param_1[2] & 0xfffffffffffffffe) + 0x50))
            ((long *)(param_1[2] & 0xfffffffffffffffe),*param_1,puVar16,&local_78);
  if (local_70 != (ulong *)0x0) {
    puVar7 = local_70;
    if ((*local_70 & 1) == 0) {
      puVar16 = local_70;
      do {
        puVar16 = (ulong *)puVar16[1];
      } while ((*puVar16 & 1) == 0);
      if ((puVar16[2] & 0x1f) != 7) {
        puVar16 = local_70;
        do {
          puVar16 = (ulong *)puVar16[1];
        } while ((*puVar16 & 1) == 0);
        if ((puVar16[2] & 0x1f) != 3) {
          if ((*local_70 & 1) == 0) {
            do {
              puVar7 = (ulong *)puVar7[1];
            } while ((*puVar7 & 1) == 0);
          }
          goto LAB_0321a870;
        }
      }
    }
    else if (((local_70[2] & 0x1f) != 7) && ((local_70[2] & 0x1f) != 3)) {
LAB_0321a870:
      if ((puVar7[2] & 0x1f) != 8) goto LAB_0321aacc;
    }
    if (0 < (int)local_68) {
      iVar17 = 0;
      do {
        local_58 = local_78 + (long)local_68._4_4_ * (long)iVar17;
        local_50 = local_70;
        if ((local_60 & 1) == 0) {
          if (((local_70 < (ulong *)0x2) || (uVar11 = (uint)*local_70, (uVar11 >> 0x11 & 1) == 0))
             || (uVar13 = CONCAT44(uVar11,uVar11) & 0x1ffff0001ffff,
                (local_70[(ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                                       POPCOUNT((char)(uVar13 >> 0x10))) + 2] & 0x300000) == 0 ||
                (local_70[(ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                                       POPCOUNT((char)(uVar13 >> 0x10))) + 2] & 0x400000) == 0)) {
            local_48 = local_60;
          }
          else {
            local_50 = (ulong *)local_70[1];
            local_48 = 0;
            puVar7 = local_50;
            if (local_50 != (ulong *)0x0) {
              do {
                uVar13 = *puVar7;
                if (((uint)uVar13 >> 2 & 1) != 0) {
                  local_48 = puVar7[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
                  goto LAB_0321aa80;
                }
                puVar7 = (ulong *)puVar7[1];
              } while (puVar7 != (ulong *)0x0);
              local_48 = 0;
            }
LAB_0321aa80:
            if ((local_48 & 1) != 0) {
              piVar1 = (int *)((local_48 & 0xfffffffffffffffe) + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
          }
          FUN_0321a4b4(&local_58);
          if ((local_48 & 1) != 0) {
            plVar4 = (long *)(local_48 & 0xfffffffffffffffe);
            plVar6 = plVar4 + 1;
            do {
              lVar9 = *plVar6;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
              if (bVar3) {
                *(int *)plVar6 = (int)lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar4 != (long *)0x0) && ((int)lVar9 == 1)) {
              lVar9 = *plVar4;
              goto LAB_0321aa0c;
            }
          }
        }
        else {
          plVar4 = (long *)(local_60 & 0xfffffffffffffffe);
          plVar6 = plVar4 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *(int *)plVar6 = (int)*plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (((local_70 < (ulong *)0x2) || (uVar11 = (uint)*local_70, (uVar11 >> 0x11 & 1) == 0))
             || (uVar13 = CONCAT44(uVar11,uVar11) & 0x1ffff0001ffff,
                (local_70[(ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                                       POPCOUNT((char)(uVar13 >> 0x10))) + 2] & 0x300000) == 0 ||
                (local_70[(ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                                       POPCOUNT((char)(uVar13 >> 0x10))) + 2] & 0x400000) == 0)) {
            local_48 = local_60;
            plVar10 = plVar6;
LAB_0321a998:
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar3) {
                *(int *)plVar10 = (int)*plVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          else {
            local_50 = (ulong *)local_70[1];
            local_48 = 0;
            puVar7 = local_50;
            if (local_50 != (ulong *)0x0) {
              do {
                uVar13 = *puVar7;
                if (((uint)uVar13 >> 2 & 1) != 0) {
                  local_48 = puVar7[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
                  goto LAB_0321aab8;
                }
                puVar7 = (ulong *)puVar7[1];
              } while (puVar7 != (ulong *)0x0);
              local_48 = 0;
            }
LAB_0321aab8:
            if ((local_48 & 1) != 0) {
              plVar10 = (long *)((local_48 & 0xfffffffffffffffe) + 8);
              goto LAB_0321a998;
            }
          }
          FUN_0321a4b4(&local_58);
          if ((local_48 & 1) != 0) {
            plVar5 = (long *)(local_48 & 0xfffffffffffffffe);
            plVar10 = plVar5 + 1;
            do {
              lVar9 = *plVar10;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar3) {
                *(int *)plVar10 = (int)lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if ((plVar5 != (long *)0x0) && ((int)lVar9 == 1)) {
              (**(code **)(*plVar5 + 8))();
            }
          }
          do {
            lVar9 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *(int *)plVar6 = (int)lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((plVar4 != (long *)0x0) && ((int)lVar9 == 1)) {
            lVar9 = *plVar4;
LAB_0321aa0c:
            (**(code **)(lVar9 + 8))(plVar4);
          }
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < (int)local_68);
    }
  }
LAB_0321aacc:
  puVar7 = (ulong *)param_1[1];
  do {
    uVar13 = *puVar7;
    if (((uint)uVar13 >> 2 & 1) != 0) {
      plVar6 = (long *)puVar7[(uVar13 >> 1 & 1) + (uVar13 & 1) + 2];
      goto LAB_0321ab00;
    }
    puVar7 = (ulong *)puVar7[1];
  } while (puVar7 != (ulong *)0x0);
  plVar6 = (long *)0x0;
LAB_0321ab00:
  (**(code **)(*plVar6 + 0x70))(plVar6,*param_1);
  if ((local_60 & 1) != 0) {
    plVar4 = (long *)(local_60 & 0xfffffffffffffffe);
    plVar6 = plVar4 + 1;
    do {
      lVar9 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((plVar4 != (long *)0x0) && ((int)lVar9 == 1)) {
      (**(code **)(*plVar4 + 8))();
    }
  }
switchD_0321a518_caseD_2:
  return;
}


