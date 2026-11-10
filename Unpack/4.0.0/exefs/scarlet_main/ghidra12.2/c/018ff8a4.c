/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018ff8a4; name: FUN_018ff8a4
 */


void FUN_018ff8a4(undefined8 param_1,long param_2)

{
  undefined4 local_28 [4];
  undefined4 local_18 [2];
  
  if (*(char *)(param_2 + 0x5b) == '\0') {
    *(undefined1 *)(param_2 + 0x5c) = 0;
    *(undefined2 *)(param_2 + 0x5a) = 0x100;
    *(undefined1 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x70) = 0;
    local_28[0] = 0;
  }
  else {
    local_28[0] = 0x10402;
  }
  local_18[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_28 | 4),(Result *)local_18);
  FUN_00cbd7c0(param_1,local_28);
  return;
}


