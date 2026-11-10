/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031e6298; name: FUN_031e6298
 */


/* WARNING: Removing unreachable block (ram,0x031e65dc) */
/* WARNING: Removing unreachable block (ram,0x031e65e4) */
/* WARNING: Removing unreachable block (ram,0x031e65ec) */
/* WARNING: Removing unreachable block (ram,0x031e65f4) */
/* WARNING: Removing unreachable block (ram,0x031e65f8) */
/* WARNING: Removing unreachable block (ram,0x031e6600) */

int FUN_031e6298(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  code *pcVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong *puVar21;
  byte *pbVar22;
  undefined1 local_e8 [16];
  ulong local_d8;
  undefined1 **local_d0;
  undefined1 *local_c8;
  ulong local_c0;
  undefined1 auStack_b8 [128];
  undefined4 local_38;
  
  pbVar22 = (byte *)param_1[1];
  pbVar16 = pbVar22;
  if ((*pbVar22 & 1) == 0) {
    do {
      pbVar16 = *(byte **)(pbVar16 + 8);
    } while ((*pbVar16 & 1) == 0);
  }
  iVar9 = -0x7ffbfe00;
  switch(*(uint *)(pbVar16 + 0x10) & 0x1f) {
  case 0:
  case 1:
  case 6:
  case 7:
  case 8:
    break;
  case 2:
    piVar1 = (int *)*param_2;
    if (param_2[1] - (long)piVar1 == 5) {
      iVar9 = memcmp(piVar1,"false",5);
      if (iVar9 != 0) {
        return -0x7ffbfe00;
      }
      plVar10 = (long *)(param_1[2] & 0xfffffffffffffffe);
      uVar13 = *param_1;
      pcVar18 = *(code **)(*plVar10 + 0x30);
      uVar14 = 0;
    }
    else {
      if (param_2[1] - (long)piVar1 != 4) {
        return -0x7ffbfe00;
      }
      if (*piVar1 != 0x65757274) {
        return -0x7ffbfe00;
      }
      plVar10 = (long *)(param_1[2] & 0xfffffffffffffffe);
      uVar13 = *param_1;
      pcVar18 = *(code **)(*plVar10 + 0x30);
      uVar14 = 1;
    }
    iVar9 = (*pcVar18)(plVar10,uVar13,pbVar22,uVar14);
    break;
  case 3:
    pcVar3 = (char *)*param_2;
    pcVar4 = (char *)param_2[1];
    if ((((pcVar3 != pcVar4) && (*pcVar3 == '\"')) && (pcVar3 = pcVar3 + 1, pcVar3 != pcVar4)) &&
       (pcVar4[-1] == '\"')) {
      local_c8 = auStack_b8;
      local_c0 = 0x8000008000000000;
      local_38 = 1;
      FUN_031c6afc(&local_c8,pcVar3,(int)(pcVar4 + -1) - (int)pcVar3);
      iVar9 = (**(code **)(*(long *)(param_1[2] & 0xfffffffffffffffe) + 0x30))
                        ((long *)(param_1[2] & 0xfffffffffffffffe),*param_1,param_1[1],local_c8);
      uVar20 = local_c0;
      local_c0 = local_c0 & 0xffffffff00000000;
      if ((-1 < (long)uVar20) && (local_c8 != (undefined1 *)0x0)) {
        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
      }
    }
    break;
  case 4:
    uVar7 = (int)param_2[1] - (int)(char *)*param_2;
    uVar15 = uVar7;
    if (0x7f < (int)uVar7) {
      uVar15 = 0x7f;
    }
    if (0 < (int)uVar15) {
      strncpy((char *)&local_c8,(char *)*param_2,(ulong)uVar15);
    }
    local_d0 = &local_c8;
    *(undefined1 *)((long)local_d0 + (long)(int)uVar15) = 0;
    if ((int)uVar7 < 0x80) {
      puVar17 = (undefined8 *)PTR_DAT_047e5c80;
      do {
        uVar15 = (uint)*puVar17;
        if ((uVar15 >> 0xb & 1) != 0) {
          uVar20 = CONCAT44(uVar15,uVar15) & 0x7ff000007ff;
          if ((code *)puVar17[(ulong)(byte)(POPCOUNT((char)uVar20) + POPCOUNT((char)(uVar20 >> 8)))
                              + 2] != (code *)0x0) {
            local_e8 = (*(code *)puVar17[(ulong)(byte)(POPCOUNT((char)uVar20) +
                                                      POPCOUNT((char)(uVar20 >> 8))) + 2])
                                 (&local_d0);
            if (local_e8._8_8_ != 0) goto LAB_031e6528;
            uVar20 = 0;
            goto LAB_031e6658;
          }
          break;
        }
        puVar17 = (undefined8 *)puVar17[1];
      } while (puVar17 != (undefined8 *)0x0);
      local_e8._8_8_ = PTR_DAT_047e5c80;
      local_e8._0_8_ = &local_d0;
LAB_031e6528:
      puVar21 = local_e8._8_8_;
      puVar19 = puVar21;
      do {
        uVar20 = *puVar19;
        if (((uint)uVar20 >> 2 & 1) != 0) {
          uVar20 = puVar19[(uVar20 >> 1 & 1) + (uVar20 & 1) + 2];
          if ((uVar20 & 1) != 0) {
            piVar1 = (int *)((uVar20 & 0xfffffffffffffffe) + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = *piVar1 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            bVar6 = false;
            goto LAB_031e6580;
          }
          goto LAB_031e655c;
        }
        puVar19 = (ulong *)puVar19[1];
      } while (puVar19 != (ulong *)0x0);
      uVar20 = 0;
LAB_031e655c:
      bVar6 = true;
LAB_031e6580:
      if ((*puVar21 & 1) == 0) {
        do {
          puVar21 = (ulong *)puVar21[1];
        } while ((*puVar21 & 1) == 0);
      }
      if ((puVar21[2] & 0x1f) == 3) {
        if (!bVar6) {
          piVar1 = (int *)((uVar20 & 0xfffffffffffffffe) + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = *piVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        local_d8 = uVar20;
        uVar11 = FUN_03225d40(param_1,local_e8);
        uVar11 = uVar11 & 0xffffffff;
        if ((uVar20 & 1) != 0) {
          plVar12 = (long *)(uVar20 & 0xfffffffffffffffe);
          plVar10 = plVar12 + 1;
          do {
            lVar8 = *plVar10;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar6) {
              *(int *)plVar10 = (int)lVar8 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if ((plVar12 != (long *)0x0) && ((int)lVar8 == 1)) {
            (**(code **)(*plVar12 + 8))();
          }
        }
      }
      else {
LAB_031e6658:
        local_d8 = 0;
        local_e8._8_8_ = 0;
        local_e8._0_8_ = 0;
        uVar11 = FUN_03225d40(param_1,local_e8);
        uVar11 = uVar11 & 0xffffffff;
      }
      if ((uVar20 & 1) != 0) {
        plVar12 = (long *)(uVar20 & 0xfffffffffffffffe);
        plVar10 = plVar12 + 1;
        do {
          lVar8 = *plVar10;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *(int *)plVar10 = (int)lVar8 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar12 != (long *)0x0) && ((int)lVar8 == 1)) {
          (**(code **)(*plVar12 + 8))();
        }
      }
      iVar2 = 0;
      if ((uVar11 & 1) == 0) {
        iVar2 = iVar9;
      }
      return iVar2;
    }
    break;
  case 5:
    local_c8 = (undefined1 *)*param_2;
    local_c0 = param_2[1];
    iVar9 = FUN_0322bac4(&local_c8,local_e8);
    if (-1 < iVar9) {
      iVar9 = (**(code **)(*(long *)(param_1[2] & 0xfffffffffffffffe) + 0x30))
                        (local_e8._0_8_,(long *)(param_1[2] & 0xfffffffffffffffe),*param_1,
                         param_1[1]);
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x261011c5,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",
                 0x3c,"Bad var visitor switch");
  }
  return iVar9;
}


