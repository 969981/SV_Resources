/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f6810; name: FUN_003f6810
 */


undefined8 FUN_003f6810(char *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar1 = DAT_047f1838;
  if ((param_1 != (char *)0x0) && (DAT_047f1838 != 0)) {
    lVar3 = 0;
    puVar4 = DAT_047f1830;
    do {
      iVar2 = strcmp((char *)*puVar4,param_1);
      if (iVar2 == 0) {
        *param_2 = lVar3;
        return 1;
      }
      lVar3 = lVar3 + 1;
      puVar4 = puVar4 + 3;
    } while (lVar1 != lVar3);
  }
  return 0;
}


