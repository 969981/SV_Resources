/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0048ab40; name: FUN_0048ab40
 */


undefined8 FUN_0048ab40(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_003e5720(param_1 + 0x88,param_1 + 0x20);
  if (iVar1 == 0) {
    uVar2 = FUN_0048add0(PTR_DAT_047cd540,param_1 + 0x88,param_1 + 0x98,param_1,param_2);
    return uVar2;
  }
  return 0;
}


