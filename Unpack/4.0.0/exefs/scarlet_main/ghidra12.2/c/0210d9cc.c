/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0210d9cc; name: FUN_0210d9cc
 */


bool FUN_0210d9cc(long param_1)

{
  ushort uVar1;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined2 extraout_var_01;
  undefined8 local_8;
  
  local_8 = 0xb959616c49c5e6a3;
  uVar1 = FUN_00f724ec(param_1,&local_8);
  if (0xff < uVar1) {
    local_8 = 0x490bbdd87310131d;
    FUN_0133edbc(param_1,&local_8);
    local_8 = 0x15d46931898c523f;
    FUN_017a8564(param_1,&local_8);
    *(undefined2 *)(param_1 + 0x10a) = extraout_var_01;
    local_8 = 0x5a2d6cb9b1287e61;
    FUN_017a8564(param_1,&local_8);
    *(undefined1 *)(param_1 + 0x10c) = extraout_var;
    local_8 = 0x6cbe0e775aa3c330;
    FUN_017a8564(param_1,&local_8);
    *(undefined1 *)(param_1 + 0x10d) = extraout_var_00;
  }
  return 0xff < uVar1;
}


