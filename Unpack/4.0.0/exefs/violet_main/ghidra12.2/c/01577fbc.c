/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01577fbc; name: FUN_01577fbc
 */


int FUN_01577fbc(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  void *__src;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  int *__dest;
  uint uVar12;
  long local_60;
  undefined1 auStack_58 [4];
  uint local_54;
  
  uVar5 = *(uint *)(param_3 + 1);
  if (uVar5 == 0) {
    uVar5 = (**(code **)(*(long *)*param_3 + 0x30))();
    *(uint *)(param_3 + 1) = uVar5;
  }
  if (uVar5 << 1 < 9) {
    uVar10 = 8;
LAB_01578014:
    __dest = (int *)(auStack_58 + (-8 - (uVar10 + 0xf & 0x1fffffff0)));
    if (uVar5 == 0) {
      uVar5 = (**(code **)(*(long *)*param_3 + 0x30))();
      *(uint *)(param_3 + 1) = uVar5;
    }
  }
  else {
    if (uVar5 == 0) {
      uVar5 = (**(code **)(*(long *)*param_3 + 0x30))();
      uVar10 = (ulong)(uVar5 << 1);
      *(uint *)(param_3 + 1) = uVar5;
      goto LAB_01578014;
    }
    uVar10 = (ulong)(uVar5 << 1);
    __dest = (int *)(auStack_58 + (-8 - (uVar10 + 0xf & 0x1fffffff0)));
  }
  uVar2 = 0;
  if (uVar5 != 0) {
    uVar2 = 8 / uVar5;
  }
  uVar7 = 8;
  if (uVar2 * uVar5 != 8) {
    if (uVar5 == 0) {
      uVar5 = (**(code **)(*(long *)*param_3 + 0x30))();
      *(uint *)(param_3 + 1) = uVar5;
      if (uVar5 != 0) goto LAB_01578274;
      uVar5 = (**(code **)(*(long *)*param_3 + 0x30))();
      uVar11 = (ulong)uVar5;
      uVar3 = 0;
      if (uVar11 != 0) {
        uVar3 = (ulong)__dest / uVar11;
      }
      *(uint *)(param_3 + 1) = uVar5;
      __dest = (int *)(uVar3 * uVar11);
      if (uVar5 == 0) {
        uVar7 = (**(code **)(*(long *)*param_3 + 0x30))();
        *(uint *)(param_3 + 1) = uVar7;
        goto LAB_01578054;
      }
    }
    else {
LAB_01578274:
      uVar11 = (ulong)uVar5;
      uVar3 = 0;
      if (uVar11 != 0) {
        uVar3 = (ulong)__dest / uVar11;
      }
      __dest = (int *)(uVar3 * uVar11 + (ulong)uVar5);
    }
    uVar7 = uVar5;
  }
LAB_01578054:
  puVar4 = PTR_DAT_047e2fd0;
  __src = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(7,uVar10);
  iVar6 = (**(code **)(*(long *)*param_3 + 0x38))(0,(long *)*param_3,__src,uVar7,1,0x32,&local_54);
  if ((iVar6 != 1) || (local_54 < 8)) {
    if ((long *)*param_3 != (long *)0x0) {
      (**(code **)(*(long *)*param_3 + 0x10))();
    }
    *param_3 = 0;
    (**(code **)(puVar4 + 0x30))(7,__src);
    return 2;
  }
  memcpy(__dest,__src,(ulong)local_54);
  (**(code **)(puVar4 + 0x30))(7,__src);
  if ((*__dest != 0x4b504b41) || (__dest[1] == 0)) {
LAB_015781e0:
    if ((long *)*param_3 != (long *)0x0) {
      (**(code **)(*(long *)*param_3 + 0x10))();
    }
    *param_3 = 0;
    return 2;
  }
  lVar8 = FUN_015784a0(param_3,param_2,__dest[1] + 8,auStack_58,&local_60);
  *param_4 = lVar8;
  if (lVar8 == 0) goto LAB_015781e0;
  uVar5 = __dest[1];
  if (local_54 < 9) {
    uVar10 = 8;
  }
  else {
    uVar12 = local_54 - 8;
    memcpy((void *)(local_60 + 8),__dest + 2,(ulong)uVar12);
    uVar7 = *(uint *)(param_3 + 1);
    uVar2 = uVar5;
    if (uVar12 <= uVar5) {
      uVar2 = uVar12;
    }
    if (uVar7 == 0) {
      uVar7 = (**(code **)(*(long *)*param_3 + 0x30))();
      uVar12 = ((uVar5 - uVar2) + uVar7) - 1;
      *(uint *)(param_3 + 1) = uVar7;
      if (uVar7 != 0) goto LAB_015782cc;
      uVar7 = (**(code **)(*(long *)*param_3 + 0x30))();
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar12 / uVar7;
      }
      *(uint *)(param_3 + 1) = uVar7;
      if (uVar7 == 0) {
        uVar7 = (**(code **)(*(long *)*param_3 + 0x30))();
        *(uint *)(param_3 + 1) = uVar7;
      }
    }
    else {
      uVar12 = ((uVar5 - uVar2) + uVar7) - 1;
LAB_015782cc:
      uVar5 = 0;
      if (uVar7 != 0) {
        uVar5 = uVar12 / uVar7;
      }
    }
    uVar5 = uVar7 * uVar5;
    uVar10 = (ulong)(uVar2 + 8);
  }
  if ((uVar5 != 0) &&
     ((iVar6 = (**(code **)(*(long *)*param_3 + 0x38))
                         (0,(long *)*param_3,local_60 + uVar10,uVar5,1,0x32,&local_54), iVar6 != 1
      || (local_54 < uVar5)))) {
LAB_01578200:
    param_4 = (long *)*param_4;
    iVar6 = (int)param_4[10] + -1;
    *(int *)(param_4 + 10) = iVar6;
    if (iVar6 == 0) {
      (**(code **)(*param_4 + 0x10))();
      return 2;
    }
    return 2;
  }
  iVar6 = FUN_015783dc(*param_4 + 0x10,local_60,__dest[1] + 8);
  if (iVar6 != 1) {
    param_4 = (long *)*param_4;
    iVar1 = (int)param_4[10] + -1;
    *(int *)(param_4 + 10) = iVar1;
    if (iVar1 == 0) {
      (**(code **)(*param_4 + 0x10))();
      return iVar6;
    }
    return iVar6;
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    iVar6 = FUN_015787b0(&LAB_029aad34,param_1);
    if (iVar6 != 1) goto LAB_01578200;
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  lVar8 = *param_4;
  uVar9 = FUN_015783d0();
  iVar6 = FUN_01578440(lVar8 + 0x10,uVar9);
  return iVar6;
}


