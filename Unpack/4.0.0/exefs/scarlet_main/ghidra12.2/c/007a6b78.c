/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a6b78; name: FUN_007a6b78
 */


void FUN_007a6b78(undefined8 param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined8 local_50;
  int local_40 [4];
  undefined4 local_28 [2];
  
  piVar3 = (int *)&local_50;
  if ((param_3 == 0) || (param_4 == 0)) {
LAB_007a6bd4:
    local_40[0] = 0x10407;
  }
  else {
    if (*(int *)(*(long *)(param_2 + 0x78) + 0x1c0) == 0) {
      uVar1 = FUN_0284c4c8(param_4);
      uVar2 = (**(code **)(**(long **)(param_2 + 0x78) + 0xf0))();
      if (uVar1 <= uVar2) {
        FUN_007a6294(local_40,param_2,param_3,8);
        if (local_40[0] == 0) {
          local_50 = 0;
          FUN_007935cc(&local_50);
          *(undefined4 *)(param_2 + 200) = 6;
          *(ulong *)(param_2 + 0xc0) = local_50;
          local_50 = local_50 & 0xffffffff00000000;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,0x10408);
        }
        local_28[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_50 | 4),(Result *)local_28);
        goto LAB_007a6bf8;
      }
      goto LAB_007a6bd4;
    }
    local_40[0] = 0x4c11;
  }
  local_50 = (ulong)local_50._4_4_ << 0x20;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)&local_50);
  piVar3 = local_40;
LAB_007a6bf8:
  FUN_00cbd7c0(param_1,piVar3);
  return;
}


