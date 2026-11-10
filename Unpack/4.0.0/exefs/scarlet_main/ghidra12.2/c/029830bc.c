/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029830bc; name: FUN_029830bc
 */


void FUN_029830bc(undefined8 param_1)

{
  undefined8 uVar1;
  byte local_30 [4];
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 auStack_8 [8];
  
  FUN_0124e480();
  local_30[0] = FUN_0123e058();
  if (local_30[0] != 0) {
    local_28 = 0;
    local_30[1] = 0xff;
    local_30[2] = 0;
    local_2c = 0;
    FUN_01461214(param_1);
    uVar1 = FUN_0123e064();
    FUN_01249ed0(uVar1,auStack_8,local_30);
  }
  return;
}


