/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008f11bc; name: FUN_008f11bc
 */


void FUN_008f11bc(long param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  uVar1 = FUN_008f1398(param_3);
  uVar2 = FUN_008f13fc(*param_4,param_4[1]);
                    /* WARNING: Could not recover jumptable at 0x008f1224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_047d28f0)(uVar3,uVar1,param_2,uVar2,param_5);
  return;
}


