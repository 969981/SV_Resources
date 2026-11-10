/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00511920; name: FUN_00511920
 */


void FUN_00511920(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  char cVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  
LAB_00511954:
  plVar16 = param_2 + -1;
  plVar8 = param_2 + -2;
LAB_0051195c:
  lVar10 = (long)param_2 - (long)param_1;
  uVar5 = lVar10 >> 3;
  switch(uVar5) {
  case 0:
  case 1:
    return;
  case 2:
    lVar10 = param_2[-1];
    lVar14 = *param_1;
    if (*(char *)(lVar10 + 0x43) == '\0') {
      if (*(char *)(lVar14 + 0x43) != '\0') goto LAB_00512198;
      iVar3 = (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x50) + 0x28)) >> 3) * 0x286bca1b;
      iVar13 = (int)((ulong)(lVar14 - *(long *)(*(long *)(lVar14 + 0x50) + 0x28)) >> 3) * 0x286bca1b
      ;
    }
    else {
      if (*(char *)(lVar14 + 0x43) == '\0') {
        return;
      }
      iVar3 = *(int *)(lVar10 + 0x44);
      iVar13 = *(int *)(lVar14 + 0x44);
    }
    if (iVar13 <= iVar3) {
      return;
    }
LAB_00512198:
    *param_1 = lVar10;
    param_2[-1] = lVar14;
    return;
  case 3:
    FUN_005121c0(param_1,param_1 + 1,plVar16);
    return;
  case 4:
    FUN_005123e0(param_1,param_1 + 1,param_1 + 2,plVar16);
    return;
  case 5:
    FUN_00512580(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar16);
    return;
  }
  if (0xf7 < lVar10) {
    uVar4 = uVar5;
    if ((long)uVar5 < 0) {
      uVar4 = uVar5 + 1;
    }
    plVar7 = (long *)((long)param_1 + (uVar4 & 0x3ffffffffffffffe) * 4);
    if (lVar10 < 0x1f39) {
      iVar3 = FUN_005121c0(param_1,plVar7,plVar16);
    }
    else {
      uVar4 = uVar5 + 3;
      if (-1 < (long)uVar5) {
        uVar4 = uVar5;
      }
      lVar10 = (uVar4 & 0x7ffffffffffffffc) * 2;
      iVar3 = FUN_00512580(param_1,(long)param_1 + lVar10,plVar7,(long)plVar7 + lVar10,plVar16);
    }
    lVar10 = *param_1;
    lVar14 = *plVar7;
    cVar11 = *(char *)(lVar10 + 0x43);
    cVar1 = *(char *)(lVar14 + 0x43);
    plVar6 = plVar8;
    if (cVar11 != '\0') {
      if (cVar1 == '\0') goto LAB_00511a5c;
      if (*(int *)(lVar10 + 0x44) < *(int *)(lVar14 + 0x44)) goto LAB_00511a48;
      if (param_1 != plVar8) goto LAB_00511a70;
      lVar14 = *plVar16;
      cVar1 = *(char *)(lVar14 + 0x43);
joined_r0x00511aa8:
      if ((cVar1 != '\0') &&
         (plVar7 = param_1 + 1, *(int *)(lVar10 + 0x44) < *(int *)(lVar14 + 0x44)))
      goto LAB_00511d8c;
      plVar7 = param_1 + 1;
      if (plVar7 == plVar16) {
        return;
      }
      if (cVar11 == '\0') goto LAB_00511ed0;
      while ((*(char *)(*plVar7 + 0x43) == '\0' ||
             (*(int *)(*plVar7 + 0x44) <= *(int *)(lVar10 + 0x44)))) {
        plVar7 = plVar7 + 1;
        if (plVar16 == plVar7) {
          return;
        }
      }
LAB_00511af4:
      lVar10 = *plVar7;
      *plVar7 = lVar14;
      *plVar16 = lVar10;
      plVar7 = plVar7 + 1;
LAB_00511d8c:
      if (plVar7 == plVar16) {
        return;
      }
      lVar10 = *param_1;
      cVar11 = *(char *)(lVar10 + 0x43);
      plVar6 = plVar16;
      if (cVar11 != '\0') goto LAB_00511dac;
LAB_00511dcc:
      lVar14 = *plVar7;
      if (*(char *)(lVar14 + 0x43) == '\0') {
        do {
          if ((int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x50) + 0x28)) >> 3) * 0x286bca1b
              < (int)((ulong)(lVar14 - *(long *)(*(long *)(lVar14 + 0x50) + 0x28)) >> 3) *
                0x286bca1b) break;
          plVar7 = plVar7 + 1;
          lVar14 = *plVar7;
        } while (*(char *)(lVar14 + 0x43) == '\0');
      }
      do {
        if (cVar11 == '\0') {
          do {
            do {
              plVar6 = plVar6 + -1;
              lVar14 = *plVar6;
            } while (*(char *)(lVar14 + 0x43) != '\0');
          } while ((int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x50) + 0x28)) >> 3) *
                   0x286bca1b <
                   (int)((ulong)(lVar14 - *(long *)(*(long *)(lVar14 + 0x50) + 0x28)) >> 3) *
                   0x286bca1b);
        }
        else {
          do {
            plVar6 = plVar6 + -1;
            if (*(char *)(*plVar6 + 0x43) == '\0') break;
          } while (*(int *)(lVar10 + 0x44) < *(int *)(*plVar6 + 0x44));
        }
        if (plVar6 <= plVar7) {
          uVar9 = 4;
          goto LAB_00511eb0;
        }
        lVar10 = *plVar7;
        plVar19 = plVar7 + 1;
        *plVar7 = *plVar6;
        *plVar6 = lVar10;
        lVar10 = *param_1;
        cVar11 = *(char *)(lVar10 + 0x43);
        plVar7 = plVar19;
        if (cVar11 == '\0') goto LAB_00511dcc;
