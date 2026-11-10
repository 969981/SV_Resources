/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f0e780; name: FUN_00f0e780
 */


void FUN_00f0e780(long *param_1,long param_2)

{
  ulong uVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  byte *pbVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 local_68;
  
  puVar19 = (undefined8 *)param_1[1];
  if (puVar19 == (undefined8 *)param_1[2]) {
    uVar15 = param_1[4];
    lVar14 = (long)puVar19 - *param_1 >> 3;
    if (0x7ffffffffffffffe < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    uVar1 = lVar14 * -0x5555555555555555 + 1;
    if (uVar15 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = param_1[2] - *param_1 >> 3;
    uVar13 = lVar11 * 0x5555555555555556;
    if (uVar1 <= uVar13) {
      uVar1 = uVar13;
    }
    if (uVar15 >> 1 <= (ulong)(lVar11 * -0x5555555555555555)) {
      uVar1 = uVar15;
    }
    if (uVar1 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 * 0x18,8);
      if (lVar11 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    puVar19 = (undefined8 *)(lVar11 + lVar14 * 8);
    lVar20 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar10 == 0) {
      *puVar19 = 0;
      puVar19[1] = 0;
      FUN_00c83a78(puVar19,param_2);
      *(undefined4 *)(lVar11 + lVar14 * 8 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    }
    else {
      if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_00f0ec68:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar20;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      *puVar19 = 0;
      puVar19[1] = 0;
      FUN_00c83a78(puVar19,param_2);
      *(undefined4 *)(lVar11 + lVar14 * 8 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    puVar18 = (undefined8 *)*param_1;
    puVar12 = (undefined8 *)param_1[1];
    if (puVar12 == puVar18) {
      puVar12 = puVar19;
      puVar21 = puVar18;
    }
    else {
      lVar14 = 0;
      do {
        lVar20 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar10 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar10 == 0) {
          puVar21 = (undefined8 *)((long)puVar19 + lVar14 + -0x18);
          *puVar21 = 0;
          *(undefined8 *)((long)puVar19 + lVar14 + -0x10) = 0;
          FUN_00f0ecf0(puVar21,(long)puVar12 + lVar14 + -0x18);
          *(undefined4 *)((long)puVar19 + lVar14 + -8) =
               *(undefined4 *)((long)puVar12 + lVar14 + -8);
        }
        else {
          if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00f0ec68;
          *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar20;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          puVar21 = (undefined8 *)((long)puVar19 + lVar14 + -0x18);
          *puVar21 = 0;
          *(undefined8 *)((long)puVar19 + lVar14 + -0x10) = 0;
          FUN_00f0ecf0(puVar21,(long)puVar12 + lVar14 + -0x18);
          *(undefined4 *)((long)puVar19 + lVar14 + -8) =
               *(undefined4 *)((long)puVar12 + lVar14 + -8);
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        }
        lVar14 = lVar14 + -0x18;
      } while ((long)puVar18 - (long)puVar12 != lVar14);
      puVar12 = (undefined8 *)((long)puVar19 + lVar14);
      puVar18 = (undefined8 *)*param_1;
      puVar21 = (undefined8 *)param_1[1];
    }
    lVar14 = param_1[2];
    *param_1 = (long)puVar12;
    param_1[1] = (long)(puVar19 + 3);
    param_1[2] = lVar11 + uVar1 * 0x18;
    puVar8 = PTR_DAT_047d3918;
    puVar7 = PTR_DAT_047d3910;
    if (puVar21 != puVar18) {
      pbVar16 = PTR_DAT_047d3908;
      do {
        puVar21 = puVar21 + -3;
        puVar19 = (undefined8 *)*puVar21;
        if (puVar19 != (undefined8 *)0x0) {
          psVar2 = (short *)(puVar19 + 3);
          do {
            sVar4 = *psVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar6) {
              *psVar2 = sVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar4 == 1) {
            piVar3 = (int *)((long)puVar19 + 0x1c);
            do {
              iVar9 = *piVar3;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar6) {
                *piVar3 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar9 != -1) {
              if (((*pbVar16 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,puVar7,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar11 = *(long *)puVar7;
              *(long *)puVar8 = lVar11;
              local_68 = *puVar19;
              FUN_00c44438(lVar11 + 0x8040,&local_68);
              pbVar16 = PTR_DAT_047d3908;
            }
          }
          else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
      } while (puVar21 != puVar18);
    }
    if (puVar18 != (undefined8 *)0x0) {
      plVar17 = (long *)param_1[3];
      uVar15 = (**(code **)(*plVar17 + 0xf8))(plVar17);
      if (((uVar15 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar17 + 0x18))(plVar17,puVar18,lVar14 - (long)puVar18,8);
      }
      else {
        FUN_00c48fe8(plVar17,puVar18,lVar14 - (long)puVar18,8);
      }
    }
  }
  else {
    lVar14 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 == 0) {
      *puVar19 = 0;
      puVar19[1] = 0;
      FUN_00c83a78(puVar19,param_2);
      *(undefined4 *)(puVar19 + 2) = *(undefined4 *)(param_2 + 0x10);
    }
    else {
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00f0ec68;
      *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar14;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      *puVar19 = 0;
      puVar19[1] = 0;
      FUN_00c83a78(puVar19,param_2);
      *(undefined4 *)(puVar19 + 2) = *(undefined4 *)(param_2 + 0x10);
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar19 + 3);
  }
  return;
}


