/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010868f8; name: FUN_010868f8
 */


long * FUN_010868f8(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  
  if (param_1 != param_2) {
    plVar16 = param_1 + 3;
    plVar14 = (long *)*plVar16;
    if (plVar14 == (long *)param_2[3]) {
      lVar13 = param_1[2];
      plVar14 = (long *)*param_1;
    }
    else {
      plVar15 = (long *)*param_1;
      plVar9 = (long *)param_1[1];
      if (plVar9 == plVar15) {
        plVar9 = plVar15;
      }
      else {
        do {
          plVar9 = plVar9 + -2;
          plVar14 = (long *)*plVar9;
          if (plVar14 != (long *)0x0) {
            plVar1 = plVar14 + 5;
            do {
              lVar13 = *plVar1;
              iVar7 = (int)lVar13 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *(int *)plVar1 = iVar7;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar14 + 0x10))();
            }
            else if ((int)lVar13 == 0) goto LAB_01086c14;
          }
        } while (plVar9 != plVar15);
        plVar14 = (long *)param_1[3];
        plVar9 = (long *)*param_1;
      }
      lVar13 = param_1[2];
      param_1[1] = (long)plVar15;
      uVar17 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar17 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,plVar9,lVar13 - (long)plVar9,8);
      }
      else {
        FUN_00c48fe8(plVar14,plVar9,lVar13 - (long)plVar9,8);
      }
      plVar14 = (long *)0x0;
      lVar13 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    lVar11 = param_2[3];
    lVar2 = param_2[4];
    lVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[6] = lVar3;
    *plVar16 = lVar11;
    param_1[4] = lVar2;
    puVar12 = (undefined8 *)*param_2;
    puVar4 = (undefined8 *)param_2[1];
    uVar17 = (long)puVar4 - (long)puVar12 >> 4;
    if ((ulong)(lVar13 - (long)plVar14 >> 4) < uVar17) {
      if (plVar14 != (long *)0x0) {
        plVar15 = (long *)param_1[1];
        if (plVar15 == plVar14) {
          plVar15 = plVar14;
        }
        else {
          do {
            plVar15 = plVar15 + -2;
            plVar9 = (long *)*plVar15;
            if (plVar9 != (long *)0x0) {
              plVar1 = plVar9 + 5;
              do {
                lVar13 = *plVar1;
                iVar7 = (int)lVar13 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar6) {
                  *(int *)plVar1 = iVar7;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar7 == 0) {
                (**(code **)(*plVar9 + 0x10))();
              }
              else if ((int)lVar13 == 0) {
LAB_01086c14:
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint32_t>::max()",
                           "DecrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                           ,0x58,"Reference counter underflows.");
              }
            }
          } while (plVar15 != plVar14);
          lVar13 = param_1[2];
          plVar15 = (long *)*param_1;
        }
        plVar9 = (long *)param_1[3];
        param_1[1] = (long)plVar14;
        uVar10 = (**(code **)(*plVar9 + 0xf8))(plVar9);
        if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
          (**(code **)(*plVar9 + 0x18))(plVar9,plVar15,lVar13 - (long)plVar15,8);
        }
        else {
          FUN_00c48fe8(plVar9,plVar15,lVar13 - (long)plVar15,8);
        }
        lVar13 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
      }
      uVar10 = param_1[4];
      if (0x7ffffffffffffffe < uVar10) {
        uVar10 = 0x7fffffffffffffff;
      }
      if (uVar10 < uVar17) {
LAB_01086c0c:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar17 <= (ulong)(lVar13 >> 3)) {
        uVar17 = lVar13 >> 3;
      }
      if (uVar10 >> 1 <= (ulong)(lVar13 >> 4)) {
        uVar17 = uVar10;
      }
      if (uVar10 < uVar17) goto LAB_01086c0c;
      lVar13 = (**(code **)(*(long *)*plVar16 + 0x10))((long *)*plVar16,uVar17 << 4,8);
      if (lVar13 == 0) {
        (**(code **)(*(long *)*plVar16 + 0xe8))();
      }
      *param_1 = lVar13;
      param_1[1] = lVar13;
      param_1[2] = lVar13 + uVar17 * 0x10;
    }
    else {
      uVar10 = param_1[1] - (long)plVar14 >> 4;
      puVar8 = puVar12;
      puVar12 = (undefined8 *)((long)puVar12 + (param_1[1] - (long)plVar14));
      if (uVar17 <= uVar10) {
        puVar12 = puVar4;
      }
      while (puVar12 != puVar8) {
        FUN_01087518(plVar14,*puVar8);
        *(undefined4 *)(plVar14 + 1) = *(undefined4 *)(puVar8 + 1);
        plVar14 = plVar14 + 2;
        puVar8 = puVar8 + 2;
      }
      if (uVar17 <= uVar10) {
        FUN_010875d4(param_1,plVar14);
        return param_1;
      }
    }
    FUN_01086c3c(param_1,puVar12,puVar4);
  }
  return param_1;
}


