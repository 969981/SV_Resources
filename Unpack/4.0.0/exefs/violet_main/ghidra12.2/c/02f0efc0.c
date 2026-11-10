/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f0efc0; name: FUN_02f0efc0
 */


undefined8
FUN_02f0efc0(undefined2 *param_1,float *param_2,float *param_3,undefined1 *param_4,
            undefined1 *param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  float *pfVar5;
  ulong uVar6;
  float *pfVar7;
  float fVar8;
  
  uVar3 = 0x80040200;
  switch(*param_1) {
  case 5:
  case 6:
  case 7:
  case 0x14:
    break;
  default:
    goto switchD_02f0eff0_caseD_8;
  case 9:
    param_3 = param_3 + 0x18;
    break;
  case 10:
    param_3 = param_3 + 8;
    break;
  case 0xb:
    param_3 = param_3 + 0x10;
    break;
  case 0xc:
  case 0xd:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x1a:
    param_3 = param_3 + 4;
    break;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x1d:
    param_3 = param_3 + 0x1c;
    break;
  case 0x11:
    param_3 = param_3 + 0xc;
    break;
  case 0x12:
  case 0x13:
    param_3 = param_3 + 0x14;
  }
  *param_5 = 0;
  *param_4 = 0;
  switch(*param_1) {
  case 5:
  case 0x18:
  case 0x19:
  case 0x1a:
    *param_5 = 1;
    *param_3 = *param_2 + *param_3;
    param_3[1] = param_2[2] + param_3[1];
    fVar8 = param_2[4];
    goto LAB_02f0f080;
  case 6:
  case 0x14:
  case 0x15:
  case 0x16:
    *param_5 = 1;
    fVar8 = *param_2;
    goto LAB_02f0f0a0;
  case 7:
  case 9:
    fVar8 = *param_2;
    cVar4 = *(char *)(param_1 + 1);
    goto LAB_02f0f0d0;
  case 10:
  case 0xb:
  case 0xe:
  case 0x12:
    fVar8 = *param_2;
    cVar4 = *(char *)((long)param_1 + 3);
LAB_02f0f0d0:
    pfVar7 = param_3 + 2;
    if (cVar4 != '\x02') {
      pfVar7 = param_3 + 3;
    }
    pfVar5 = param_3 + 1;
    if (cVar4 != '\x01') {
      pfVar5 = pfVar7;
    }
LAB_02f0f120:
    if (cVar4 != '\0') {
      param_3 = pfVar5;
    }
    *param_3 = fVar8 + *param_3;
    return 0;
  case 0xc:
    uVar2 = (*(byte *)(param_1 + 1) + 1) % 3;
    if (uVar2 == 0) {
      pfVar7 = param_3;
    }
    else if (uVar2 == 1) {
      pfVar7 = param_3 + 1;
    }
    else if (uVar2 == 2) {
      pfVar7 = param_3 + 2;
    }
    else {
      pfVar7 = param_3 + 3;
    }
    *pfVar7 = *param_2 + *pfVar7;
    fVar8 = param_2[2];
    uVar2 = (*(byte *)(param_1 + 1) + 2) % 3;
    if (uVar2 != 0) {
      if (uVar2 == 1) {
        param_3 = param_3 + 1;
      }
      else if (uVar2 == 2) {
        param_3 = param_3 + 2;
      }
      else {
        param_3 = param_3 + 3;
      }
    }
LAB_02f0f0a0:
    *param_3 = fVar8 + *param_3;
    return 0;
  case 0xd:
    *param_4 = 1;
    if (*(char *)((long)param_1 + 5) == '\0') {
      return 0;
    }
    uVar6 = 0;
    do {
      cVar4 = *(char *)((long)param_1 + uVar6 + 2);
      pfVar7 = param_3;
      if (cVar4 != '\0') {
        pfVar5 = param_3 + 3;
        if (cVar4 == '\x01') {
          pfVar5 = param_3 + 1;
        }
        pfVar7 = param_3 + 2;
        if (cVar4 != '\x02') {
          pfVar7 = pfVar5;
        }
      }
      *pfVar7 = *param_2 + *pfVar7;
      uVar6 = uVar6 + 1;
      uVar3 = 0;
      param_2 = param_2 + 2;
    } while (uVar6 < *(byte *)((long)param_1 + 5));
    break;
  case 0xf:
  case 0x10:
    *param_4 = 1;
    cVar4 = *(char *)((long)param_1 + 3);
    fVar8 = *param_2;
    pfVar7 = param_3 + 2;
    if (cVar4 != '\x02') {
      pfVar7 = param_3 + 3;
    }
    pfVar5 = param_3 + 1;
    if (cVar4 != '\x01') {
      pfVar5 = pfVar7;
    }
    goto LAB_02f0f120;
  case 0x11:
    *param_4 = 1;
    if (*(char *)(param_1 + 2) == '\0') {
      return 0;
    }
    uVar6 = 0;
    do {
      iVar1 = (int)uVar6 +
              (uint)*(byte *)((long)param_1 + 3) +
              (((int)uVar6 + (uint)*(byte *)((long)param_1 + 3)) / 3) * -3;
      pfVar7 = param_3;
      if (((iVar1 != 0) && (pfVar7 = param_3 + 2, iVar1 != 2)) && (pfVar7 = param_3 + 1, iVar1 != 1)
         ) {
        pfVar7 = param_3 + 3;
      }
      *pfVar7 = *param_2 + *pfVar7;
      uVar6 = uVar6 + 1;
      uVar3 = 0;
      param_2 = param_2 + 4;
    } while (uVar6 < *(byte *)(param_1 + 2));
    break;
  case 0x13:
    *param_4 = 1;
    if (((*(long *)(param_1 + 0x20) != 0) && (*(long *)(param_1 + 0x20) != -0x40 - (long)param_1))
       || (*(char *)((long)param_1 + 3) == '\x01')) {
      *param_3 = *param_2 + *param_3;
    }
    if (((*(long *)(param_1 + 0x24) != 0) && (*(long *)(param_1 + 0x24) != -0x48 - (long)param_1))
       || (*(char *)((long)param_1 + 3) == '\x01')) {
      param_3[1] = param_2[4] + param_3[1];
    }
    if (((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x28) == -0x50 - (long)param_1))
       && (*(char *)((long)param_1 + 3) != '\x01')) {
      return 0;
    }
    fVar8 = param_2[8];
LAB_02f0f080:
    uVar3 = 0;
    fVar8 = fVar8 + param_3[2];
LAB_02f0f08c:
    param_3[2] = fVar8;
    break;
  case 0x1d:
    param_3[1] = *param_2 + param_3[1];
    fVar8 = param_2[2] + param_3[2];
    goto LAB_02f0f08c;
  }
switchD_02f0eff0_caseD_8:
  return uVar3;
}


