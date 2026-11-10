/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c71e0; name: FUN_031c71e0
 */


long * FUN_031c71e0(long *param_1,char *param_2,long param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  size_t sVar5;
  char *__s;
  void *pvVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [64];
  
  local_b0 = local_a0;
  local_a8 = -0x7ffffff000000000;
  iVar10 = (int)((ulong)(param_4 - param_3) >> 3);
  uVar7 = (ulong)(param_4 - param_3) >> 3 & 0xffffffff;
  if (iVar10 < 0x11) {
    local_a8._0_4_ = 0;
  }
  else {
    FUN_02e9b320(&local_b0,PTR_PTR_047d1a50 + 0x20,uVar7);
  }
  if ((int)local_a8 != iVar10) {
    local_a8 = CONCAT44(local_a8._4_4_,iVar10);
  }
  if (param_2 == (char *)0x0) {
    iVar4 = 0;
  }
  else {
    sVar5 = strlen(param_2);
    iVar4 = (int)sVar5;
  }
  iVar9 = (int)param_1[1] + -1;
  iVar11 = iVar9;
  if (0 < iVar10) {
    uVar12 = 0;
    do {
      __s = *(char **)(param_3 + uVar12 * 8);
      if (__s == (char *)0x0) {
        *(undefined4 *)(local_b0 + uVar12 * 4) = 0;
      }
      else {
        sVar5 = strlen(__s);
        *(int *)(local_b0 + uVar12 * 4) = (int)sVar5;
        iVar11 = *(int *)(local_b0 + uVar12 * 4) + iVar11;
      }
      uVar12 = uVar12 + 1;
    } while (uVar7 != uVar12);
  }
  iVar11 = iVar11 + iVar4 * (iVar10 + -1);
  uVar1 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  iVar2 = uVar1 - 1;
  iVar8 = iVar11;
  if (iVar2 <= iVar11) {
    iVar8 = iVar2;
  }
  if ((int)param_1[0x12] != 0) {
    iVar8 = iVar11;
  }
  iVar11 = iVar8 + 1;
  if ((int)uVar1 <= iVar8) {
    FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,(long)iVar11);
  }
  if ((int)param_1[1] <= iVar8 || iVar11 < (int)param_1[1]) {
    *(int *)(param_1 + 1) = iVar11;
  }
  *(undefined1 *)(*param_1 + (long)iVar8) = 0;
  if (0 < iVar10) {
    iVar11 = (int)param_1[1] + -1;
    uVar12 = 0;
    if (param_2 == (char *)0x0) {
      do {
        pvVar6 = *(void **)(param_3 + uVar12 * 8);
        if (pvVar6 != (void *)0x0) {
          iVar10 = *(int *)(local_b0 + uVar12 * 4) + iVar9;
          iVar4 = iVar10;
          if (iVar11 <= iVar10) {
            iVar4 = iVar11;
          }
          memcpy((void *)(*param_1 + (long)iVar9),pvVar6,(long)(iVar4 - iVar9));
          iVar9 = iVar10;
          if (iVar11 <= iVar10) break;
        }
        uVar12 = uVar12 + 1;
      } while (uVar7 != uVar12);
    }
    else {
      uVar12 = 0;
      do {
        pvVar6 = *(void **)(param_3 + uVar12 * 8);
        iVar8 = iVar9;
        if (pvVar6 != (void *)0x0) {
          iVar8 = *(int *)(local_b0 + uVar12 * 4) + iVar9;
          iVar2 = iVar8;
          if (iVar11 <= iVar8) {
            iVar2 = iVar11;
          }
          memcpy((void *)(*param_1 + (long)iVar9),pvVar6,(long)(iVar2 - iVar9));
          if (iVar11 <= iVar8) break;
        }
        iVar9 = iVar8;
        if ((long)uVar12 < (long)(iVar10 + -1)) {
          iVar9 = iVar8 + iVar4;
          iVar2 = iVar9;
          if (iVar11 <= iVar9) {
            iVar2 = iVar11;
          }
          memcpy((void *)(*param_1 + (long)iVar8),param_2,(long)(iVar2 - iVar8));
          if (iVar11 <= iVar9) break;
        }
        uVar12 = uVar12 + 1;
      } while (uVar7 != uVar12);
    }
  }
  lVar3 = local_a8;
  uVar7 = (ulong)local_a8._4_4_;
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  if ((-1 < lVar3) && (local_b0 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_b0,uVar7 << 2);
  }
  return param_1;
}


