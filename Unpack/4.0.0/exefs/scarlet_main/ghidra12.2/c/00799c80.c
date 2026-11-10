/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00799c80; name: FUN_00799c80
 */


void FUN_00799c80(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  int *piVar2;
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  local_38[0] = 0;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  FUN_00cbd7c0(param_1,local_38);
  uVar1 = (**(code **)(*param_2 + 0xe0))(param_2);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_2 + 6) = 1;
  }
  local_48[0] = 0;
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_00cbd7c0(local_38,local_48);
  if (param_2[2] != 0) {
    FUN_007a2238(local_48);
    FUN_018ff39c(local_38,local_48);
  }
  if (local_38[0] == 0) {
    if ((char)param_2[6] == '\0') {
      return;
    }
    uVar1 = (**(code **)(*param_2 + 0xe0))(param_2);
    if ((uVar1 & 1) != 0) {
      return;
    }
    uVar1 = (**(code **)(*param_2 + 0xe8))(param_2);
    if ((uVar1 & 1) != 0) {
      return;
    }
    if ((*(long *)PTR_DAT_047d0a08 != 0) && (uVar1 = FUN_007cdb68(), (uVar1 & 1) != 0)) {
      return;
    }
    local_48[0] = 0xc406;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    piVar2 = local_48;
  }
  else {
    piVar2 = local_38;
  }
  FUN_018ff39c(param_1,piVar2);
  return;
}


