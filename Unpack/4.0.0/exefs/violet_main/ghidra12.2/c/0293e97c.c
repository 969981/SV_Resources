/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293e97c; name: FUN_0293e97c
 */


void FUN_0293e97c(undefined8 param_1,byte *param_2,undefined4 *param_3)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  *param_2 = 0;
  FUN_01582534();
  uVar4 = FUN_014813e4();
  uVar5 = FUN_01481400(uVar4,*param_3);
  if ((uVar5 & 1) == 0) {
    return;
  }
  plVar6 = (long *)FUN_014813f4(param_1,*param_3);
  uVar5 = (**(code **)(*plVar6 + 0x200))();
  if ((uVar5 & 1) != 0) {
    return;
  }
  lVar7 = FUN_018d5ce0(param_1,*param_3);
  if (lVar7 != 0) {
    uVar4 = FUN_01a6acfc();
    uVar5 = thunk_FUN_021eca0c(uVar4,*(undefined2 *)(lVar7 + 0x718));
    if ((uVar5 & 1) != 0) {
      return;
    }
    uVar5 = FUN_01780124(lVar7);
    if ((uVar5 & 1) != 0) {
      return;
    }
  }
  uVar4 = FUN_01582534(param_1);
  uVar5 = FUN_02959670(uVar4,*param_3);
  if ((uVar5 & 1) != 0) {
    return;
  }
  uVar3 = (**(code **)(*plVar6 + 0x2f8))(plVar6);
  uVar4 = FUN_01243584(param_1);
  bVar2 = FUN_02982f00(uVar4,*param_3,*(undefined2 *)(param_3 + 1),param_3[2]);
  if ((bVar2 & 1) == 0) {
    if (*(char *)(param_3 + 3) != '\0') goto LAB_0293eabc;
LAB_0293eacc:
    if (*(char *)((long)param_3 + 0xd) != '\0') {
      uVar4 = FUN_01243584(param_1);
      FUN_0297ee68(uVar4,*param_3,0x237);
    }
    if ((bVar2 & 1) == 0) goto LAB_0293eabc;
  }
  else {
    if (*(char *)((long)param_3 + 0xe) != '\0') {
      uVar4 = FUN_01243584(param_1);
      FUN_0197495c(uVar4,plVar6);
    }
    if (*(char *)(param_3 + 3) == '\0') {
      uVar1 = *(ushort *)(param_3 + 1);
      if ((uVar1 == uVar3) || (((uVar1 ^ uVar1 >> 5) & 0x1f) != 0)) goto LAB_0293eacc;
      uVar4 = FUN_01243584(param_1);
      FUN_02982f60(uVar4,*param_3,0x120,*param_3,uVar1 & 0x1f);
    }
  }
  uVar5 = FUN_018ce3ac(param_3 + 4);
  if ((uVar5 & 1) != 0) {
    uVar4 = FUN_01243584(param_1);
    FUN_0124b0ac(uVar4,*param_3,param_3 + 4);
  }
  if (*(char *)((long)param_3 + 0xe) != '\0') {
    uVar4 = FUN_01243584(param_1);
    FUN_018521d8(uVar4,plVar6);
  }
LAB_0293eabc:
  *param_2 = bVar2 & 1;
  return;
}


