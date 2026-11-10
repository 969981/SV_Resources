/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bdcc68; name: FUN_00bdcc68
 */


undefined8 FUN_00bdcc68(long param_1,ulong *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  char *pcVar13;
  int *piVar14;
  long *plVar15;
  int iVar16;
  byte *pbVar17;
  int iVar18;
  int iVar19;
  undefined8 *puVar20;
  long lVar21;
  
  piVar1 = (int *)(param_1 + 0x30);
  piVar2 = (int *)(param_1 + 0x18);
LAB_00bdccb8:
  pbVar12 = (byte *)*param_2;
  if ((byte *)param_2[1] <= pbVar12) {
    uVar8 = 0;
LAB_00bdccf0:
    iVar6 = FUN_00c096d0(param_2,uVar8);
    bVar5 = iVar6 - 1U < 0x7f;
    *(int *)(param_2 + 4) = iVar6;
    uVar8 = (ulong)CONCAT14(bVar5,iVar6);
    if (bVar5) goto LAB_00bdcd44;
    goto switchD_00bdcd60_caseD_5;
  }
  bVar4 = *pbVar12;
  uVar8 = (ulong)(uint)bVar4;
  if ((char)bVar4 < '\x01') goto LAB_00bdccf0;
  *(uint *)(param_2 + 4) = (uint)bVar4;
  *param_2 = (ulong)(pbVar12 + 1);
LAB_00bdcd44:
  iVar6 = (int)uVar8;
  switch((uint)(uVar8 >> 3) & 0x1fffffff) {
  case 1:
    if (iVar6 == 8) {
      uVar8 = FUN_00bdd41c(10,param_2,piVar2);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      pbVar12 = (byte *)param_2[1];
    }
    else {
      if (iVar6 != 10) goto switchD_00bdcd60_caseD_5;
      pbVar11 = (byte *)*param_2;
      pbVar17 = (byte *)param_2[1];
      if ((pbVar11 < pbVar17) && (-1 < (char)*pbVar11)) {
        uVar7 = (uint)*pbVar11;
        pbVar11 = pbVar11 + 1;
        *param_2 = (ulong)pbVar11;
      }
      else {
        uVar7 = FUN_00c0954c(param_2);
        if ((int)uVar7 < 0) {
          return 0;
        }
        pbVar11 = (byte *)*param_2;
        pbVar17 = (byte *)param_2[1];
      }
      iVar9 = (int)param_2[3];
      iVar3 = (int)param_2[5];
      pbVar12 = pbVar17 + *(int *)((long)param_2 + 0x2c);
      param_2[1] = (ulong)pbVar12;
      iVar19 = (int)param_2[6];
      iVar6 = (iVar9 - *(int *)((long)param_2 + 0x2c)) + ((int)pbVar11 - (int)pbVar17);
      iVar16 = 0x7fffffff;
      if ((int)uVar7 <= 0x7fffffff - iVar6) {
        iVar16 = iVar6 + uVar7;
      }
      iVar6 = iVar3;
      if (iVar16 <= iVar3) {
        iVar6 = iVar16;
      }
      iVar16 = iVar19;
      if (iVar6 <= iVar19) {
        iVar16 = iVar6;
      }
      iVar18 = iVar9 - iVar16;
      *(int *)(param_2 + 5) = iVar6;
      if (iVar18 == 0 || iVar9 < iVar16) {
        iVar18 = 0;
        *(undefined4 *)((long)param_2 + 0x2c) = 0;
      }
      else {
        pbVar12 = pbVar12 + -(long)iVar18;
        *(int *)((long)param_2 + 0x2c) = iVar18;
        param_2[1] = (ulong)pbVar12;
      }
      if ((iVar6 != 0x7fffffff) && (0 < (iVar6 - iVar9) + iVar18 + ((int)pbVar12 - (int)pbVar11))) {
        do {
          if (pbVar11 < pbVar12) {
            uVar8 = (ulong)*pbVar11;
            if ((char)*pbVar11 < '\0') goto LAB_00bdcec8;
            *param_2 = (ulong)(pbVar11 + 1);
          }
          else {
            uVar8 = 0;
LAB_00bdcec8:
            uVar8 = FUN_00c0944c(param_2,uVar8);
            if ((long)uVar8 < 0) {
              return 0;
            }
          }
          iVar6 = *(int *)(param_1 + 0x18);
          if (iVar6 == *(int *)(param_1 + 0x1c)) {
            FUN_00ba867c(piVar2,iVar6 + 1);
            iVar6 = *piVar2;
          }
          *(int *)(param_1 + 0x18) = iVar6 + 1;
          *(int *)(*(long *)(param_1 + 0x20) + (long)iVar6 * 4 + 8) = (int)uVar8;
          if ((int)param_2[5] == 0x7fffffff) {
            iVar18 = *(int *)((long)param_2 + 0x2c);
            pbVar12 = (byte *)param_2[1];
            iVar9 = (int)param_2[3];
            break;
          }
          iVar9 = (int)param_2[3];
          iVar18 = *(int *)((long)param_2 + 0x2c);
          pbVar11 = (byte *)*param_2;
          pbVar12 = (byte *)param_2[1];
        } while (0 < ((int)param_2[5] - iVar9) + iVar18 + ((int)pbVar12 - (int)pbVar11));
        iVar19 = (int)param_2[6];
      }
      pbVar12 = pbVar12 + iVar18;
      if (iVar3 <= iVar19) {
        iVar19 = iVar3;
      }
      iVar6 = iVar9 - iVar19;
      *(int *)(param_2 + 5) = iVar3;
      param_2[1] = (ulong)pbVar12;
      if (iVar6 == 0 || iVar9 < iVar19) {
        *(undefined4 *)((long)param_2 + 0x2c) = 0;
      }
      else {
        pbVar12 = pbVar12 + -(long)iVar6;
        *(int *)((long)param_2 + 0x2c) = iVar6;
        param_2[1] = (ulong)pbVar12;
      }
      *(undefined1 *)((long)param_2 + 0x24) = 0;
    }
    pbVar11 = (byte *)*param_2;
    if ((pbVar12 <= pbVar11) || (*pbVar11 != 0x12)) goto LAB_00bdccb8;
    pbVar11 = pbVar11 + 1;
    *param_2 = (ulong)pbVar11;
LAB_00bdcfa4:
    if ((pbVar11 < pbVar12) && (-1 < (char)*pbVar11)) {
      uVar7 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
      *param_2 = (ulong)pbVar11;
    }
    else {
      uVar7 = FUN_00c0954c(param_2);
      if ((int)uVar7 < 0) {
        return 0;
      }
      pbVar11 = (byte *)*param_2;
      pbVar12 = (byte *)param_2[1];
    }
    iVar9 = (int)param_2[3];
    iVar3 = (int)param_2[5];
    pbVar17 = pbVar12 + *(int *)((long)param_2 + 0x2c);
    param_2[1] = (ulong)pbVar17;
    iVar19 = (int)param_2[6];
    iVar6 = (iVar9 - *(int *)((long)param_2 + 0x2c)) + ((int)pbVar11 - (int)pbVar12);
    iVar16 = 0x7fffffff;
    if ((int)uVar7 <= 0x7fffffff - iVar6) {
      iVar16 = iVar6 + uVar7;
    }
    iVar6 = iVar3;
    if (iVar16 <= iVar3) {
      iVar6 = iVar16;
    }
    iVar16 = iVar19;
    if (iVar6 <= iVar19) {
      iVar16 = iVar6;
    }
    iVar18 = iVar9 - iVar16;
    *(int *)(param_2 + 5) = iVar6;
    if (iVar18 == 0 || iVar9 < iVar16) {
      iVar18 = 0;
      *(undefined4 *)((long)param_2 + 0x2c) = 0;
    }
    else {
      pbVar17 = pbVar17 + -(long)iVar18;
      *(int *)((long)param_2 + 0x2c) = iVar18;
      param_2[1] = (ulong)pbVar17;
    }
    if ((iVar6 != 0x7fffffff) && (0 < (iVar6 - iVar9) + iVar18 + ((int)pbVar17 - (int)pbVar11))) {
      do {
        if (pbVar11 < pbVar17) {
          uVar8 = (ulong)*pbVar11;
          if ((char)*pbVar11 < '\0') goto LAB_00bdd080;
          *param_2 = (ulong)(pbVar11 + 1);
        }
        else {
          uVar8 = 0;
LAB_00bdd080:
          uVar8 = FUN_00c0944c(param_2,uVar8);
          if ((long)uVar8 < 0) {
            return 0;
          }
        }
        iVar6 = *(int *)(param_1 + 0x30);
        if (iVar6 == *(int *)(param_1 + 0x34)) {
          FUN_00ba867c(piVar1,iVar6 + 1);
          iVar6 = *piVar1;
        }
        *(int *)(param_1 + 0x30) = iVar6 + 1;
        *(int *)(*(long *)(param_1 + 0x38) + (long)iVar6 * 4 + 8) = (int)uVar8;
        if ((int)param_2[5] == 0x7fffffff) {
          iVar18 = *(int *)((long)param_2 + 0x2c);
          pbVar17 = (byte *)param_2[1];
          iVar9 = (int)param_2[3];
          break;
        }
        iVar9 = (int)param_2[3];
        iVar18 = *(int *)((long)param_2 + 0x2c);
        pbVar11 = (byte *)*param_2;
        pbVar17 = (byte *)param_2[1];
      } while (0 < ((int)param_2[5] - iVar9) + iVar18 + ((int)pbVar17 - (int)pbVar11));
      iVar19 = (int)param_2[6];
    }
    pbVar17 = pbVar17 + iVar18;
    if (iVar3 <= iVar19) {
      iVar19 = iVar3;
    }
    iVar6 = iVar9 - iVar19;
    *(int *)(param_2 + 5) = iVar3;
    param_2[1] = (ulong)pbVar17;
    if (iVar6 == 0 || iVar9 < iVar19) {
      *(undefined4 *)((long)param_2 + 0x2c) = 0;
    }
    else {
      pbVar17 = pbVar17 + -(long)iVar6;
      *(int *)((long)param_2 + 0x2c) = iVar6;
      param_2[1] = (ulong)pbVar17;
    }
    *(undefined1 *)((long)param_2 + 0x24) = 0;
    break;
  case 2:
    if (iVar6 != 0x10) {
      if (iVar6 != 0x12) goto switchD_00bdcd60_caseD_5;
      pbVar11 = (byte *)*param_2;
      pbVar12 = (byte *)param_2[1];
      goto LAB_00bdcfa4;
    }
    uVar8 = FUN_00bdd41c(0x12,param_2,piVar1);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    pbVar17 = (byte *)param_2[1];
    break;
  case 3:
    if (iVar6 != 0x1a) goto switchD_00bdcd60_caseD_5;
    goto LAB_00bdd15c;
  case 4:
    if (iVar6 != 0x22) goto switchD_00bdcd60_caseD_5;
    goto LAB_00bdd1c0;
  default:
    goto switchD_00bdcd60_caseD_5;
  case 6:
    if (iVar6 == 0x32) goto LAB_00bdd238;
    goto switchD_00bdcd60_caseD_5;
  }
  pbVar12 = (byte *)*param_2;
  if ((pbVar12 < pbVar17) && (*pbVar12 == 0x1a)) {
    *param_2 = (ulong)(pbVar12 + 1);
LAB_00bdd15c:
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
    lVar21 = *(long *)(param_1 + 0x48);
    if (lVar21 == *(long *)PTR_DAT_047dabb0) {
      FUN_00b6eb88((long *)(param_1 + 0x48),*(long *)PTR_DAT_047dabb0);
      lVar21 = *(long *)(param_1 + 0x48);
    }
    uVar8 = FUN_00c0d824(param_2,lVar21);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    pcVar13 = (char *)*param_2;
    if ((pcVar13 < (char *)param_2[1]) && (*pcVar13 == '\"')) {
      *param_2 = (ulong)(pcVar13 + 1);
LAB_00bdd1c0:
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      lVar21 = *(long *)(param_1 + 0x50);
      if (lVar21 == *(long *)PTR_DAT_047dabb0) {
        FUN_00b6eb88((long *)(param_1 + 0x50),*(long *)PTR_DAT_047dabb0);
        lVar21 = *(long *)(param_1 + 0x50);
      }
      uVar8 = FUN_00c0d824(param_2,lVar21);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      pcVar13 = (char *)*param_2;
      if ((pcVar13 < (char *)param_2[1]) && (*pcVar13 == '2')) {
        do {
          *param_2 = (ulong)(pcVar13 + 1);
LAB_00bdd238:
          piVar14 = *(int **)(param_1 + 0x68);
          if (piVar14 == (int *)0x0) {
            iVar6 = *(int *)(param_1 + 0x60);
            iVar16 = *(int *)(param_1 + 100);
LAB_00bdd27c:
            if (iVar6 <= iVar16) {
              FUN_00c11f04((long *)(param_1 + 0x58),(iVar16 - iVar6) + 1);
              piVar14 = *(int **)(param_1 + 0x68);
            }
            iVar16 = *piVar14;
LAB_00bdd298:
            *piVar14 = iVar16 + 1;
            lVar21 = *(long *)(param_1 + 0x58);
            if (lVar21 == 0) {
              lVar21 = tpidr_el0;
              plVar15 = *(long **)(lVar21 + 0x30);
              if (plVar15 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar15 = DAT_04859430;
                *(long **)(lVar21 + 0x30) = DAT_04859430;
              }
              puVar20 = (undefined8 *)(**(code **)(*plVar15 + 0x10))(plVar15,0x18,8);
              *puVar20 = 0;
              puVar20[1] = 0;
              puVar20[2] = 0;
            }
            else {
              puVar20 = (undefined8 *)FUN_00c0e238(lVar21,0,0x18);
              *puVar20 = 0;
              puVar20[1] = 0;
              puVar20[2] = 0;
              FUN_00c0e13c(lVar21,puVar20,PTR_LAB_047dabf0);
            }
            iVar6 = *(int *)(param_1 + 0x60);
            *(int *)(param_1 + 0x60) = iVar6 + 1;
            *(undefined8 **)(*(long *)(param_1 + 0x68) + (long)iVar6 * 8 + 8) = puVar20;
          }
          else {
            iVar6 = *(int *)(param_1 + 0x60);
            iVar16 = *piVar14;
            if (iVar16 <= iVar6) {
              if (iVar16 == *(int *)(param_1 + 100)) goto LAB_00bdd27c;
              goto LAB_00bdd298;
            }
            *(int *)(param_1 + 0x60) = iVar6 + 1;
            puVar20 = *(undefined8 **)(piVar14 + (long)iVar6 * 2 + 2);
          }
          uVar8 = FUN_00c0d824(param_2,puVar20);
          if ((uVar8 & 1) == 0) {
            return 0;
          }
          pcVar13 = (char *)*param_2;
        } while ((pcVar13 < (char *)param_2[1]) && (*pcVar13 == '2'));
        if ((pcVar13 == (char *)param_2[1]) &&
           ((*(int *)((long)param_2 + 0x2c) != 0 || ((int)param_2[3] == (int)param_2[5])))) {
          *(undefined4 *)(param_2 + 4) = 0;
          *(undefined1 *)((long)param_2 + 0x24) = 1;
          return 1;
        }
      }
    }
  }
  goto LAB_00bdccb8;
switchD_00bdcd60_caseD_5:
  if (((uint)uVar8 == 0) || (((uint)uVar8 & 7) == 4)) {
    return 1;
  }
  uVar10 = *(ulong *)(param_1 + 8);
  if ((uVar10 & 1) == 0) {
    uVar10 = FUN_00b7714c((ulong *)(param_1 + 8));
  }
  else {
    uVar10 = uVar10 & 0xfffffffffffffffe;
  }
  uVar8 = FUN_00c01b50(param_2,uVar8 & 0xffffffff,uVar10);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  goto LAB_00bdccb8;
}


