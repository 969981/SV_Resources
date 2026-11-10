/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029851c8; name: FUN_029851c8
 */


void FUN_029851c8(long param_1,long *param_2,uint param_3,byte *param_4,undefined8 *param_5,
                 ulong param_6)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  
  if (param_3 == 0) {
    cVar14 = '\0';
    cVar15 = '\0';
    cVar16 = '\0';
  }
  else {
    cVar16 = '\0';
    cVar15 = '\0';
    cVar14 = '\0';
    uVar11 = (ulong)param_3;
    pbVar12 = param_4;
    puVar13 = param_5;
    do {
      bVar2 = *pbVar12;
      if (7 < bVar2) {
        cVar16 = cVar16 + '\x01';
        bVar2 = FUN_01242e68(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),*puVar13);
        cVar15 = cVar15 + (~bVar2 & 1);
        bVar2 = *pbVar12;
      }
      if (bVar2 < 7) {
        cVar14 = cVar14 + '\x01';
      }
      uVar11 = uVar11 - 1;
      puVar13 = puVar13 + 1;
      pbVar12 = pbVar12 + 1;
    } while (uVar11 != 0);
  }
  uVar3 = (**(code **)(*param_2 + 0x98))();
  if ((param_6 & 1) == 0) {
    if (cVar16 == '\0') {
      if (cVar14 == '\0') {
        return;
      }
      FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xca,uVar3,0x23f,0xffff0000);
      return;
    }
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xca,uVar3,0x23e,0xffff0000);
    if (cVar15 == '\0') {
      return;
    }
    FUN_017eeb20(param_1,param_2);
    return;
  }
  if (cVar16 == '\0') goto LAB_029854e8;
  local_8c = 0;
  local_84 = 0;
  local_7c = 0;
  local_74 = 0;
  local_6c = 0;
  if (param_3 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = 0;
    uVar11 = 0;
    do {
      if ((7 < param_4[uVar11]) &&
         (iVar4 = (**(code **)(*(long *)param_5[uVar11] + 0x98))(), bVar2 < 10)) {
        uVar8 = (ulong)bVar2;
        if (bVar2 != 0) {
          piVar9 = (int *)&local_8c;
          uVar10 = uVar8;
          do {
            if (*piVar9 == iVar4) goto LAB_02985340;
            uVar10 = uVar10 - 1;
            piVar9 = piVar9 + 1;
          } while (uVar10 != 0);
        }
        bVar2 = bVar2 + 1;
        *(int *)((long)&local_8c + uVar8 * 4) = iVar4;
      }
LAB_02985340:
      uVar11 = uVar11 + 1;
    } while (uVar11 != param_3);
  }
  iVar1 = (int)local_84;
  iVar4 = local_8c._4_4_;
  switch(cVar16) {
  case '\x01':
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xcb,uVar3,2,local_8c & 0xffffffff,0xffff0000);
    break;
  case '\x02':
    if (bVar2 < 2) {
      iVar4 = (int)local_8c;
    }
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xcb,uVar3,3,local_8c & 0xffffffff,iVar4,0xffff0000
                );
    break;
  case '\x03':
    if (bVar2 < 2) {
      iVar4 = (int)local_8c;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    if (bVar2 < 3) {
      iVar1 = (int)local_8c;
    }
    uVar6 = 4;
    iVar7 = -0x10000;
    goto LAB_029854c8;
  case '\x04':
    if (bVar2 < 2) {
      iVar4 = (int)local_8c;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    if (bVar2 < 3) {
      iVar1 = (int)local_8c;
    }
    iVar7 = local_84._4_4_;
    if (bVar2 < 4) {
      iVar7 = (int)local_8c;
    }
    uVar6 = 5;
LAB_029854c8:
    FUN_0167ebc0(uVar5,0xcb,uVar3,uVar6,(int)local_8c,iVar4,iVar1,iVar7);
  }
  if (cVar15 != '\0') {
    FUN_017eeb20(param_1,param_2);
  }
LAB_029854e8:
  if (cVar14 == '\0') {
    return;
  }
  local_8c = 0;
  local_84 = 0;
  local_7c = 0;
  local_74 = 0;
  local_6c = 0;
  if (param_3 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = 0;
    uVar11 = 0;
    do {
      if ((param_4[uVar11] < 7) &&
         (iVar4 = (**(code **)(*(long *)param_5[uVar11] + 0x98))(), bVar2 < 10)) {
        uVar8 = (ulong)bVar2;
        if (bVar2 != 0) {
          piVar9 = (int *)&local_8c;
          uVar10 = uVar8;
          do {
            if (*piVar9 == iVar4) goto LAB_02985594;
            uVar10 = uVar10 - 1;
            piVar9 = piVar9 + 1;
          } while (uVar10 != 0);
        }
        bVar2 = bVar2 + 1;
        *(int *)((long)&local_8c + uVar8 * 4) = iVar4;
      }
LAB_02985594:
      uVar11 = uVar11 + 1;
    } while (uVar11 != param_3);
  }
  iVar1 = (int)local_84;
  iVar4 = local_8c._4_4_;
  switch(cVar14) {
  case '\x01':
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xcb,uVar3,6,local_8c & 0xffffffff,0xffff0000);
    break;
  case '\x02':
    if (bVar2 < 2) {
      iVar4 = (int)local_8c;
    }
    FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xcb,uVar3,7,local_8c & 0xffffffff,iVar4,0xffff0000
                );
    break;
  case '\x03':
    if (bVar2 < 2) {
      iVar4 = (int)local_8c;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    if (bVar2 < 3) {
      iVar1 = (int)local_8c;
    }
    uVar6 = 8;
    iVar7 = -0x10000;
    goto LAB_0298568c;
  case '\x04':
    if (bVar2 < 2) {
      iVar4 = (int)local_8c;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    if (bVar2 < 3) {
      iVar1 = (int)local_8c;
    }
    iVar7 = local_84._4_4_;
    if (bVar2 < 4) {
      iVar7 = (int)local_8c;
    }
    uVar6 = 9;
LAB_0298568c:
    FUN_0167ebc0(uVar5,0xcb,uVar3,uVar6,(int)local_8c,iVar4,iVar1,iVar7);
  }
  return;
}


