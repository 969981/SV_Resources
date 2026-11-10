/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ef640; name: FUN_003ef640
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_003ef640(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined1 auStack_78 [24];
  
  iVar1 = FUN_003ec570(param_3,1);
  if ((iVar1 != 0) || (iVar1 = FUN_003eb480(param_3), iVar1 != 0)) {
    *param_5 = 1;
    return 0;
  }
  *param_5 = 0;
  iVar1 = FUN_003eb510(param_2,4);
  if ((iVar1 == 0) && (iVar1 = FUN_003eb510(param_3,4), iVar1 == 0)) {
    FUN_003ed410(param_4);
    lVar5 = FUN_003ed5c0(param_4);
    lVar4 = FUN_003ed5c0(param_4);
    lVar8 = FUN_003ed5c0(param_4);
    puVar12 = (undefined8 *)FUN_003ed5c0(param_4);
    lVar6 = FUN_003ed5c0(param_4);
    lVar9 = FUN_003ed5c0(param_4);
    lVar11 = FUN_003ed5c0(param_4);
    lVar10 = 0;
    if ((lVar11 == 0) ||
       ((lVar10 = param_1, param_1 == 0 && (lVar10 = FUN_003eb5b0(), lVar10 == 0)))) {
LAB_003efe14:
      lVar6 = 0;
    }
    else {
      FUN_003eb9f0(lVar8,1);
      FUN_003eb9f0(lVar9,0);
      lVar13 = FUN_003eb8f0(lVar4,param_2);
      if ((lVar13 == 0) ||
         ((lVar13 = FUN_003eb8f0(lVar5,param_3), lVar13 == 0 ||
          (((*(undefined4 *)(lVar5 + 0x10) = 0, *(int *)(lVar4 + 0x10) != 0 ||
            (iVar1 = FUN_003ebf10(lVar4,lVar5), -1 < iVar1)) &&
           (iVar1 = FUN_003f0870(lVar4,lVar4,lVar5,param_4), iVar1 == 0)))))) goto LAB_003efe14;
      iVar1 = FUN_003ec640(param_3);
      if ((iVar1 != 0) && (iVar1 = FUN_003eb2b0(param_3), iVar1 < 0x801)) {
        iVar1 = FUN_003eb480(lVar4);
        if (iVar1 != 0) goto LAB_003efb68;
        iVar1 = 0;
        do {
          while (iVar2 = FUN_003ec150(lVar4,iVar1), iVar2 != 0) {
            if ((iVar1 != 0) && (iVar1 = FUN_003f23a0(lVar4,lVar4,iVar1), iVar1 == 0))
            goto LAB_003efe14;
            iVar1 = 0;
            while (iVar2 = FUN_003ec150(lVar5,iVar1), iVar2 == 0) {
              iVar2 = FUN_003ec640(lVar9);
              if ((iVar2 != 0) && (iVar2 = FUN_003f0490(lVar9,lVar9,param_3), iVar2 == 0))
              goto LAB_003efe14;
              iVar1 = iVar1 + 1;
              iVar2 = FUN_003f2040(lVar9,lVar9);
              if (iVar2 == 0) goto LAB_003efe14;
            }
            if ((iVar1 != 0) && (iVar1 = FUN_003f23a0(lVar5,lVar5,iVar1), iVar1 == 0))
            goto LAB_003efe14;
            iVar1 = FUN_003ebf10(lVar4,lVar5);
            if (iVar1 < 0) {
              iVar1 = FUN_003f0490(lVar9,lVar9,lVar8);
              if (iVar1 == 0) goto LAB_003efe14;
              lVar6 = lVar5;
              lVar11 = lVar4;
            }
            else {
              iVar1 = FUN_003f0490(lVar8,lVar8,lVar9);
              if (iVar1 == 0) goto LAB_003efe14;
              lVar6 = lVar4;
              lVar11 = lVar5;
            }
            iVar1 = FUN_003f05a0(lVar6,lVar6,lVar11);
            if (iVar1 == 0) goto LAB_003efe14;
            iVar2 = FUN_003eb480(lVar4);
            iVar1 = 0;
            if (iVar2 != 0) goto LAB_003efb68;
          }
          iVar2 = FUN_003ec640(lVar8);
          if ((iVar2 != 0) && (iVar2 = FUN_003f0490(lVar8,lVar8,param_3), iVar2 == 0)) break;
          iVar1 = iVar1 + 1;
          iVar2 = FUN_003f2040(lVar8,lVar8);
        } while (iVar2 != 0);
        goto LAB_003efe14;
      }
      iVar1 = FUN_003eb480(lVar4);
      if (iVar1 == 0) {
        lVar13 = lVar9;
        lVar15 = lVar5;
        iVar1 = 1;
        iVar2 = -1;
        do {
          iVar14 = iVar1;
          lVar5 = lVar4;
          lVar9 = lVar8;
          lVar4 = lVar6;
          lVar6 = lVar13;
          iVar1 = FUN_003eb2b0(lVar15);
          iVar3 = FUN_003eb2b0(lVar5);
          if (iVar1 == iVar3) {
LAB_003efc5c:
            iVar1 = FUN_003eb9f0(puVar12,1);
            if (iVar1 == 0) goto LAB_003efe14;
            iVar1 = FUN_003f06e0(lVar4,lVar15,lVar5);
          }
          else {
            iVar1 = FUN_003eb2b0(lVar15);
            iVar3 = FUN_003eb2b0(lVar5);
            if (iVar1 == iVar3 + 1) {
              iVar1 = FUN_003f1f80(lVar11,lVar5);
              if (iVar1 == 0) goto LAB_003efe14;
              iVar1 = FUN_003ebf10(lVar15,lVar11);
              if (iVar1 < 0) goto LAB_003efc5c;
              iVar1 = FUN_003f06e0(lVar4,lVar15,lVar11);
              if ((iVar1 == 0) || (iVar1 = FUN_003f0310(puVar12,lVar11,lVar5), iVar1 == 0))
              goto LAB_003efe14;
              iVar1 = FUN_003ebf10(lVar15,puVar12);
              if (iVar1 < 0) {
                iVar1 = FUN_003eb9f0(puVar12,2);
              }
              else {
                iVar1 = FUN_003eb9f0(puVar12,3);
                if (iVar1 == 0) goto LAB_003efe14;
                iVar1 = FUN_003f06e0(lVar4,lVar4,lVar5);
              }
            }
            else {
              iVar1 = FUN_003ed910(puVar12,lVar4,lVar15,lVar5,param_4);
            }
          }
          if (iVar1 == 0) goto LAB_003efe14;
          iVar1 = FUN_003ec5b0(puVar12);
          if (iVar1 == 0) {
            iVar1 = FUN_003ec5f0(puVar12,2);
            if (iVar1 == 0) {
              iVar1 = FUN_003ec5f0(puVar12,4);
              if (iVar1 == 0) {
                if (*(int *)(puVar12 + 1) == 1) {
                  lVar8 = FUN_003eb8f0(lVar15,lVar9);
                  if (lVar8 == 0) goto LAB_003efe14;
                  iVar1 = FUN_003f3030(lVar15,*(undefined4 *)*puVar12);
                }
                else {
                  iVar1 = FUN_003f1d10(lVar15,puVar12,lVar9,param_4);
                }
              }
              else {
                iVar1 = FUN_003f2120(lVar15,lVar9,2);
              }
            }
            else {
              iVar1 = FUN_003f1f80(lVar15,lVar9);
            }
            if (iVar1 == 0) goto LAB_003efe14;
            iVar1 = FUN_003f0310(lVar15,lVar15,lVar6);
          }
          else {
            iVar1 = FUN_003f0310(lVar15,lVar9,lVar6);
          }
          if (iVar1 == 0) goto LAB_003efe14;
          iVar3 = FUN_003eb480(lVar4);
          lVar13 = lVar9;
          lVar8 = lVar15;
          lVar15 = lVar5;
          iVar1 = iVar2;
          iVar2 = iVar14;
        } while (iVar3 == 0);
        if (iVar14 < 0) goto LAB_003efb68;
      }
      else {
LAB_003efb68:
        iVar1 = FUN_003f06e0(lVar9,param_3,lVar9);
        if (iVar1 == 0) goto LAB_003efe14;
      }
      iVar1 = FUN_003ec5b0(lVar5);
      if (iVar1 == 0) {
        lVar6 = 0;
        *param_5 = 1;
      }
      else {
        if ((*(int *)(lVar9 + 0x10) == 0) && (iVar1 = FUN_003ebf10(lVar9,param_3), iVar1 < 0)) {
          lVar6 = FUN_003eb8f0(lVar10,lVar9);
          if (lVar6 != 0) goto LAB_003efbc0;
        }
        else {
          iVar1 = FUN_003f0870(lVar10,lVar9,param_3,param_4);
          if (iVar1 != 0) {
LAB_003efbc0:
            lVar6 = lVar10;
            goto LAB_003efe18;
          }
        }
        lVar6 = 0;
      }
    }
LAB_003efe18:
    if (param_1 != 0 || lVar6 != 0) goto LAB_003ef894;
  }
  else {
    FUN_003ed410(param_4);
    lVar4 = FUN_003ed5c0(param_4);
    lVar5 = FUN_003ed5c0(param_4);
    lVar6 = FUN_003ed5c0(param_4);
    uVar7 = FUN_003ed5c0(param_4);
    lVar8 = FUN_003ed5c0(param_4);
    lVar9 = FUN_003ed5c0(param_4);
    lVar10 = FUN_003ed5c0(param_4);
    if (lVar10 == 0) {
      lVar10 = 0;
LAB_003ef87c:
      lVar6 = 0;
    }
    else {
      lVar10 = param_1;
      if ((param_1 == 0) && (lVar10 = FUN_003eb5b0(), lVar10 == 0)) goto LAB_003ef87c;
      FUN_003eb9f0(lVar6,1);
      FUN_003eb9f0(lVar9,0);
      lVar11 = FUN_003eb8f0(lVar5,param_2);
      if ((lVar11 == 0) || (lVar11 = FUN_003eb8f0(lVar4,param_3), lVar11 == 0)) goto LAB_003ef87c;
      *(undefined4 *)(lVar4 + 0x10) = 0;
      if ((*(int *)(lVar5 + 0x10) != 0) || (iVar1 = FUN_003ebf10(lVar5,lVar4), -1 < iVar1)) {
        FUN_003eb5a0(auStack_78);
        FUN_003ec690(auStack_78,lVar5,4);
        iVar1 = FUN_003f0870(lVar5,auStack_78,lVar4,param_4);
        if (iVar1 == 0) goto LAB_003ef87c;
      }
      iVar1 = -1;
      while( true ) {
        lVar13 = lVar8;
        lVar11 = lVar6;
        iVar2 = FUN_003eb480(lVar5);
        if (iVar2 != 0) break;
        FUN_003eb5a0(auStack_78);
        FUN_003ec690(auStack_78,lVar4,4);
        iVar2 = FUN_003ed910(uVar7,lVar13,auStack_78,lVar5,param_4);
        if ((iVar2 == 0) || (iVar2 = FUN_003f1d10(lVar4,uVar7,lVar11,param_4), iVar2 == 0))
        goto LAB_003ef870;
        iVar2 = FUN_003f0310(lVar4,lVar4,lVar9);
        iVar1 = -iVar1;
        lVar6 = lVar4;
        lVar8 = lVar9;
        lVar4 = lVar5;
        lVar5 = lVar13;
        lVar9 = lVar11;
        if (iVar2 == 0) goto LAB_003ef870;
      }
      if ((-1 < iVar1) || (iVar1 = FUN_003f06e0(lVar9,param_3,lVar9), iVar1 != 0)) {
        iVar1 = FUN_003ec5b0(lVar4);
        if (iVar1 != 0) {
          if ((*(int *)(lVar9 + 0x10) == 0) && (iVar1 = FUN_003ebf10(lVar9,param_3), iVar1 < 0)) {
            lVar6 = FUN_003eb8f0(lVar10,lVar9);
            if (lVar6 == 0) goto LAB_003ef87c;
          }
          else {
            iVar1 = FUN_003f0870(lVar10,lVar9,param_3,param_4);
            if (iVar1 == 0) goto LAB_003ef87c;
          }
          *param_5 = 0;
          lVar6 = lVar10;
          goto LAB_003ef884;
        }
        *param_5 = 1;
      }
LAB_003ef870:
      lVar6 = 0;
    }
LAB_003ef884:
    if (param_1 != 0 || lVar6 != 0) goto LAB_003ef894;
  }
  FUN_003eb520(lVar10);
LAB_003ef894:
  FUN_003ed530(param_4);
  return lVar6;
}


