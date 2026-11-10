/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ded94; name: FUN_007ded94
 */


void FUN_007ded94(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_007e5328(param_1 + 0x68);
  if ((lVar2 == param_2) && (uVar1 = FUN_007e5330(param_1 + 0x68), param_3 == (uVar1 & 0xffff))) {
    *(undefined1 *)(param_1 + 0xb0) = 1;
  }
  return;
}


