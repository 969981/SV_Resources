/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01edc7e8; name: FUN_01edc7e8
 */


uint FUN_01edc7e8(undefined8 param_1,uint param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)((ulong)param_1 >> 0x10) & 0xffff;
  if (param_3 == '\0') {
    uVar1 = param_2 ^ 0x10000000;
    if (0xf < (uVar2 ^ (uint)param_1 & 0xfff0 ^ param_2 >> 0x10 ^ param_2 & 0xfff0)) {
      uVar1 = param_2;
    }
  }
  else {
    uVar1 = param_2 & 0xffff | (uVar2 ^ (uint)param_1 ^ param_2 ^ (uint)(param_3 == '\x01')) << 0x10
    ;
  }
  return uVar1;
}


