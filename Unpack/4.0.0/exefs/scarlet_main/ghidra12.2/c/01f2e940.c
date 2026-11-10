/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f2e940; name: FUN_01f2e940
 */


void FUN_01f2e940(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  lVar1 = *param_3;
  if (lVar1 == 0) {
    FUN_01f2e5a0(param_1,param_2,0);
    return;
  }
  local_28 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_01e74ef0(&local_48,0x21,*(undefined8 *)(lVar1 + 0x30),*(undefined2 *)(lVar1 + 0x52));
  FUN_01f2e5a0(param_1,param_2,&local_48);
  return;
}


