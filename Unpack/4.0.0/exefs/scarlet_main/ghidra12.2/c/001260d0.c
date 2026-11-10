/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001260d0; name: FUN_001260d0
 */


void FUN_001260d0(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_28 [8];
  
  if ((*(byte *)(param_2 + 8) & 0xf) != 3) {
    param_3 = param_2;
  }
  auVar3 = FUN_00125b40(param_1,param_3,param_4);
  iVar1 = FUN_0013ff30(auVar3._8_8_,auStack_28,0);
  uVar2 = auVar3._8_8_;
  if (iVar1 != 0) {
    uVar2 = param_4;
  }
  uVar2 = FUN_00125db0(auVar3._0_8_,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_00125b90(auVar3._0_8_,"number%s has no integer representation",uVar2);
}


