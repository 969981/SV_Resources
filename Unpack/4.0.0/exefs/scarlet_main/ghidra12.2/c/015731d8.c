/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015731d8; name: FUN_015731d8
 */


void FUN_015731d8(uint param_1,long param_2,long param_3,long param_4,long param_5)

{
  ushort uVar1;
  ushort uVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  char *local_68 [3];
  
  uVar2 = *(ushort *)(*(long *)(param_3 + 0x10) + param_4 * 2);
  uVar1 = uVar2 & 0xf;
  if (uVar1 == 0xd) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("elmType != flatbuffers::ElementaryType::ET_SEQUENCE","SetElement",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/framework2/fbs/converter.cpp"
               ,0x98);
  }
  if (uVar1 == 0xc) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("elmType != flatbuffers::ElementaryType::ET_STRING","SetElement",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/framework2/fbs/converter.cpp"
               ,0x99);
  }
  if ((uVar2 & 0xf) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("elmType != flatbuffers::ElementaryType::ET_UTYPE","SetElement",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/framework2/fbs/converter.cpp"
               ,0x97);
  }
  if ((short)uVar2 < 0) {
    switch(uVar1) {
    case 1:
      uVar5 = FUN_028b8fb0(param_5);
      if ((~param_1 & 0xffff) == 0) {
        FUN_028b90bc(param_2,uVar5 & 1);
        return;
      }
      FUN_028b9018(param_2,param_1,uVar5 & 1,uVar5 & 1);
      return;
    case 2:
      uVar7 = FUN_028b8850(param_5);
      goto switchD_0157332c_caseD_2;
    case 3:
      uVar7 = FUN_028b9134(param_5);
      goto switchD_0157332c_caseD_3;
    case 4:
      uVar7 = FUN_028b8850(param_5);
      goto switchD_0157332c_caseD_4;
    case 5:
      uVar7 = FUN_028b9134(param_5);
      goto switchD_0157332c_caseD_5;
    case 6:
      uVar7 = FUN_028b8850(param_5);
      if ((~param_1 & 0xffff) == 0) goto LAB_015736d4;
      if (*(char *)(param_2 + 0x50) == '\0') {
        return;
      }
      break;
    case 7:
      uVar7 = FUN_028b9134(param_5);
      if ((~param_1 & 0xffff) == 0) goto LAB_015733f4;
      if (*(char *)(param_2 + 0x50) == '\0') {
        return;
      }
      goto LAB_01573784;
    case 8:
      uVar7 = FUN_028b8850(param_5);
      goto switchD_0157332c_caseD_8;
    case 9:
      uVar13 = FUN_028b9134(param_5);
      if ((~param_1 & 0xffff) == 0) {
        FUN_018df720(param_2,uVar13);
        return;
      }
      FUN_018df678(param_2,param_1,uVar13,uVar13);
      return;
    case 10:
      dVar3 = (double)FUN_028b943c(param_5);
      if ((~param_1 & 0xffff) == 0) {
        FUN_015c812c(param_2);
        return;
      }
      FUN_015c8088((float)dVar3,(float)dVar3,param_2,param_1);
      return;
    case 0xb:
      uVar13 = FUN_028b943c(param_5);
      if ((~param_1 & 0xffff) == 0) {
        FUN_028b9808(param_2);
        return;
      }
      FUN_028b9768((int)uVar13,uVar13,param_2,param_1);
      return;
    default:
      goto switchD_015732c4_default;
    }
LAB_01573398:
    uVar7 = FUN_01692a74(param_2,uVar7);
  }
  else {
    piVar6 = (int *)(**(code **)(*(long *)(param_3 + 0x18) +
                                (ulong)((uint)(int)(short)uVar2 >> 5 & 0x7ff) * 8))();
    if (*piVar6 != 3) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("seqType->st == flatbuffers::SequenceType::ST_ENUM","SetElement",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/framework2/fbs/converter.cpp"
                 ,0x9e);
    }
    uVar7 = FUN_028b8850(param_5);
    if (*(int *)(param_5 + 0xc) == 5) {
      FUN_01571ef8(local_68,param_5);
      puVar10 = *(undefined8 **)(piVar6 + 10);
      lVar9 = *(long *)(piVar6 + 2);
      puVar11 = puVar10;
      if (lVar9 == 0) {
LAB_01573364:
        uVar7 = 0;
        if (puVar11 != puVar10 + lVar9) {
          uVar7 = (long)puVar11 - (long)puVar10 >> 3;
        }
      }
      else {
        lVar12 = lVar9 << 3;
        do {
          iVar4 = strcmp((char *)*puVar11,local_68[0]);
          if (iVar4 == 0) goto LAB_01573364;
          puVar11 = puVar11 + 1;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
        uVar7 = 0;
      }
    }
    switch(uVar1) {
    case 2:
switchD_0157332c_caseD_2:
      if ((~param_1 & 0xffff) == 0) {
        FUN_01a047bc(param_2,uVar7 & 0xffffffff);
        return;
      }
      FUN_01a04714(param_2,param_1,uVar7,uVar7 & 0xffffffff);
      return;
    case 3:
switchD_0157332c_caseD_3:
      FUN_028b8b5c(param_1,param_2,uVar7);
      return;
    case 4:
switchD_0157332c_caseD_4:
      if ((~param_1 & 0xffff) == 0) {
        FUN_028b8d30(param_2,uVar7 & 0xffffffff);
        return;
      }
      FUN_028b8c88(param_2,param_1,uVar7,uVar7 & 0xffffffff);
      return;
    case 5:
switchD_0157332c_caseD_5:
      if ((~param_1 & 0xffff) == 0) {
        FUN_0187a444(param_2,uVar7 & 0xffffffff);
        return;
      }
      FUN_0187a314(param_2,param_1,uVar7,uVar7 & 0xffffffff);
      return;
    case 6:
      if ((~param_1 & 0xffff) == 0) {
        uVar7 = uVar7 & 0xffffffff;
LAB_015736d4:
        FUN_01692a74(param_2,uVar7);
        return;
      }
      if (*(char *)(param_2 + 0x50) == '\0') {
        return;
      }
      uVar7 = uVar7 & 0xffffffff;
      goto LAB_01573398;
    case 7:
    case 9:
      if ((~param_1 & 0xffff) == 0) {
        uVar7 = uVar7 & 0xffffffff;
LAB_015733f4:
        FUN_015713f8(param_2,uVar7);
        return;
      }
      if (*(char *)(param_2 + 0x50) == '\0') {
        return;
      }
      uVar7 = uVar7 & 0xffffffff;
LAB_01573784:
      uVar7 = FUN_015713f8(param_2,uVar7);
      break;
    case 8:
switchD_0157332c_caseD_8:
      if ((~param_1 & 0xffff) == 0) {
        FUN_028b8ea8(param_2,uVar7);
        return;
      }
      FUN_028b8e04(param_2,param_1,uVar7,uVar7);
      return;
    default:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("0","SetElement",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/src/framework2/fbs/converter.cpp"
                 ,199);
    }
  }
  puVar8 = *(ulong **)(param_2 + 0x38);
  if ((ulong)(*(long *)(param_2 + 0x30) - (long)puVar8) < 8) {
    FUN_0157184c(param_2,8);
    puVar8 = *(ulong **)(param_2 + 0x38);
  }
  *puVar8 = uVar7 & 0xffffffff | (ulong)(param_1 & 0xffff) << 0x20;
  *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 8;
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  if ((param_1 & 0xffff) <= (uint)*(ushort *)(param_2 + 0x44)) {
    param_1 = (uint)*(ushort *)(param_2 + 0x44);
  }
  *(short *)(param_2 + 0x44) = (short)param_1;
switchD_015732c4_default:
  return;
}


