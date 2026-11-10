/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


