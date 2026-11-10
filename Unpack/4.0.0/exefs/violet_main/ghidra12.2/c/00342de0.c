/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00342de0; name: FUN_00342de0
 */


long FUN_00342de0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                 undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (param_4 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(param_4 + 0x28);
  }
  if (param_5 != 0) {
    lVar6 = lVar6 - *(long *)(param_5 + 0x28);
  }
  if (lVar6 == -2) {
    lVar6 = *(long *)(param_5 + 0x18);
    if (lVar6 == 0) {
      lVar10 = 0;
      lVar8 = *(long *)(param_5 + 0x20);
      if (lVar8 != 0) goto LAB_00342f08;
      lVar3 = 0;
    }
    else {
      lVar10 = *(long *)(lVar6 + 0x28);
      lVar8 = *(long *)(param_5 + 0x20);
      lVar3 = 0;
      if (lVar8 != 0) {
LAB_00342f08:
        lVar3 = *(long *)(lVar8 + 0x28);
      }
    }
    if (lVar10 - lVar3 == 1) {
      uVar1 = (**(code **)(param_1 + 8))(*(undefined8 *)(lVar6 + 8),param_6);
      uVar2 = (**(code **)(param_1 + 0x20))
                        (*(undefined8 *)(*(long *)(param_5 + 0x18) + 0x10),param_6);
      lVar6 = *(long *)(*(long *)(param_5 + 0x18) + 0x18);
      if (lVar6 != 0) {
        FUN_0038da60(lVar6);
      }
      lVar10 = FUN_0038c780(0x30);
      FUN_0038da50(lVar10,1);
      *(undefined8 *)(lVar10 + 8) = param_2;
      *(undefined8 *)(lVar10 + 0x10) = param_3;
      *(long *)(lVar10 + 0x18) = param_4;
      *(long *)(lVar10 + 0x20) = lVar6;
      if (param_4 == 0) {
        if ((lVar6 == 0) || (lVar8 = *(long *)(lVar6 + 0x28), *(long *)(lVar6 + 0x28) < 0)) {
LAB_003431e4:
          lVar3 = 0;
        }
        else {
LAB_00343150:
          lVar3 = lVar8;
        }
      }
      else {
        lVar3 = *(long *)(param_4 + 0x28);
        if (lVar6 == 0) {
          if (lVar3 < 1) goto LAB_003431e4;
        }
        else {
          lVar8 = *(long *)(lVar6 + 0x28);
          if (lVar3 <= *(long *)(lVar6 + 0x28)) goto LAB_00343150;
        }
      }
      *(long *)(lVar10 + 0x28) = lVar3 + 1;
      uVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_5 + 8),param_6);
      uVar5 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_5 + 0x10),param_6);
      lVar8 = *(long *)(*(long *)(param_5 + 0x18) + 0x20);
      if (lVar8 != 0) {
        FUN_0038da60(lVar8);
      }
      lVar3 = *(long *)(param_5 + 0x20);
      if (lVar3 != 0) {
        FUN_0038da60(lVar3);
      }
      lVar6 = FUN_0038c780(0x30);
      FUN_0038da50(lVar6,1);
      *(undefined8 *)(lVar6 + 8) = uVar4;
      *(undefined8 *)(lVar6 + 0x10) = uVar5;
      *(long *)(lVar6 + 0x18) = lVar8;
      *(long *)(lVar6 + 0x20) = lVar3;
      if (lVar8 == 0) {
        if ((lVar3 == 0) || (lVar8 = *(long *)(lVar3 + 0x28), *(long *)(lVar3 + 0x28) < 0)) {
LAB_003432bc:
          lVar9 = 0;
        }
        else {
LAB_00343280:
          lVar9 = lVar8;
        }
      }
      else {
        lVar9 = *(long *)(lVar8 + 0x28);
        if (lVar3 == 0) {
          if (lVar9 < 1) goto LAB_003432bc;
        }
        else {
          lVar8 = *(long *)(lVar3 + 0x28);
          if (lVar9 <= *(long *)(lVar3 + 0x28)) goto LAB_00343280;
        }
      }
      *(long *)(lVar6 + 0x28) = lVar9 + 1;
    }
    else {
      uVar1 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_5 + 8),param_6);
      uVar2 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_5 + 0x10),param_6);
      lVar6 = *(long *)(param_5 + 0x18);
      if (lVar6 != 0) {
        FUN_0038da60(lVar6);
      }
      lVar10 = FUN_0038c780(0x30);
      FUN_0038da50(lVar10,1);
      *(undefined8 *)(lVar10 + 8) = param_2;
      *(undefined8 *)(lVar10 + 0x10) = param_3;
      *(long *)(lVar10 + 0x18) = param_4;
      *(long *)(lVar10 + 0x20) = lVar6;
      if (param_4 == 0) {
        if ((lVar6 == 0) || (lVar8 = *(long *)(lVar6 + 0x28), *(long *)(lVar6 + 0x28) < 0)) {
LAB_00343290:
          lVar3 = 0;
        }
        else {
LAB_00343164:
          lVar3 = lVar8;
        }
      }
      else {
        lVar3 = *(long *)(param_4 + 0x28);
        if (lVar6 == 0) {
          if (lVar3 < 1) goto LAB_00343290;
        }
        else {
          lVar8 = *(long *)(lVar6 + 0x28);
          if (lVar3 <= *(long *)(lVar6 + 0x28)) goto LAB_00343164;
        }
      }
      *(long *)(lVar10 + 0x28) = lVar3 + 1;
      lVar6 = *(long *)(param_5 + 0x20);
      if (lVar6 != 0) {
        FUN_0038da60(lVar6);
      }
    }
    lVar8 = FUN_0038c780(0x30);
    FUN_0038da50(lVar8,1);
    *(undefined8 *)(lVar8 + 8) = uVar1;
    *(undefined8 *)(lVar8 + 0x10) = uVar2;
    *(long *)(lVar8 + 0x18) = lVar10;
    *(long *)(lVar8 + 0x20) = lVar6;
    lVar10 = *(long *)(lVar10 + 0x28);
    if (lVar6 == 0) {
      if (0 < lVar10) goto LAB_00343304;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(lVar6 + 0x28);
      if (*(long *)(lVar6 + 0x28) < lVar10) {
LAB_00343304:
        lVar3 = lVar10;
      }
    }
    *(long *)(lVar8 + 0x28) = lVar3 + 1;
    goto LAB_00343430;
  }
  if (lVar6 != 2) {
    lVar6 = FUN_0038c780(0x30);
    FUN_0038da50(lVar6,1);
    *(undefined8 *)(lVar6 + 8) = param_2;
    *(undefined8 *)(lVar6 + 0x10) = param_3;
    *(long *)(lVar6 + 0x18) = param_4;
    *(long *)(lVar6 + 0x20) = param_5;
    if (param_4 == 0) {
      if ((param_5 == 0) || (lVar10 = *(long *)(param_5 + 0x28), *(long *)(param_5 + 0x28) < 0))
      goto LAB_00343134;
    }
    else {
      lVar8 = *(long *)(param_4 + 0x28);
      if (param_5 == 0) {
        if (0 < lVar8) goto LAB_00343138;
LAB_00343134:
        lVar8 = 0;
        goto LAB_00343138;
      }
      lVar10 = *(long *)(param_5 + 0x28);
      if (*(long *)(param_5 + 0x28) < lVar8) goto LAB_00343138;
    }
    lVar8 = lVar10;
LAB_00343138:
    *(long *)(lVar6 + 0x28) = lVar8 + 1;
    return lVar6;
  }
  lVar6 = 0;
  if (*(long *)(param_4 + 0x18) != 0) {
    lVar6 = *(long *)(*(long *)(param_4 + 0x18) + 0x28);
  }
  lVar10 = *(long *)(param_4 + 0x20);
  if (lVar10 == 0) {
    pcVar7 = *(code **)(param_1 + 8);
    if (lVar6 == -1) goto LAB_00343048;
LAB_00342e60:
    uVar1 = (*pcVar7)(*(undefined8 *)(param_4 + 8),param_6);
    uVar2 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_4 + 0x10),param_6);
    lVar6 = *(long *)(param_4 + 0x18);
    if (lVar6 != 0) {
      FUN_0038da60(lVar6);
    }
    lVar10 = *(long *)(param_4 + 0x20);
    if (lVar10 != 0) {
      FUN_0038da60(lVar10);
    }
    lVar3 = FUN_0038c780(0x30);
    FUN_0038da50(lVar3,1);
    *(undefined8 *)(lVar3 + 8) = param_2;
    *(undefined8 *)(lVar3 + 0x10) = param_3;
    *(long *)(lVar3 + 0x18) = lVar10;
    *(long *)(lVar3 + 0x20) = param_5;
    if (lVar10 == 0) {
      if ((param_5 == 0) || (lVar10 = *(long *)(param_5 + 0x28), *(long *)(param_5 + 0x28) < 0)) {
LAB_00343174:
        lVar8 = 0;
      }
      else {
LAB_00343124:
        lVar8 = lVar10;
      }
    }
    else {
      lVar8 = *(long *)(lVar10 + 0x28);
      if (param_5 == 0) {
        if (lVar8 < 1) goto LAB_00343174;
      }
      else {
        lVar10 = *(long *)(param_5 + 0x28);
        if (lVar8 <= *(long *)(param_5 + 0x28)) goto LAB_00343124;
      }
    }
    *(long *)(lVar3 + 0x28) = lVar8 + 1;
    lVar8 = FUN_0038c780(0x30);
    FUN_0038da50(lVar8,1);
    *(undefined8 *)(lVar8 + 8) = uVar1;
    *(undefined8 *)(lVar8 + 0x10) = uVar2;
    *(long *)(lVar8 + 0x18) = lVar6;
    *(long *)(lVar8 + 0x20) = lVar3;
    if (lVar6 == 0) {
      lVar6 = *(long *)(lVar3 + 0x28);
      if (-1 < *(long *)(lVar3 + 0x28)) goto LAB_003431bc;
      lVar10 = 1;
    }
    else {
      lVar10 = *(long *)(lVar6 + 0x28);
      lVar6 = *(long *)(lVar3 + 0x28);
      if (lVar10 <= *(long *)(lVar3 + 0x28)) {
LAB_003431bc:
        lVar10 = lVar6;
      }
      lVar10 = lVar10 + 1;
    }
  }
  else {
    pcVar7 = *(code **)(param_1 + 8);
    if (lVar6 - *(long *)(lVar10 + 0x28) != -1) goto LAB_00342e60;
LAB_00343048:
    uVar1 = (*pcVar7)(*(undefined8 *)(lVar10 + 8),param_6);
    uVar2 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(*(long *)(param_4 + 0x20) + 0x10),param_6)
    ;
    uVar4 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_4 + 8),param_6);
    uVar5 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_4 + 0x10),param_6);
    lVar6 = *(long *)(param_4 + 0x18);
    if (lVar6 != 0) {
      FUN_0038da60(lVar6);
    }
    lVar10 = *(long *)(*(long *)(param_4 + 0x20) + 0x18);
    if (lVar10 != 0) {
      FUN_0038da60(lVar10);
    }
    lVar3 = FUN_0038c780(0x30);
    FUN_0038da50(lVar3,1);
    *(undefined8 *)(lVar3 + 8) = uVar4;
    *(undefined8 *)(lVar3 + 0x10) = uVar5;
    *(long *)(lVar3 + 0x18) = lVar6;
    *(long *)(lVar3 + 0x20) = lVar10;
    if (lVar6 == 0) {
      if ((lVar10 == 0) || (lVar6 = *(long *)(lVar10 + 0x28), *(long *)(lVar10 + 0x28) < 0)) {
LAB_0034332c:
        lVar8 = 0;
      }
      else {
LAB_003431d4:
        lVar8 = lVar6;
      }
    }
    else {
      lVar8 = *(long *)(lVar6 + 0x28);
      if (lVar10 == 0) {
        if (lVar8 < 1) goto LAB_0034332c;
      }
      else {
        lVar6 = *(long *)(lVar10 + 0x28);
        if (lVar8 <= *(long *)(lVar10 + 0x28)) goto LAB_003431d4;
      }
    }
    *(long *)(lVar3 + 0x28) = lVar8 + 1;
    lVar6 = *(long *)(*(long *)(param_4 + 0x20) + 0x20);
    if (lVar6 != 0) {
      FUN_0038da60(lVar6);
    }
    lVar10 = FUN_0038c780(0x30);
    FUN_0038da50(lVar10,1);
    *(undefined8 *)(lVar10 + 8) = param_2;
    *(undefined8 *)(lVar10 + 0x10) = param_3;
    *(long *)(lVar10 + 0x18) = lVar6;
    *(long *)(lVar10 + 0x20) = param_5;
    if (lVar6 == 0) {
      if ((param_5 == 0) || (lVar6 = *(long *)(param_5 + 0x28), *(long *)(param_5 + 0x28) < 0)) {
LAB_003433cc:
        lVar8 = 0;
      }
      else {
LAB_00343398:
        lVar8 = lVar6;
      }
    }
    else {
      lVar8 = *(long *)(lVar6 + 0x28);
      if (param_5 == 0) {
        if (lVar8 < 1) goto LAB_003433cc;
      }
      else {
        lVar6 = *(long *)(param_5 + 0x28);
        if (lVar8 <= *(long *)(param_5 + 0x28)) goto LAB_00343398;
      }
    }
    *(long *)(lVar10 + 0x28) = lVar8 + 1;
    lVar8 = FUN_0038c780(0x30);
    FUN_0038da50(lVar8,1);
    *(undefined8 *)(lVar8 + 8) = uVar1;
    *(undefined8 *)(lVar8 + 0x10) = uVar2;
    *(long *)(lVar8 + 0x18) = lVar3;
    *(long *)(lVar8 + 0x20) = lVar10;
    lVar6 = *(long *)(lVar3 + 0x28);
    if (lVar10 == 0) {
      if (0 < lVar6) goto LAB_00343414;
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(lVar10 + 0x28);
      if (lVar10 < lVar6) {
LAB_00343414:
        lVar10 = lVar6;
      }
    }
    lVar10 = lVar10 + 1;
  }
  *(long *)(lVar8 + 0x28) = lVar10;
  param_5 = param_4;
LAB_00343430:
  FUN_00342a80(param_1,param_5,param_6);
  return lVar8;
}


