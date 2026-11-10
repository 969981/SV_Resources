/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052d5bc; name: FUN_0052d5bc
 */


bool FUN_0052d5bc(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [32];
  undefined8 local_30;
  undefined2 local_28;
  byte local_26;
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  if (uVar1 >> 0x1f == 0) {
    local_60 = auStack_50;
    local_28 = 0;
    local_26 = *PTR_DAT_047cdc48 & 1;
    puStack_58 = local_60;
    local_30 = param_2;
    uVar2 = (**(code **)(*param_1 + 0x60))(param_1,local_60,&local_60);
    FUN_0052c420(&local_60,uVar2);
    return (char)local_28 == '\0';
  }
  return false;
}


