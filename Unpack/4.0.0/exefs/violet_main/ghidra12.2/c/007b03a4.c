/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007b03a4; name: FUN_007b03a4
 */


void FUN_007b03a4(int *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  int *piVar4;
  int local_68 [4];
  int local_58 [6];
  undefined2 local_40;
  undefined4 local_38 [2];
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x1240));
  if (*(long *)(param_2 + 0x1238) != 0) {
    FUN_00792140(param_1,*(long *)(param_2 + 0x1238),2,2,0x11);
    if (*param_1 != 0) goto LAB_007b0534;
    FUN_0284e338(local_58);
    local_40 = 0x3039;
    FUN_007923b4(local_68,*(undefined8 *)(param_2 + 0x1238),local_58,0xffffffff,0);
    FUN_018ff39c(param_1,local_68);
    if (*param_1 != 0) {
      FUN_0284e3d4(local_58);
      goto LAB_007b0534;
    }
    FUN_00792718(local_68,*(undefined8 *)(param_2 + 0x1238),1);
    FUN_018ff39c(param_1,local_68);
    iVar1 = *param_1;
    FUN_0284e3d4(local_58);
    if (iVar1 != 0) goto LAB_007b0534;
  }
  local_58[0] = 0;
  local_68[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_68);
  puVar2 = PTR_DAT_047d0860;
  lVar3 = FUN_007f72b0(*(undefined8 *)PTR_DAT_047d0860);
  FUN_00796ca4(local_68,lVar3 + 8,*(undefined8 *)(param_2 + 0x1238));
  FUN_018ff39c(local_58,local_68);
  if (local_58[0] == 0) {
    FUN_00796c58(local_68,lVar3 + 8);
    FUN_018ff39c(local_58,local_68);
    if (local_58[0] != 0) goto LAB_007b0528;
    lVar3 = FUN_007f72c8(*(undefined8 *)puVar2);
    FUN_00796ca4(local_68,lVar3 + 8,*(undefined8 *)(param_2 + 0x1238));
    FUN_018ff39c(local_58,local_68);
    if (local_58[0] != 0) goto LAB_007b0528;
    FUN_00796c58(local_68,lVar3 + 8);
    FUN_018ff39c(local_58,local_68);
    if (local_58[0] != 0) goto LAB_007b0528;
    local_68[0] = 0;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_38);
    piVar4 = local_68;
  }
  else {
LAB_007b0528:
    piVar4 = local_58;
  }
  FUN_00cbd7c0(param_1,piVar4);
LAB_007b0534:
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x1240));
  return;
}


