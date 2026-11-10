/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f8e784; name: FUN_01f8e784
 */


void FUN_01f8e784(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00da75d8();
  if (lVar2 != 0) {
    FUN_01f8e518(param_1 + 0x160,param_2);
    FUN_01f93430(param_1);
    FUN_01f934a4(param_1,0);
    *(undefined4 *)(param_1 + 0x390) = 0;
    uVar1 = *(undefined4 *)(param_2 + 0x130);
    *(undefined4 *)(param_1 + 0x2c0) = 1;
    *(undefined4 *)(param_1 + 0x394) = uVar1;
    *(undefined1 *)(lVar2 + 0x2a0) = 1;
  }
  return;
}


