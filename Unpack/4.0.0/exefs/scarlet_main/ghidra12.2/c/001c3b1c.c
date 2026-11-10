/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c3b1c; name: FUN_001c3b1c
 */


undefined8 FUN_001c3b1c(uint param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = DAT_047ecd84 + 1;
  bVar1 = DAT_047ecd84 == 0;
  DAT_047ecd84 = iVar2;
  if (bVar1) {
    if ((param_2 & 1) != 0) {
      FUN_001ec27c();
    }
    FUN_001ec3e0();
    lVar3 = FUN_001fa71c();
    if (((lVar3 == 0) || (iVar2 = FUN_001eb924(), iVar2 == 0)) ||
       (iVar2 = FUN_001c7638(), iVar2 != 0)) {
      return 2;
    }
    if ((param_1 >> 2 & 1) != 0) {
      *(undefined4 *)PTR_DAT_047cb950 = 1;
    }
    FUN_001eb448();
  }
  return 0;
}


