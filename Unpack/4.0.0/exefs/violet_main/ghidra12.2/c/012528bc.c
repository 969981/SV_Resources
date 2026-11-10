/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012528bc; name: FUN_012528bc
 */


void FUN_012528bc(undefined8 param_1,undefined1 *param_2,long *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  *param_2 = 0;
  if (*param_3 == 0) {
    return;
  }
  FUN_0124e480();
  iVar2 = FUN_01921d0c();
  if (iVar2 == 0) {
    if (((char)param_3[1] == '\0') && (uVar4 = FUN_01a8beac(param_1,*param_3), (uVar4 & 1) != 0)) {
      return;
    }
    uVar5 = FUN_0123de68(param_1);
    uVar4 = FUN_02980090(uVar5,0);
    if ((uVar4 & 1) != 0) goto LAB_01252958;
    if (*(char *)((long)param_3 + 9) != '\0') {
      lVar6 = *param_3;
      uVar5 = FUN_01246e90(param_1);
      uVar4 = FUN_0293055c(uVar5,lVar6);
      if ((uVar4 & 1) != 0) goto LAB_01252948;
    }
    FUN_01a608b0(param_1,*param_3);
  }
  else {
    uVar4 = FUN_0297d8c8(param_1);
    if ((uVar4 & 1) == 0) goto LAB_01252958;
    uVar5 = FUN_0123de68(param_1);
    uVar4 = FUN_02980090(uVar5,0);
    if ((uVar4 & 1) != 0) goto LAB_01252958;
    uVar5 = FUN_01243584(param_1);
    uVar3 = (**(code **)(*(long *)*param_3 + 0x98))();
    FUN_0297ee68(uVar5,uVar3,0x2bf);
  }
LAB_01252948:
  uVar5 = FUN_0123de68(param_1);
  FUN_029800a0(uVar5,0);
LAB_01252958:
  uVar3 = (**(code **)(*(long *)*param_3 + 0x98))();
  uVar1 = FUN_01689a40(param_1,uVar3);
  uVar5 = FUN_01243584(param_1);
  FUN_012529f0(uVar5,uVar1);
  *param_2 = 1;
  return;
}


