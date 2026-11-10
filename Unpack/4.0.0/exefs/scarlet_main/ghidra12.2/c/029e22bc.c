/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029e22bc; name: FUN_029e22bc
 */


undefined8 FUN_029e22bc(int *param_1,long param_2)

{
  uint *puVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_019367c0(param_2,param_1);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_019c3824(param_1,param_2,4);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  lVar3 = (long)*param_1;
  if (*(ushort *)((long)param_1 - lVar3) < 5) {
LAB_029e2508:
    lVar3 = 0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)param_1 - lVar3))[2];
    if (uVar2 != 0) {
      puVar1 = (uint *)((long)param_1 + uVar2);
      uVar2 = FUN_028ffd54(param_2,(long)puVar1 + (ulong)*puVar1,4,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      lVar3 = (long)*param_1;
      if (*(ushort *)((long)param_1 - lVar3) < 5) goto LAB_029e2508;
    }
    uVar2 = (ulong)*(ushort *)((long)param_1 + (4 - lVar3));
    if (uVar2 == 0) goto LAB_029e2508;
    puVar1 = (uint *)((long)param_1 + uVar2);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  uVar2 = FUN_029e26f4(param_2,lVar3);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_019c3824(param_1,param_2,6);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  lVar3 = (long)*param_1;
  if (*(ushort *)((long)param_1 - lVar3) < 7) {
LAB_029e2510:
    lVar3 = 0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)param_1 - lVar3))[3];
    if (uVar2 != 0) {
      puVar1 = (uint *)((long)param_1 + uVar2);
      uVar2 = FUN_028ffd54(param_2,(long)puVar1 + (ulong)*puVar1,4,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      lVar3 = (long)*param_1;
      if (*(ushort *)((long)param_1 - lVar3) < 7) goto LAB_029e2510;
    }
    uVar2 = (ulong)*(ushort *)((long)param_1 + (6 - lVar3));
    if (uVar2 == 0) goto LAB_029e2510;
    puVar1 = (uint *)((long)param_1 + uVar2);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  uVar2 = FUN_029e2774(param_2,lVar3);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_019c3824(param_1,param_2,8);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  lVar3 = (long)*param_1;
  if (*(ushort *)((long)param_1 - lVar3) < 9) {
LAB_029e2518:
    lVar3 = 0;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)param_1 - lVar3))[4];
    if (uVar2 != 0) {
      puVar1 = (uint *)((long)param_1 + uVar2);
      uVar2 = FUN_028ffd54(param_2,(long)puVar1 + (ulong)*puVar1,4,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      lVar3 = (long)*param_1;
      if (*(ushort *)((long)param_1 - lVar3) < 9) goto LAB_029e2518;
    }
    uVar2 = (ulong)*(ushort *)((long)param_1 + (8 - lVar3));
    if (uVar2 == 0) goto LAB_029e2518;
    puVar1 = (uint *)((long)param_1 + uVar2);
    lVar3 = (long)puVar1 + (ulong)*puVar1;
  }
  uVar2 = FUN_029e27f4(param_2,lVar3);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_019c3824(param_1,param_2,10);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  lVar3 = (long)*param_1;
  if (10 < *(ushort *)((long)param_1 - lVar3)) {
    uVar2 = (ulong)((ushort *)((long)param_1 - lVar3))[5];
    if (uVar2 != 0) {
      puVar1 = (uint *)((long)param_1 + uVar2);
      uVar2 = FUN_028ffd54(param_2,(long)puVar1 + (ulong)*puVar1,4,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      lVar3 = (long)*param_1;
      if (*(ushort *)((long)param_1 - lVar3) < 0xb) goto LAB_029e2520;
    }
    uVar2 = (ulong)*(ushort *)((long)param_1 + (10 - lVar3));
    if (uVar2 != 0) {
      puVar1 = (uint *)((long)param_1 + uVar2);
      lVar3 = (long)puVar1 + (ulong)*puVar1;
      goto LAB_029e2524;
    }
  }
LAB_029e2520:
  lVar3 = 0;
LAB_029e2524:
  uVar2 = FUN_029e2874(param_2,lVar3);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
  return 1;
}


