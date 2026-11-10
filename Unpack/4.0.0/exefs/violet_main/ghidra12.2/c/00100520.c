/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00100520; name: FUN_00100520
 */


void FUN_00100520(char *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  pcVar1 = "Bink Error";
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  DAT_047ec100 = *pcVar1;
  lVar2 = 0;
  do {
    lVar3 = lVar2;
    if (pcVar1[lVar3] == '\0') {
      return;
    }
    (&DAT_047ec101)[lVar3] = pcVar1[lVar3 + 1];
    lVar2 = lVar3 + 1;
  } while ((int)(lVar3 + 1) != 0xfe);
  (&DAT_047ec101)[lVar3] = 0;
  return;
}


