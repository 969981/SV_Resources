/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027152cc; name: FUN_027152cc
 */


void FUN_027152cc(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  if (lVar1 != param_1 + 0x68) {
    do {
      FUN_0271504c(*(undefined8 *)(lVar1 + 0x10),param_2,param_3 & 1);
      lVar1 = *(long *)(lVar1 + 8);
    } while (lVar1 != param_1 + 0x68);
  }
  return;
}


