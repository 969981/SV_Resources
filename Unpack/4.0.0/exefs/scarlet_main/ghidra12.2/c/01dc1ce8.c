/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dc1ce8; name: FUN_01dc1ce8
 */


void FUN_01dc1ce8(undefined1 param_1 [16],undefined4 param_2,long param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,undefined4 *param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined1 auStack_70 [24];
  long *local_58;
  long *local_28;
  
  if (param_5 < 0) {
    *param_7 = *(undefined4 *)(param_3 + 0x6914);
    param_2 = *(undefined4 *)(param_3 + 0x6918);
  }
  else {
    local_28 = *(long **)(param_3 + 0x6cd0);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x58))();
    }
    FUN_01dc1dc4(auStack_70,param_3,param_4,param_6);
    uVar1 = FUN_01dc1eb0(&local_28,auStack_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x60))();
    }
    *param_7 = uVar1;
  }
  *param_8 = param_2;
  return;
}


