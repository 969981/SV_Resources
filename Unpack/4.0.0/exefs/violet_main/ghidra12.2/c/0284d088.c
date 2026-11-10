/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0284d088; name: FUN_0284d088
 */


void FUN_0284d088(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  int local_38 [4];
  undefined4 local_28 [2];
  
  if ((**(int **)(param_2 + 0xa8) == 1) || (*(char *)(param_2 + 0x470) == '\0')) {
LAB_0284d0c8:
    local_38[0] = 0x10408;
  }
  else {
    if (param_3 != 0) {
      uVar1 = FUN_0078cdf4(*(undefined8 *)(param_2 + 0x58));
      if ((uVar1 & 1) == 0) {
        if ((*(int *)(param_2 + 0xb0) != 0) && (**(int **)(param_2 + 0xa8) != 1)) {
          local_38[0] = 0;
          local_28[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
          FUN_018ff39c(param_2 + 0x120,local_38);
          FUN_0078cac8(*(undefined8 *)(param_2 + 0xa8));
          *(undefined4 *)(param_2 + 0xb0) = 0;
        }
        FUN_007e5c68(local_38,*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0xa8),
                     *(undefined8 *)(param_2 + 0x18),param_3);
        if (local_38[0] == 0) {
          *(undefined4 *)(param_2 + 0xb0) = 9;
          FUN_0078cd58(*(undefined8 *)(param_2 + 0x58),0);
        }
        goto LAB_0284d0e8;
      }
      goto LAB_0284d0c8;
    }
    local_38[0] = 0x10407;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
LAB_0284d0e8:
  FUN_00cbd7c0(param_1,local_38);
  return;
}


