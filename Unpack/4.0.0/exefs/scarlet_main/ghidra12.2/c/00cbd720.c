/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cbd720; name: FUN_00cbd720
 */


void FUN_00cbd720(int *param_1)

{
  undefined4 local_30 [4];
  undefined4 local_8 [2];
  
  if (((DAT_0485e9d8 == (long *)0x0) ||
      ((**(code **)(*DAT_0485e9d8 + 0x28))(param_1), *param_1 == 0)) &&
     ((*(long *)PTR_DAT_047d0900 == 0 || (FUN_00cbd7b4(param_1), *param_1 == 0)))) {
    local_30[0] = 0;
    local_8[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_8);
    FUN_00cbd7c0(param_1,local_30);
  }
  return;
}


