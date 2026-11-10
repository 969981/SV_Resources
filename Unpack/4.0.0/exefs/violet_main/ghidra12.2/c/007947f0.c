/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007947f0; name: FUN_007947f0
 */


void FUN_007947f0(int *param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 local_48 [4];
  undefined4 local_38 [2];
  
  if ((param_3 == 0) || (param_4 == 0)) {
    local_48[0] = 0x10407;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x40);
    if (param_4 <= uVar1) {
      if ((ulong)uVar1 < *(long *)(param_2 + 0x18) + (ulong)param_4 + 6) {
        uVar1 = (uVar1 - (int)*(long *)(param_2 + 0x18)) - 6;
        FUN_007947f0(param_1,param_2,param_3,uVar1);
        if (*param_1 == 0) {
          FUN_007947f0(local_48,param_2,param_3 + (ulong)uVar1,param_4 - uVar1);
          FUN_018ff39c(param_1,local_48);
          return;
        }
        return;
      }
      *(long *)(param_2 + 0x20) = param_3;
      *(uint *)(param_2 + 0x28) = param_4;
      iVar2 = FUN_0037ca30(param_2 + 0x20,2);
      if ((iVar2 == 0) && (*(int *)(param_2 + 0x28) == 0)) {
        local_48[0] = 0;
        goto LAB_007948c0;
      }
    }
    local_48[0] = 0x10404;
  }
LAB_007948c0:
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_00cbd7c0(param_1,local_48);
  return;
}


