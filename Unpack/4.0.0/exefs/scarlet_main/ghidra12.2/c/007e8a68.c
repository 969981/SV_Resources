/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e8a68; name: FUN_007e8a68
 */


void FUN_007e8a68(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_38 [6];
  undefined4 local_18 [2];
  
  if (param_3 == 0) {
    FUN_018dd530(local_38);
    FUN_018dd4c8(param_2 + 8,local_38);
    uVar1 = *(uint *)(param_2 + 8);
  }
  else {
    FUN_018dd4c8(param_2 + 8);
    uVar1 = *(uint *)(param_2 + 8);
  }
  if (uVar1 < 2) {
    uVar2 = FUN_0078f08c(*(undefined8 *)PTR_DAT_047d0928,uVar1,
                         *(undefined2 *)(*(long *)PTR_DAT_047d0860 + 0x50));
    *(undefined4 *)(param_2 + 0x34) = uVar2;
    local_38[0] = 0;
  }
  else {
    local_38[0] = 0x10407;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_38);
  return;
}


