/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0292ce60; name: FUN_0292ce60
 */


undefined8 FUN_0292ce60(short param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  short *psVar3;
  
  uVar2 = 1;
  psVar3 = &DAT_045f7d70;
  while (psVar3[-8] != param_1) {
    if (*psVar3 == param_1) goto LAB_0292cea4;
    uVar2 = uVar2 + 2;
    psVar3 = psVar3 + 0x10;
    if (uVar2 == 0x17d) {
      *param_2 = 0;
      return 0;
    }
  }
  uVar2 = uVar2 - 1;
LAB_0292cea4:
                    /* WARNING: Could not recover jumptable at 0x0292ceb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((uVar2 & 0xffffffff) * 0x10 + 0x45f7d68))(param_2);
  return uVar1;
}


