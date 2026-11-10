/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008f09c8; name: FUN_008f09c8
 */


void FUN_008f09c8(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  uVar1 = FUN_008f1388(param_2);
                    /* WARNING: Could not recover jumptable at 0x008f0a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047d2798)(uVar2,uVar1,param_4,param_3,param_6,param_5);
  return;
}


