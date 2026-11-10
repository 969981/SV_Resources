/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ff6bc; name: FUN_007ff6bc
 */


void FUN_007ff6bc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  int local_50 [4];
  int local_40 [4];
  undefined4 local_28 [2];
  
  puVar1 = PTR_DAT_047d0860;
  piVar4 = local_50;
  if (((*(long *)PTR_DAT_047d0860 == 0) || (lVar2 = FUN_007f72c8(), lVar2 == 0)) ||
     (lVar3 = FUN_007f72b0(*(undefined8 *)puVar1), lVar3 == 0)) {
    local_40[0] = 0x10408;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
  }
  else {
    local_40[0] = 0;
    local_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_50);
    FUN_00796ca4(local_50,lVar2 + 8,*(undefined8 *)(param_2 + 0x13b0));
    FUN_018ff39c(local_40,local_50);
    if (local_40[0] == 0) {
      FUN_00796ca4(local_50,lVar3 + 8,*(undefined8 *)(param_2 + 0x13b0));
      FUN_018ff39c(local_40,local_50);
      if (local_40[0] == 0) {
        FUN_00796c58(local_50,lVar2 + 8);
        FUN_018ff39c(local_40,local_50);
        if (local_40[0] == 0) {
          FUN_00796c58(local_50,lVar3 + 8);
          FUN_018ff39c(local_40,local_50);
          if (local_40[0] == 0) {
            local_50[0] = 0;
            local_28[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
            goto LAB_007ff7ec;
          }
        }
      }
    }
  }
  piVar4 = local_40;
LAB_007ff7ec:
  FUN_00cbd7c0(param_1,piVar4);
  return;
}


