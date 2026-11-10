/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00484190; name: FUN_00484190
 */


long FUN_00484190(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN_0047da00();
  if ((lVar3 != 0) && (iVar1 = FUN_0047e430(lVar3), 0 < iVar1)) {
    iVar1 = 0;
    do {
      FUN_0047e450(lVar3,iVar1);
      iVar2 = FUN_00485cf0();
      if (iVar2 == 0) {
        if (iVar1 != 0) {
          iVar1 = iVar1 + 1;
          do {
            FUN_0047e450(lVar3,iVar1 + -2);
            FUN_0048c830();
            iVar1 = iVar1 + -1;
          } while (1 < iVar1);
        }
        FUN_0047db00(lVar3);
        return 0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0047e430(lVar3);
    } while (iVar1 < iVar2);
  }
  return lVar3;
}


