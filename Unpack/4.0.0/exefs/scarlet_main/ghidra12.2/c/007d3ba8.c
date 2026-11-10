/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d3ba8; name: FUN_007d3ba8
 */


void FUN_007d3ba8(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined4 local_40 [4];
  int local_30 [4];
  
  if (param_3 == 0) {
    local_30[0] = 0x10407;
  }
  else {
    if ((*(int *)(param_2 + 0x68) != 1) &&
       (uVar2 = FUN_0078cdf4(*(undefined8 *)(param_2 + 0xa0)), (uVar2 & 1) == 0)) {
      local_30[0] = 0;
      local_40[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_40);
      iVar1 = FUN_0078cdcc(*(undefined8 *)(param_2 + 0xa0));
      if (iVar1 != 0) {
        (**(code **)(**(long **)(param_2 + 0xa0) + 0x10))(*(long **)(param_2 + 0xa0),1);
      }
      FUN_007dc264(local_40,*(undefined8 *)(param_2 + 0xa0),param_3);
      FUN_018ff39c(local_30,local_40);
      if (local_30[0] == 0) {
        FUN_0078cd58(*(undefined8 *)(param_2 + 0xa0),0);
      }
      *(short *)(param_2 + 0x790) = *(short *)(param_2 + 0x790) + 1;
      goto LAB_007d3c0c;
    }
    local_30[0] = 0x10408;
  }
  local_40[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_40);
LAB_007d3c0c:
  FUN_00cbd7c0(param_1,local_30);
  return;
}


