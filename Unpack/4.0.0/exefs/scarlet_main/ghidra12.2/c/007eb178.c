/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007eb178; name: FUN_007eb178
 */


void FUN_007eb178(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long *param_5,
                 int param_6)

{
  uint uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong local_70 [2];
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38 [2];
  
  puVar3 = local_70;
  local_50[0] = 0;
  local_60[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
  uVar1 = (**(code **)(*param_5 + 0x48))(param_5);
  FUN_007e8a5c(local_60,param_2,param_3,uVar1 & 1);
  FUN_018ff39c(local_50,local_60);
  if (local_50[0] == 0) {
    if (param_4 == 0) {
      local_60[0] = 0x10407;
    }
    else {
      if (*(long *)(param_2 + 0x40) == 0) {
        *(long *)(param_2 + 0x40) = param_4;
        *(long **)(param_2 + 0x700) = param_5;
        local_70[0] = 0;
        FUN_007935cc(local_70);
        FUN_007c70fc(local_60,local_70[0] & 0xffffffff);
        uVar2 = FUN_007c71ac(local_60);
        *(undefined8 *)(param_2 + 0x718) = uVar2;
        if (param_6 == 0) {
          local_70[0] = CONCAT44(local_70[0]._4_4_,0x10407);
        }
        else {
          *(int *)(param_2 + 0x708) = param_6;
          memset((void *)(param_2 + 0x710),0,4);
          local_70[0] = local_70[0] & 0xffffffff00000000;
        }
        local_38[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_38);
        goto LAB_007eb2b0;
      }
      local_60[0] = 0x10408;
    }
    local_70[0] = local_70[0] & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_70);
    puVar3 = (ulong *)local_60;
  }
  else {
    puVar3 = (ulong *)local_50;
  }
LAB_007eb2b0:
  FUN_00cbd7c0(param_1,puVar3);
  return;
}


