/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003428a0; name: FUN_003428a0
 */


long FUN_003428a0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 == 0) {
    lVar1 = FUN_0038c780(0x30);
    FUN_0038da50(lVar1,1);
    *(undefined8 *)(lVar1 + 8) = param_3;
    *(undefined8 *)(lVar1 + 0x10) = param_4;
    *(undefined8 *)(lVar1 + 0x28) = 1;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    return lVar1;
  }
  lVar1 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_2 + 8),param_3,param_5);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_2 + 8),param_5);
    uVar3 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_2 + 0x10),param_5);
    lVar6 = *(long *)(param_2 + 0x18);
    if (lVar1 < 1) {
      if (lVar6 != 0) {
        FUN_0038da60(lVar6);
      }
      lVar1 = FUN_003428a0(param_1,*(undefined8 *)(param_2 + 0x20),param_3,param_4,param_5);
    }
    else {
      lVar6 = FUN_003428a0(param_1,lVar6,param_3,param_4,param_5);
      lVar1 = *(long *)(param_2 + 0x20);
      if (lVar1 != 0) {
        FUN_0038da60(lVar1);
      }
    }
    lVar1 = FUN_00342de0(param_1,uVar2,uVar3,lVar6,lVar1,param_5);
    return lVar1;
  }
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 != 0) {
    FUN_0038da60(lVar1);
  }
  lVar6 = *(long *)(param_2 + 0x20);
  if (lVar6 != 0) {
    FUN_0038da60(lVar6);
  }
  lVar4 = FUN_0038c780(0x30);
  FUN_0038da50(lVar4,1);
  *(undefined8 *)(lVar4 + 8) = param_3;
  *(undefined8 *)(lVar4 + 0x10) = param_4;
  *(long *)(lVar4 + 0x18) = lVar1;
  *(long *)(lVar4 + 0x20) = lVar6;
  if (lVar1 == 0) {
    if ((lVar6 == 0) || (lVar1 = *(long *)(lVar6 + 0x28), *(long *)(lVar6 + 0x28) < 0))
    goto LAB_00342a50;
  }
  else {
    lVar5 = *(long *)(lVar1 + 0x28);
    if (lVar6 == 0) {
      if (0 < lVar5) goto LAB_00342a54;
LAB_00342a50:
      lVar5 = 0;
      goto LAB_00342a54;
    }
    lVar1 = *(long *)(lVar6 + 0x28);
    if (*(long *)(lVar6 + 0x28) < lVar5) goto LAB_00342a54;
  }
  lVar5 = lVar1;
LAB_00342a54:
  *(long *)(lVar4 + 0x28) = lVar5 + 1;
  return lVar4;
}


