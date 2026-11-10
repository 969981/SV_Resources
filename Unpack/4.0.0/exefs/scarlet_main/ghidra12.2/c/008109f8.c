/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008109f8; name: FUN_008109f8
 */


void FUN_008109f8(undefined8 param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  int local_50 [4];
  int local_40 [6];
  undefined4 local_28 [2];
  
  if (*(char *)(param_2 + 0x28) == '\0') {
    lVar1 = param_2 + 8;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    if (0 < *(int *)(lVar1 + 4)) {
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)(local_28 + 4));
      FUN_00cbd7c0(param_1,local_28);
      return;
    }
  }
  piVar2 = local_50;
  FUN_00792140(local_40,lVar1,2,2,0x11);
  if (local_40[0] == 0) {
    FUN_0081092c(local_50,param_2,lVar1);
    FUN_018ff39c(local_40,local_50);
    if (local_40[0] == 0) {
      local_50[0] = 0;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
      goto LAB_00810ad4;
    }
    FUN_00792300(local_50,lVar1);
  }
  piVar2 = local_40;
LAB_00810ad4:
  FUN_00cbd7c0(param_1,piVar2);
  return;
}


