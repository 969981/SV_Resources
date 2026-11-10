/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01977ebc; name: FUN_01977ebc
 */


void FUN_01977ebc(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (*(char *)(param_2 + 0x78) == '\x04') {
    uVar1 = 9;
  }
  else {
    if (*(char *)(param_2 + 0x78) != '\x01') {
      local_28[0] = 0x10408;
      goto LAB_01977f00;
    }
    uVar1 = 8;
  }
  *(undefined1 *)(param_2 + 0x78) = uVar1;
  local_28[0] = 0;
LAB_01977f00:
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


