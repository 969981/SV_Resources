/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01465758; name: FUN_01465758
 */


undefined8 FUN_01465758(long param_1,uint *param_2,byte *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  uVar9 = *param_2;
  if (uVar9 == 5) {
    uVar6 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x180))();
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    plVar7 = (long *)FUN_01465a74(param_1);
    if (plVar7 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar7 + 0xb0))(plVar7,0xd);
      *(undefined2 *)(param_1 + 0x17a) = uVar3;
    }
    return 1;
  }
  if (4 < uVar9) {
    return 0;
  }
  bVar2 = *param_3;
  uVar1 = *(undefined4 *)(param_3 + 4);
  switch(uVar9) {
  case 0:
    uVar6 = FUN_015d96e8(*(undefined8 *)(param_1 + 0x30));
    uVar9 = 3;
    if ((uVar6 & 1) != 0) {
      uVar9 = 1;
    }
    break;
  case 1:
    uVar9 = 2;
    break;
  case 2:
    uVar9 = 3;
    break;
  case 3:
    if (param_3[0xc] == 0) {
      uVar9 = 4;
    }
    else {
      plVar7 = (long *)FUN_0147ac98(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30),bVar2,uVar1);
      if (plVar7 == (long *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar7 + 0x98))(plVar7);
      }
      uVar6 = FUN_0146619c(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x290),
                           *(undefined1 *)(param_1 + 0x1a4),bVar2);
      if (((uVar6 & 1) == 0) && ((uint)*(byte *)(param_1 + 0x1a4) == (uint)bVar2)) {
        uVar5 = FUN_01466234(param_1,plVar7);
        puVar10 = (undefined4 *)(param_1 + 0x184);
        *(undefined8 *)(param_1 + 0x198) = 0;
        *(undefined8 *)(param_1 + 0x188) = 0;
        *(undefined8 *)(param_1 + 400) = 0;
        *(undefined4 *)(param_1 + 0x1a0) = 0;
        *(undefined4 *)(param_1 + 0x17c) = uVar5;
        *(undefined2 *)(param_1 + 0x180) = 0x1100;
      }
      else {
        *(undefined8 *)(param_1 + 0x19c) = 0;
        *(undefined8 *)(param_1 + 0x194) = 0;
        *(undefined8 *)(param_1 + 0x18c) = 0;
        *(undefined4 *)(param_1 + 0x17c) = 0x1f5;
        *(undefined2 *)(param_1 + 0x180) = 0x2100;
        puVar10 = (undefined4 *)(param_1 + 0x188);
        *(uint *)(param_1 + 0x184) = (uint)bVar2;
      }
      *puVar10 = uVar4;
      plVar7 = *(long **)(param_1 + 0x1b0);
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x499) >> 2 & 1) == 0) {
LAB_014658d4:
        uVar6 = FUN_014aeb48(param_1);
        if (((uVar6 & 1) == 0) ||
           (uVar6 = FUN_014aeb20(param_1,*(undefined1 *)(param_1 + 0x1a4)), (uVar6 & 1) != 0))
        goto LAB_01465920;
LAB_014658f0:
        uVar8 = 1;
      }
      else {
        uVar6 = FUN_014aeb48(param_1);
        if ((((uVar6 & 1) == 0) || (uVar6 = FUN_014aeb20(param_1,1), (uVar6 & 1) == 0)) &&
           (*(char *)(*(long *)(param_1 + 0x1b0) + 0xda) == '\0')) {
          if (*(char *)(*(long *)(param_1 + 0x1b0) + 0xd9) == '\0') goto LAB_014658d4;
          goto LAB_014658f0;
        }
LAB_01465920:
        uVar8 = 0;
      }
      (**(code **)(*plVar7 + 0x1f8))(plVar7,uVar4,param_1 + 0x17c,uVar8,1,0,0);
      uVar9 = *param_2 + 1;
    }
    *param_2 = uVar9;
  case 4:
    uVar6 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x228))();
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar4 = FUN_00d9c090(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x290),bVar2,uVar1);
    plVar7 = *(long **)(param_1 + 0x1b0);
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 0x38) + 0x499) >> 2 & 1) == 0) {
LAB_01465994:
      uVar6 = FUN_014aeb48(param_1);
      if (((uVar6 & 1) == 0) ||
         (uVar6 = FUN_014aeb20(param_1,*(undefined1 *)(param_1 + 0x1a4)), (uVar6 & 1) != 0))
      goto LAB_014659e0;
LAB_014659b0:
      uVar8 = 1;
    }
    else {
      uVar6 = FUN_014aeb48(param_1);
      if ((((uVar6 & 1) == 0) || (uVar6 = FUN_014aeb20(param_1,1), (uVar6 & 1) == 0)) &&
         (*(char *)(*(long *)(param_1 + 0x1b0) + 0xda) == '\0')) {
        if (*(char *)(*(long *)(param_1 + 0x1b0) + 0xd9) == '\0') goto LAB_01465994;
        goto LAB_014659b0;
      }
LAB_014659e0:
      uVar8 = 0;
    }
    (**(code **)(*plVar7 + 0x178))(plVar7,uVar4,bVar2,uVar1,uVar8);
    uVar9 = *param_2 + 1;
  }
  *param_2 = uVar9;
  return 0;
}


