/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ca6f18; name: FUN_00ca6f18
 */


void FUN_00ca6f18(undefined8 param_1,long *param_2,long *param_3,ulong param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  int *piVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  int *piVar22;
  long lVar23;
  ulong uVar24;
  int local_6c;
  int aiStack_68 [2];
  
  lVar21 = *param_3;
  lVar16 = *(long *)(lVar21 + 0x30);
  uVar13 = (*(long *)(lVar21 + 0x38) - lVar16 >> 3) * -0x71c71c71c71c71c7;
  if ((int)uVar13 == 0) {
    return;
  }
  uVar19 = (int)((ulong)(param_2[1] - *param_2) >> 3) * 0x38e38e39;
  piVar1 = (int *)(&DAT_03cab870 + (param_4 & 0xffffffff) * 4);
  piVar2 = (int *)(&DAT_03cac070 + (param_4 & 0xffffffff) * 4);
  piVar3 = (int *)(&DAT_03caae90 + (param_4 & 0xffffffff) * 4);
  uVar24 = 0;
  do {
    FUN_00ca7394(param_2,uVar19 + 1);
    plVar14 = (long *)(lVar16 + uVar24 * 0x48);
    piVar22 = (int *)*plVar14;
    piVar5 = (int *)plVar14[1];
    if (piVar22 == piVar5) {
LAB_00ca726c:
      FUN_00ca7394(param_2,uVar19);
    }
    else {
      uVar20 = (ulong)uVar19;
      lVar15 = *param_2;
      lVar23 = lVar15 + uVar20 * 0x48;
      iVar12 = *piVar22;
      piVar4 = (int *)(lVar23 + 0x40);
      if (iVar12 == 2) {
        piVar18 = piVar2;
LAB_00ca7048:
        iVar12 = *piVar18;
      }
      else {
        piVar18 = piVar3;
        if ((iVar12 == 1) || (piVar18 = piVar1, iVar12 == 4)) goto LAB_00ca7048;
        iVar12 = 0;
      }
      iVar9 = piVar22[1];
      bVar8 = iVar12 != 0;
      local_6c = iVar12;
      aiStack_68[0] = iVar9;
      FUN_00c85118(lVar23,&local_6c,aiStack_68);
      iVar9 = FUN_00c75660(iVar9);
      *piVar4 = *piVar4 + iVar9;
      if (piVar22 + 2 != piVar5) {
        iVar9 = piVar22[2];
        if (iVar9 == 2) {
          piVar18 = piVar2;
LAB_00ca70b8:
          iVar9 = *piVar18;
        }
        else {
          piVar18 = piVar3;
          if ((iVar9 == 1) || (piVar18 = piVar1, iVar9 == 4)) goto LAB_00ca70b8;
          iVar9 = 0;
        }
        iVar10 = piVar22[3];
        bVar8 = iVar12 != 0 || iVar9 != 0;
        local_6c = iVar9;
        aiStack_68[0] = iVar10;
        FUN_00c85118(lVar23,&local_6c,aiStack_68);
        iVar10 = FUN_00c75660(iVar10);
        *piVar4 = *piVar4 + iVar10;
        if (piVar22 + 4 != piVar5) {
          iVar10 = piVar22[4];
          if (iVar10 == 2) {
            piVar18 = piVar2;
LAB_00ca712c:
            iVar10 = *piVar18;
          }
          else {
            piVar18 = piVar3;
            if ((iVar10 == 1) || (piVar18 = piVar1, iVar10 == 4)) goto LAB_00ca712c;
            iVar10 = 0;
          }
          iVar11 = piVar22[5];
          bVar8 = (iVar12 != 0 || iVar9 != 0) || iVar10 != 0;
          local_6c = iVar10;
          aiStack_68[0] = iVar11;
          FUN_00c85118(lVar23,&local_6c,aiStack_68);
          iVar11 = FUN_00c75660(iVar11);
          *piVar4 = *piVar4 + iVar11;
          if (piVar22 + 6 != piVar5) {
            iVar11 = piVar22[6];
            if (iVar11 == 2) {
              piVar18 = piVar2;
LAB_00ca718c:
              local_6c = *piVar18;
            }
            else {
              piVar18 = piVar3;
              if ((iVar11 == 1) || (piVar18 = piVar1, iVar11 == 4)) goto LAB_00ca718c;
              local_6c = 0;
            }
            iVar11 = piVar22[7];
            bVar8 = ((iVar12 != 0 || iVar9 != 0) || iVar10 != 0) || local_6c != 0;
            aiStack_68[0] = iVar11;
            FUN_00c85118(lVar23,&local_6c,aiStack_68);
            iVar12 = FUN_00c75660(iVar11);
            piVar22 = piVar22 + 8;
            *piVar4 = *piVar4 + iVar12;
            if (piVar22 != piVar5) {
              do {
                iVar12 = *piVar22;
                piVar18 = piVar2;
                if ((iVar12 == 2) || (piVar18 = piVar3, iVar12 == 1)) {
LAB_00ca72e0:
                  local_6c = *piVar18;
                }
                else {
                  if (iVar12 == 4) {
                    piVar18 = piVar1;
                    goto LAB_00ca72e0;
                  }
                  local_6c = 0;
                }
                iVar12 = piVar22[1];
                bVar8 = (bool)(bVar8 | local_6c != 0);
                aiStack_68[0] = iVar12;
                FUN_00c85118(lVar23,&local_6c,aiStack_68);
                iVar12 = FUN_00c75660(iVar12);
                piVar22 = piVar22 + 2;
                *piVar4 = *piVar4 + iVar12;
              } while (piVar22 != piVar5);
            }
          }
        }
      }
      if (!bVar8) goto LAB_00ca726c;
      lVar16 = lVar16 + uVar24 * 0x48;
      uVar6 = *(undefined4 *)(lVar16 + 0x44);
      lVar16 = *(long *)(lVar16 + 0x38);
      if (lVar16 != 0) {
        piVar22 = (int *)(lVar16 + 0x28);
        do {
          iVar12 = *piVar22;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar8) {
            *piVar22 = iVar12 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar12 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      plVar17 = (long *)(lVar15 + uVar20 * 0x48 + 0x38);
      plVar14 = (long *)*plVar17;
      *plVar17 = lVar16;
      if (plVar14 != (long *)0x0) {
        plVar17 = plVar14 + 5;
        do {
          lVar16 = *plVar17;
          iVar12 = (int)lVar16 + -1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar8) {
            *(int *)plVar17 = iVar12;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar12 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
        else if ((int)lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      *(undefined4 *)(lVar15 + uVar20 * 0x48 + 0x44) = uVar6;
      uVar19 = uVar19 + 1;
    }
    uVar24 = uVar24 + 1;
    if (uVar24 == (uVar13 & 0xffffffff)) {
      return;
    }
    lVar16 = *(long *)(lVar21 + 0x30);
  } while( true );
}


