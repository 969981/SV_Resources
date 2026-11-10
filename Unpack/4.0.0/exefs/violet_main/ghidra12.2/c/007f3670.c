/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f3670; name: FUN_007f3670
 */


void FUN_007f3670(undefined8 param_1,long *param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  char cVar2;
  short sVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  Result *pRVar10;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  int local_78 [5];
  undefined1 auStack_64 [12];
  int local_58 [4];
  int local_48 [2];
  undefined4 local_38;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_047d0860;
  pRVar10 = (Result *)&local_80;
  uVar4 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  FUN_007f4e70(local_48,uVar4,0);
  if (local_48[0] == 0) {
    local_58[0] = 0;
LAB_007f36f4:
    local_78[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_78);
  }
  else {
    cVar2 = FUN_007ec4f0(param_2);
    if ((cVar2 == -3) || (lVar8 = param_4[3], sVar3 = FUN_007ec4c0(param_2), (short)lVar8 == sVar3))
    {
      local_58[0] = 0x10408;
      goto LAB_007f36f4;
    }
    local_34 = 0;
    (**(code **)(*param_4 + 0x10))(local_58,param_4,auStack_64,&local_34,0xb);
    if (local_58[0] != 0) {
      local_78[0] = 0x10408;
      local_80 = 0;
LAB_007f387c:
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_78 | 4),pRVar10);
      piVar9 = local_78;
      goto LAB_007f370c;
    }
    local_80 = 0;
    local_7c = 0;
    local_7a = 0;
    plVar5 = (long *)FUN_007ec544(param_2);
    plVar6 = (long *)FUN_007f72c8(*(undefined8 *)puVar1);
    uVar7 = (**(code **)(*plVar6 + 0x48))();
    if ((uVar7 & 1) == 0) {
LAB_007f37c0:
      if (param_3 == 0) goto LAB_007f37fc;
      local_78[0] = (**(code **)(*param_2 + 0x18))(param_2);
      lVar8 = (**(code **)(*plVar5 + 0x68))(plVar5,local_78,param_3,local_34,&local_80);
    }
    else {
      plVar6 = (long *)FUN_007f72c8(*(undefined8 *)puVar1);
      uVar7 = (**(code **)(*plVar6 + 0x50))();
      if ((uVar7 & 1) == 0) goto LAB_007f37c0;
LAB_007f37fc:
      local_78[0] = (**(code **)(*param_2 + 0x18))(param_2);
      lVar8 = (**(code **)(*plVar5 + 0x70))(plVar5,local_78,local_34,&local_80);
    }
    if (lVar8 == 0) {
      local_78[0] = 0x4c0d;
LAB_007f3874:
      pRVar10 = (Result *)&local_38;
      local_38 = 0;
      goto LAB_007f387c;
    }
    FUN_007eba90(local_78,plVar5,auStack_64);
    FUN_018ff39c(local_58,local_78);
    if (local_58[0] == 0) {
      local_78[0] = 0;
      goto LAB_007f3874;
    }
  }
  piVar9 = local_58;
LAB_007f370c:
  FUN_00cbd7c0(param_1,piVar9);
  return;
}


