/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f08378; name: FUN_00f08378
 */


ulong FUN_00f08378(float *param_1,ulong param_2,float *param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  float *pfVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  uint local_30 [4];
  
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  if (4 < param_2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("p1.size() <= NumberOf(indics)","GetGroupInfo",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/scene/grid_streaming_group.cpp"
               ,0x203);
  }
  if (4 < param_4) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("p2.size() <= NumberOf(indics)","GetGroupInfo",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/scene/grid_streaming_group.cpp"
               ,0x204);
  }
  if (param_2 != param_4) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("p1.size() == p2.size()","GetGroupInfo",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/scene/grid_streaming_group.cpp"
               ,0x205);
  }
  if (param_5 == 0) {
    uVar10 = 0;
    uVar11 = 0;
  }
  else if (param_2 == 0) {
    uVar10 = 0;
LAB_00f085dc:
    uVar11 = (param_5 & 0xff) << 0x20;
  }
  else {
    uVar3 = (uint)param_2;
    do {
      uVar11 = 1L << (param_5 & 0x3f);
      fVar14 = (float)uVar11;
      uVar12 = (int)uVar11 - 1;
      uVar10 = uVar12;
      if ((uint)(int)(*param_1 * fVar14) <= uVar12) {
        uVar10 = (int)(*param_1 * fVar14);
      }
      local_30[0] = uVar10;
      if (param_2 != 1) {
        local_30[1] = uVar12;
        if ((uint)(int)(param_1[1] * fVar14) <= uVar12) {
          local_30[1] = (int)(param_1[1] * fVar14);
        }
        if (param_2 != 2) {
          local_30[2] = uVar12;
          if ((uint)(int)(param_1[2] * fVar14) <= uVar12) {
            local_30[2] = (int)(param_1[2] * fVar14);
          }
          if (param_2 != 3) {
            puVar5 = local_30 + 3;
            lVar8 = param_2 - 3;
            pfVar6 = param_1 + 3;
            do {
              uVar10 = uVar12;
              if ((uint)(int)(*pfVar6 * fVar14) <= uVar12) {
                uVar10 = (int)(*pfVar6 * fVar14);
              }
              lVar8 = lVar8 + -1;
              *puVar5 = uVar10;
              puVar5 = puVar5 + 1;
              pfVar6 = pfVar6 + 1;
            } while (lVar8 != 0);
          }
        }
      }
      uVar11 = 0;
      uVar10 = 0;
      do {
        uVar4 = local_30[uVar11];
        if (uVar4 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = uVar4 & 1;
          uVar13 = (uint)LZCOUNT(uVar4) ^ 0x1f;
          if ((((uVar13 != 0) &&
               (uVar7 = (uVar4 >> 1 & 1) << (ulong)(uVar3 & 0x1f) | uVar7, uVar13 != 1)) &&
              (uVar7 = (uVar4 >> 2 & 1) << (ulong)(uVar3 << 1 & 0x1f) | uVar7, uVar13 != 2)) &&
             (uVar7 = (uVar4 >> 3 & 1) << (ulong)(uVar3 * 3 & 0x1f) | uVar7, uVar13 != 3)) {
            uVar7 = (uVar4 >> 4 & 1) << (ulong)((uVar3 & 7) << 2) | uVar7;
            iVar9 = uVar13 - 4;
            if (iVar9 != 0) {
              uVar4 = uVar4 >> 5;
              uVar13 = uVar3 * 5;
              do {
                uVar1 = uVar4 & 1;
                uVar4 = uVar4 >> 1;
                uVar2 = uVar13 & 0x1f;
                uVar13 = uVar13 + uVar3;
                uVar7 = uVar1 << (ulong)uVar2 | uVar7;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
          }
        }
        uVar4 = (uint)uVar11;
        uVar11 = uVar11 + 1;
        uVar10 = uVar7 << (ulong)(uVar4 & 0x1f) | uVar10;
      } while (uVar11 != param_2);
      local_30[0] = uVar12;
      if ((uint)(int)(*param_3 * fVar14) <= uVar12) {
        local_30[0] = (int)(*param_3 * fVar14);
      }
      if (param_2 != 1) {
        local_30[1] = uVar12;
        if ((uint)(int)(param_3[1] * fVar14) <= uVar12) {
          local_30[1] = (int)(param_3[1] * fVar14);
        }
        if (param_2 != 2) {
          local_30[2] = uVar12;
          if ((uint)(int)(param_3[2] * fVar14) <= uVar12) {
            local_30[2] = (int)(param_3[2] * fVar14);
          }
          if (param_2 != 3) {
            pfVar6 = param_3 + 3;
            puVar5 = local_30 + 3;
            lVar8 = param_2 - 3;
            do {
              uVar4 = uVar12;
              if ((uint)(int)(*pfVar6 * fVar14) <= uVar12) {
                uVar4 = (int)(*pfVar6 * fVar14);
              }
              lVar8 = lVar8 + -1;
              *puVar5 = uVar4;
              pfVar6 = pfVar6 + 1;
              puVar5 = puVar5 + 1;
            } while (lVar8 != 0);
          }
        }
      }
      uVar11 = 0;
      uVar12 = 0;
      do {
        uVar4 = local_30[uVar11];
        if (uVar4 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = uVar4 & 1;
          uVar13 = (uint)LZCOUNT(uVar4) ^ 0x1f;
          if (((uVar13 != 0) &&
              (uVar7 = (uVar4 >> 1 & 1) << (ulong)(uVar3 & 0x1f) | uVar7, uVar13 != 1)) &&
             ((uVar7 = (uVar4 >> 2 & 1) << (ulong)(uVar3 << 1 & 0x1f) | uVar7, uVar13 != 2 &&
              (uVar7 = (uVar4 >> 3 & 1) << (ulong)(uVar3 * 3 & 0x1f) | uVar7, uVar13 != 3)))) {
            uVar7 = (uVar4 >> 4 & 1) << (ulong)((uVar3 & 7) << 2) | uVar7;
            iVar9 = uVar13 - 4;
            if (iVar9 != 0) {
              uVar4 = uVar4 >> 5;
              uVar13 = uVar3 * 5;
              do {
                uVar1 = uVar4 & 1;
                uVar4 = uVar4 >> 1;
                uVar2 = uVar13 & 0x1f;
                uVar13 = uVar13 + uVar3;
                uVar7 = uVar1 << (ulong)uVar2 | uVar7;
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
          }
        }
        uVar4 = (uint)uVar11;
        uVar11 = uVar11 + 1;
        uVar12 = uVar7 << (ulong)(uVar4 & 0x1f) | uVar12;
      } while (uVar11 != param_2);
      if (uVar10 == uVar12) goto LAB_00f085dc;
      uVar10 = 0;
      uVar11 = 0;
      param_5 = param_5 - 1;
    } while (param_5 != 0);
  }
  return uVar11 | uVar10;
}


