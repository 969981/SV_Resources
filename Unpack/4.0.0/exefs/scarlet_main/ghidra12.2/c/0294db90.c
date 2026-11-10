/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0294db90; name: FUN_0294db90
 */


long FUN_0294db90(undefined8 param_1,undefined1 param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = FUN_0124c158();
  lVar3 = FUN_0129b478(uVar2,2,param_2);
  while ((lVar3 != 0 && (uVar1 = FUN_0107bb74(lVar3), param_3 != (uVar1 & 0xffff)))) {
    lVar3 = FUN_01255bdc(uVar2,lVar3,0);
  }
  return lVar3;
}


