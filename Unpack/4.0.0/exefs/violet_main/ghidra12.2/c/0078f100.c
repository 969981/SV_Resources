/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078f100; name: FUN_0078f100
 */


void FUN_0078f100(undefined8 param_1,long param_2)

{
  void *__src;
  undefined4 uVar1;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if (*(int *)(param_2 + 0x18) != 1) {
    if (*(int *)(param_2 + 0x18) == 0) {
      local_38[0] = 0x10408;
      goto LAB_0078f170;
    }
    __src = (void *)(param_2 + 0x28);
    memmove((void *)((long)__src +
                    ((ulong)*(uint *)(param_2 + 0x10) - (ulong)*(uint *)(param_2 + 0x14))),__src,
            (ulong)*(uint *)(param_2 + 0x14));
    uVar1 = FUN_007931f0(__src,*(uint *)(param_2 + 0x10) + 1,
                         (long)__src +
                         ((ulong)*(uint *)(param_2 + 0x10) - (ulong)*(uint *)(param_2 + 0x14)));
    *(undefined4 *)(param_2 + 0x14) = uVar1;
    *(undefined4 *)(param_2 + 0x18) = 1;
  }
  local_38[0] = 0;
LAB_0078f170:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_38);
  return;
}


