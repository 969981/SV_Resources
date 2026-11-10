/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00487df0; name: FUN_00487df0
 */


undefined8 FUN_00487df0(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  int iVar10;
  
  iVar2 = FUN_0047e430(*(undefined8 *)(param_1 + 0x98));
  iVar10 = iVar2 + -1;
  lVar4 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),iVar10);
  lVar5 = lVar4;
  if (*(int *)(param_1 + 0xf0) == 0) {
    iVar3 = (**(code **)(param_1 + 0x48))(param_1,lVar4,lVar4);
    if (iVar3 != 0) goto LAB_00487ed0;
    lVar8 = lVar4;
    if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x1a) >> 3 & 1) == 0) {
      if (1 < iVar2) {
        iVar10 = iVar2 + -2;
        *(int *)(param_1 + 0xac) = iVar10;
        lVar5 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),iVar10);
        goto LAB_00487ed4;
      }
      *(undefined4 *)(param_1 + 0xac) = 0;
      if (lVar4 == 0) {
        lVar4 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),0);
      }
      *(undefined4 *)(param_1 + 0xb0) = 0x15;
      *(long *)(param_1 + 0xb8) = lVar4;
      uVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
      if ((int)uVar7 == 0) {
        return uVar7;
      }
    }
  }
  else {
    lVar8 = 0;
  }
LAB_00487fc4:
  do {
    uVar7 = FUN_004874f0(param_1,lVar5,iVar10);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    *(long *)(param_1 + 0xb8) = lVar5;
    *(long *)(param_1 + 0xc0) = lVar8;
    *(int *)(param_1 + 0xac) = iVar10;
    uVar7 = (**(code **)(param_1 + 0x38))(1,param_1);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
    iVar2 = iVar10 + -1;
    bVar1 = 0 < iVar10;
    lVar4 = lVar8;
    iVar10 = iVar2;
    if (bVar1) {
      lVar8 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),iVar2);
      lVar4 = lVar5;
      lVar5 = lVar8;
    }
LAB_00487ed0:
    if (iVar10 < 0) {
      return 1;
    }
LAB_00487ed4:
    lVar8 = lVar4;
    if (lVar5 == lVar4) {
      if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x19) >> 6 & 1) == 0) goto LAB_00487fc4;
      if ((*(uint *)(lVar5 + 0xe0) >> 0xd & 1) == 0) goto LAB_00487fc4;
      iVar2 = iVar10;
      if ((*(uint *)(lVar5 + 0xe0) >> 4 & 1) != 0) goto LAB_00487ee0;
    }
    else {
      iVar2 = iVar10 + 1;
LAB_00487ee0:
      iVar3 = FUN_004997a0(lVar4,lVar5);
      if (iVar3 != 0) {
        *(int *)(param_1 + 0xac) = iVar2;
        lVar6 = lVar4;
        if (lVar4 == 0) {
          lVar6 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),iVar2);
        }
        *(long *)(param_1 + 0xb8) = lVar6;
        *(int *)(param_1 + 0xb0) = iVar3;
        uVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
        if ((int)uVar7 == 0) {
          return uVar7;
        }
      }
    }
    lVar6 = FUN_00483c90(lVar4);
    if (lVar6 == 0) {
      *(int *)(param_1 + 0xac) = iVar2;
      if (lVar4 == 0) {
        lVar4 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),iVar2);
      }
      uVar9 = 6;
      *(long *)(param_1 + 0xb8) = lVar4;
    }
    else {
      iVar2 = FUN_0048ab40(lVar5,lVar6);
      if (0 < iVar2) goto LAB_00487fc4;
      *(int *)(param_1 + 0xac) = iVar10;
      lVar4 = lVar5;
      if (lVar5 == 0) {
        lVar4 = FUN_0047e450(*(undefined8 *)(param_1 + 0x98),iVar10);
      }
      *(long *)(param_1 + 0xb8) = lVar4;
      uVar9 = 7;
    }
    *(undefined4 *)(param_1 + 0xb0) = uVar9;
    uVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
  } while( true );
}


