/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005f4d30; name: FUN_005f4d30
 */


bool FUN_005f4d30(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    return true;
  case 2:
    lVar7 = *param_1;
    if (lVar7 <= param_2[-1]) {
      return true;
    }
    *param_1 = param_2[-1];
LAB_005f4ec4:
    param_2[-1] = lVar7;
    return true;
  case 3:
    lVar7 = *param_1;
    lVar8 = param_1[1];
    lVar5 = param_2[-1];
    if (lVar8 < lVar7) {
      if (lVar5 < lVar8) {
        *param_1 = lVar5;
      }
      else {
        *param_1 = lVar8;
        param_1[1] = lVar7;
        if (lVar7 <= param_2[-1]) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      goto LAB_005f4ec4;
    }
    if (lVar8 <= lVar5) {
      return true;
    }
    param_1[1] = lVar5;
    param_2[-1] = lVar8;
    lVar5 = *param_1;
    lVar8 = param_1[1];
    if (lVar5 <= lVar8) {
      return true;
    }
    goto LAB_005f4fc4;
  case 4:
    break;
  case 5:
    FUN_005f4b50(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    return true;
  default:
    lVar7 = *param_1;
    lVar8 = param_1[1];
    lVar5 = param_1[2];
    if (lVar8 < lVar7) {
      if (lVar5 < lVar8) {
        *param_1 = lVar5;
      }
      else {
        *param_1 = lVar8;
        param_1[1] = lVar7;
        if (lVar7 <= lVar5) {
          if (param_1 + 3 == param_2) {
            return true;
          }
          goto LAB_005f4f10;
        }
        param_1[1] = lVar5;
      }
      param_1[2] = lVar7;
      lVar4 = lVar7;
    }
    else {
      lVar4 = lVar5;
      if (lVar5 < lVar8) {
        param_1[1] = lVar5;
        param_1[2] = lVar8;
        lVar4 = lVar8;
        if (lVar5 < lVar7) {
          *param_1 = lVar5;
          param_1[1] = lVar7;
        }
      }
    }
    lVar5 = lVar4;
    if (param_1 + 3 == param_2) {
      return true;
    }
LAB_005f4f10:
    plVar6 = param_1 + 3;
    iVar3 = 0;
    lVar7 = 0x18;
    lVar8 = *plVar6;
    plVar2 = plVar6;
    if (lVar5 <= lVar8) goto LAB_005f4f80;
    do {
      lVar4 = lVar7;
      do {
        lVar1 = lVar4 + -8;
        *(long *)((long)param_1 + lVar4) = lVar5;
        if (lVar1 == 0) {
          plVar2 = param_1;
          goto LAB_005f4f70;
        }
        lVar5 = *(long *)((long)param_1 + lVar4 + -0x10);
        lVar4 = lVar1;
      } while (lVar8 < lVar5);
      plVar2 = (long *)((long)param_1 + lVar1);
LAB_005f4f70:
      iVar3 = iVar3 + 1;
      *plVar2 = lVar8;
      plVar2 = plVar6;
      if (iVar3 == 8) {
        return plVar6 + 1 == param_2;
      }
LAB_005f4f80:
      do {
        plVar6 = plVar2 + 1;
        if (plVar6 == param_2) {
          return true;
        }
        lVar5 = *plVar2;
        lVar7 = lVar7 + 8;
        lVar8 = *plVar6;
        plVar2 = plVar6;
      } while (lVar5 <= lVar8);
    } while( true );
  }
  lVar7 = *param_1;
  lVar8 = param_1[1];
  lVar5 = param_1[2];
  if (lVar8 < lVar7) {
    if (lVar5 < lVar8) {
      *param_1 = lVar5;
    }
    else {
      *param_1 = lVar8;
      param_1[1] = lVar7;
      if (lVar7 <= lVar5) {
        lVar4 = param_2[-1];
        lVar8 = lVar5;
        if (lVar5 <= lVar4) {
          return true;
        }
        goto LAB_005f4fa0;
      }
      param_1[1] = lVar5;
    }
    param_1[2] = lVar7;
    lVar4 = param_2[-1];
    lVar8 = lVar7;
    if (lVar7 <= lVar4) {
      return true;
    }
  }
  else {
    if (lVar5 < lVar8) {
      param_1[1] = lVar5;
      param_1[2] = lVar8;
      if (lVar5 < lVar7) {
        *param_1 = lVar5;
        param_1[1] = lVar7;
        lVar4 = param_2[-1];
        if (lVar8 <= lVar4) {
          return true;
        }
        goto LAB_005f4fa0;
      }
    }
    else {
      lVar8 = lVar5;
    }
    lVar4 = param_2[-1];
    if (lVar8 <= lVar4) {
      return true;
    }
  }
LAB_005f4fa0:
  param_1[2] = lVar4;
  param_2[-1] = lVar8;
  lVar7 = param_1[1];
  lVar8 = param_1[2];
  if (lVar8 < lVar7) {
    lVar5 = *param_1;
    param_1[1] = lVar8;
    param_1[2] = lVar7;
    if (lVar8 < lVar5) {
LAB_005f4fc4:
      *param_1 = lVar8;
      param_1[1] = lVar5;
      return true;
    }
  }
  return true;
}


