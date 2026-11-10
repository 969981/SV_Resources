/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033b034c; name: FUN_033b034c
 */


void FUN_033b034c(byte *param_1,ulong param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  uint uVar5;
  void *__dest;
  char *pcVar6;
  size_t __n;
  int iVar7;
  uint uVar8;
  
  for (; (*param_1 & 1) == 0; param_1 = *(byte **)(param_1 + 8)) {
  }
  uVar8 = (uint)param_2;
  switch(*(uint *)(param_1 + 0x10) & 0x1f) {
  case 0:
    uVar8 = *(uint *)((long)param_3 + 0xc) & 0x7fffffff;
    iVar7 = 4;
    if (uVar8 < 5) {
      iVar7 = uVar8 - 1;
    }
    if ((int)param_3[0x12] != 0) {
      iVar7 = 4;
    }
    iVar1 = iVar7 + 1;
    if ((int)uVar8 <= iVar7) {
      FUN_030b4a20(param_3,PTR_PTR_047d1a50 + 0x20,iVar1);
    }
    if (((int)param_3[1] <= iVar7) || (iVar1 < (int)param_3[1])) {
      *(int *)(param_3 + 1) = iVar1;
    }
    *(undefined1 *)(*param_3 + (long)iVar7) = 0;
    __dest = (void *)*param_3;
    __n = (long)(int)param_3[1] - 1;
    pcVar6 = "void";
    break;
  case 1:
    uVar8 = *(uint *)((long)param_3 + 0xc) & 0x7fffffff;
    iVar7 = 10;
    if (uVar8 < 0xb) {
      iVar7 = uVar8 - 1;
    }
    if ((int)param_3[0x12] != 0) {
      iVar7 = 10;
    }
    iVar1 = iVar7 + 1;
    if ((int)uVar8 <= iVar7) {
      FUN_030b4a20(param_3,PTR_PTR_047d1a50 + 0x20,iVar1);
    }
    if (((int)param_3[1] <= iVar7) || (iVar1 < (int)param_3[1])) {
      *(int *)(param_3 + 1) = iVar1;
    }
    *(undefined1 *)(*param_3 + (long)iVar7) = 0;
    __dest = (void *)*param_3;
    __n = (long)(int)param_3[1] - 1;
    pcVar6 = "incomplete";
    break;
  case 2:
    pcVar6 = "unsigned";
    if ((param_2 & 0x200) != 0) {
      pcVar6 = "signed";
    }
    puVar4 = &DAT_03c1cde6;
    if ((param_2 & 0x100) != 0) {
      puVar4 = &DAT_03c2adb9;
    }
    FUN_031c6c18(param_3,"bool%d (%s, %s)",param_2 >> 10 & 0x3fffff,pcVar6,puVar4);
    return;
  case 3:
    pcVar6 = "ptr";
    if ((param_2 & 0x20) != 0 && 0xffff < uVar8) {
      pcVar6 = "buffer";
    }
    FUN_031c6c18(param_3,"string (%s)",pcVar6);
    return;
  case 4:
    puVar4 = &DAT_03c312f2;
    if ((param_2 & 0x200) != 0) {
      puVar4 = &DAT_03c886bc;
    }
    puVar2 = &DAT_03c1cde6;
    if ((param_2 & 0x100) != 0) {
      puVar2 = &DAT_03c2adb9;
    }
    FUN_031c6c18(param_3,"%sint%d (%s)",puVar4,param_2 >> 10 & 0x3fffff,puVar2);
    return;
  case 5:
    if (uVar8 == 0x345e05) {
      uVar8 = *(uint *)((long)param_3 + 0xc) & 0x7fffffff;
      iVar7 = 6;
      if (uVar8 < 7) {
        iVar7 = uVar8 - 1;
      }
      if ((int)param_3[0x12] != 0) {
        iVar7 = 6;
      }
      iVar1 = iVar7 + 1;
      if ((int)uVar8 <= iVar7) {
        FUN_030b4a20(param_3,PTR_PTR_047d1a50 + 0x20,iVar1);
      }
      if (((int)param_3[1] <= iVar7) || (iVar1 < (int)param_3[1])) {
        *(int *)(param_3 + 1) = iVar1;
      }
      *(undefined1 *)(*param_3 + (long)iVar7) = 0;
      __dest = (void *)*param_3;
      __n = (long)(int)param_3[1] - 1;
      pcVar6 = "double";
    }
    else {
      if (uVar8 != 0x174605) {
        uVar5 = uVar8 >> 0xb & 0x1f;
        pcVar6 = "";
        if ((param_2 & 0x200) != 0) {
          pcVar6 = "sign bit";
        }
        pcVar3 = "";
        if ((param_2 & 0x400) != 0) {
          pcVar3 = ", implicit one";
        }
        puVar4 = &DAT_03c1cde6;
        if ((param_2 & 0x100) != 0) {
          puVar4 = &DAT_03c2adb9;
        }
        FUN_031c6c18(param_3,"fp %d bits (%s, %d exp, %d significand %s, %s)",
                     (uVar8 >> 10 & 1) + uVar5 + (uVar8 >> 0x10 & 0xff) + 7 >> 3,pcVar6,uVar5,
                     uVar8 >> 0x10 & 0xff,pcVar3,puVar4);
        return;
      }
      uVar8 = *(uint *)((long)param_3 + 0xc) & 0x7fffffff;
      iVar7 = 5;
      if (uVar8 < 6) {
        iVar7 = uVar8 - 1;
      }
      if ((int)param_3[0x12] != 0) {
        iVar7 = 5;
      }
      iVar1 = iVar7 + 1;
      if ((int)uVar8 <= iVar7) {
        FUN_030b4a20(param_3,PTR_PTR_047d1a50 + 0x20,iVar1);
      }
      if (((int)param_3[1] <= iVar7) || (iVar1 < (int)param_3[1])) {
        *(int *)(param_3 + 1) = iVar1;
      }
      *(undefined1 *)(*param_3 + (long)iVar7) = 0;
      __dest = (void *)*param_3;
      __n = (long)(int)param_3[1] - 1;
      pcVar6 = "float";
    }
    break;
  case 6:
    uVar8 = *(uint *)((long)param_3 + 0xc) & 0x7fffffff;
    iVar7 = 7;
    if (uVar8 < 8) {
      iVar7 = uVar8 - 1;
    }
    if ((int)param_3[0x12] != 0) {
      iVar7 = 7;
    }
    iVar1 = iVar7 + 1;
    if ((int)uVar8 <= iVar7) {
      FUN_030b4a20(param_3,PTR_PTR_047d1a50 + 0x20,iVar1);
    }
    if (((int)param_3[1] <= iVar7) || (iVar1 < (int)param_3[1])) {
      *(int *)(param_3 + 1) = iVar1;
    }
    *(undefined1 *)(*param_3 + (long)iVar7) = 0;
    __dest = (void *)*param_3;
    __n = (long)(int)param_3[1] - 1;
    pcVar6 = "pointer";
    break;
  case 7:
    uVar8 = *(uint *)((long)param_3 + 0xc) & 0x7fffffff;
    iVar7 = 6;
    if (uVar8 < 7) {
      iVar7 = uVar8 - 1;
    }
    if ((int)param_3[0x12] != 0) {
      iVar7 = 6;
    }
    iVar1 = iVar7 + 1;
    if ((int)uVar8 <= iVar7) {
      FUN_030b4a20(param_3,PTR_PTR_047d1a50 + 0x20,iVar1);
    }
    if (((int)param_3[1] <= iVar7) || (iVar1 < (int)param_3[1])) {
      *(int *)(param_3 + 1) = iVar1;
    }
    *(undefined1 *)(*param_3 + (long)iVar7) = 0;
    __dest = (void *)*param_3;
    __n = (long)(int)param_3[1] - 1;
    pcVar6 = "record";
    break;
  case 8:
    FUN_031c6c18(param_3,"array");
    if ((param_2 & 0xffffff00) != 0) {
      FUN_031c6e40(param_3,&DAT_03c07a7c);
    }
    return;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0xfdbd9f9,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",0x1b
                 ,"Bad type visitor switch");
  }
  memcpy(__dest,pcVar6,__n);
  return;
}


