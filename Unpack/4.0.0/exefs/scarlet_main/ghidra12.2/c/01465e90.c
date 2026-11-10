/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01465e90; name: FUN_01465e90
 */


char FUN_01465e90(ulong param_1,ulong param_2,uint param_3)

{
  char cVar1;
  ulong uVar2;
  char cVar3;
  undefined1 *puVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar8 = param_2 & 0xffffffff;
  uVar7 = param_1 & 0xffffffff;
  uVar2 = FUN_00f7e2a0(param_1,param_2,0);
  cVar1 = false;
  iVar6 = (int)param_1;
  if ((uVar2 & 1) != 0) {
    if (iVar6 == 2) {
      if (4 < (int)param_3) goto LAB_01466124;
      puVar4 = &DAT_03d6a45a;
LAB_01465f3c:
      cVar3 = '\0';
      cVar1 = puVar4[param_3];
    }
    else {
      if (iVar6 == 1) {
        if ((int)param_3 < 5) {
          puVar4 = &DAT_03d6a455;
          goto LAB_01465f3c;
        }
      }
      else {
        if (iVar6 != 0) {
          cVar1 = '\x02';
          cVar3 = '\x02';
          goto LAB_01465f40;
        }
        if ((int)param_3 < 5) {
          puVar4 = &DAT_03d6a450;
          goto LAB_01465f3c;
        }
      }
LAB_01466124:
      cVar3 = '\0';
      cVar1 = '\x02';
    }
LAB_01465f40:
    cVar1 = cVar1 != cVar3;
  }
  uVar2 = FUN_00f7e2a0(uVar7,uVar8,1);
  if ((uVar2 & 1) != 0) {
    if (iVar6 == 2) {
      if (4 < (int)param_3) goto LAB_01466130;
      puVar4 = &DAT_03d6a45a;
LAB_01465f64:
      cVar3 = puVar4[param_3];
      cVar5 = '\x01';
    }
    else {
      if (iVar6 == 1) {
        if ((int)param_3 < 5) {
          puVar4 = &DAT_03d6a455;
          goto LAB_01465f64;
        }
      }
      else {
        if (iVar6 != 0) {
          cVar3 = '\x02';
          cVar5 = '\x02';
          goto LAB_01465f6c;
        }
        if ((int)param_3 < 5) {
          puVar4 = &DAT_03d6a450;
          goto LAB_01465f64;
        }
      }
LAB_01466130:
      cVar5 = '\x01';
      cVar3 = '\x02';
    }
LAB_01465f6c:
    if (cVar3 != cVar5) {
      cVar1 = cVar1 + '\x01';
    }
  }
  uVar2 = FUN_00f7e2a0(uVar7,uVar8,2);
  if ((uVar2 & 1) != 0) {
    if (iVar6 == 2) {
      if ((int)param_3 < 5) {
        puVar4 = &DAT_03d6a45a;
        goto LAB_01465f94;
      }
LAB_0146613c:
      cVar5 = '\0';
      cVar3 = '\x02';
    }
    else if (iVar6 == 1) {
      if (4 < (int)param_3) goto LAB_0146613c;
      puVar4 = &DAT_03d6a455;
LAB_01465f94:
      cVar5 = '\0';
      cVar3 = puVar4[param_3];
    }
    else {
      if ((iVar6 == 0) && ((int)param_3 < 5)) {
        cVar3 = (&DAT_03d6a450)[param_3];
      }
      else {
        cVar3 = '\x02';
      }
      cVar5 = '\x02';
    }
    if (cVar3 != cVar5) {
      cVar1 = cVar1 + '\x01';
    }
  }
  uVar2 = FUN_00f7e2a0(uVar7,uVar8,3);
  if ((uVar2 & 1) != 0) {
    if (iVar6 == 2) {
      if ((int)param_3 < 5) {
        puVar4 = &DAT_03d6a45a;
        cVar5 = '\0';
        goto LAB_01465fc0;
      }
      cVar5 = '\0';
LAB_0146614c:
      cVar3 = '\x02';
    }
    else {
      if (iVar6 == 1) {
        if (4 < (int)param_3) {
          cVar5 = '\x01';
          goto LAB_0146614c;
        }
        puVar4 = &DAT_03d6a455;
        cVar5 = '\x01';
      }
      else {
        if ((iVar6 != 0) || (4 < (int)param_3)) {
          cVar3 = '\x02';
          cVar5 = '\x02';
          goto LAB_01465fc4;
        }
        puVar4 = &DAT_03d6a450;
        cVar5 = '\x02';
      }
LAB_01465fc0:
      cVar3 = puVar4[param_3];
    }
LAB_01465fc4:
    if (cVar3 != cVar5) {
      cVar1 = cVar1 + '\x01';
    }
  }
  uVar2 = FUN_00f7e2a0(uVar7,uVar8,4);
  if ((uVar2 & 1) == 0) {
    return cVar1;
  }
  if (iVar6 == 2) {
    if ((int)param_3 < 5) {
      cVar5 = '\0';
      cVar3 = (&DAT_03d6a45a)[param_3];
    }
    else {
      cVar5 = '\0';
      cVar3 = '\x02';
    }
    goto LAB_01465ff0;
  }
  if (iVar6 == 1) {
    if ((int)param_3 < 5) {
      puVar4 = &DAT_03d6a455;
      goto LAB_01466090;
    }
LAB_01466160:
    cVar3 = '\x02';
  }
  else {
    if ((iVar6 != 0) || (4 < (int)param_3)) goto LAB_01466160;
    puVar4 = &DAT_03d6a450;
LAB_01466090:
    cVar3 = puVar4[param_3];
  }
  cVar5 = '\x02';
LAB_01465ff0:
  if (cVar3 != cVar5) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


