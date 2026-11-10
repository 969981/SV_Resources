/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e95210; name: FUN_01e95210
 */


void FUN_01e95210(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  
  if (*param_2 == 0) {
    FUN_01e951cc(param_1);
    return;
  }
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uVar2 = FUN_0196c644();
  uVar1 = FUN_0196c63c(*param_2);
  FUN_01e74ef0(&local_58,0x21,uVar2,uVar1);
  FUN_01e951cc(param_1,&local_58);
  return;
}