LAB_00511dac:
        for (; (*(char *)(*plVar7 + 0x43) == '\0' ||
               (*(int *)(*plVar7 + 0x44) <= *(int *)(lVar10 + 0x44))); plVar7 = plVar7 + 1) {
        }
      } while( true );
    }
    if ((cVar1 == '\0') &&
       ((int)((ulong)(lVar14 - *(long *)(*(long *)(lVar14 + 0x50) + 0x28)) >> 3) * 0x286bca1b <=
        (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x50) + 0x28)) >> 3) * 0x286bca1b)) {
LAB_00511a5c:
      if (param_1 != plVar8) {
        if (cVar1 == '\0') {
          do {
            lVar12 = *plVar6;
            if ((*(char *)(lVar12 + 0x43) == '\0') &&
               ((int)((ulong)(lVar12 - *(long *)(*(long *)(lVar12 + 0x50) + 0x28)) >> 3) *
                0x286bca1b <
                (int)((ulong)(lVar14 - *(long *)(*(long *)(lVar14 + 0x50) + 0x28)) >> 3) *
                0x286bca1b)) goto LAB_00511b4c;
            plVar6 = plVar6 + -1;
          } while (param_1 != plVar6);
        }
        else {
LAB_00511a70:
          do {
            if ((*(char *)(*plVar6 + 0x43) == '\0') ||
               (*(int *)(*plVar6 + 0x44) < *(int *)(lVar14 + 0x44))) goto LAB_00511b4c;
            plVar6 = plVar6 + -1;
          } while (param_1 != plVar6);
        }
      }
      lVar14 = *plVar16;
      plVar7 = param_1 + 1;
      cVar1 = *(char *)(lVar14 + 0x43);
      if (cVar11 != '\0') goto joined_r0x00511aa8;
      if ((cVar1 != '\0') ||
         ((int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x50) + 0x28)) >> 3) * 0x286bca1b <
          (int)((ulong)(lVar14 - *(long *)(*(long *)(lVar14 + 0x50) + 0x28)) >> 3) * 0x286bca1b))
      goto LAB_00511d8c;
      if (plVar7 == plVar16) {
        return;
      }
LAB_00511ed0:
      while ((lVar12 = *plVar7, *(char *)(lVar12 + 0x43) == '\0' &&
             ((int)((ulong)(lVar12 - *(long *)(*(long *)(lVar12 + 0x50) + 0x28)) >> 3) * 0x286bca1b
              <= (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x50) + 0x28)) >> 3) *
                 0x286bca1b))) {
        plVar7 = plVar7 + 1;
        if (plVar16 == plVar7) {
          return;
        }
      }
      goto LAB_00511af4;
    }
