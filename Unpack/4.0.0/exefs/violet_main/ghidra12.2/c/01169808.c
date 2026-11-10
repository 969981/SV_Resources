/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01169808; name: FUN_01169808
 */


void FUN_01169808(long *param_1,int param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  
  param_1[2] = 0;
  puVar5 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar11 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_0459d418;
  param_1[1] = lVar11;
  param_1[4] = (long)&PTR_LAB_0459d450;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  lVar7 = tpidr_el0;
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
     (lVar11 = *(long *)(lVar7 + 0x30), lVar11 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar11 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
  }
  plVar13 = param_1 + 0xd;
  *plVar13 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[9] = lVar11;
  param_1[10] = 0x1fffffffffffffff;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if ((((lVar11 == 0) || (*(long *)(lVar11 + 0x80) == 0)) ||
      (lVar11 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8), lVar11 == 0)) &&
     (lVar11 = *(long *)(lVar7 + 0x30), lVar11 == 0)) {
    if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    lVar11 = DAT_04859430;
    *(long *)(lVar7 + 0x30) = DAT_04859430;
  }
  param_1[0x10] = lVar11;
  uVar21 = (ulong)(uint)(param_2 * param_2);
  param_1[0x14] = 0;
  param_1[0x15] = (long)&DAT_cbf29ce484222645;
  param_1[0x16] = (long)&DAT_03c886bc;
  param_1[0x17] = 0;
  *(int *)(param_1 + 0x1a) = param_2;
  *(undefined4 *)((long)param_1 + 0xd4) = 0x3f800000;
  lVar7 = param_1[6];
  plVar18 = (long *)param_1[7];
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x11] = 0x7ffffffffffffff;
  param_1[0x12] = 0;
  uVar15 = (long)plVar18 - lVar7 >> 3;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  if (uVar15 < uVar21) {
    if ((ulong)(param_1[8] - (long)plVar18 >> 3) < uVar21 - uVar15) {
      uVar14 = param_1[10];
      if (0x7ffffffffffffffe < uVar14) {
        uVar14 = 0x7fffffffffffffff;
      }
      if (uVar14 < uVar21) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar7 = param_1[8] - lVar7;
      uVar12 = lVar7 >> 2;
      uVar2 = uVar21;
      if (uVar21 <= uVar12) {
        uVar2 = uVar12;
      }
      plVar18 = param_1 + 9;
      if (uVar14 >> 1 <= (ulong)(lVar7 >> 3)) {
        uVar2 = uVar14;
      }
      if (uVar2 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = (**(code **)(*(long *)*plVar18 + 0x10))((long *)*plVar18,uVar2 << 3,8);
        if (lVar7 == 0) {
          (**(code **)(*(long *)*plVar18 + 0xe8))();
        }
      }
      puVar17 = (undefined8 *)(lVar7 + uVar15 * 8);
      lVar11 = uVar21 * 8 + uVar15 * -8;
      puVar19 = puVar17;
      do {
        lVar20 = *plVar18;
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 == 0) {
          *puVar19 = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_01169fc4;
          *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar20;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          *puVar19 = 0;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        puVar19 = puVar19 + 1;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
      plVar16 = (long *)param_1[6];
      plVar9 = (long *)param_1[7];
      if (plVar9 == plVar16) {
        plVar9 = plVar16;
      }
      else {
        do {
          puVar17 = puVar17 + -1;
          plVar9 = plVar9 + -1;
          FUN_0116a0e0(plVar18,puVar17,plVar9);
        } while (plVar16 != plVar9);
        plVar9 = (long *)param_1[6];
        plVar16 = (long *)param_1[7];
      }
      param_1[6] = (long)puVar17;
      param_1[7] = lVar7 + uVar21 * 8;
      lVar11 = param_1[8];
      param_1[8] = lVar7 + uVar2 * 8;
      do {
        while( true ) {
          do {
            if (plVar16 == plVar9) {
              if (plVar9 != (long *)0x0) {
                plVar18 = (long *)*plVar18;
                uVar15 = (**(code **)(*plVar18 + 0xf8))(plVar18);
                if (((uVar15 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                  (**(code **)(*plVar18 + 0x18))(plVar18,plVar9,lVar11 - (long)plVar9,8);
                }
                else {
                  FUN_00c48fe8(plVar18,plVar9,lVar11 - (long)plVar9,8);
                }
              }
              goto LAB_01169a78;
            }
            plVar16 = plVar16 + -1;
            plVar10 = (long *)*plVar16;
          } while (plVar10 == (long *)0x0);
          plVar1 = plVar10 + 5;
          do {
            lVar7 = *plVar1;
            iVar6 = (int)lVar7 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *(int *)plVar1 = iVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 != 0) break;
          (**(code **)(*plVar10 + 0x10))();
        }
      } while ((int)lVar7 != 0);
LAB_0116a0b8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
    FUN_0116a4cc(param_1 + 6);
  }
  else if (uVar15 != uVar21) {
    plVar16 = (long *)(lVar7 + uVar21 * 8);
    do {
      while( true ) {
        do {
          if (plVar16 == plVar18) {
            param_1[7] = (long)plVar16;
            goto LAB_01169a78;
          }
          plVar18 = plVar18 + -1;
          plVar9 = (long *)*plVar18;
        } while (plVar9 == (long *)0x0);
        plVar10 = plVar9 + 5;
        do {
          lVar7 = *plVar10;
          iVar6 = (int)lVar7 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar4) {
            *(int *)plVar10 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 != 0) break;
        (**(code **)(*plVar9 + 0x10))();
      }
    } while ((int)lVar7 != 0);
    goto LAB_0116a0b8;
  }
LAB_01169a78:
  lVar7 = param_1[0xd];
  uVar15 = param_1[0xe] - lVar7 >> 5;
  if (uVar15 < uVar21) {
    if (uVar21 - uVar15 <= (ulong)(param_1[0xf] - param_1[0xe] >> 5)) {
      FUN_0116a5dc(plVar13);
      return;
    }
    uVar14 = param_1[0x11];
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    if (uVar14 < uVar21) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = param_1[0xf] - lVar7;
    uVar12 = lVar7 >> 4;
    uVar2 = uVar21;
    if (uVar21 <= uVar12) {
      uVar2 = uVar12;
    }
    plVar18 = param_1 + 0x10;
    if (uVar14 >> 1 <= (ulong)(lVar7 >> 5)) {
      uVar2 = uVar14;
    }
    if (uVar2 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*(long *)*plVar18 + 0x10))((long *)*plVar18,uVar2 << 5,0x10);
      if (lVar7 == 0) {
        (**(code **)(*(long *)*plVar18 + 0xe8))();
      }
    }
    puVar19 = (undefined8 *)(lVar7 + uVar15 * 0x20);
    lVar11 = uVar21 * 0x20 + uVar15 * -0x20;
    puVar17 = puVar19;
    do {
      lVar20 = *plVar18;
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar8 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar8 == 0) {
        puVar17[2] = 0;
        puVar17[3] = 0;
        *puVar17 = 0;
        puVar17[1] = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_01169fc4:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar20;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        puVar17[2] = 0;
        puVar17[3] = 0;
        *puVar17 = 0;
        puVar17[1] = 0;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      }
      lVar11 = lVar11 + -0x20;
      puVar17 = puVar17 + 4;
    } while (lVar11 != 0);
    lVar11 = param_1[0xd];
    lVar20 = param_1[0xe];
    if (lVar20 != lVar11) {
      do {
        puVar19 = puVar19 + -4;
        lVar20 = lVar20 + -0x20;
        FUN_0116a2b0(plVar18,puVar19,lVar20);
      } while (lVar11 != lVar20);
      lVar11 = *plVar13;
    }
    lVar20 = param_1[0xf];
    param_1[0xd] = (long)puVar19;
    param_1[0xe] = lVar7 + uVar21 * 0x20;
    param_1[0xf] = lVar7 + uVar2 * 0x20;
    if (lVar11 != 0) {
      plVar18 = (long *)*plVar18;
      uVar15 = (**(code **)(*plVar18 + 0xf8))(plVar18);
      if (((uVar15 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01169d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar11,lVar20 - lVar11,0x10);
        return;
      }
      FUN_00c48fe8(plVar18,lVar11,lVar20 - lVar11,0x10);
      return;
    }
  }
  else if (uVar15 != uVar21) {
    param_1[0xe] = lVar7 + uVar21 * 0x20;
  }
  return;
}


