/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001329f0; name: FUN_001329f0
 */


void FUN_001329f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = FUN_00138700();
  uVar1 = FUN_0012e860(uVar2,"%s expected",uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_00138770(param_1,uVar1);
}


