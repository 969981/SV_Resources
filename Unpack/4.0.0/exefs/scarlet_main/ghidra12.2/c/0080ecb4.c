/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0080ecb4; name: FUN_0080ecb4
 */


void FUN_0080ecb4(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong local_38 [2];
  undefined4 local_28 [2];
  
  *(undefined8 *)(param_2 + 0xac8) = param_3;
  local_38[0] = 0;
  FUN_007935cc(local_38);
  *(ulong *)(param_2 + 0xab8) = local_38[0];
  local_38[0] = local_38[0] & 0xffffffff00000000;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_38);
  return;
}


