/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004807b0; name: FUN_004807b0
 */


long FUN_004807b0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  iVar2 = FUN_00446030(0x40000,0);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_0047e650(&DAT_047f3bb0,FUN_00481350);
  lVar4 = 0;
  if ((iVar2 != 0) && (DAT_047f3bb4 != 0)) {
    lVar4 = FUN_0049e5d0(&DAT_047f3bb8);
    if (lVar4 == -1) {
      return 0;
    }
    if (lVar4 == 0) {
      iVar2 = FUN_0049e5f0(&DAT_047f3bb8,0xffffffffffffffff);
      if (iVar2 == 0) {
        return 0;
      }
      lVar4 = FUN_00452ce0(0x248,"external/openssl/crypto/err/err.c",0x2de);
      if (lVar4 == 0) {
        FUN_0049e5f0(&DAT_047f3bb8,0);
        return 0;
      }
      iVar2 = FUN_00445eb0(2);
      if ((iVar2 == 0) || (iVar2 = FUN_0049e5f0(&DAT_047f3bb8,lVar4), iVar2 == 0)) {
        FUN_00481030(lVar4);
        FUN_0049e5f0(&DAT_047f3bb8,0);
        return 0;
      }
      FUN_00446030(2,0);
    }
    piVar3 = __errno_location();
    *piVar3 = iVar1;
  }
  return lVar4;
}


