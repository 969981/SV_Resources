/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01255b6c; name: FUN_01255b6c
 */


ulong FUN_01255b6c(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    uVar2 = 0;
    do {
      iVar1 = (**(code **)(**(long **)(param_1 + uVar2 * 8) + 0x98))();
      if (iVar1 == param_2) {
        return uVar2 & 0xffffffff;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(byte *)(param_1 + 0x30));
  }
  return 6;
}


