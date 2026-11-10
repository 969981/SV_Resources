/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002d7480; name: FUN_002d7480
 */


void FUN_002d7480(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = **(long **)(*param_1 + 8);
  lVar3 = *(long *)(lVar2 + 0x80);
  lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x108);
  if (lVar1 != 0) {
    if (lVar3 < 0) {
      lVar3 = lVar3 + 1;
    }
    FUN_002d4348(lVar1,lVar2,0,lVar3 >> 1);
  }
  *(long *)(lVar2 + 0x88) = lVar1;
  return;
}