LAB_00511a48:
    plVar19 = param_1 + 1;
    plVar6 = plVar16;
    if (plVar19 < plVar16) goto LAB_00511b68;
    goto LAB_00511c80;
  }
  plVar16 = param_1 + 2;
  FUN_005121c0(param_1,param_1 + 1,plVar16);
  plVar8 = param_1 + 3;
  if (plVar8 == param_2) {
    return;
  }
  lVar10 = 0;
  goto LAB_00511fc0;
LAB_00511b4c:
  iVar3 = iVar3 + 1;
  *param_1 = *plVar6;
  *plVar6 = lVar10;
  plVar19 = param_1 + 1;
  if (plVar19 < plVar6) {
LAB_00511b68:
    plVar18 = param_1 + 1;
    lVar10 = *plVar7;
    cVar11 = *(char *)(lVar10 + 0x43);
    if (cVar11 != '\0') goto LAB_00511bc4;
    do {
      lVar14 = *plVar18;
      plVar17 = plVar7;
      plVar19 = plVar18;
      if (*(char *)(lVar14 + 0x43) == '\0') {
        do {
          plVar19 = plVar18;
          if ((int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x50) + 0x28)) >> 3) * 0x286bca1b
              <= (int)((ulong)(lVar14 - *(long *)(*(long *)(lVar14 + 0x50) + 0x28)) >> 3) *
                 0x286bca1b) break;
          plVar18 = plVar18 + 1;
          lVar14 = *plVar18;
          plVar19 = plVar18;
        } while (*(char *)(lVar14 + 0x43) == '\0');
      }
LAB_00511be0:
      if (cVar11 == '\0') {
        do {
          do {
            plVar6 = plVar6 + -1;
            lVar14 = *plVar6;
          } while (*(char *)(lVar14 + 0x43) != '\0');
        } while ((int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x50) + 0x28)) >> 3) *
                 0x286bca1b <=
                 (int)((ulong)(lVar14 - *(long *)(*(long *)(lVar14 + 0x50) + 0x28)) >> 3) *
                 0x286bca1b);
      }
      else {
        do {
          plVar6 = plVar6 + -1;
          if (*(char *)(*plVar6 + 0x43) == '\0') break;
        } while (*(int *)(lVar10 + 0x44) <= *(int *)(*plVar6 + 0x44));
      }
      plVar7 = plVar17;
      if (plVar6 < plVar19) break;
      lVar10 = *plVar19;
      iVar3 = iVar3 + 1;
      plVar7 = plVar6;
      if (plVar17 != plVar19) {
        plVar7 = plVar17;
      }
      plVar18 = plVar19 + 1;
      *plVar19 = *plVar6;
      *plVar6 = lVar10;
      lVar10 = *plVar7;
      cVar11 = *(char *)(lVar10 + 0x43);
      if (cVar11 != '\0') {
LAB_00511bc4:
        do {
          if (*(char *)(*plVar18 + 0x43) != '\0') {
            plVar17 = plVar7;
            plVar19 = plVar18;
            if (*(int *)(lVar10 + 0x44) <= *(int *)(*plVar18 + 0x44)) goto LAB_00511be0;
          }
          plVar18 = plVar18 + 1;
        } while( true );
      }
    } while( true );
  }
