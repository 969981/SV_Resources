/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0152a3ac; name: FUN_0152a3ac
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_0152a3ac(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ulong uVar4;
  undefined1 *puVar5;
  char cVar6;
  char cVar7;
  ulong uVar8;
  uint uVar9;
  
  bVar3 = FUN_0152a758();
  if (bVar3 == 0) {
    return 5;
  }
  uVar2 = 0;
  if (bVar3 != 0) {
    uVar2 = (param_4 & 0xff) / (uint)bVar3;
  }
  uVar2 = (param_4 & 0xff) - uVar2 * bVar3;
  if (((int)param_3 / 5) * 5 == 0) {
LAB_0152a480:
    uVar9 = 0;
  }
  else {
    uVar8 = (ulong)(uint)((int)param_3 % 5);
    uVar4 = FUN_00f7e2a0(param_1,param_2,uVar8);
    if ((uVar4 & 1) == 0) goto LAB_0152a480;
    if (param_1 == 2) {
      puVar5 = &DAT_03d6a45a;
joined_r0x0152a648:
      if ((int)param_3 < 5) {
        cVar6 = puVar5[param_3];
      }
      else {
        cVar6 = '\x02';
      }
      if (cVar6 != puVar5[uVar8]) goto LAB_0152a480;
    }
    else {
      if (param_1 == 1) {
        puVar5 = &DAT_03d6a455;
        goto joined_r0x0152a648;
      }
      if (param_1 == 0) {
        puVar5 = &DAT_03d6a450;
        goto joined_r0x0152a648;
      }
    }
    if ((uVar2 & 0xff) == 0) {
      return uVar8;
    }
    uVar9 = 1;
  }
  uVar1 = (int)(param_3 + 1) % 5;
  if ((uVar1 != param_3) && (uVar4 = FUN_00f7e2a0(param_1,param_2,uVar1), (uVar4 & 1) != 0)) {
    if (param_1 == 2) {
      puVar5 = &DAT_03d6a45a;
joined_r0x0152a664:
      if ((int)param_3 < 5) {
        cVar6 = puVar5[param_3];
      }
      else {
        cVar6 = '\x02';
      }
      if (cVar6 != puVar5[uVar1]) goto LAB_0152a4f0;
    }
    else {
      if (param_1 == 1) {
        puVar5 = &DAT_03d6a455;
        goto joined_r0x0152a664;
      }
      if (param_1 == 0) {
        puVar5 = &DAT_03d6a450;
        goto joined_r0x0152a664;
      }
    }
    if (uVar9 == (uVar2 & 0xff)) {
      return (ulong)uVar1;
    }
    uVar9 = uVar9 + 1;
  }
LAB_0152a4f0:
  uVar1 = (int)(param_3 + 2) % 5;
  if ((uVar1 != param_3) && (uVar4 = FUN_00f7e2a0(param_1,param_2,uVar1), (uVar4 & 1) != 0)) {
    if (param_1 == 2) {
      puVar5 = &DAT_03d6a45a;
joined_r0x0152a680:
      if ((int)param_3 < 5) {
        cVar6 = puVar5[param_3];
      }
      else {
        cVar6 = '\x02';
      }
      if (cVar6 != puVar5[uVar1]) goto LAB_0152a55c;
    }
    else {
      if (param_1 == 1) {
        puVar5 = &DAT_03d6a455;
        goto joined_r0x0152a680;
      }
      if (param_1 == 0) {
        puVar5 = &DAT_03d6a450;
        goto joined_r0x0152a680;
      }
    }
    if (uVar9 == (uVar2 & 0xff)) {
      return (ulong)uVar1;
    }
    uVar9 = uVar9 + 1;
  }
LAB_0152a55c:
  uVar1 = (int)(param_3 + 3) % 5;
  if ((uVar1 != param_3) && (uVar4 = FUN_00f7e2a0(param_1,param_2,uVar1), (uVar4 & 1) != 0)) {
    if (param_1 == 2) {
      puVar5 = &DAT_03d6a45a;
joined_r0x0152a69c:
      if ((int)param_3 < 5) {
        cVar6 = puVar5[param_3];
      }
      else {
        cVar6 = '\x02';
      }
      if (cVar6 != puVar5[uVar1]) goto LAB_0152a5c8;
    }
    else {
      if (param_1 == 1) {
        puVar5 = &DAT_03d6a455;
        goto joined_r0x0152a69c;
      }
      if (param_1 == 0) {
        puVar5 = &DAT_03d6a450;
        goto joined_r0x0152a69c;
      }
    }
    if (uVar9 == (uVar2 & 0xff)) {
      return (ulong)uVar1;
    }
    uVar9 = uVar9 + 1;
  }
LAB_0152a5c8:
  uVar1 = (int)(param_3 + 4) % 5;
  if (uVar1 == param_3) {
    return 5;
  }
  uVar4 = FUN_00f7e2a0(param_1,param_2,uVar1);
  if ((uVar4 & 1) == 0) {
    return 5;
  }
  if (param_1 == 2) {
    puVar5 = &DAT_03d6a45a;
  }
  else if (param_1 == 1) {
    puVar5 = &DAT_03d6a455;
  }
  else {
    if (param_1 != 0) {
      cVar6 = '\x02';
      cVar7 = '\x02';
      goto LAB_0152a620;
    }
    puVar5 = &DAT_03d6a450;
  }
  if ((int)param_3 < 5) {
    cVar6 = puVar5[param_3];
  }
  else {
    cVar6 = '\x02';
  }
  cVar7 = puVar5[uVar1];
LAB_0152a620:
  if ((uVar9 == (uVar2 & 0xff)) && (cVar6 == cVar7)) {
    return (ulong)uVar1;
  }
  return 5;
}


