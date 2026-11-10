/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031c79a0; name: FUN_031c79a0
 */


long * FUN_031c79a0(long *param_1,char *param_2,long param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  uint uVar4;
  char cVar5;
  long lVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  size_t sVar10;
  long lVar11;
  char *pcVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  long alStack_78 [3];
  
  if (*(char *)*param_1 == '\0') {
    FUN_031c6afc(param_1,param_2,0xffffffff);
    if (param_3 != 0) {
      FUN_031c79a0(param_1,param_3,param_4,0);
    }
  }
  else {
    alStack_78[0] = param_3;
    alStack_78[1] = param_4;
    alStack_78[2] = 0;
    lVar14 = param_1[1];
    iVar13 = (int)lVar14 + -1;
    *(int *)(param_1 + 1) = iVar13;
    puVar7 = PTR_PTR_047d1a50;
    if (iVar13 == 0) {
      bVar8 = false;
    }
    else {
      bVar8 = ((char *)*param_1)[(long)(int)lVar14 + -2] != '/';
    }
    if (param_2 != (char *)0x0) {
      puVar3 = PTR_PTR_047d1a50 + 0x20;
      lVar14 = 0;
      do {
        cVar5 = *param_2;
        if (cVar5 != '\0') {
          while (cVar5 == '/') {
            param_2 = param_2 + 1;
            cVar5 = *param_2;
          }
          sVar10 = strlen(param_2);
          iVar9 = (int)sVar10;
          if (iVar9 != 0) {
            uVar15 = iVar9 + 1;
            lVar11 = (long)iVar9;
            do {
              if (lVar11 == 0) {
                uVar15 = 0;
                goto LAB_031c7adc;
              }
              lVar6 = lVar11 + -1;
              uVar15 = uVar15 - 1;
              lVar11 = lVar11 + -1;
            } while (param_2[lVar6] == '/');
            if (bVar8) {
              iVar9 = iVar13 + 1;
              if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar13) {
                FUN_031bca38(param_1,puVar7 + 0x20,(long)iVar9);
                iVar13 = (int)param_1[1];
              }
              *(undefined1 *)(*param_1 + (long)iVar13) = 0x2f;
              *(int *)(param_1 + 1) = iVar9;
            }
            else {
LAB_031c7adc:
              iVar9 = iVar13;
            }
            iVar13 = iVar9 + uVar15;
            if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) < iVar13) {
              FUN_030b4a20(param_1,puVar3,(long)iVar13);
            }
            if (0 < (int)uVar15) {
              pcVar2 = (char *)(*param_1 + (long)iVar9);
              uVar4 = uVar15 & 7;
              if (6 < uVar15 - 1) {
                iVar9 = -(uVar15 & 0xfffffff8);
                pcVar12 = pcVar2;
                do {
                  *pcVar12 = *param_2;
                  pcVar12[1] = param_2[1];
                  pcVar12[2] = param_2[2];
                  pcVar12[3] = param_2[3];
                  pcVar12[4] = param_2[4];
                  pcVar12[5] = param_2[5];
                  pcVar12[6] = param_2[6];
                  pcVar1 = param_2 + 7;
                  pcVar2 = pcVar12 + 8;
                  param_2 = param_2 + 8;
                  iVar9 = iVar9 + 8;
                  pcVar12[7] = *pcVar1;
                  pcVar12 = pcVar2;
                } while (iVar9 != 0);
              }
              for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                *pcVar2 = *param_2;
                pcVar2 = pcVar2 + 1;
                param_2 = param_2 + 1;
              }
            }
            *(int *)(param_1 + 1) = iVar13;
          }
          bVar8 = true;
        }
        param_2 = (char *)alStack_78[lVar14];
        lVar14 = lVar14 + 1;
      } while (param_2 != (char *)0x0);
    }
    iVar9 = iVar13 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= iVar13) {
      FUN_031bca38(param_1,puVar7 + 0x20,(long)iVar9);
      iVar13 = (int)param_1[1];
    }
    *(undefined1 *)(*param_1 + (long)iVar13) = 0;
    *(int *)(param_1 + 1) = iVar9;
  }
  return param_1;
}


