/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a6a40; name: FUN_007a6a40
 */


void FUN_007a6a40(undefined8 param_1,long param_2,long param_3,long param_4,uint param_5,int param_6
                 ,long param_7)

{
  uint uVar1;
  int *piVar2;
  undefined8 local_60;
  int local_50 [4];
  undefined4 local_38 [2];
  
  piVar2 = (int *)&local_60;
  if (((param_3 == 0) || (param_4 == 0)) || (param_7 == 0)) {
LAB_007a6ad8:
    local_50[0] = 0x10407;
  }
  else {
    if (*(int *)(*(long *)(param_2 + 0x78) + 0x1c0) == 0) {
      if ((param_6 != 0) && (uVar1 = FUN_007d2cc8(param_7), param_5 < (uVar1 & 0xffff))) {
        FUN_007a6294(local_50,param_2,param_3,7);
        if (local_50[0] == 0) {
          *(uint *)(param_2 + 0x98) = param_5;
          *(int *)(param_2 + 0x9c) = param_6;
          *(long *)(param_2 + 0x90) = param_7;
          local_60 = 0;
          FUN_007935cc(&local_60);
          *(undefined4 *)(param_2 + 200) = 2;
          *(char **)(param_2 + 0x40) = "NetBackgroundProcessJob::StartSearchNetwork";
          *(undefined8 *)(param_2 + 0x30) = 0x108;
          *(undefined8 *)(param_2 + 0x38) = 1;
          *(ulong *)(param_2 + 0xc0) = local_60;
          local_60 = local_60 & 0xffffffff00000000;
        }
        else {
          local_60 = CONCAT44(local_60._4_4_,0x10408);
        }
        local_38[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_60 | 4),(Result *)local_38);
        goto LAB_007a6afc;
      }
      goto LAB_007a6ad8;
    }
    local_50[0] = 0x4c11;
  }
  local_60 = (ulong)local_60._4_4_ << 0x20;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)&local_60);
  piVar2 = local_50;
LAB_007a6afc:
  FUN_00cbd7c0(param_1,piVar2);
  return;
}


