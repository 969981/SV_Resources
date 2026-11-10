/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a8e2c; name: FUN_028a8e2c
 */


void FUN_028a8e2c(long param_1,string *param_2)

{
  string *this;
  
  this = *(string **)(param_1 + 8);
  if (this == *(string **)(param_1 + 0x10)) {
    FUN_028a9388(param_1);
    return;
  }
  std::string::string(this,param_2);
  *(string **)(param_1 + 8) = this + 0x18;
  return;
}


