/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f33a84; name: FUN_00f33a84
 */


ulong FUN_00f33a84(long *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  long *plVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 local_68 [13];
  
  while( true ) {
    lVar19 = param_1[0xf] - param_1[0xe];
    if (lVar19 == 0) break;
    uVar17 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar19 + param_1[0xe] + -8;
    uVar12 = uVar17 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar12) =
         *(ulong *)(param_1[7] + uVar12) & (1L << (uVar17 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar17 < (ulong)((param_1[1] - *param_1 >> 3) * -0x3333333333333333)) {
      lVar19 = *param_1 + uVar17 * 0x28;
      FUN_00dd9f00(lVar19,param_2);
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      uVar14 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(lVar19 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(lVar19 + 0x20) = uVar14;
      *(undefined8 *)(lVar19 + 0x10) = uVar4;
      if (uVar17 < (ulong)param_1[0x15]) {
        return uVar17;
      }
      param_1[0x15] = uVar17 + 1;
      return uVar17;
    }
  }
  puVar24 = (undefined8 *)param_1[1];
  lVar19 = (long)puVar24 - *param_1 >> 3;
  uVar12 = lVar19 * -0x3333333333333333;
  if (puVar24 < (undefined8 *)param_1[2]) {
    lVar19 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar9 == 0) {
      *puVar24 = 0;
      puVar24[1] = 0;
      FUN_00dd9f00(puVar24,param_2);
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      uVar14 = *(undefined8 *)(param_2 + 0x20);
      puVar24[3] = *(undefined8 *)(param_2 + 0x18);
      puVar24[4] = uVar14;
      puVar24[2] = uVar4;
    }
    else {
      if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00f3408c;
      *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar19;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      *puVar24 = 0;
      puVar24[1] = 0;
      FUN_00dd9f00(puVar24,param_2);
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      uVar14 = *(undefined8 *)(param_2 + 0x20);
      puVar24[3] = *(undefined8 *)(param_2 + 0x18);
      puVar24[4] = uVar14;
      puVar24[2] = uVar4;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar24 + 5);
  }
  else {
    uVar15 = param_1[4];
    uVar17 = uVar12 + 1;
    if (0x7ffffffffffffffe < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    if (uVar15 < uVar17) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = param_1[2] - *param_1 >> 3;
    uVar13 = lVar9 * -0x6666666666666666;
    if (uVar17 <= uVar13) {
      uVar17 = uVar13;
    }
    if (uVar15 >> 1 <= (ulong)(lVar9 * -0x3333333333333333)) {
      uVar17 = uVar15;
    }
    if (uVar17 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar17 * 0x28,8);
      if (lVar9 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    puVar24 = (undefined8 *)(lVar9 + lVar19 * 8);
    lVar20 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar10 == 0) {
      *puVar24 = 0;
      puVar24[1] = 0;
      FUN_00dd9f00(puVar24,param_2);
      lVar20 = lVar9 + lVar19 * 8;
      uVar14 = *(undefined8 *)(param_2 + 0x20);
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(lVar20 + 0x18) = uVar4;
      *(undefined8 *)(lVar20 + 0x20) = uVar14;
    }
    else {
      if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_00f3408c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar20;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      *puVar24 = 0;
      puVar24[1] = 0;
      FUN_00dd9f00(puVar24,param_2);
      lVar20 = lVar9 + lVar19 * 8;
      uVar14 = *(undefined8 *)(param_2 + 0x20);
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(lVar20 + 0x18) = uVar4;
      *(undefined8 *)(lVar20 + 0x20) = uVar14;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    }
    puVar18 = (undefined8 *)*param_1;
    if ((undefined8 *)param_1[1] == puVar18) {
      puVar11 = puVar24;
      puVar25 = puVar18;
    }
    else {
      puVar23 = (undefined8 *)param_1[1];
      puVar25 = (undefined8 *)(lVar9 + lVar19 * 8);
      do {
        puVar11 = puVar25 + -5;
        lVar19 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        puVar21 = puVar23 + -5;
        lVar20 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar20 == 0) {
          *puVar11 = 0;
          puVar25[-4] = 0;
          FUN_00dd9f00(puVar11,puVar21);
          uVar4 = puVar23[-3];
          uVar14 = puVar23[-1];
          puVar25[-2] = puVar23[-2];
          puVar25[-1] = uVar14;
          puVar25[-3] = uVar4;
        }
        else {
          if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_00f3408c;
          *(long *)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = lVar19;
          *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
          *puVar11 = 0;
          puVar25[-4] = 0;
          FUN_00dd9f00(puVar11,puVar21);
          uVar4 = puVar23[-3];
          uVar14 = puVar23[-1];
          puVar25[-2] = puVar23[-2];
          puVar25[-1] = uVar14;
          puVar25[-3] = uVar4;
          *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
        }
        puVar23 = puVar21;
        puVar25 = puVar11;
      } while (puVar18 != puVar21);
      puVar18 = (undefined8 *)*param_1;
      puVar25 = (undefined8 *)param_1[1];
    }
    lVar19 = param_1[2];
    *param_1 = (long)puVar11;
    param_1[1] = (long)(puVar24 + 5);
    param_1[2] = lVar9 + uVar17 * 0x28;
    puVar7 = PTR_DAT_047d3918;
    if (puVar25 != puVar18) {
      pbVar16 = PTR_DAT_047d3908;
      plVar22 = (long *)PTR_DAT_047d3910;
      do {
        puVar25 = puVar25 + -5;
        puVar24 = (undefined8 *)*puVar25;
        if (puVar24 != (undefined8 *)0x0) {
          psVar1 = (short *)(puVar24 + 3);
          do {
            sVar3 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar3 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar3 == 1) {
            piVar2 = (int *)((long)puVar24 + 0x1c);
            do {
              iVar8 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar8 != -1) {
              if (((*pbVar16 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), plVar22 = (long *)PTR_DAT_047d3910,
                 iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
                plVar22 = (long *)PTR_DAT_047d3910;
              }
              lVar9 = *plVar22;
              *(long *)puVar7 = lVar9;
              local_68[0] = *puVar24;
              FUN_00c44438(lVar9 + 0x8040,local_68);
              pbVar16 = PTR_DAT_047d3908;
            }
          }
          else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
      } while (puVar25 != puVar18);
    }
    if (puVar18 != (undefined8 *)0x0) {
      plVar22 = (long *)param_1[3];
      uVar17 = (**(code **)(*plVar22 + 0xf8))(plVar22);
      if (((uVar17 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar22 + 0x18))(plVar22,puVar18,lVar19 - (long)puVar18,8);
      }
      else {
        FUN_00c48fe8(plVar22,puVar18,lVar19 - (long)puVar18,8);
      }
    }
  }
  param_1[0x15] = uVar12 + 1;
  return uVar12;
}


