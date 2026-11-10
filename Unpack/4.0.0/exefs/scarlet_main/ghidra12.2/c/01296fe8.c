/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01296fe8; name: FUN_01296fe8
 */


void FUN_01296fe8(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  byte *pbVar18;
  long *plVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 local_68;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_012976d0(param_1,param_2);
  }
  else {
    uVar17 = param_1[4];
    lVar16 = param_1[1] - *param_1 >> 3;
    if (0x7ffffffffffffffe < uVar17) {
      uVar17 = 0x7fffffffffffffff;
    }
    uVar1 = lVar16 * -0x3333333333333333 + 1;
    if (uVar17 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar13 = param_1[2] - *param_1 >> 3;
    uVar14 = lVar13 * -0x6666666666666666;
    if (uVar1 <= uVar14) {
      uVar1 = uVar14;
    }
    if (uVar17 >> 1 <= (ulong)(lVar13 * -0x3333333333333333)) {
      uVar1 = uVar17;
    }
    if (uVar1 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 * 0x28,8);
      if (lVar13 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    lVar20 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 != 0) {
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_0129742c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar20;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    }
    uVar15 = *param_2;
    puVar21 = (undefined8 *)(lVar13 + lVar16 * 8);
    lVar16 = lVar13 + lVar16 * 8;
    *(undefined4 *)(puVar21 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar21 = uVar15;
    *(undefined8 *)(lVar16 + 0x10) = 0;
    *(undefined8 *)(lVar16 + 0x18) = 0;
    FUN_0129746c((undefined8 *)(lVar16 + 0x10),param_2 + 2);
    *(undefined8 *)(lVar16 + 0x20) = param_2[4];
    if (lVar11 != 0) {
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    lVar16 = *param_1;
    lVar20 = param_1[1];
    if (lVar20 == lVar16) {
      puVar23 = puVar21;
      lVar20 = lVar16;
    }
    else {
      lVar11 = 0;
      do {
        lVar22 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar12 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar12 != 0) {
          if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_0129742c;
          *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar22;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        }
        lVar22 = lVar20 + lVar11;
        uVar15 = *(undefined8 *)(lVar22 + -0x28);
        uVar5 = *(undefined4 *)(lVar22 + -0x20);
        puVar23 = (undefined8 *)((long)puVar21 + lVar11 + -0x18);
        *puVar23 = 0;
        *(undefined8 *)((long)puVar21 + lVar11 + -0x28) = uVar15;
        *(undefined4 *)((long)puVar21 + lVar11 + -0x20) = uVar5;
        *(undefined8 *)((long)puVar21 + lVar11 + -0x10) = 0;
        FUN_0129746c(puVar23,lVar22 + -0x18);
        *(undefined8 *)((long)puVar21 + lVar11 + -8) = *(undefined8 *)(lVar22 + -8);
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        lVar11 = lVar11 + -0x28;
      } while (lVar16 - lVar20 != lVar11);
      lVar16 = *param_1;
      lVar20 = param_1[1];
      puVar23 = (undefined8 *)((long)puVar21 + lVar11);
    }
    lVar11 = param_1[2];
    *param_1 = (long)puVar23;
    param_1[1] = (long)(puVar21 + 5);
    param_1[2] = lVar13 + uVar1 * 0x28;
    puVar9 = PTR_DAT_047d3918;
    puVar8 = PTR_DAT_047d3910;
    if (lVar20 != lVar16) {
      pbVar18 = PTR_DAT_047d3908;
      do {
        puVar21 = *(undefined8 **)(lVar20 + -0x18);
        if (puVar21 != (undefined8 *)0x0) {
          psVar2 = (short *)(puVar21 + 3);
          do {
            sVar4 = *psVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            piVar3 = (int *)((long)puVar21 + 0x1c);
            do {
              iVar10 = *piVar3;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar7) {
                *piVar3 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar10 != -1) {
              if (((*pbVar18 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,puVar8,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar13 = *(long *)puVar8;
              *(long *)puVar9 = lVar13;
              local_68 = *puVar21;
              FUN_00c44438(lVar13 + 0x8040,&local_68);
              pbVar18 = PTR_DAT_047d3908;
            }
          }
          else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        lVar20 = lVar20 + -0x28;
      } while (lVar20 != lVar16);
    }
    if (lVar16 != 0) {
      plVar19 = (long *)param_1[3];
      uVar17 = (**(code **)(*plVar19 + 0xf8))(plVar19);
      if (((uVar17 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
        (**(code **)(*plVar19 + 0x18))(plVar19,lVar16,lVar11 - lVar16,8);
      }
      else {
        FUN_00c48fe8(plVar19,lVar16,lVar11 - lVar16,8);
      }
    }
  }
  return;
}


