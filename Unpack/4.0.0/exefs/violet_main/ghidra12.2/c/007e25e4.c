/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e25e4; name: FUN_007e25e4
 */


void FUN_007e25e4(undefined8 param_1,long param_2,long *param_3,int param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int *piVar6;
  int local_68 [4];
  int local_58 [4];
  undefined4 local_48 [2];
  
  if (0x17 < param_4 - 1U) {
    local_58[0] = 0x10407;
    local_68[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_68);
    piVar6 = local_58;
    goto LAB_007e2694;
  }
  FUN_007f45f4(local_58);
  if (local_58[0] != 0) goto LAB_007e264c;
  if (*(char *)(*(long *)PTR_DAT_047d0860 + 0x38) == '\0') {
    lVar1 = *(long *)PTR_DAT_047d0860 + 0x10;
    puVar4 = (undefined8 *)FUN_018ff6bc(lVar1,0x70);
    FUN_007f2f1c();
    iVar2 = FUN_018ff788(lVar1,puVar4,0x58000000);
    if (iVar2 == *(int *)PTR_DAT_047d0e88) {
      (**(code **)*puVar4)(puVar4);
      FUN_018ff540(lVar1,puVar4);
    }
    *(int *)(param_2 + 0xa4) = iVar2;
    if (iVar2 == 0) goto LAB_007e266c;
    uVar5 = FUN_00f21488(lVar1,iVar2,0x58);
    uVar3 = (**(code **)(*param_3 + 0x28))(param_3);
    FUN_007f2f78(local_68,uVar5,param_4,uVar3);
    FUN_018ff39c(local_58,local_68);
    FUN_007e23c4(local_68,param_2,param_4);
    FUN_018ff39c(local_58,local_68);
    if (local_58[0] != 0) {
LAB_007e264c:
      piVar6 = local_58;
      goto LAB_007e2694;
    }
    FUN_007e1e0c(local_68,param_2,param_4);
    FUN_018ff39c(local_58,local_68);
    if (local_58[0] != 0) goto LAB_007e264c;
    local_68[0] = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0xa4) = 0;
LAB_007e266c:
    local_68[0] = 0x10408;
  }
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_48);
  piVar6 = local_68;
LAB_007e2694:
  FUN_00cbd7c0(param_1,piVar6);
  return;
}


