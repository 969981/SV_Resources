/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0226f9cc; name: FUN_0226f9cc
 */


void FUN_0226f9cc(long param_1)

{
  long lVar1;
  
  if ((*(long **)(param_1 + 0x128) != (long *)0x0) &&
     (lVar1 = *(long *)(param_1 + 0x120), lVar1 != 0)) {
    (**(code **)(**(long **)(param_1 + 0x128) + 0x58))
              (*(undefined8 *)(lVar1 + 0x1c0),*(undefined8 *)(lVar1 + 0x1d0),
               *(undefined8 *)(lVar1 + 0x1e0),*(undefined8 *)(lVar1 + 0x1f0),
               *(undefined8 *)(lVar1 + 0x200),*(undefined8 *)(lVar1 + 0x210),
               *(undefined8 *)(lVar1 + 0x220),*(undefined8 *)(lVar1 + 0x230));
  }
  if (*(char *)(param_1 + 0x11f) == '\0') {
    return;
  }
  FUN_00c4cf3c(*(undefined8 *)(param_1 + 0x130));
  return;
}


