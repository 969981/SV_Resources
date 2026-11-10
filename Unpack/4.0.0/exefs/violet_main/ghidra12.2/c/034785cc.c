/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034785cc; name: FUN_034785cc
 */


undefined8
FUN_034785cc(int param_1,long param_2,int param_3,int param_4,int param_5,long param_6,int param_7,
            byte param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  
  uVar4 = DAT_048afd48;
  uVar8 = (ulong)DAT_048afd48;
  iVar1 = param_3 + param_4 * 0x10 + param_5 * 0x10000;
  piVar5 = DAT_048afd40;
  if (DAT_048afd48 == 0) {
LAB_03478670:
    if (piVar5 != DAT_048afd40 + uVar8 * 10) {
      if ((char)piVar5[9] != '\0') {
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,*(undefined8 *)(piVar5 + 6));
      }
      uVar4 = DAT_048afd48;
      if (param_6 != 0) {
        *(long *)(piVar5 + 6) = param_6;
        piVar5[8] = param_7;
        *(byte *)(piVar5 + 9) = param_8 & 1;
        return 1;
      }
      piVar6 = DAT_048afd40 + (ulong)DAT_048afd48 * 10;
      piVar5 = DAT_048afd40;
      if (DAT_048afd48 != 0) {
        lVar7 = (ulong)DAT_048afd48 * 0x28;
        do {
          if (((*piVar5 == param_1) && (piVar5[4] == iVar1)) && (*(long *)(piVar5 + 2) == param_2))
          goto LAB_03478838;
          lVar7 = lVar7 + -0x28;
          piVar5 = piVar5 + 10;
        } while (lVar7 != 0);
        piVar5 = piVar6;
      }
LAB_03478838:
      if (piVar6 == piVar5) {
        return 1;
      }
      for (; piVar5 < piVar6 + -10; piVar5 = piVar5 + 10) {
        memcpy(piVar5,piVar5 + 10,0x28);
      }
      DAT_048afd48 = uVar4 - 1;
      return 1;
    }
  }
  else {
    lVar7 = uVar8 * 0x28;
    do {
      if (((*piVar5 == param_1) && (piVar5[4] == iVar1)) && (*(long *)(piVar5 + 2) == param_2))
      goto LAB_03478670;
      lVar7 = lVar7 + -0x28;
      piVar5 = piVar5 + 10;
    } while (lVar7 != 0);
  }
  if (param_6 == 0) {
    return 1;
  }
  piVar5 = DAT_048afd40;
  if (DAT_048afd48 == 0) {
LAB_03478714:
    if (piVar5 != DAT_048afd40 + uVar8 * 10) goto LAB_034787a8;
  }
  else {
    lVar7 = uVar8 * 0x28;
    do {
      if (((*piVar5 == param_1) && (piVar5[4] == iVar1)) && (*(long *)(piVar5 + 2) == param_2))
      goto LAB_03478714;
      lVar7 = lVar7 + -0x28;
      piVar5 = piVar5 + 10;
    } while (lVar7 != 0);
  }
  if (DAT_048afd4c <= DAT_048afd48) {
    iVar2 = DAT_048afd4c + (DAT_048afd4c >> 1);
    if (DAT_048afd4c == 0) {
      iVar2 = 1;
    }
    uVar3 = iVar2 + DAT_048afd4c;
    piVar5 = (int *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,DAT_048afd40,(ulong)uVar3 * 0x28);
    if (piVar5 == (int *)0x0) goto LAB_034787bc;
    DAT_048afd40 = piVar5;
    DAT_048afd4c = uVar3;
  }
  if (uVar4 < DAT_048afd4c) {
    uVar8 = (ulong)DAT_048afd48;
    DAT_048afd48 = DAT_048afd48 + 1;
    if (DAT_048afd40 != (int *)0x0) {
      piVar5 = DAT_048afd40 + uVar8 * 10;
      *piVar5 = param_1;
      *(long *)(piVar5 + 2) = param_2;
      piVar5[4] = iVar1;
LAB_034787a8:
      *(long *)(piVar5 + 6) = param_6;
      piVar5[8] = param_7;
      *(byte *)(piVar5 + 9) = param_8 & 1;
      return 1;
    }
  }
LAB_034787bc:
  if ((param_8 & 1) != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5,param_6);
  }
  return 0x34;
}


