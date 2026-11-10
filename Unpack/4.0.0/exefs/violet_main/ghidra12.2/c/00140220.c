/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00140220; name: FUN_00140220
 */


long * FUN_00140220(long param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  size_t sVar8;
  long *plVar9;
  double *extraout_x1;
  char *pcVar10;
  double dVar11;
  double dVar12;
  char *__s1;
  size_t sVar13;
  size_t sVar14;
  long lVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  
  iVar16 = 2000;
  do {
    if (param_5 == (long *)0x0) {
      plVar7 = (long *)FUN_0013df20(param_1,param_2,1);
      bVar1 = *(byte *)(plVar7 + 1);
      if ((bVar1 & 0xf) == 0) {
        pcVar10 = "index";
        FUN_00125b40(param_1,param_2);
        bVar1 = *(byte *)(extraout_x1 + 1) & 0xf;
        if (bVar1 != 4) {
          if ((bVar1 == 3) && (bVar1 = *(byte *)((long)pcVar10 + 8), (bVar1 & 0xf) == 3)) {
            if (*(byte *)(extraout_x1 + 1) != 3) {
              dVar11 = *extraout_x1;
              if (bVar1 == 0x13) {
                dVar12 = *(double *)pcVar10;
              }
              else {
                dVar12 = *(double *)pcVar10;
                if (0x40000000000000 < (long)dVar12 + 0x20000000000000U) {
                  dVar18 = (double)(long)dVar11;
                  if ((dVar18 < -9.223372036854776e+18) || (9.223372036854776e+18 <= dVar18)) {
                    return (long *)(ulong)(dVar11 < 0.0);
                  }
                  dVar11 = (double)(long)dVar18;
                  bVar2 = SBORROW8((long)dVar12,(long)dVar11);
                  bVar3 = (long)dVar12 - (long)dVar11 < 0;
                  bVar4 = dVar12 == dVar11;
                  goto LAB_00140608;
                }
                dVar12 = (double)(long)dVar12;
              }
              return (long *)(ulong)(dVar11 < dVar12);
            }
            dVar11 = *extraout_x1;
            if (bVar1 == 3) {
              dVar12 = *(double *)pcVar10;
LAB_00140614:
              return (long *)(ulong)((long)dVar11 < (long)dVar12);
            }
            dVar12 = *(double *)pcVar10;
            if ((long)dVar11 + 0x20000000000000U < 0x40000000000001) {
              dVar11 = (double)(long)dVar11;
              bVar2 = NAN(dVar12) || NAN(dVar11);
              bVar4 = dVar12 == dVar11;
              bVar3 = dVar12 < dVar11;
            }
            else {
              dVar17 = (double)(long)dVar12;
              dVar18 = dVar17 + 1.0;
              if (dVar17 == dVar12) {
                dVar18 = dVar17;
              }
              bVar2 = false;
              if ((-9.223372036854776e+18 <= dVar18) && (bVar2 = false, !NAN(dVar18))) {
                bVar2 = dVar18 < 9.223372036854776e+18;
              }
              if (bVar2) {
                dVar12 = (double)(long)dVar18;
                goto LAB_00140614;
              }
              bVar2 = NAN(dVar12);
              bVar4 = dVar12 == 0.0;
              bVar3 = dVar12 < 0.0;
            }
LAB_00140608:
            return (long *)(ulong)(!bVar4 && bVar3 == bVar2);
          }
LAB_0014049c:
          plVar7 = (long *)FUN_0013e620();
          return plVar7;
        }
        if (((ulong)*(double *)((long)pcVar10 + 8) & 0xf) != 4) goto LAB_0014049c;
        dVar12 = *extraout_x1;
        __s1 = (char *)((long)dVar12 + 0x18);
        dVar11 = *(double *)pcVar10;
        if (*(char *)((long)dVar12 + 8) == '\x04') {
          sVar13 = (size_t)*(byte *)((long)dVar12 + 0xb);
          if (*(char *)((long)dVar11 + 8) == '\x04') goto LAB_001404dc;
LAB_00140494:
          sVar14 = *(size_t *)((long)dVar11 + 0x10);
        }
        else {
          sVar13 = *(size_t *)((long)dVar12 + 0x10);
          if (*(char *)((long)dVar11 + 8) != '\x04') goto LAB_00140494;
LAB_001404dc:
          sVar14 = (size_t)*(byte *)((long)dVar11 + 0xb);
        }
        pcVar10 = (char *)((long)dVar11 + 0x18);
        uVar5 = strcoll(__s1,pcVar10);
        if (uVar5 != 0) goto LAB_001404f4;
        break;
      }
    }
    else {
      lVar15 = *param_2;
      lVar6 = *(long *)(lVar15 + 0x28);
      if (((lVar6 == 0) || ((*(byte *)(lVar6 + 10) >> 1 & 1) != 0)) ||
         (plVar7 = (long *)FUN_0013dec0(lVar6,1,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x120)),
         plVar7 == (long *)0x0)) {
        plVar7 = (long *)FUN_0013d7c0(param_1,lVar15,param_3,param_5,param_4);
        *(byte *)(lVar15 + 10) = *(byte *)(lVar15 + 10) & 0xc0;
        if ((*(byte *)(param_4 + 1) >> 6 & 1) == 0) {
          return plVar7;
        }
        if ((*(byte *)(lVar15 + 9) >> 5 & 1) == 0) {
          return plVar7;
        }
        if ((*(byte *)(*param_4 + 9) & 0x18) == 0) {
          return plVar7;
        }
        goto LAB_00140380;
      }
      bVar1 = *(byte *)(plVar7 + 1);
    }
    if ((bVar1 & 0xf) == 6) {
      plVar9 = *(long **)(param_1 + 0x10);
      *plVar9 = *plVar7;
      *(char *)(plVar9 + 1) = (char)plVar7[1];
      plVar9[2] = *param_2;
      *(char *)(plVar9 + 3) = (char)param_2[1];
      plVar9[4] = *param_3;
      *(char *)(plVar9 + 5) = (char)param_3[1];
      plVar9[6] = *param_4;
      *(char *)(plVar9 + 7) = (char)param_4[1];
      *(long **)(param_1 + 0x10) = plVar9 + 8;
      if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x3e) & 10) == 0) {
        plVar7 = (long *)FUN_00127d10(param_1,plVar9,0);
        return plVar7;
      }
      plVar7 = (long *)FUN_00127da0(param_1,plVar9,0);
      return plVar7;
    }
    if (bVar1 == 0x45) {
      param_5 = (long *)FUN_0013d560(*plVar7,param_3);
      if ((*(byte *)(param_5 + 1) & 0xf) != 0) {
        *param_5 = *param_4;
        *(char *)(param_5 + 1) = (char)param_4[1];
        if ((((*(byte *)(param_4 + 1) >> 6 & 1) == 0) ||
            (lVar15 = *plVar7, (*(byte *)(lVar15 + 9) >> 5 & 1) == 0)) ||
           ((*(byte *)(*param_4 + 9) & 0x18) == 0)) {
          return param_5;
        }
LAB_00140380:
        plVar7 = (long *)FUN_00129f00(param_1,lVar15);
        return plVar7;
      }
    }
    else {
      param_5 = (long *)0x0;
    }
    iVar16 = iVar16 + -1;
    param_2 = plVar7;
    if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00125b90(param_1,"\'__newindex\' chain too long; possible loop");
    }
  } while( true );
  while( true ) {
    lVar6 = sVar8 + 1;
    __s1 = __s1 + lVar6;
    pcVar10 = pcVar10 + lVar6;
    sVar13 = sVar13 - lVar6;
    sVar14 = sVar14 - lVar6;
    uVar5 = strcoll(__s1,pcVar10);
    if (uVar5 != 0) break;
    sVar8 = strlen(__s1);
    if (sVar8 == sVar14) {
      return (long *)0x0;
    }
    uVar5 = 0xffffffff;
    if (sVar8 == sVar13) break;
  }
LAB_001404f4:
  return (long *)(ulong)(uVar5 >> 0x1f);
}


