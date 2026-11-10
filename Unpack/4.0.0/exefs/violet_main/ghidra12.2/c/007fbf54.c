/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fbf54; name: FUN_007fbf54
 */


void FUN_007fbf54(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  int local_60 [4];
  int local_50 [4];
  int local_40;
  undefined4 uStack_3c;
  
  local_50[0] = 0;
  local_40 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)&local_40);
  lVar5 = *(long *)(param_3 + 8);
  if (lVar5 == 0) {
    iVar2 = nn::account::GetNetworkServiceAccountId
                      ((NetworkServiceAccountId *)&local_40,(UserHandle *)(param_4 + 8));
    lVar5 = CONCAT44(uStack_3c,local_40);
    if (iVar2 != 0) {
      lVar5 = 0;
    }
  }
  lVar3 = (**(code **)(*param_2 + 0xc0))(param_2);
  FUN_0278a178(&local_40,lVar3 + 0x18,param_3 + 0x18);
  lVar3 = (**(code **)(*param_2 + 0xc0))(param_2);
  FUN_0278a178(&local_40,lVar3 + 0x148,param_3 + 0x148);
  lVar3 = (**(code **)(*param_2 + 0xc0))(param_2);
  *(long *)(lVar3 + 8) = lVar5;
  uVar1 = *(undefined1 *)(param_3 + 0x10);
  lVar5 = (**(code **)(*param_2 + 0xc0))(param_2);
  *(undefined1 *)(lVar5 + 0x10) = uVar1;
  lVar5 = (**(code **)(*param_2 + 0xc0))(param_2);
  FUN_0278a178(&local_40,lVar5 + 0x278,param_3 + 0x278);
  local_40 = 0;
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_40 | 4),(Result *)local_60);
  FUN_018ff39c(param_2 + 5,&local_40);
  FUN_007fc210(local_60,param_2);
  if ((local_60[0] != 0) && (0 < *(int *)(param_2[0x191] + 4))) {
    FUN_00792300(&local_40);
    FUN_018ff39c(local_60,&local_40);
  }
  FUN_018ff39c(local_50,local_60);
  if (local_50[0] == 0) {
    *(undefined1 *)((long)param_2 + 9) = 3;
    local_40 = 0;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_40 | 4),(Result *)local_60);
    piVar4 = &local_40;
  }
  else {
    FUN_018ff39c(param_2 + 5,local_50);
    *(undefined1 *)((long)param_2 + 9) = 5;
    piVar4 = local_50;
  }
  FUN_00cbd7c0(param_1,piVar4);
  return;
}


