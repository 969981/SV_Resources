/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0143b78c; name: FUN_0143b78c
 */


void FUN_0143b78c(undefined2 param_1,undefined2 param_2,char param_3)

{
  undefined *local_20;
  undefined2 local_18;
  undefined2 local_16;
  
  local_18 = param_1;
  local_16 = param_2;
  if (param_3 == '\x01') {
    local_20 = PTR_DAT_047d8ee0 + 0x10;
    FUN_00ff54e4(&local_20);
  }
  else {
    if (param_3 == '\x02') {
      FUN_0143b808();
      return;
    }
    local_20 = PTR_DAT_047d8ee0 + 0x10;
    FUN_00ff43a0(&local_20);
  }
  return;
}


