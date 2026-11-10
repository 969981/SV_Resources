/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f7394; name: FUN_007f7394
 */


void FUN_007f7394(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                 long param_6)

{
  int local_48 [4];
  undefined4 local_38 [2];
  
  if (param_3 == 0) {
LAB_007f73d4:
    if (param_4 != 0) {
      if (*(long *)(param_2 + 0x80) == 0) goto LAB_007f743c;
      FUN_007ea354(local_48,*(long *)(param_2 + 0x80),param_4);
      if (local_48[0] != 0) goto LAB_007f745c;
    }
    if (param_5 != 0) {
      if (*(long *)(param_2 + 0x88) == 0) goto LAB_007f743c;
      FUN_007ea354(local_48,*(long *)(param_2 + 0x88),param_5);
      if (local_48[0] != 0) goto LAB_007f745c;
    }
    if (param_6 != 0) {
      if (*(long *)(param_2 + 0x90) == 0) goto LAB_007f743c;
      FUN_007ea354(local_48,*(long *)(param_2 + 0x90),param_6);
      if (local_48[0] != 0) goto LAB_007f745c;
    }
    local_48[0] = 0;
  }
  else {
    if (*(long *)(param_2 + 0x78) != 0) {
      FUN_007ea354(local_48);
      if (local_48[0] != 0) goto LAB_007f745c;
      goto LAB_007f73d4;
    }
LAB_007f743c:
    local_48[0] = 0x10408;
  }
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
LAB_007f745c:
  FUN_00cbd7c0(param_1,local_48);
  return;
}


