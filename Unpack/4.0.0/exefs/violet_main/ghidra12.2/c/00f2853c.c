/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f2853c; name: FUN_00f2853c
 */


void FUN_00f2853c(long *param_1,undefined8 param_2)

{
  char *pcVar1;
  ulong uVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  char *pcVar16;
  char *pcVar17;
  long lVar18;
  long lVar19;
  
  lVar12 = param_1[1];
  plVar15 = param_1 + 3;
  if (lVar12 == param_1[2]) {
    uVar14 = param_1[4];
    lVar12 = lVar12 - *param_1 >> 5;
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    uVar2 = lVar12 * -0x3333333333333333 + 1;
    if (uVar14 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = param_1[2] - *param_1 >> 5;
    uVar11 = lVar9 * -0x6666666666666666;
    if (uVar2 <= uVar11) {
      uVar2 = uVar11;
    }
    if (uVar14 >> 1 <= (ulong)(lVar9 * -0x3333333333333333)) {
      uVar2 = uVar14;
    }
    if (uVar2 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(*(long *)*plVar15 + 0x10))((long *)*plVar15,uVar2 * 0xa0,0x10);
      if (lVar9 == 0) {
        (**(code **)(*(long *)*plVar15 + 0xe8))();
      }
    }
    lVar12 = lVar9 + lVar12 * 0x20;
    FUN_00f28920(plVar15,lVar12,param_2);
    pcVar17 = (char *)*param_1;
    pcVar16 = (char *)param_1[1];
    if (pcVar16 == pcVar17) {
      lVar19 = lVar12;
      pcVar16 = pcVar17;
    }
    else {
      lVar19 = 0;
      do {
        lVar18 = *plVar15;
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar7 != 0) {
          if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar18;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        }
        lVar18 = lVar12 + lVar19;
        *(undefined1 *)(lVar18 + -0xa0) = 0;
        if (pcVar16[lVar19 + -0xa0] != '\0') {
          *(undefined4 *)(lVar18 + -0x90) = *(undefined4 *)(pcVar16 + lVar19 + -0x90);
          uVar10 = *(undefined8 *)(pcVar16 + lVar19 + -0x88);
          pcVar1 = pcVar16 + lVar19 + -0x88;
          pcVar1[0] = '\0';
          pcVar1[1] = '\0';
          pcVar1[2] = '\0';
          pcVar1[3] = '\0';
          pcVar1[4] = '\0';
          pcVar1[5] = '\0';
          pcVar1[6] = '\0';
          pcVar1[7] = '\0';
          *(undefined8 *)(lVar18 + -0x88) = uVar10;
          memcpy((void *)(lVar18 + -0x80),pcVar16 + lVar19 + -0x80,0x48);
          *(undefined1 *)(lVar18 + -0xa0) = 1;
        }
        uVar10 = *(undefined8 *)(pcVar16 + lVar19 + -0x30);
        pcVar1 = pcVar16 + lVar19 + -0x30;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
        *(undefined8 *)(lVar18 + -0x30) = uVar10;
        *(undefined1 *)(lVar18 + -0x28) = 0;
        if (pcVar16[lVar19 + -0x28] != '\0') {
          uVar10 = *(undefined8 *)(pcVar16 + lVar19 + -0x18);
          uVar13 = *(undefined8 *)(pcVar16 + lVar19 + -0x10);
          *(undefined8 *)(lVar18 + -0x20) = *(undefined8 *)(pcVar16 + lVar19 + -0x20);
          *(undefined1 *)(lVar18 + -0x28) = 1;
          *(undefined8 *)(lVar18 + -0x18) = uVar10;
          *(undefined8 *)(lVar18 + -0x10) = uVar13;
        }
        *(char *)(lVar18 + -8) = pcVar16[lVar19 + -8];
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        lVar19 = lVar19 + -0xa0;
      } while ((long)pcVar17 - (long)pcVar16 != lVar19);
      pcVar17 = (char *)*param_1;
      lVar19 = lVar12 + lVar19;
      pcVar16 = (char *)param_1[1];
    }
    lVar18 = param_1[2];
    *param_1 = lVar19;
    param_1[1] = lVar12 + 0xa0;
    param_1[2] = lVar9 + uVar2 * 0xa0;
    while (pcVar1 = pcVar16, pcVar1 != pcVar17) {
      if (pcVar1[-0x28] != '\0') {
        pcVar1[-0x28] = '\0';
      }
      plVar8 = *(long **)(pcVar1 + -0x30);
      if (plVar8 != (long *)0x0) {
        plVar3 = plVar8 + 5;
        do {
          lVar12 = *plVar3;
          iVar6 = (int)lVar12 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *(int *)plVar3 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        else if ((int)lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      pcVar16 = pcVar1 + -0xa0;
      if (*pcVar16 != '\0') {
        if (*(long **)(pcVar1 + -0x88) != (long *)0x0) {
          (**(code **)(**(long **)(pcVar1 + -0x88) + 0x20))();
        }
        *pcVar16 = '\0';
      }
    }
    if (pcVar17 != (char *)0x0) {
      plVar15 = (long *)*plVar15;
      uVar14 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar14 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00f287d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar15 + 0x18))(plVar15,pcVar17,lVar18 - (long)pcVar17,0x10);
        return;
      }
      FUN_00c48fe8(plVar15,pcVar17,lVar18 - (long)pcVar17,0x10);
      return;
    }
  }
  else {
    FUN_00f28920(plVar15,lVar12,param_2);
    param_1[1] = lVar12 + 0xa0;
  }
  return;
}


