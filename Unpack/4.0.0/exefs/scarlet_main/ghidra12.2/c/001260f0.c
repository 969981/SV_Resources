/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001260f0; name: FUN_001260f0
 */


void FUN_001260f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_18 [8];
  
  iVar1 = FUN_0013ff30(param_2,auStack_18,0);
  if (iVar1 != 0) {
    param_2 = param_3;
  }
  uVar2 = FUN_00125db0(param_1,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_00125b90(param_1,"number%s has no integer representation",uVar2);
}


