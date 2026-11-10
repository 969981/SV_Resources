/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00344060; name: FUN_00344060
 */


undefined8 FUN_00344060(long *param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (param_1 != (long *)0x0) {
    lVar2 = *param_1;
    if (lVar2 == 0) {
      return 0;
    }
    puVar3 = (undefined8 *)(param_1[1] + 0x10);
    do {
      iVar1 = strcmp((char *)puVar3[-1],param_2);
      if (iVar1 == 0) {
        if (*(int *)(puVar3 + -2) == 0) {
          return *puVar3;
        }
        return 0;
      }
      puVar3 = puVar3 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return 0;
}


