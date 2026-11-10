/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 025d57ec; name: FUN_025d57ec
 */


void FUN_025d57ec(long param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x34) = param_2;
  for (; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x80)) {
    if (*(char *)(*(long *)(*(long *)(lVar1 + 0x238) + 0x10) + 0x757) == '\x01') {
      FUN_008d9f7c(lVar1 + 0xa8,*(undefined4 *)(param_1 + 0x34));
      FUN_008c90fc(lVar1);
    }
  }
  return;
}


