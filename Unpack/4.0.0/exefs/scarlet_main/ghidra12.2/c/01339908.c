/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01339908; name: FUN_01339908
 */


void FUN_01339908(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  uVar10 = param_1[1];
  plVar14 = param_1 + 3;
  if (uVar10 < (ulong)param_1[2]) {
    FUN_01339d30(plVar14,uVar10,param_2);
    param_1[1] = uVar10 + 0x40;
  }
  else {
    uVar13 = param_1[4];
    lVar18 = (long)(uVar10 - *param_1) >> 6;
    uVar10 = lVar18 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = param_1[2] - *param_1;
    uVar12 = lVar11 >> 5;
    if (uVar10 <= uVar12) {
      uVar10 = uVar12;
    }
    if (uVar13 >> 1 <= (ulong)(lVar11 >> 6)) {
      uVar10 = uVar13;
    }
    if (uVar10 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)*plVar14 + 0x10))((long *)*plVar14,uVar10 << 6,0x10);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*plVar14 + 0xe8))();
      }
    }
    lVar18 = lVar11 + lVar18 * 0x40;
    FUN_01339d30(plVar14,lVar18,param_2);
    lVar15 = *param_1;
    lVar16 = param_1[1];
    if (lVar16 == lVar15) {
      lVar19 = lVar18;
      lVar16 = lVar15;
    }
    else {
      lVar19 = 0;
      do {
        lVar17 = *plVar14;
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 != 0) {
          if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar17;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        }
        lVar17 = lVar16 + lVar19;
        lVar2 = lVar18 + lVar19;
        *(undefined8 *)(lVar2 + -0x40) = *(undefined8 *)(lVar17 + -0x40);
        *(undefined8 *)(lVar2 + -0x38) = *(undefined8 *)(lVar17 + -0x38);
        *(undefined8 *)(lVar17 + -0x38) = 0;
        *(undefined8 *)(lVar2 + -0x30) = *(undefined8 *)(lVar17 + -0x30);
        *(undefined8 *)(lVar17 + -0x30) = 0;
        uVar3 = *(undefined8 *)(lVar17 + -0x20);
        uVar4 = *(undefined8 *)(lVar17 + -0x18);
        *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar17 + -0x10);
        *(undefined8 *)(lVar2 + -0x20) = uVar3;
        *(undefined8 *)(lVar2 + -0x18) = uVar4;
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        lVar19 = lVar19 + -0x40;
      } while (lVar15 - lVar16 != lVar19);
      lVar15 = *param_1;
      lVar16 = param_1[1];
      lVar19 = lVar18 + lVar19;
    }
    lVar17 = param_1[2];
    *param_1 = lVar19;
    param_1[1] = lVar18 + 0x40;
    param_1[2] = lVar11 + uVar10 * 0x40;
    if (lVar16 != lVar15) {
      plVar9 = *(long **)(lVar16 + -0x30);
      if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
        plVar1 = plVar9 + 2;
        do {
          lVar18 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar18 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))();
        }
      }
      plVar9 = *(long **)(lVar16 + -0x38);
      if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
        plVar1 = plVar9 + 2;
        do {
          lVar18 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar18 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar18 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))();
        }
      }
      if (lVar16 + -0x40 != lVar15) {
        plVar9 = *(long **)(lVar16 + -0x70);
        if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
          plVar1 = plVar9 + 2;
          do {
            lVar18 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar18 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar18 + -1 == 0) {
            (**(code **)(*plVar9 + 0x18))();
          }
        }
        plVar9 = *(long **)(lVar16 + -0x78);
        lVar16 = lVar16 + -0x80;
        if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
          plVar1 = plVar9 + 2;
          do {
            lVar18 = *plVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar18 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar18 + -1 == 0) {
            (**(code **)(*plVar9 + 0x18))();
          }
        }
        while (lVar16 != lVar15) {
          plVar9 = *(long **)(lVar16 + -0x30);
          if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
            plVar1 = plVar9 + 2;
            do {
              lVar18 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar18 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar18 + -1 == 0) {
              (**(code **)(*plVar9 + 0x18))();
            }
          }
          plVar9 = *(long **)(lVar16 + -0x38);
          lVar16 = lVar16 + -0x40;
          if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
            plVar1 = plVar9 + 2;
            do {
              lVar18 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *plVar1 = lVar18 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar18 + -1 == 0) {
              (**(code **)(*plVar9 + 0x18))();
            }
          }
        }
      }
    }
    if (lVar15 != 0) {
      plVar14 = (long *)*plVar14;
      uVar10 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar10 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar15,lVar17 - lVar15,0x10);
      }
      else {
        FUN_00c48fe8(plVar14,lVar15,lVar17 - lVar15,0x10);
      }
    }
  }
  return;
}


