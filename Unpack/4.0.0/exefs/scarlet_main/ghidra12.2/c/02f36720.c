/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f36720; name: FUN_02f36720
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f36720(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  long *plVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  long lVar19;
  undefined8 uVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  uint *puVar24;
  uint *puVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong local_8e0;
  undefined8 uStack_8d8;
  undefined2 local_8d0;
  undefined4 local_8cc;
  undefined8 local_8c8;
  undefined4 local_8c0;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  uint *local_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined8 uStack_868;
  
  uVar23 = param_2 & 0xffffff;
  if (uVar23 == 0xffffff) {
    lVar15 = -1;
  }
  else {
    lVar15 = *(long *)(*(long *)(param_1 + 0x38) + uVar23 * 0xc0 + 0xb0);
  }
  lVar3 = tpidr_el0;
  if (*(long *)(param_1 + 0x800) == 0) {
    plVar6 = (long *)0x0;
    iVar21 = -1;
    bVar5 = false;
  }
  else {
    lVar19 = (long)DAT_0486b380;
    lVar9 = *(long *)(lVar3 + 0x1000b8);
    if (lVar9 == 0) {
      lVar9 = FUN_00e5d3b4();
      *(long *)(lVar3 + 0x1000b8) = lVar9;
      iVar16 = DAT_0486b380;
      iVar21 = (int)*(undefined8 *)(lVar9 + lVar19 * 8 + 1000);
      if (lVar9 == 0) {
        lVar9 = FUN_00e5d3b4();
        *(long *)(lVar3 + 0x1000b8) = lVar9;
      }
    }
    else {
      iVar21 = (int)*(undefined8 *)(lVar9 + lVar19 * 8 + 1000);
      iVar16 = DAT_0486b380;
    }
    *(long *)(lVar9 + (long)iVar16 * 8 + 1000) = (long)(iVar21 + 1);
    plVar6 = *(long **)(param_1 + 0x800);
    bVar5 = iVar21 == 0;
  }
  bVar5 = (bool)(bVar5 & plVar6 != (long *)0x0);
  if ((*(char *)(param_1 + 0x999) != '\0') || (bVar5)) {
    local_870 = CONCAT71(local_870._1_7_,(char)param_3);
    local_880 = (uint *)0x1c02000020;
    uStack_878 = lVar15;
    if (bVar5) {
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_880);
    }
  }
  lVar15 = *(long *)(param_1 + 0x38);
  if ((*(byte *)(lVar15 + uVar23 * 0xc0 + 0x88) & 1) != 0) {
    uVar22 = *(uint *)(lVar15 + uVar23 * 0xc0 + 0x54);
    if ((uVar22 >> 1 & 1) == 0) {
      if (param_3 == 0) {
        lVar15 = lVar15 + uVar23 * 0xc0;
        auVar27 = *(undefined1 (*) [16])(lVar15 + 0x60);
        local_880 = *(uint **)(lVar15 + 0x70);
        uStack_878 = CONCAT44(auVar27._12_4_,auVar27._12_4_);
        uStack_868 = auVar27._8_8_;
        local_870 = auVar27._0_8_;
        FUN_02f3705c(param_1,&local_880);
      }
      else if (*(long *)(param_1 + 0x698) != 0) {
        local_8cc = 0;
        local_880 = (uint *)&local_870;
        local_8c8 = 0;
        uStack_878 = -0x7ffffe0000000000;
        local_8d0 = 0xffff;
        lVar15 = lVar15 + uVar23 * 0xc0;
        local_8e0 = 0;
        uStack_8d8 = 0;
        auVar27 = *(undefined1 (*) [16])(lVar15 + 0x60);
        local_8a0 = *(undefined8 *)(lVar15 + 0x70);
        local_8c0 = 0x20801;
        uStack_898 = CONCAT44(auVar27._12_4_,auVar27._12_4_);
        uStack_888 = auVar27._8_8_;
        uStack_890 = auVar27._0_8_;
        (**(code **)(**(long **)(param_1 + 0x4c0) + 0x78))
                  (*(long **)(param_1 + 0x4c0),&local_8e0,&local_880);
        if ((int)uStack_878 != 0) {
          lVar15 = (long)(int)uStack_878 << 2;
          puVar24 = local_880;
          do {
            if ((*(byte *)(*(long *)(param_1 + 0x38) + ((ulong)*puVar24 & 0xffffff) * 0xc0 + 0x54) &
                9) == 0) {
              plVar6 = *(long **)(param_1 + 0x698);
              iVar16 = *(int *)(plVar6[0x71] +
                                (long)*(int *)(*(long *)(*plVar6 + 0x38) +
                                               ((ulong)*puVar24 & 0xffffff) * 0xc0 + 0x80) * 0x20 +
                               0x10);
              if ((iVar16 != -1) &&
                 (lVar9 = *(long *)(plVar6[0x73] + (long)iVar16 * 8),
                 *(char *)(lVar9 + 0x25) == '\0')) {
                iVar8 = (int)plVar6[0x67];
                lVar19 = (long)iVar8;
                if ((int)(*(uint *)((long)plVar6 + 0x33c) & 0x7fffffff) <= iVar8) {
                  FUN_0133bb88(plVar6 + 0x66,PTR_PTR_047d1a50,lVar19 + 1);
                  iVar8 = (int)plVar6[0x67];
                }
                *(int *)(plVar6[0x66] + (long)iVar8 * 4) = iVar16;
                *(int *)(plVar6 + 0x67) = (int)(lVar19 + 1);
                *(undefined1 *)(lVar9 + 0x25) = 1;
              }
            }
            puVar24 = puVar24 + 1;
            lVar15 = lVar15 + -4;
          } while (lVar15 != 0);
        }
        lVar15 = uStack_878;
        uVar11 = (ulong)uStack_878._4_4_;
        uStack_878 = (ulong)uStack_878._4_4_ << 0x20;
        if ((-1 < lVar15) && (local_880 != (uint *)0x0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_880,uVar11 << 2);
        }
      }
    }
    else if ((uVar22 & 9) == 0) {
      if (param_3 == 0) {
        FUN_02f35f08(param_1,param_2 & 0xffffffff,0);
      }
      else {
        plVar6 = *(long **)(param_1 + 0x698);
        if (((plVar6 != (long *)0x0) &&
            (iVar16 = *(int *)(plVar6[0x71] +
                               (long)*(int *)(*(long *)(*plVar6 + 0x38) + uVar23 * 0xc0 + 0x80) *
                               0x20 + 0x10), iVar16 != -1)) &&
           (lVar15 = *(long *)(plVar6[0x73] + (long)iVar16 * 8), *(char *)(lVar15 + 0x25) == '\0'))
        {
          iVar8 = (int)plVar6[0x67];
          lVar9 = (long)iVar8;
          if ((int)(*(uint *)((long)plVar6 + 0x33c) & 0x7fffffff) <= iVar8) {
            FUN_0133bb88(plVar6 + 0x66,PTR_PTR_047d1a50,lVar9 + 1);
            iVar8 = (int)plVar6[0x67];
          }
          *(int *)(plVar6[0x66] + (long)iVar8 * 4) = iVar16;
          *(int *)(plVar6 + 0x67) = (int)(lVar9 + 1);
          *(undefined1 *)(lVar15 + 0x25) = 1;
        }
      }
    }
    else if ((*(long *)(param_1 + 0x698) != 0) &&
            (pcVar10 = (char *)(*(long *)(*(long *)(param_1 + 0x698) + 0x388) +
                                (long)*(int *)(lVar15 + uVar23 * 0xc0 + 0x80) * 0x20 + 0xb),
            *pcVar10 != -1)) {
      *pcVar10 = '\0';
    }
    auVar26._8_8_ = _UNK_03cabeb8;
    auVar26._0_8_ = _DAT_03cabeb0;
    auVar27._8_4_ = (int)_UNK_03cac088;
    auVar27._0_8_ = _DAT_03cac080;
    auVar27._12_4_ = (int)((ulong)_UNK_03cac088 >> 0x20);
    auVar27 = a64_TBL(ZEXT816(0),auVar27,auVar26);
    uVar18 = (uint)param_2;
    local_8e0 = CONCAT44(local_8e0._4_4_,uVar18);
    puVar12 = (undefined8 *)(*(long *)(param_1 + 0x80) + uVar23 * 0x18);
    lVar9 = *(long *)(param_1 + 0x38);
    puVar12[2] = 0x7f7fffee7f7fffee;
    puVar12[1] = CONCAT44(auVar27._12_4_,0xff7fffee);
    *puVar12 = 0xff7fffeeff7fffee;
    lVar15 = lVar9 + uVar23 * 0xc0;
    uVar22 = *(uint *)(lVar15 + 0x54);
    *(ushort *)(lVar15 + 0x58) = *(ushort *)(lVar15 + 0x58) | 1;
    puVar4 = PTR_DAT_047d1a08;
    if ((uVar22 & 9) == 0) {
      uVar22 = uVar18;
      do {
        puVar12 = (undefined8 *)(*(long *)(param_1 + 0x698) + 0x318);
        lVar19 = *(long *)(param_1 + 0x38);
        piVar17 = *(int **)(*(long *)(param_1 + 0x698) + 0x318);
        piVar7 = piVar17 + 1;
        do {
          iVar16 = *piVar7;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar5) {
            *piVar7 = iVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        while (0xff < iVar16) {
          local_880 = (uint *)&DAT_00000410;
          piVar7 = (int *)(**(code **)puVar4)(0,&local_880,0);
          if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
            (**(code **)(puVar4 + 0x10))(piVar7,"Block");
          }
          lVar13 = 0;
          do {
            lVar1 = lVar13 + 0x20;
            *(undefined8 *)((long)piVar7 + lVar13 + 0x10) = 0xffffff00ffffff;
            *(undefined8 *)((long)piVar7 + lVar13 + 0x18) = 0xffffff00ffffff;
            *(undefined8 *)((long)piVar7 + lVar13 + 0x20) = 0xffffff00ffffff;
            *(undefined8 *)((long)piVar7 + lVar13 + 0x28) = 0xffffff00ffffff;
            lVar13 = lVar1;
          } while (lVar1 != 0x400);
          if (piVar17 == (int *)0x0) {
            iVar16 = 0;
          }
          else {
            iVar16 = *piVar17 + 1;
          }
          *piVar7 = iVar16;
          piVar7[1] = 0;
          piVar7[2] = 0;
          piVar7[3] = 0;
          do {
            if ((int *)*puVar12 != piVar17) {
              ClearExclusiveLocal();
              (**(code **)(puVar4 + 8))(0,piVar7,0);
              goto LAB_02f36c7c;
            }
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar12,0x10);
            if (bVar5) {
              *puVar12 = piVar7;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (piVar17 != (int *)0x0) {
            *(int **)(piVar17 + 2) = piVar7;
          }
LAB_02f36c7c:
          piVar17 = (int *)*puVar12;
          piVar7 = piVar17 + 1;
          do {
            iVar16 = *piVar7;
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar5) {
              *piVar7 = iVar16 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        piVar17[(long)iVar16 + 4] = uVar22;
        uVar22 = *(uint *)(lVar19 + (ulong)(uVar22 & 0xffffff) * 0xc0 + 0x84);
      } while (uVar22 != uVar18);
      uVar22 = *(uint *)(lVar15 + 0x54);
    }
    if ((uVar22 & 1) != 0) {
      iVar16 = (int)local_8e0;
      puVar12 = (undefined8 *)(param_1 + 0x138);
      piVar17 = *(int **)(param_1 + 0x138);
      piVar7 = piVar17 + 1;
      do {
        iVar8 = *piVar7;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        puVar4 = PTR_DAT_047d1a08;
      } while (cVar2 != '\0');
      while (0xff < iVar8) {
        local_880 = (uint *)&DAT_00000410;
        piVar7 = (int *)(**(code **)puVar4)(0,&local_880,0);
        if (*(code **)(puVar4 + 0x10) != (code *)0x0) {
          (**(code **)(puVar4 + 0x10))(piVar7,"Block");
        }
        lVar15 = 0;
        do {
          lVar19 = lVar15 + 0x20;
          *(undefined8 *)((long)piVar7 + lVar15 + 0x10) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar7 + lVar15 + 0x18) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar7 + lVar15 + 0x20) = 0xffffff00ffffff;
          *(undefined8 *)((long)piVar7 + lVar15 + 0x28) = 0xffffff00ffffff;
          lVar15 = lVar19;
        } while (lVar19 != 0x400);
        if (piVar17 == (int *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *piVar17 + 1;
        }
        *piVar7 = iVar8;
        piVar7[1] = 0;
        piVar7[2] = 0;
        piVar7[3] = 0;
        do {
          if ((int *)*puVar12 != piVar17) {
            ClearExclusiveLocal();
            (**(code **)(puVar4 + 8))(0,piVar7,0);
            goto LAB_02f36dc0;
          }
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar12,0x10);
          if (bVar5) {
            *puVar12 = piVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (piVar17 != (int *)0x0) {
          *(int **)(piVar17 + 2) = piVar7;
        }
LAB_02f36dc0:
        piVar17 = (int *)*puVar12;
        piVar7 = piVar17 + 1;
        do {
          iVar8 = *piVar7;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar5) {
            *piVar7 = iVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      piVar17[(long)iVar8 + 4] = iVar16;
    }
    if ((*(byte *)(lVar9 + uVar23 * 0xc0 + 0x88) >> 2 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x4c0) + 0x40))(*(long **)(param_1 + 0x4c0),&local_8e0,1,4)
      ;
    }
    puVar4 = PTR_PTR_047d1a50;
    if (*(int *)(param_1 + 0x818) == 8) {
      lVar15 = *(long *)**(undefined8 **)(param_1 + 0x920);
      if ((int)(local_8e0 & 0xffffff) == 0xffffff) {
        uVar20 = 0xffffffffffffffff;
      }
      else {
        uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x38) + (local_8e0 & 0xffffff) * 0xc0 + 0xb0);
      }
      puVar24 = *(uint **)(*(long *)(lVar15 + 0x540) + (long)*(int *)(lVar15 + 0x548) * 8 + -8);
      puVar12 = *(undefined8 **)(lVar15 + 0x4e0);
      uVar22 = *puVar24;
      if (0x1e < uVar22 >> 0x17) {
        puVar25 = puVar24;
        do {
          uVar22 = *(int *)(puVar12 + 0xb) - 1;
          if (*(int *)(puVar12 + 0xb) < 1) {
            lVar9 = puVar12[1];
            (**(code **)(*(long *)*puVar12 + 0x20))((long *)*puVar12,lVar9,6);
            puVar14 = (undefined8 *)(lVar9 + 0x28);
            *(undefined4 *)(puVar12 + 0xb) = 5;
          }
          else {
            *(uint *)(puVar12 + 0xb) = uVar22;
            puVar14 = (undefined8 *)(puVar12[1] + (ulong)uVar22 * 8);
          }
          puVar24 = (uint *)*puVar14;
          puVar24[4] = 0;
          puVar24[5] = 0;
          puVar24[6] = 0;
          puVar24[7] = 0;
          puVar24[0] = 0;
          puVar24[1] = 0;
          puVar24[2] = 0;
          puVar24[3] = 0;
          puVar24[1] = *(uint *)(lVar15 + 0x548);
          iVar16 = *(int *)(lVar15 + 0x548);
          lVar9 = (long)iVar16;
          if ((int)(*(uint *)(lVar15 + 0x54c) & 0x7fffffff) <= iVar16) {
            FUN_031c25b4(lVar15 + 0x540,puVar4,lVar9 + 1);
            iVar16 = *(int *)(lVar15 + 0x548);
          }
          *(uint **)(*(long *)(lVar15 + 0x540) + (long)iVar16 * 8) = puVar24;
          *(int *)(lVar15 + 0x548) = (int)(lVar9 + 1);
          *(uint **)(puVar25 + 2) = puVar24;
          uVar22 = *puVar24;
          puVar25 = puVar24;
        } while (0x1e < uVar22 >> 0x17);
      }
      do {
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar24,0x10);
        if (bVar5) {
          *puVar24 = *puVar24 + 0x200001;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar22 = uVar22 >> 0x10;
      *(int *)(lVar15 + 0x538) = *(int *)(lVar15 + 0x538) + 1;
      *(int *)((long)puVar24 + (ulong)uVar22 + 0x28) = (int)uVar20;
      *(int *)((long)puVar24 + (ulong)uVar22 + 0x2c) = (int)((ulong)uVar20 >> 0x20);
      *(undefined8 *)((long)puVar24 + (ulong)uVar22 + 0x20) = 0x1c02000020;
      *(uint *)((long)puVar24 + (ulong)uVar22 + 0x30) = param_3 & 0xff;
    }
  }
  if (iVar21 != -1) {
    lVar9 = (long)DAT_0486b380;
    lVar15 = *(long *)(lVar3 + 0x1000b8);
    if (lVar15 == 0) {
      lVar15 = FUN_00e5d3b4();
      *(long *)(lVar3 + 0x1000b8) = lVar15;
    }
    *(long *)(lVar15 + lVar9 * 8 + 1000) = (long)iVar21;
  }
  return;
}


