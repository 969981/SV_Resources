/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0048a710; name: FUN_0048a710
 */


undefined4 FUN_0048a710(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 in_w5;
  undefined4 in_w6;
  
  lVar2 = FUN_0048a770(0);
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = FUN_0048a580(param_1,lVar2,in_w5,in_w6);
    FUN_0048b980(lVar2);
  }
  return uVar1;
}


