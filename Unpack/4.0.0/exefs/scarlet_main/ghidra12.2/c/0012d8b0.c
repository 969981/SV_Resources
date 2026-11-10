/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0012d8b0; name: FUN_0012d8b0
 */


undefined8
FUN_0012d8b0(undefined8 param_1,uint param_2,double *param_3,double *param_4,double *param_5)

{
  uint uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  char cVar5;
  double dVar6;
  double dVar7;
  double local_40;
  double local_38;
  
  if (param_2 < 0xe) {
    uVar1 = 1 << (ulong)(param_2 & 0x1f);
    if ((uVar1 & 0x2f80) != 0) {
      if (*(char *)(param_3 + 1) == '\x03') {
        local_38 = *param_3;
      }
      else {
        uVar3 = FUN_0013ff30(param_3,&local_38,0);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
      }
      if (*(char *)(param_4 + 1) == '\x03') {
        local_40 = *param_4;
      }
      else {
        uVar3 = FUN_0013ff30(param_4,&local_40,0);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
      }
      dVar2 = local_38;
      dVar6 = local_40;
LAB_0012d91c:
      dVar2 = (double)FUN_0012db20(param_1,param_2,dVar2,dVar6);
      *param_5 = dVar2;
      uVar4 = 3;
      goto LAB_0012d930;
    }
    if ((uVar1 & 0x30) == 0) goto LAB_0012d9a0;
    if (*(char *)(param_3 + 1) == '\x03') {
      dVar2 = (double)(long)*param_3;
      cVar5 = *(char *)(param_4 + 1);
    }
    else {
      if (*(char *)(param_3 + 1) != '\x13') {
        return 0;
      }
      dVar2 = *param_3;
      cVar5 = *(char *)(param_4 + 1);
    }
    if (cVar5 == '\x03') {
      dVar6 = (double)(long)*param_4;
      if (param_2 != 4) goto LAB_0012d98c;
LAB_0012d9f0:
      if (dVar6 == 2.0) {
        *param_5 = dVar2 * dVar2;
      }
      else {
        dVar2 = pow(dVar2,dVar6);
        *param_5 = dVar2;
      }
    }
    else {
      if (cVar5 != '\x13') {
        return 0;
      }
      dVar6 = *param_4;
      if (param_2 == 4) goto LAB_0012d9f0;
LAB_0012d98c:
      if (param_2 == 5) {
        *param_5 = dVar2 / dVar6;
      }
      else {
        *param_5 = 0.0;
      }
    }
  }
  else {
LAB_0012d9a0:
    if (*(char *)(param_3 + 1) == '\x13') {
      dVar2 = *param_3;
      cVar5 = *(char *)(param_4 + 1);
      if (cVar5 == '\x03') goto LAB_0012da48;
LAB_0012da18:
      if (cVar5 != '\x13') {
        return 0;
      }
      dVar6 = *param_4;
    }
    else {
      if (*(char *)(param_3 + 1) != '\x03') {
        return 0;
      }
      cVar5 = *(char *)(param_4 + 1);
      dVar2 = *param_3;
      if (cVar5 == '\x03') {
        dVar6 = *param_4;
        goto LAB_0012d91c;
      }
      dVar2 = (double)(long)dVar2;
      if (cVar5 != '\x03') goto LAB_0012da18;
LAB_0012da48:
      dVar6 = (double)(long)*param_4;
    }
    dVar7 = 0.0;
    switch(param_2) {
    case 0:
      dVar7 = dVar2 + dVar6;
      break;
    case 1:
      dVar7 = dVar2 - dVar6;
      break;
    case 2:
      dVar7 = dVar2 * dVar6;
      break;
    case 3:
      dVar7 = (double)FUN_00140fb0(param_1);
      break;
    case 4:
      if (dVar6 == 2.0) {
        dVar7 = dVar2 * dVar2;
      }
      else {
        dVar7 = pow(dVar2,dVar6);
      }
      break;
    case 5:
      dVar7 = dVar2 / dVar6;
      break;
    case 6:
      dVar7 = (double)(long)(dVar2 / dVar6);
      break;
    case 0xc:
      dVar7 = -dVar2;
    }
    *param_5 = dVar7;
  }
  uVar4 = 0x13;
LAB_0012d930:
  *(undefined1 *)(param_5 + 1) = uVar4;
  return 1;
}


