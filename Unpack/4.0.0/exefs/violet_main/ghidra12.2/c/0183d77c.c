/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0183d77c; name: FUN_0183d77c
 */


void FUN_0183d77c(undefined8 param_1,undefined8 param_2,long param_3,long *param_4,
                 undefined8 param_5,long param_6,int param_7,long *param_8)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar9 = *(undefined8 *)(param_3 + 0x30);
  uVar10 = *(undefined8 *)(param_3 + 0x290);
  uVar4 = (**(code **)(*param_4 + 0x98))(param_4);
  uVar4 = FUN_010e161c(uVar10,uVar4);
  if (*(char *)(param_6 + 10) == '\0') {
switchD_0183d8a0_caseD_3:
    if (param_7 == 0) {
      lVar5 = FUN_0183da74(param_1,uVar9,uVar4,0);
      if (lVar5 == 0) {
        return;
      }
      uVar6 = (ulong)*(byte *)((long)param_8 + 0xa6);
      if (10 < uVar6) {
        return;
      }
      if (*(byte *)((long)param_8 + 0xa6) != 0) {
        plVar7 = param_8;
        uVar8 = uVar6;
        do {
          if (*plVar7 == lVar5) {
            return;
          }
          uVar8 = uVar8 - 1;
          plVar7 = plVar7 + 1;
        } while (uVar8 != 0);
      }
    }
    else {
      lVar5 = FUN_01021c94(uVar9,param_7,uVar4);
      if (lVar5 == 0) {
        return;
      }
      uVar6 = (ulong)*(byte *)((long)param_8 + 0xa6);
      if (10 < uVar6) {
        return;
      }
      if (*(byte *)((long)param_8 + 0xa6) != 0) {
        plVar7 = param_8;
        uVar8 = uVar6;
        do {
          if (*plVar7 == lVar5) {
            return;
          }
          uVar8 = uVar8 - 1;
          plVar7 = plVar7 + 1;
        } while (uVar8 != 0);
      }
    }
    goto LAB_0183d800;
  }
  switch(*(char *)(param_6 + 10)) {
  case '\x01':
  case '\x06':
  case '\a':
    if (param_7 != 0) {
      lVar5 = FUN_01021c94(uVar9,param_7,uVar4);
      if (lVar5 == 0) {
        return;
      }
      uVar6 = (ulong)*(byte *)((long)param_8 + 0xa6);
      if (10 < uVar6) {
        return;
      }
      if (*(byte *)((long)param_8 + 0xa6) != 0) {
        plVar7 = param_8;
        uVar8 = uVar6;
        do {
          if (*plVar7 == lVar5) {
            return;
          }
          uVar8 = uVar8 - 1;
          plVar7 = plVar7 + 1;
        } while (uVar8 != 0);
      }
      break;
    }
    uVar6 = (ulong)*(byte *)((long)param_8 + 0xa6);
    if (10 < uVar6) {
      return;
    }
    if (*(byte *)((long)param_8 + 0xa6) != 0) {
      plVar7 = param_8;
      uVar8 = uVar6;
      do {
        if ((long *)*plVar7 == param_4) {
          return;
        }
        uVar8 = uVar8 - 1;
        plVar7 = plVar7 + 1;
      } while (uVar8 != 0);
    }
    param_8[uVar6] = (long)param_4;
    goto LAB_0183d804;
  default:
    goto switchD_0183d8a0_caseD_2;
  case '\x03':
  case '\x04':
  case '\x05':
  case '\t':
    goto switchD_0183d8a0_caseD_3;
  case '\b':
    uVar6 = (ulong)*(byte *)((long)param_8 + 0xa6);
    if (uVar6 < 0xb) {
      if (*(byte *)((long)param_8 + 0xa6) != 0) {
        plVar7 = param_8;
        uVar8 = uVar6;
        do {
          if ((long *)*plVar7 == param_4) goto LAB_0183d9c0;
          uVar8 = uVar8 - 1;
          plVar7 = plVar7 + 1;
        } while (uVar8 != 0);
      }
      param_8[uVar6] = (long)param_4;
      *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
      *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
      *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
      cVar3 = *(char *)((long)param_8 + 0xa6);
      cVar2 = cVar3 + '\x01';
      *(char *)((long)param_8 + 0xa6) = cVar2;
      if (*(byte *)((long)param_8 + 0xa7) < (byte)(cVar3 + 1U)) {
        *(char *)((long)param_8 + 0xa7) = cVar2;
      }
    }
LAB_0183d9c0:
    lVar5 = FUN_0183da74(param_1,uVar9,uVar4,0);
    if (lVar5 == 0) {
      return;
    }
    uVar6 = (ulong)*(byte *)((long)param_8 + 0xa6);
    if (10 < uVar6) {
      return;
    }
    if (*(byte *)((long)param_8 + 0xa6) != 0) {
      plVar7 = param_8;
      uVar8 = uVar6;
      do {
        if (*plVar7 == lVar5) {
          return;
        }
        uVar8 = uVar8 - 1;
        plVar7 = plVar7 + 1;
      } while (uVar8 != 0);
    }
    break;
  case '\r':
    if (param_7 == 0) {
      return;
    }
    lVar5 = FUN_01021c94(uVar9,param_7,uVar4);
    if (lVar5 == 0) {
      return;
    }
    uVar6 = (ulong)*(byte *)((long)param_8 + 0xa6);
    if (10 < uVar6) {
      return;
    }
    if (*(byte *)((long)param_8 + 0xa6) != 0) {
      plVar7 = param_8;
      uVar8 = uVar6;
      do {
        if (*plVar7 == lVar5) {
          return;
        }
        uVar8 = uVar8 - 1;
        plVar7 = plVar7 + 1;
      } while (uVar8 != 0);
    }
  }
LAB_0183d800:
  param_8[uVar6] = lVar5;
LAB_0183d804:
  *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
  *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
  *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
  bVar1 = *(char *)((long)param_8 + 0xa6) + 1;
  *(byte *)((long)param_8 + 0xa6) = bVar1;
  if (*(byte *)((long)param_8 + 0xa7) < bVar1) {
    *(byte *)((long)param_8 + 0xa7) = bVar1;
  }
switchD_0183d8a0_caseD_2:
  return;
}


