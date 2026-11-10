/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f3fa0; name: FUN_007f3fa0
 */


void FUN_007f3fa0(undefined8 param_1,long param_2)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined2 *)(param_2 + 0xc) = 0;
  *(undefined1 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  local_28[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


