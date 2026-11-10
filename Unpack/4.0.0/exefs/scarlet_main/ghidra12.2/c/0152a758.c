/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0152a758; name: FUN_0152a758
 */


char FUN_0152a758(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  ulong uVar2;
  char cVar3;
  char cVar4;
  undefined1 *puVar5;
  
  if (param_3 == 0) {
    cVar1 = false;
LAB_0152a798:
    uVar2 = FUN_00f7e2a0(param_1,param_2,1);
    if ((uVar2 & 1) != 0) {
      if (param_1 == 2) {
        if (4 < (int)param_3) goto LAB_0152aa2c;
        puVar5 = &DAT_03d6a45a;
LAB_0152a8dc:
        cVar3 = puVar5[param_3];
        cVar4 = '\x01';
      }
      else {
        if (param_1 == 1) {
          if ((int)param_3 < 5) {
            puVar5 = &DAT_03d6a455;
            goto LAB_0152a8dc;
          }
        }
        else {
          if (param_1 != 0) {
            cVar3 = '\x02';
            cVar4 = '\x02';
            goto LAB_0152a8e4;
          }
          if ((int)param_3 < 5) {
            puVar5 = &DAT_03d6a450;
            goto LAB_0152a8dc;
          }
        }
LAB_0152aa2c:
        cVar4 = '\x01';
        cVar3 = '\x02';
      }
LAB_0152a8e4:
      if (cVar3 == cVar4) {
        cVar1 = cVar1 + '\x01';
      }
    }
    if (param_3 != 2) goto LAB_0152a7b4;
LAB_0152a7d0:
    uVar2 = FUN_00f7e2a0(param_1,param_2,3);
    if ((uVar2 & 1) != 0) {
      if (param_1 == 2) {
        if ((int)param_3 < 5) {
          puVar5 = &DAT_03d6a45a;
          cVar4 = '\0';
          goto LAB_0152a8b4;
        }
        cVar4 = '\0';
LAB_0152aa54:
        cVar3 = '\x02';
      }
      else {
        if (param_1 == 1) {
          if (4 < (int)param_3) {
            cVar4 = '\x01';
            goto LAB_0152aa54;
          }
          puVar5 = &DAT_03d6a455;
          cVar4 = '\x01';
        }
        else {
          if ((param_1 != 0) || (4 < (int)param_3)) {
            cVar3 = '\x02';
            cVar4 = '\x02';
            goto LAB_0152a8b8;
          }
          puVar5 = &DAT_03d6a450;
          cVar4 = '\x02';
        }
LAB_0152a8b4:
        cVar3 = puVar5[param_3];
      }
LAB_0152a8b8:
      if (cVar3 == cVar4) {
        cVar1 = cVar1 + '\x01';
      }
    }
    if (param_3 == 4) {
      return cVar1;
    }
  }
  else {
    uVar2 = FUN_00f7e2a0(param_1,param_2,0);
    cVar1 = false;
    if ((uVar2 & 1) != 0) {
      if (param_1 == 2) {
        if (4 < (int)param_3) goto LAB_0152aa20;
        puVar5 = &DAT_03d6a45a;
LAB_0152a830:
        cVar3 = '\0';
        cVar1 = puVar5[param_3];
      }
      else {
        if (param_1 == 1) {
          if ((int)param_3 < 5) {
            puVar5 = &DAT_03d6a455;
            goto LAB_0152a830;
          }
        }
        else {
          if (param_1 != 0) {
            cVar1 = '\x02';
            cVar3 = '\x02';
            goto LAB_0152a834;
          }
          if ((int)param_3 < 5) {
            puVar5 = &DAT_03d6a450;
            goto LAB_0152a830;
          }
        }
LAB_0152aa20:
        cVar3 = '\0';
        cVar1 = '\x02';
      }
LAB_0152a834:
      cVar1 = cVar1 == cVar3;
    }
    if (param_3 != 1) goto LAB_0152a798;
LAB_0152a7b4:
    uVar2 = FUN_00f7e2a0(param_1,param_2,2);
    if ((uVar2 & 1) != 0) {
      if (param_1 == 2) {
        if ((int)param_3 < 5) {
          puVar5 = &DAT_03d6a45a;
          goto LAB_0152a85c;
        }
LAB_0152aa38:
        cVar4 = '\0';
        cVar3 = '\x02';
      }
      else if (param_1 == 1) {
        if (4 < (int)param_3) goto LAB_0152aa38;
        puVar5 = &DAT_03d6a455;
LAB_0152a85c:
        cVar4 = '\0';
        cVar3 = puVar5[param_3];
      }
      else {
        if ((param_1 == 0) && ((int)param_3 < 5)) {
          cVar3 = (&DAT_03d6a450)[param_3];
        }
        else {
          cVar3 = '\x02';
        }
        cVar4 = '\x02';
      }
      if (cVar3 == cVar4) {
        cVar1 = cVar1 + '\x01';
      }
    }
    if (param_3 != 3) goto LAB_0152a7d0;
  }
  uVar2 = FUN_00f7e2a0(param_1,param_2,4);
  if ((uVar2 & 1) == 0) {
    return cVar1;
  }
  if (param_1 == 2) {
    if ((int)param_3 < 5) {
      cVar4 = '\0';
      cVar3 = (&DAT_03d6a45a)[param_3];
    }
    else {
      cVar4 = '\0';
      cVar3 = '\x02';
    }
    goto LAB_0152a88c;
  }
  if (param_1 == 1) {
    if ((int)param_3 < 5) {
      puVar5 = &DAT_03d6a455;
      goto LAB_0152a950;
    }
LAB_0152aa5c:
    cVar3 = '\x02';
  }
  else {
    if ((param_1 != 0) || (4 < (int)param_3)) goto LAB_0152aa5c;
    puVar5 = &DAT_03d6a450;
LAB_0152a950:
    cVar3 = puVar5[param_3];
  }
  cVar4 = '\x02';
LAB_0152a88c:
  if (cVar3 == cVar4) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}


