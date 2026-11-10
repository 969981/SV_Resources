/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a0384; name: FUN_034a0384
 */


void FUN_034a0384(char *param_1)

{
  size_t sVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_a0 [128];
  
  sVar1 = strlen(param_1);
  memcpy(auStack_a0 + (0x80 - (sVar1 + 0x10 & 0xfffffffffffffff0)),param_1,sVar1 + 1);
  for (lVar3 = DAT_048b0118; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
    if ((*(long *)(lVar3 + 0xa0) != 0) &&
       (lVar2 = *(long *)(*(long *)(lVar3 + 0xa0) + 0x50), lVar2 != 0)) {
      FUN_03476540(lVar2,auStack_a0 + (0x80 - (sVar1 + 0x10 & 0xfffffffffffffff0)));
    }
  }
  return;
}


