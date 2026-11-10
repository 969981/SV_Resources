/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f41b8; name: FUN_007f41b8
 */


void FUN_007f41b8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 local_30 [4];
  undefined4 local_18 [2];
  
  FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
  uVar1 = FUN_007f4f30();
  *(undefined8 *)(param_2 + 0x40) = uVar1;
  *(undefined1 *)(param_2 + 0x78) = 0;
  local_30[0] = 0;
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_30 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_30);
  return;
}


