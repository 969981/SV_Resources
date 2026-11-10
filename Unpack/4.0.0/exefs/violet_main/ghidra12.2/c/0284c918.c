/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0284c918; name: FUN_0284c918
 */


void FUN_0284c918(undefined8 param_1,long param_2,long param_3)

{
  short sVar1;
  uint uVar2;
  int local_38 [4];
  undefined4 local_28 [2];
  
  if (*(long **)(param_2 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x60) + 0x10))();
  }
  if (param_3 == 0) {
LAB_0284c98c:
    local_38[0] = 0x10407;
  }
  else {
    if (((**(int **)(param_2 + 0xa8) != 1) && (*(char *)(param_2 + 0x470) != '\0')) &&
       (sVar1 = FUN_007d2cc8(*(undefined8 *)(param_2 + 0x60)), sVar1 != 0)) {
      if ((*(int *)(param_3 + 0x10) == 0) ||
         (uVar2 = FUN_007d2cc8(*(undefined8 *)(param_2 + 0x60)),
         *(uint *)(param_3 + 0xc) <= (uVar2 & 0xffff))) {
        if ((*(int *)(param_2 + 0xb0) != 0) && (**(int **)(param_2 + 0xa8) != 1)) {
          local_38[0] = 0;
          local_28[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
          FUN_018ff39c(param_2 + 0x120,local_38);
          FUN_0078cac8(*(undefined8 *)(param_2 + 0xa8));
          *(undefined4 *)(param_2 + 0xb0) = 0;
        }
        FUN_007cfc58(local_38,*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_2 + 0xa8),
                     param_3,*(undefined8 *)(param_2 + 0x60));
        if (local_38[0] == 0) {
          FUN_0078cd58(*(undefined8 *)(param_2 + 0x40),0);
          *(undefined4 *)(param_2 + 0xb0) = 2;
        }
        goto LAB_0284c9bc;
      }
      goto LAB_0284c98c;
    }
    local_38[0] = 0x10408;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
LAB_0284c9bc:
  FUN_00cbd7c0(param_1,local_38);
  return;
}


