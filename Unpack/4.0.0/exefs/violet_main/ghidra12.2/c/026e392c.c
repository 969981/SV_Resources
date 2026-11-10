/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026e392c; name: FUN_026e392c
 */


void FUN_026e392c(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  if ((param_2 & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x170);
    for (lVar2 = *(long *)(param_1 + 0x178); lVar2 != lVar1; lVar2 = lVar2 + -0x10) {
      FUN_01751d6c(lVar2 + -8);
    }
    *(long *)(param_1 + 0x178) = lVar1;
  }
  return;
}


