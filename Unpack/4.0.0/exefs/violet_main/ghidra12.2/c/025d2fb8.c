/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025d2fb8; name: FUN_025d2fb8
 */


void FUN_025d2fb8(long param_1,char *param_2,byte param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x150);
  if (lVar2 != 0) {
    do {
      iVar1 = strcmp((char *)(*(long *)(lVar2 + 0xa0) + 0x10),param_2);
      if (iVar1 == 0) {
        *(byte *)(lVar2 + 2) = param_3 & 1;
      }
      lVar2 = *(long *)(lVar2 + 0x80);
    } while (lVar2 != 0);
  }
  return;
}


