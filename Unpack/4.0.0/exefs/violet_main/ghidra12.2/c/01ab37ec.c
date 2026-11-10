/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ab37ec; name: FUN_01ab37ec
 */


void FUN_01ab37ec(long *param_1,ulong param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  puVar5 = PTR_LAB_047d3900;
  if (param_2 <= (ulong)(param_1[2] - param_1[1] >> 6)) {
    lVar11 = param_1[1];
    lVar10 = lVar11;
    if (param_2 != 0) {
      lVar10 = lVar11 + param_2 * 0x40;
      lVar19 = param_2 << 6;
      puVar16 = (undefined8 *)(lVar11 + 8);
      do {
        lVar11 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar5,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar17 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar17 == 0) {
          puVar16[5] = 0;
          puVar16[6] = 0;
          puVar16[3] = 0;
          puVar16[4] = 0;
          puVar16[1] = 0;
          puVar16[2] = 0;
          puVar16[-1] = &PTR_FUN_04545010;
          *puVar16 = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar17 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = lVar11;
          *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
          puVar16[5] = 0;
          puVar16[6] = 0;
          puVar16[3] = 0;
          puVar16[4] = 0;
          puVar16[1] = 0;
          puVar16[2] = 0;
          puVar16[-1] = &PTR_FUN_04545010;
          *puVar16 = 0;
          *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
        }
        lVar19 = lVar19 + -0x40;
        puVar16 = puVar16 + 8;
      } while (lVar19 != 0);
    }
    param_1[1] = lVar10;
    return;
  }
  uVar14 = param_1[4];
  lVar10 = param_1[1] - *param_1 >> 6;
  uVar8 = param_2 + lVar10;
  if (0x7ffffffffffffffe < uVar14) {
    uVar14 = 0x7fffffffffffffff;
  }
  if (uVar14 < uVar8) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar11 = param_1[2] - *param_1;
  uVar12 = lVar11 >> 5;
  if (uVar8 <= uVar12) {
    uVar8 = uVar12;
  }
  if (uVar14 >> 1 <= (ulong)(lVar11 >> 6)) {
    uVar8 = uVar14;
  }
  if (uVar8 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar8 << 6,8);
    if (lVar11 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
  }
  lVar10 = lVar11 + lVar10 * 0x40;
  puVar16 = (undefined8 *)(lVar10 + 8);
  lVar19 = lVar10 + param_2 * 0x40;
  lVar17 = param_2 << 6;
  do {
    lVar18 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 == 0) {
      puVar16[5] = 0;
      puVar16[6] = 0;
      puVar16[3] = 0;
      puVar16[4] = 0;
      puVar16[1] = 0;
      puVar16[2] = 0;
      puVar16[-1] = &PTR_FUN_04545010;
      *puVar16 = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_01ab3be0;
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar18;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      puVar16[5] = 0;
      puVar16[6] = 0;
      puVar16[3] = 0;
      puVar16[4] = 0;
      puVar16[1] = 0;
      puVar16[2] = 0;
      puVar16[-1] = &PTR_FUN_04545010;
      *puVar16 = 0;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    lVar17 = lVar17 + -0x40;
    puVar16 = puVar16 + 8;
  } while (lVar17 != 0);
  lVar17 = *param_1;
  lVar18 = param_1[1];
  if (lVar18 == lVar17) {
    lVar18 = lVar17;
  }
  else {
    do {
      lVar7 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar9 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar9 == 0) {
        *(undefined8 *)(lVar10 + -0x38) = 0;
        *(undefined ***)(lVar10 + -0x40) = &PTR_FUN_04545030;
        *(undefined8 *)(lVar10 + -0x30) = 0;
        *(undefined8 *)(lVar10 + -0x28) = 0;
        *(undefined8 *)(lVar10 + -0x20) = 0;
        *(undefined8 *)(lVar10 + -0x18) = 0;
        *(undefined8 *)(lVar10 + -0x10) = 0;
        *(undefined8 *)(lVar10 + -8) = 0;
        FUN_00f92c44((undefined8 *)(lVar10 + -0x38),lVar18 + -0x38);
        plVar15 = *(long **)(lVar10 + -0x28);
        *(undefined8 *)(lVar10 + -0x28) = 0;
        if (plVar15 != (long *)0x0) {
          lVar7 = plVar15[6];
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar2 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
            (**(code **)(*plVar15 + 0x50))();
          }
          else if (sVar2 == 0) goto LAB_01ab3ba4;
        }
        uVar13 = *(undefined8 *)(lVar18 + -0x28);
        *(undefined8 *)(lVar18 + -0x28) = 0;
        *(undefined8 *)(lVar10 + -0x28) = uVar13;
        FUN_00ecc978(lVar10 + -0x20,lVar18 + -0x20);
        FUN_00eccc4c(lVar10 + -0x10,lVar18 + -0x10);
        *(undefined ***)(lVar10 + -0x40) = &PTR_FUN_04545010;
      }
      else {
        if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_01ab3be0:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar7;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        *(undefined8 *)(lVar10 + -0x38) = 0;
        *(undefined ***)(lVar10 + -0x40) = &PTR_FUN_04545030;
        *(undefined8 *)(lVar10 + -0x30) = 0;
        *(undefined8 *)(lVar10 + -0x28) = 0;
        *(undefined8 *)(lVar10 + -0x20) = 0;
        *(undefined8 *)(lVar10 + -0x18) = 0;
        *(undefined8 *)(lVar10 + -0x10) = 0;
        *(undefined8 *)(lVar10 + -8) = 0;
        FUN_00f92c44((undefined8 *)(lVar10 + -0x38),lVar18 + -0x38);
        plVar15 = *(long **)(lVar10 + -0x28);
        *(undefined8 *)(lVar10 + -0x28) = 0;
        if (plVar15 != (long *)0x0) {
          lVar7 = plVar15[6];
          psVar1 = (short *)(lVar7 + 0x1a);
          do {
            sVar2 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar2 == 1) {
            *(undefined8 *)(lVar7 + 0x10) = 0;
            (**(code **)(*plVar15 + 0x50))();
          }
          else if (sVar2 == 0) {
LAB_01ab3ba4:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        uVar13 = *(undefined8 *)(lVar18 + -0x28);
        *(undefined8 *)(lVar18 + -0x28) = 0;
        *(undefined8 *)(lVar10 + -0x28) = uVar13;
        FUN_00ecc978(lVar10 + -0x20,lVar18 + -0x20);
        FUN_00eccc4c(lVar10 + -0x10,lVar18 + -0x10);
        *(undefined ***)(lVar10 + -0x40) = &PTR_FUN_04545010;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      }
      lVar18 = lVar18 + -0x40;
      lVar10 = lVar10 + -0x40;
    } while (lVar18 != lVar17);
    lVar17 = *param_1;
    lVar18 = param_1[1];
  }
  lVar7 = param_1[2];
  param_1[2] = lVar11 + uVar8 * 0x40;
  *param_1 = lVar10;
  param_1[1] = lVar19;
  if ((lVar18 != lVar17) && (FUN_00f91cdc(lVar18 + -0x40), lVar18 + -0x40 != lVar17)) {
    do {
      FUN_00f91cdc(lVar18 + -0x80);
      lVar18 = lVar18 + -0x40;
    } while (lVar17 + 0x40 != lVar18);
  }
  if (lVar17 == 0) {
    return;
  }
  plVar15 = (long *)param_1[3];
  uVar8 = (**(code **)(*plVar15 + 0xf8))(plVar15);
  if (((uVar8 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x01ab39c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar17,lVar7 - lVar17,8);
    return;
  }
  FUN_00c48fe8(plVar15,lVar17,lVar7 - lVar17,8);
  return;
}


