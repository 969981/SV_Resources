/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0043b4e0; name: FUN_0043b4e0
 */


int FUN_0043b4e0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar2 = *param_1;
  if (0x1a8 < iVar2) {
    switch(iVar2) {
    case 0x28a:
    case 0x28d:
      return 0x1a5;
    case 0x28b:
    case 0x28e:
      goto switchD_0043b53c_caseD_28b;
    case 0x28c:
    case 0x28f:
      return 0x1ad;
    case 0x290:
    case 0x291:
    case 0x292:
    case 0x293:
      goto switchD_0043b53c_caseD_290;
    default:
      if (iVar2 != 0x1a9) {
        if (iVar2 == 0x1ad) {
          return 0x1ad;
        }
        goto LAB_0043b5fc;
      }
switchD_0043b53c_caseD_28b:
      return 0x1a9;
    }
  }
  if (iVar2 < 0x61) {
    if (iVar2 < 0x25) {
      if (iVar2 == 5) {
        return 5;
      }
      if (iVar2 != 0x1e) goto LAB_0043b5fc;
    }
    else {
      if (iVar2 == 0x25) {
        return 0x25;
      }
      if (iVar2 != 0x3d) goto LAB_0043b5fc;
    }
switchD_0043b53c_caseD_290:
    return 0x1e;
  }
  if (iVar2 < 0xa6) {
    if (iVar2 == 0x61) {
      return 5;
    }
    if (iVar2 == 0x62) {
      return 0x25;
    }
  }
  else {
    if (iVar2 == 0xa6) {
      return 0x25;
    }
    if (iVar2 == 0x1a5) {
      return 0x1a5;
    }
  }
LAB_0043b5fc:
  uVar3 = FUN_0045bc10(iVar2);
  lVar4 = FUN_0045cdc0();
  iVar1 = 0;
  if (lVar4 != 0) {
    iVar1 = iVar2;
  }
  FUN_003dffa0(uVar3);
  return iVar1;
}


