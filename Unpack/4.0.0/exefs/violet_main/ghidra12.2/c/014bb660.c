/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014bb660; name: FUN_014bb660
 */


void FUN_014bb660(long *param_1,long *param_2,undefined4 param_3,long param_4,long param_5,
                 uint param_6)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  
  uVar2 = (**(code **)(*param_2 + 0x160))(param_2);
  uVar3 = (**(code **)(*param_1 + 0x160))(param_1);
  uVar4 = (**(code **)(*param_1 + 0x160))(param_1);
  if ((uVar4 & 0xffff) == (uVar2 & 0xffff)) {
    return;
  }
  uVar4 = (**(code **)(*param_1 + 0x160))(param_1);
  if ((uVar4 & 0xffff) == (uVar2 & 0xffff)) {
    return;
  }
  uVar7 = FUN_019d69c4(param_4,uVar2);
  if ((uVar7 & 1) != 0) {
    uVar8 = FUN_015c2764(param_5);
    iVar5 = FUN_02994fcc(uVar8,param_3,uVar2);
    if (iVar5 == 0) {
      lVar10 = *param_1;
      uVar2 = 0;
      goto LAB_014bb75c;
    }
    plVar9 = (long *)FUN_018d5cec(*(undefined8 *)(param_5 + 0x30),iVar5);
    if ((plVar9 == (long *)0x0) || (sVar1 = (**(code **)(*plVar9 + 0x2a8))(), sVar1 == 0)) {
      lVar10 = *param_1;
      uVar2 = 0;
      goto LAB_014bb75c;
    }
  }
  lVar10 = *param_1;
LAB_014bb75c:
  (**(code **)(lVar10 + 0x168))(param_1,uVar2);
  uVar2 = FUN_0159fe8c(param_4);
  if (((param_6 == (uVar2 & 0xff)) && ((uVar3 & 0xffff) != 0)) &&
     (*(int *)(*(long *)(param_4 + 0x38) + 0x30) == 0)) {
    uVar8 = FUN_015c2764(param_5);
    iVar5 = FUN_0297bbf4(uVar8,param_3,uVar3);
    if (iVar5 != 0) {
      uVar6 = FUN_011e2da8(*(undefined8 *)(param_5 + 0x290),iVar5);
      plVar9 = (long *)FUN_01021c94(*(undefined8 *)(param_5 + 0x30),iVar5);
      if (((plVar9 != (long *)0x0) && (uVar7 = (**(code **)(*plVar9 + 0x7b8))(), (uVar7 & 1) == 0))
         && (uVar7 = FUN_01242ecc(*(undefined8 *)(param_5 + 0x290),param_6,uVar6), (uVar7 & 1) == 0)
         ) {
        FUN_020fe744(param_4,param_6,uVar3);
        return;
      }
    }
  }
  return;
}


