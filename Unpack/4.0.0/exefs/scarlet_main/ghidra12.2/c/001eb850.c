/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001eb850; name: FUN_001eb850
 */


undefined8 FUN_001eb850(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  
  puVar1 = PTR_PTR_047cb968;
  if (*(undefined8 **)PTR_PTR_047cb968 == &DAT_04484ef8) {
    if (param_1 != 0) {
      *(long *)PTR_PTR_047cb968 = param_1;
      return 0;
    }
    if (PTR_DAT_04484ee8 != (undefined *)0x0) {
      lVar3 = FUN_001e96dc("CURL_SSL_BACKEND");
      if ((lVar3 == 0) || (PTR_DAT_04484ee8 == (undefined *)0x0)) {
LAB_001eb900:
        puVar4 = PTR_DAT_04484ee8;
      }
      else {
        iVar2 = FUN_001e0990(lVar3,*(undefined8 *)(PTR_DAT_04484ee8 + 8));
        ppuVar5 = &PTR_DAT_04484ee8;
        while (iVar2 == 0) {
          if (ppuVar5[1] == (undefined *)0x0) goto LAB_001eb900;
          iVar2 = FUN_001e0990(lVar3,*(undefined8 *)(ppuVar5[1] + 8));
          ppuVar5 = ppuVar5 + 1;
        }
        puVar4 = *ppuVar5;
      }
      *(undefined **)puVar1 = puVar4;
      thunk_FUN_001ec308(lVar3);
      return 0;
    }
  }
  return 1;
}


