/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0190fac0; name: FUN_0190fac0
 */


void FUN_0190fac0(long *param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  
  FUN_0157fe00();
  lVar3 = *(long *)(param_2 + 0x10);
  (*(code *)**(undefined8 **)(lVar3 + 0x28))();
  uVar2 = FUN_011b6e8c();
  if ((lVar3 == 0) || ((uVar2 & 1) == 0)) {
    return;
  }
  uVar1 = FUN_0190fb30(lVar3,0);
                    /* WARNING: Could not recover jumptable at 0x0190fb20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b8))(param_1,0,uVar1);
  return;
}


