/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00800664; name: FUN_00800664
 */


void FUN_00800664(undefined8 param_1,long *param_2,long param_3)

{
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  param_2[0xc] = param_3;
  FUN_0078cac8(param_3);
  FUN_0078cb14(param_2[0xc]);
  (**(code **)(*param_2 + 0x10))(param_2,1);
  FUN_007935cc(param_2 + 0xe);
  param_2[8] = (long)"NatTraversalJob::StartNatTraversal";
  param_2[6] = (long)PTR_FUN_047d1628;
  param_2[7] = 0;
  local_30[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


