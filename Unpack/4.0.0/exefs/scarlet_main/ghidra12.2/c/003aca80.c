/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003aca80; name: FUN_003aca80
 */


long FUN_003aca80(void)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  long local_18;
  
  local_18 = 0;
  puVar2 = (undefined4 *)FUN_003d55e0();
  if (puVar2 == (undefined4 *)0x0) {
    lVar3 = 0;
  }
  else {
    if ((*(ushort *)(puVar2 + 2) & 3) == 2) {
      lVar3 = FUN_0043def0();
      local_18 = lVar3;
      if ((lVar3 == 0) || (iVar1 = FUN_0043dd30(lVar3,*puVar2), iVar1 == 0)) {
        FUN_0043e1f0(lVar3);
        return 0;
      }
      return lVar3;
    }
    lVar3 = FUN_00440220(0x198,0);
    if ((((lVar3 != 0) && (iVar1 = FUN_0043fc10(lVar3), 0 < iVar1)) &&
        (iVar1 = FUN_00440390(lVar3,0x198,6,0x1001,*puVar2,0), 0 < iVar1)) &&
       (iVar1 = FUN_0043fca0(lVar3,&local_18), iVar1 < 1)) {
      FUN_0043e1f0(local_18);
      local_18 = 0;
    }
  }
  FUN_00440340(lVar3);
  return local_18;
}


