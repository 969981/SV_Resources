/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017936fc; name: FUN_017936fc
 */


void FUN_017936fc(undefined8 *param_1)

{
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  FUN_01793798();
  *param_1 = &DAT_04555fe8;
  param_1[4] = &PTR_LAB_04556040;
  param_1[5] = &PTR_LAB_04556060;
  param_1[6] = &PTR_LAB_04556078;
  param_1[7] = &PTR_LAB_04556098;
  memset(param_1 + 0x1a,0,0x480);
  memset(param_1 + 8,0,0x61);
  local_38[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1 + 0xaa,local_38);
  FUN_017938c0();
  return;
}


