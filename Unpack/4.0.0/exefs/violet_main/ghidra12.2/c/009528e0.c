/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 009528e0; name: FUN_009528e0
 */


void FUN_009528e0(void *param_1,long param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_3 < 10) {
    uVar1 = param_3;
  }
  memcpy(param_1,(void *)(param_2 + (ulong)uVar1 * 0x60 + 0x30),0x60);
  return;
}


