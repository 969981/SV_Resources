/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c72f8; name: FUN_001c72f8
 */


bool FUN_001c72f8(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = *(ulong *)(*(long *)(lVar3 + 0xd8) + 0x150);
  if ((long)uVar4 < 0) {
    uVar4 = (long)*(int *)(*(long *)(lVar3 + 0xd8) + 0x18) << 2;
  }
  *param_1 = 0;
  plVar2 = (long *)0x0;
  if (uVar4 != 0) {
    uVar1 = FUN_001c6e18(lVar3);
    if (uVar4 < uVar1) {
      FUN_001db818(lVar3,"Connection cache is full, closing the oldest one.\n");
      plVar2 = (long *)FUN_001c738c(lVar3);
      if (plVar2 != (long *)0x0) {
        FUN_001e4c44(lVar3,plVar2,0);
      }
    }
    else {
      plVar2 = (long *)0x0;
    }
  }
  return plVar2 != param_1;
}


