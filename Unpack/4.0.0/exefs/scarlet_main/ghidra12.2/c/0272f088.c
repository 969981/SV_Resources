/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0272f088; name: FUN_0272f088
 */


void FUN_0272f088(undefined8 param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_0272f0e4(*param_2);
  lVar3 = *plVar2;
  lVar1 = plVar2[1];
  if (lVar3 != lVar1) {
    do {
      FUN_010f7054(param_1,lVar3,param_3 & 1);
      lVar3 = lVar3 + 0x28;
    } while (lVar1 != lVar3);
  }
  return;
}


