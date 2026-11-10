/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0303a088; name: FUN_0303a088
 */


void FUN_0303a088(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined1 *)(param_1 + 8);
  *param_3 = param_2;
                    /* WARNING: Could not recover jumptable at 0x0303a0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047d1a08)(uVar2,param_3,uVar1);
  return;
}