LAB_00511c80:
  if (plVar19 == plVar7) {
LAB_00511cfc:
    if (iVar3 != 0) goto LAB_00511d34;
  }
  else {
    lVar14 = *plVar7;
    lVar10 = *plVar19;
    if (*(char *)(lVar14 + 0x43) == '\0') {
      if ((*(char *)(lVar10 + 0x43) == '\0') &&
         ((int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x50) + 0x28)) >> 3) * 0x286bca1b <=
          (int)((ulong)(lVar14 - *(long *)(*(long *)(lVar14 + 0x50) + 0x28)) >> 3) * 0x286bca1b))
      goto LAB_00511cfc;
    }
    else if ((*(char *)(lVar10 + 0x43) == '\0') ||
            (*(int *)(lVar10 + 0x44) <= *(int *)(lVar14 + 0x44))) goto LAB_00511cfc;
    *plVar19 = lVar14;
    *plVar7 = lVar10;
    if (iVar3 != -1) goto LAB_00511d34;
  }
  uVar5 = FUN_005127a0(param_1,plVar19);
  plVar7 = plVar19 + 1;
  uVar4 = FUN_005127a0(plVar7,param_2);
  if ((uVar4 & 1) != 0) {
    param_2 = plVar19;
    if ((uVar5 & 1) != 0) {
      return;
    }
    goto LAB_00511954;
  }
  if ((uVar5 & 1) != 0) {
    uVar9 = 2;
LAB_00511eb0:
    if (4 < uVar9) {
      return;
    }
    param_1 = plVar7;
    if ((1 << (ulong)uVar9 & 0x15U) == 0) {
      return;
    }
    goto LAB_0051195c;
  }
LAB_00511d34:
  if ((long)plVar19 - (long)param_1 < (long)param_2 - (long)plVar19) {
    FUN_00511920(param_1,plVar19);
    param_1 = plVar19 + 1;
    goto LAB_0051195c;
  }
  FUN_00511920(plVar19 + 1,param_2);
  param_2 = plVar19;
  goto LAB_00511954;
LAB_00511fc0:
  lVar14 = *plVar8;
  lVar12 = *plVar16;
  plVar7 = plVar16;
  if (*(char *)(lVar14 + 0x43) == '\0') {
    if ((*(char *)(lVar12 + 0x43) != '\0') ||
       ((int)((ulong)(lVar14 - *(long *)(*(long *)(lVar14 + 0x50) + 0x28)) >> 3) * 0x286bca1b <
        (int)((ulong)(lVar12 - *(long *)(*(long *)(lVar12 + 0x50) + 0x28)) >> 3) * 0x286bca1b)) {
      *plVar8 = lVar12;
      if (plVar16 != param_1) {
        lVar12 = 0;
        do {
          lVar15 = *(long *)((long)(param_1 + 1) + lVar12 + lVar10);
          if ((*(char *)(lVar15 + 0x43) == '\0') &&
             ((int)((ulong)(lVar15 - *(long *)(*(long *)(lVar15 + 0x50) + 0x28)) >> 3) * 0x286bca1b
              <= (int)((ulong)(lVar14 - *(long *)(*(long *)(lVar14 + 0x50) + 0x28)) >> 3) *
                 0x286bca1b)) {
            plVar7 = (long *)((long)plVar16 + lVar12);
            goto LAB_00511fa8;
          }
          *(long *)((long)plVar16 + lVar12) = lVar15;
          lVar12 = lVar12 + -8;
        } while (lVar10 + lVar12 != -0x10);
        goto LAB_0051202c;
      }
      goto LAB_00511fa8;
    }
  }
  else if ((*(char *)(lVar12 + 0x43) != '\0') &&
          (iVar3 = *(int *)(lVar14 + 0x44), iVar3 < *(int *)(lVar12 + 0x44))) {
    *plVar8 = lVar12;
    if (plVar16 != param_1) {
      lVar12 = lVar10;
      do {
        lVar15 = *(long *)((long)param_1 + lVar12 + 8);
        if (*(char *)(lVar15 + 0x43) == '\0') {
          plVar7 = (long *)((long)param_1 + lVar12 + 0x10);
          goto LAB_00511fa8;
        }
        if (*(int *)(lVar15 + 0x44) <= iVar3) goto LAB_00511fa8;
        plVar7 = plVar7 + -1;
        *(long *)((long)param_1 + lVar12 + 0x10) = lVar15;
        bVar2 = lVar12 != -8;
        lVar12 = lVar12 + -8;
      } while (bVar2);
LAB_0051202c:
      plVar7 = param_1;
    }
LAB_00511fa8:
    *plVar7 = lVar14;
  }
  plVar8 = plVar8 + 1;
  lVar10 = lVar10 + 8;
  plVar16 = plVar16 + 1;
  if (plVar8 == param_2) {
    return;
  }
  goto LAB_00511fc0;
}


