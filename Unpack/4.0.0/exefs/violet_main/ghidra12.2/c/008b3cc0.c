/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b3cc0; name: FUN_008b3cc0
 */


undefined8 FUN_008b3cc0(long param_1,long param_2)

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
      if (*(char *)(param_2 + lVar3) == '\0') goto LAB_008b3d24;
      cVar1 = *(char *)(param_2 + lVar3 + 1);
      if (cVar1 != *(char *)(lVar2 + lVar3 + 0x11)) break;
      if ((cVar1 == '\0') || (lVar3 = lVar3 + 2, lVar3 == 0x80)) {
LAB_008b3d24:
        return *(undefined8 *)(lVar2 + 0x90);
      }
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}


