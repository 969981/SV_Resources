/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f8e70; name: FUN_007f8e70
 */


void FUN_007f8e70(undefined8 param_1,long param_2,long param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6,undefined8 param_7,uint param_8)

{
  int *piVar1;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  if (*(long *)(param_2 + 0x700) == 0) {
    if (param_3 == 0) {
      local_38[0] = 0x10407;
      goto LAB_007f8e90;
    }
    FUN_007fa408(local_38,param_2,"Pia ReceiveThreadStream",param_5,param_6,param_4,param_7,0x19,
                 param_8 & 1);
    if (local_38[0] == 0) {
      if (*(long *)(param_2 + 200) != 0) {
        FUN_007f83d4(*(long *)(param_2 + 200),param_3);
      }
      *(long *)(param_2 + 0x700) = param_3;
      *(undefined4 *)(param_2 + 0x708) = 0;
      *(undefined8 *)(param_2 + 0x710) = 0;
      local_48[0] = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
      piVar1 = local_48;
      goto LAB_007f8eac;
    }
  }
  else {
    local_38[0] = 0x10402;
LAB_007f8e90:
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  }
  piVar1 = local_38;
LAB_007f8eac:
  FUN_00cbd7c0(param_1,piVar1);
  return;
}


