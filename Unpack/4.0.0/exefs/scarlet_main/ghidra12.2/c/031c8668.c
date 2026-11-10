/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031c8668; name: FUN_031c8668
 */


long * FUN_031c8668(long *param_1,int param_2,uint param_3,long param_4,uint param_5)

{
  void *__dest;
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  size_t __n;
  int iVar15;
  ulong uVar16;
  
  if (param_4 == 0) {
    if ((int)param_3 < 1) {
      return param_1;
    }
    iVar15 = 0;
  }
  else {
    uVar16 = 0;
    uVar6 = param_5;
    if ((int)param_5 < 0) {
      uVar6 = 0x7fffffff;
    }
    if ((0 < (int)param_3) && (0 < (int)uVar6)) {
      lVar7 = (long)param_2;
      if (param_3 - 1 <= uVar6 - 1) {
        uVar6 = param_3;
      }
      uVar16 = (ulong)uVar6;
      if ((int)param_5 < 1) {
        uVar11 = 0;
        do {
          if (*(char *)(param_4 + uVar11) == '\0') {
            uVar16 = uVar11 & 0xffffffff;
            break;
          }
          *(char *)(*param_1 + lVar7 + uVar11) = *(char *)(param_4 + uVar11);
          uVar11 = uVar11 + 1;
        } while (uVar16 != uVar11);
      }
      else {
        if (uVar6 == 1) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          do {
            puVar10 = (undefined1 *)(param_4 + uVar11);
            *(undefined1 *)(*param_1 + lVar7 + uVar11) = *puVar10;
            lVar8 = *param_1 + lVar7 + uVar11;
            uVar11 = uVar11 + 2;
            *(undefined1 *)(lVar8 + 1) = puVar10[1];
          } while ((uVar16 & 0xfffffffe) != uVar11);
        }
        if ((uVar6 & 1) != 0) {
          *(undefined1 *)(*param_1 + uVar11 + lVar7) = *(undefined1 *)(param_4 + uVar11);
        }
      }
    }
    iVar15 = (int)uVar16;
    if ((int)param_3 <= iVar15) {
      if ((int)param_5 < 0) {
        param_5 = iVar15 - 1;
        pcVar9 = (char *)(param_4 + uVar16);
        do {
          cVar3 = *pcVar9;
          param_5 = param_5 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar3 != '\0');
      }
      __n = (long)(int)param_5 - (long)iVar15;
      iVar14 = (int)__n;
      if (iVar14 == 0) {
        return param_1;
      }
      lVar7 = (long)iVar15 + (long)param_2;
      iVar2 = (int)param_1[1];
      iVar4 = iVar2 + iVar14;
      iVar5 = iVar2 - (int)lVar7;
      if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < iVar4) {
        FUN_030b4a20(param_1,PTR_PTR_047d1a50 + 0x20,(long)iVar4);
      }
      lVar8 = *param_1;
      __dest = (void *)(lVar8 + lVar7);
      if (iVar14 < 0) {
        if (iVar5 != 0) {
          uVar11 = (long)iVar5 & 3;
          if ((ulong)((long)iVar2 + (long)~(iVar15 + param_2)) < 3) {
            uVar12 = 0;
          }
          else {
            uVar12 = 0;
            do {
              puVar10 = (undefined1 *)((long)__dest + uVar12);
              puVar1 = (undefined1 *)((long)__dest + __n + uVar12);
              uVar12 = uVar12 + 4;
              *puVar1 = *puVar10;
              puVar1[1] = puVar10[1];
              puVar1[2] = puVar10[2];
              puVar1[3] = puVar10[3];
            } while (((long)iVar5 & 0xfffffffffffffffcU) != uVar12);
          }
          if (uVar11 != 0) {
            puVar10 = (undefined1 *)(lVar8 + uVar12 + lVar7);
            do {
              puVar10[__n] = *puVar10;
              uVar11 = uVar11 - 1;
              puVar10 = puVar10 + 1;
            } while (uVar11 != 0);
          }
        }
      }
      else if (iVar5 != 0) {
        FUN_031d0240((long)__dest + __n,__dest,(long)iVar5);
      }
      *(int *)(param_1 + 1) = iVar4;
      memcpy(__dest,(void *)(param_4 + uVar16),__n);
      return param_1;
    }
  }
  lVar7 = param_1[1];
  iVar14 = param_3 - iVar15;
  iVar4 = (int)lVar7 - iVar14;
  lVar8 = *param_1;
  *(int *)(param_1 + 1) = iVar4;
  if (iVar14 != 0) {
    uVar6 = iVar15 + param_2;
    iVar4 = iVar4 - uVar6;
    if (iVar4 != 0) {
      lVar13 = (long)(int)uVar6;
      uVar16 = (long)iVar4 & 3;
      if ((ulong)((long)(int)~uVar6 + (long)(int)((iVar15 + (int)lVar7) - param_3)) < 3) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        do {
          puVar10 = (undefined1 *)(((lVar13 + (int)param_3) - (long)iVar15) + lVar8 + 3 + uVar11);
          puVar1 = (undefined1 *)(lVar13 + lVar8 + 1 + uVar11);
          uVar11 = uVar11 + 4;
          puVar1[-1] = puVar10[-3];
          *puVar1 = puVar10[-2];
          puVar1[1] = puVar10[-1];
          puVar1[2] = *puVar10;
        } while (((long)iVar4 & 0xfffffffffffffffcU) != uVar11);
      }
      if (uVar16 != 0) {
        puVar10 = (undefined1 *)(lVar8 + uVar11 + lVar13);
        do {
          uVar16 = uVar16 - 1;
          *puVar10 = puVar10[iVar14];
          puVar10 = puVar10 + 1;
        } while (uVar16 != 0);
      }
    }
  }
  return param_1;
}


