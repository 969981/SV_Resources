/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ccd35c; name: FUN_00ccd35c
 */


undefined1  [16] FUN_00ccd35c(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  long local_d0;
  undefined1 auStack_c8 [24];
  undefined8 local_b0;
  long *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 auStack_90 [64];
  undefined1 *local_38;
  
  iVar1 = param_3[2];
  iVar2 = *param_3;
  lVar6 = (long)iVar2 << 4;
  (**(code **)PTR_DAT_047e1c68)(auStack_90);
  (**(code **)PTR_DAT_047e1c70)(auStack_90,param_2[2]);
  (**(code **)PTR_DAT_047e1c78)(auStack_90,(ulong)((char)param_3[6] == '\0') << 1);
  (**(code **)PTR_DAT_047e1c80)(auStack_90,lVar6);
  (**(code **)PTR_DAT_047e1c88)(auStack_90,(long)param_3[1]);
  (**(code **)PTR_DAT_047e1c90)(auStack_90,(long)iVar1 << 4);
  uVar5 = 1000;
  if (param_3[3] != 0) {
    uVar5 = 10;
  }
  (**(code **)PTR_DAT_047e1c98)(auStack_90,uVar5);
  if (0xff < iVar2) {
    (**(code **)PTR_DAT_047e1ca0)(auStack_90,lVar6);
  }
  uVar3 = (**(code **)PTR_DAT_047e1ca8)(auStack_90);
  plVar7 = (long *)*param_2;
  uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,uVar3,0x1000);
  local_98 = 0x1000;
  local_a8 = plVar7;
  uStack_a0 = uVar3;
  (**(code **)PTR_DAT_047e1cb0)(auStack_90,uVar4,uVar3);
  local_38 = auStack_90;
  FUN_00ccd600(&local_d0,*param_2,&local_38);
  lVar6 = local_d0;
  local_b0 = 0;
  FUN_00ccd574(local_d0 + 0x2000,uVar4);
  *(undefined8 *)(lVar6 + 0x2018) = local_98;
  *(undefined8 *)(&DAT_00002010 + lVar6) = uStack_a0;
  *(long **)(&DAT_00002008 + lVar6) = local_a8;
  auVar8 = FUN_00ccd6e0(param_1,&local_d0);
  lVar6 = local_d0;
  local_d0 = 0;
  if (lVar6 != 0) {
    FUN_00cdf7a4(auStack_c8);
  }
  FUN_00ccd574(&local_b0,0);
  return auVar8;
}


