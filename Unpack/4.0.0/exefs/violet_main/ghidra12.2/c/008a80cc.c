/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a80cc; name: FUN_008a80cc
 */


void FUN_008a80cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (((*(byte *)(param_1 + 0x58) >> 1 & 1) == 0) || (*(char *)(param_1 + 0x5a) != '\0')) {
    for (lVar1 = *(long *)(param_1 + 0x28); lVar1 != param_1 + 0x20; lVar1 = *(long *)(lVar1 + 8)) {
      (**(code **)(*(long *)(lVar1 + -8) + 0xb8))((long *)(lVar1 + -8),param_2,param_3);
    }
  }
  return;
}


