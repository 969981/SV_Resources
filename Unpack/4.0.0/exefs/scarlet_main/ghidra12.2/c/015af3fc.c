/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015af3fc; name: FUN_015af3fc
 */


undefined8 FUN_015af3fc(long param_1,long *param_2,uint *param_3)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  long *plVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 local_50 [16];
  
  if (param_2 == (long *)0x0) {
    return 1;
  }
  uVar7 = (**(code **)(*param_2 + 0x200))(param_2);
  if (((uVar7 & 1) != 0) ||
     (uVar7 = (**(code **)(*param_2 + 0x4d0))(param_2,0x1a), (uVar7 & 1) != 0)) {
    if (param_3 == (uint *)0x0) {
      return 1;
    }
    param_3[0] = 0;
    param_3[1] = 0;
    return 1;
  }
  uVar7 = (**(code **)(*param_2 + 0x4d0))(param_2,0xc);
  if ((uVar7 & 1) != 0) {
    if (param_3 == (uint *)0x0) {
      return 1;
    }
    uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
    param_3[2] = uVar3;
    uVar3 = *param_3 & 0xfffff000 | 6;
    goto LAB_015af768;
  }
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x49a) >> 2 & 1) != 0) {
    lVar11 = *(long *)(*(long *)(param_1 + 0x50) + 0x290);
    uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
    lVar11 = *(long *)(lVar11 + 8);
    iVar1 = *(int *)(lVar11 + 0x36c);
    puVar8 = (uint *)FUN_011e2dd4(*(undefined8 *)(lVar11 + 0x50),uVar4);
    if (puVar8 == (uint *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar8 & 0xff;
      if (4 < (int)*puVar8) {
        uVar3 = 0;
      }
    }
    if (iVar1 == 2) {
      if (uVar3 < 5) {
        puVar10 = &DAT_03d6a45a;
        goto LAB_015af538;
      }
    }
    else if (iVar1 == 1) {
      if (uVar3 < 5) {
        puVar10 = &DAT_03d6a455;
        goto LAB_015af538;
      }
    }
    else if ((iVar1 == 0) && (uVar3 < 5)) {
      puVar10 = &DAT_03d6a450;
LAB_015af538:
      if ((puVar10[uVar3] == '\x01') &&
         (*(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x210) + 8) == 0)) {
        if (param_3 == (uint *)0x0) {
          return 1;
        }
        uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
        param_3[2] = uVar3;
        uVar3 = *param_3 & 0xfffff000 | 0x16;
        goto LAB_015af768;
      }
    }
  }
  uVar7 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x498);
  if (((uint)uVar7 >> 0x15 & 1) != 0) {
    if (*(char *)(param_1 + 0x11c) != '\0') {
      FUN_020ff7b0(param_1,param_2,param_3);
      return 1;
    }
    uVar7 = FUN_020ff658(param_1,param_2,param_3);
    if ((uVar7 & 1) != 0) {
      return 1;
    }
    uVar7 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x498);
  }
  if ((((uVar7 >> 0x21 & 1) != 0) && (param_3 != (uint *)0x0)) &&
     (*(char *)(param_1 + 0x11c) == '\x01')) {
    lVar11 = *(long *)(*(long *)(param_1 + 0x50) + 0x210);
    if ((*(int *)(lVar11 + 0x28) == 0) && (*(int *)(lVar11 + 8) == 3)) {
      uVar3 = (**(code **)(*param_2 + 0x730))
                        (param_2,*(undefined1 *)
                                  (*(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x330) + 0x10) +
                                  0x18));
      uVar5 = (**(code **)(*param_2 + 0x98))(param_2);
      param_3[0] = 0;
      param_3[1] = 0;
      param_3[2] = uVar5;
      *param_3 = (uVar3 & 0xffff) << 8 | 0x21;
      return 1;
    }
  }
  uVar7 = (**(code **)(*param_2 + 0x220))(param_2,0x1a);
  if ((uVar7 & 1) == 0) {
    uVar7 = (**(code **)(*param_2 + 0x220))(param_2,0x1b);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    uVar2 = (**(code **)(*param_2 + 1000))(param_2);
    uVar3 = (**(code **)(*param_2 + 0x3d0))(param_2);
    uVar5 = (**(code **)(*param_2 + 0x98))(param_2);
    if (param_3 == (uint *)0x0) {
      return 1;
    }
    param_3[0] = 0;
    param_3[1] = 0;
    param_3[2] = uVar5;
  }
  else {
    local_50 = (**(code **)(*param_2 + 0x240))(param_2,0x1a);
    uVar2 = FUN_0107ffe0(local_50);
    uVar3 = (**(code **)(*param_2 + 0x3d0))(param_2);
    uVar5 = (**(code **)(*param_2 + 0x98))(param_2);
    if ((((*(byte *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x499) >> 2 & 1) != 0) &&
        (lVar11 = *(long *)(*(long *)(param_1 + 0x50) + 0x30), *(char *)(lVar11 + 0x90) != '\0')) &&
       (plVar9 = *(long **)(lVar11 + 0x60), plVar9 != (long *)0x0)) {
      uVar6 = (**(code **)(*plVar9 + 0x98))();
      if ((uVar2 == 0xcd) && (uVar6 == uVar5)) {
        uVar3 = FUN_00d9c090(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),
                             *(undefined1 *)(param_1 + 0x11c),0);
      }
    }
    if (param_3 == (uint *)0x0) {
      return 1;
    }
    param_3[0] = 0;
    param_3[1] = 0;
    param_3[2] = uVar5;
  }
  uVar3 = (uVar3 & 0xf) << 4 | (uint)uVar2 << 8 | 1;
LAB_015af768:
  *param_3 = uVar3;
  return 1;
}


