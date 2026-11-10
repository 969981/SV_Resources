/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00893028; name: FUN_00893028
 */


undefined8 FUN_00893028(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  do {
    if (param_1 == lVar2) {
      return 0;
    }
    lVar3 = 0;
    while( true ) {
      if (*(char *)(param_2 + lVar3) != *(char *)(lVar2 + lVar3 + 0x10)) break;
      if (*(char *)(param_2 + lVar3) == '\0') goto LAB_0089308c;
      cVar1 = *(char *)(param_2 + lVar3 + 1);
      if (cVar1 != *(char *)(lVar2 + lVar3 + 0x11)) break;
      if ((cVar1 == '\0') || (lVar3 = lVar3 + 2, lVar3 == 0x80)) {
LAB_0089308c:
        return *(undefined8 *)(lVar2 + 0x90);
      }
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}


