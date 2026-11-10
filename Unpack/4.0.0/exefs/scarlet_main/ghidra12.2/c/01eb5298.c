/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eb5298; name: FUN_01eb5298
 */


void FUN_01eb5298(undefined4 *param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = param_3[2];
  bVar1 = *(byte *)(*param_3 + lVar3);
  param_3[2] = lVar3 + 1;
  if (((bVar1 == 0x84) || (-1 < (char)bVar1)) || (0xbf < bVar1)) {
    if (bVar1 == 0x84) {
      bVar1 = *(byte *)(*param_3 + lVar3 + 1);
      param_3[2] = lVar3 + 2;
    }
    uVar2 = 0;
    *param_2 = bVar1;
  }
  else {
    uVar2 = 1;
  }
  *param_1 = uVar2;
  return;
}


