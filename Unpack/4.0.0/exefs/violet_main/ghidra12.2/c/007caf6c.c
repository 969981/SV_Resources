/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007caf6c; name: FUN_007caf6c
 */


void FUN_007caf6c(undefined8 param_1,undefined8 param_2,int *param_3,ulong param_4,byte param_5,
                 undefined4 param_6)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  int *piVar7;
  int local_70 [4];
  int local_60 [4];
  undefined4 local_48 [2];
  
  piVar7 = local_70;
  local_60[0] = 0;
  local_70[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_70);
  puVar3 = PTR_DAT_047d0860;
  lVar1 = *(long *)PTR_DAT_047d0860 + 0x10;
  cVar2 = *(char *)(*(long *)PTR_DAT_047d0860 + 0x38);
  if (param_5 == 0) {
    if (cVar2 != '\0') goto LAB_007cb03c;
    puVar5 = (undefined8 *)FUN_018ff6bc(lVar1,0x260);
    FUN_007cc18c();
    iVar4 = FUN_018ff788(lVar1,puVar5,param_4 & 0xffff | 0xb4000000);
    if (iVar4 == *(int *)PTR_DAT_047d0e88) {
      (**(code **)*puVar5)(puVar5);
      goto LAB_007cb0e0;
    }
LAB_007cb0e4:
    *param_3 = iVar4;
    if (iVar4 == 0) goto LAB_007cb040;
    plVar6 = (long *)FUN_00f21488(*(long *)puVar3 + 0x10,iVar4,0xb4);
    (**(code **)(*plVar6 + 0x60))(local_70,plVar6,param_6);
    FUN_018ff39c(local_60,local_70);
    if (local_60[0] != 0) {
      piVar7 = local_60;
      goto LAB_007cb064;
    }
    local_70[0] = 0;
  }
  else {
    if (cVar2 == '\0') {
      puVar5 = (undefined8 *)FUN_018ff6bc(lVar1,0x260);
      FUN_007cc18c();
      iVar4 = FUN_018ff788(lVar1,puVar5,param_4 & 0xffff | (ulong)param_5 << 0x10 | 0xb4000000);
      if (iVar4 == *(int *)PTR_DAT_047d0e88) {
        (**(code **)*puVar5)(puVar5);
LAB_007cb0e0:
        FUN_018ff540(lVar1,puVar5);
      }
      goto LAB_007cb0e4;
    }
LAB_007cb03c:
    *param_3 = 0;
LAB_007cb040:
    local_70[0] = 0x10408;
  }
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_48);
LAB_007cb064:
  FUN_00cbd7c0(param_1,piVar7);
  return;
}


