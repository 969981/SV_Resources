/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012df824; name: FUN_012df824
 */


undefined8 FUN_012df824(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  iVar2 = FUN_02f1c3ec(param_1 + 0x48,0,param_2,0x10);
  if (iVar2 < 0) {
    uVar3 = 0x80040200;
  }
  else {
    FUN_02f1c7c0(param_1 + 0x18,param_1,uVar1);
    uVar3 = 0;
  }
  return uVar3;
}


