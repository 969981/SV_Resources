/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015798a0; name: FUN_015798a0
 */


undefined8 FUN_015798a0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  FUN_01579938();
  uVar2 = FUN_0157991c();
  uVar3 = FUN_0157992c(uVar2,0);
  if ((uVar3 & 1) == 0) {
    FUN_0106f870(param_1);
    FUN_0157a7f8();
    FUN_0106f870(param_1);
    FUN_014f5f00();
    FUN_010aef9c();
    FUN_0157a408(param_1);
  }
  else {
    FUN_01579924(param_1);
    iVar1 = FUN_01443bd0();
    if (iVar1 != 0) {
      return 0;
    }
    FUN_01579944(param_1);
  }
  return 1;
}


