/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011201f0; name: FUN_011201f0
 */


ulong FUN_011201f0(long *param_1,long param_2)

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
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 local_68 [13];
  
  while( true ) {
    lVar17 = param_1[0xf] - param_1[0xe];
    if (lVar17 == 0) break;
    uVar16 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar17 + param_1[0xe] + -8;
    uVar12 = uVar16 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar12) =
         *(ulong *)(param_1[7] + uVar12) & (1L << (uVar16 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar16 < (ulong)((param_1[1] - *param_1 >> 3) * -0x3333333333333333)) {
      lVar17 = *param_1 + uVar16 * 0x28;
      FUN_00dd9f00(lVar17,param_2);
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      uVar14 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(lVar17 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(lVar17 + 0x20) = uVar14;
      *(undefined8 *)(lVar17 + 0x10) = uVar4;
      if (uVar16 < (ulong)param_1[0x15]) {
        return uVar16;
      }
      param_1[0x15] = uVar16 + 1;
      return uVar16;
    }
  }
  lVar17 = param_1[1] - *param_1 >> 3;
  uVar12 = lVar17 * -0x3333333333333333;
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_01121cd0(param_1,param_2);
  }
  else {
    uVar15 = param_1[4];
    uVar16 = uVar12 + 1;
    if (0x7ffffffffffffffe < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    if (uVar15 < uVar16) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = param_1[2] - *param_1 >> 3;
    uVar13 = lVar10 * -0x6666666666666666;
    if (uVar16 <= uVar13) {
      uVar16 = uVar13;
    }
    if (uVar15 >> 1 <= (ulong)(lVar10 * -0x3333333333333333)) {
      uVar16 = uVar15;
    }
    if (uVar16 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar16 * 0x28,8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    puVar18 = (undefined8 *)(lVar10 + lVar17 * 8);
    lVar20 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar9 == 0) {
      *puVar18 = 0;
      puVar18[1] = 0;
      FUN_00dd9f00(puVar18,param_2);
      lVar20 = lVar10 + lVar17 * 8;
      uVar14 = *(undefined8 *)(param_2 + 0x20);
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(lVar20 + 0x18) = uVar4;
      *(undefined8 *)(lVar20 + 0x20) = uVar14;
    }
    else {
      if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_01120714:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar20;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      *puVar18 = 0;
      puVar18[1] = 0;
      FUN_00dd9f00(puVar18,param_2);
      lVar20 = lVar10 + lVar17 * 8;
      uVar14 = *(undefined8 *)(param_2 + 0x20);
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(lVar20 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(lVar20 + 0x18) = uVar4;
      *(undefined8 *)(lVar20 + 0x20) = uVar14;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    }
    puVar21 = (undefined8 *)*param_1;
    if ((undefined8 *)param_1[1] == puVar21) {
      puVar11 = puVar18;
      puVar23 = puVar21;
    }
    else {
      puVar22 = (undefined8 *)param_1[1];
      puVar23 = (undefined8 *)(lVar10 + lVar17 * 8);
      do {
        puVar11 = puVar23 + -5;
        lVar17 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        puVar24 = puVar22 + -5;
        lVar20 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar20 == 0) {
          *puVar11 = 0;
          puVar23[-4] = 0;
          FUN_00dd9f00(puVar11,puVar24);
          uVar4 = puVar22[-3];
          uVar14 = puVar22[-1];
          puVar23[-2] = puVar22[-2];
          puVar23[-1] = uVar14;
          puVar23[-3] = uVar4;
        }
        else {
          if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_01120714;
          *(long *)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = lVar17;
          *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
          *puVar11 = 0;
          puVar23[-4] = 0;
          FUN_00dd9f00(puVar11,puVar24);
          uVar4 = puVar22[-3];
          uVar14 = puVar22[-1];
          puVar23[-2] = puVar22[-2];
          puVar23[-1] = uVar14;
          puVar23[-3] = uVar4;
          *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
        }
        puVar22 = puVar24;
        puVar23 = puVar11;
      } while (puVar21 != puVar24);
      puVar21 = (undefined8 *)*param_1;
      puVar23 = (undefined8 *)param_1[1];
    }
    lVar17 = param_1[2];
    *param_1 = (long)puVar11;
    param_1[1] = (long)(puVar18 + 5);
    param_1[2] = lVar10 + uVar16 * 0x28;
    puVar7 = PTR_DAT_047d3918;
    while (puVar23 != puVar21) {
      puVar23 = puVar23 + -5;
      puVar18 = (undefined8 *)*puVar23;
      if (puVar18 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar18 + 3);
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
          piVar2 = (int *)((long)puVar18 + 0x1c);
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
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)puVar7 = lVar10;
            local_68[0] = *puVar18;
            FUN_00c44438(lVar10 + 0x8040,local_68);
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
    }
    if (puVar21 != (undefined8 *)0x0) {
      plVar19 = (long *)param_1[3];
      uVar16 = (**(code **)(*plVar19 + 0xf8))(plVar19);
      if (((uVar16 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar19 + 0x18))(plVar19,puVar21,lVar17 - (long)puVar21,8);
      }
      else {
        FUN_00c48fe8(plVar19,puVar21,lVar17 - (long)puVar21,8);
      }
    }
  }
  param_1[0x15] = uVar12 + 1;
  return uVar12;
}


