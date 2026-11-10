/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d93d0; name: FUN_001d93d0
 */


undefined8 FUN_001d93d0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_001f3774(param_1,*(undefined4 *)(param_2 + 8));
  if ((((lVar1 != 0) && (*(char *)(param_2 + 0xc) == '\x01')) &&
      (lVar1 = *(long *)(lVar1 + 0x1e8), lVar1 != 0)) &&
     ((*(char *)(lVar1 + 0x21c) != '\0' && (*(long *)(lVar1 + 0x230) == 0)))) {
    lVar2 = FUN_001d4724();
    *(long *)(lVar1 + 0x230) = lVar2;
    if (lVar2 == 0) {
      return 0xfffffdf7;
    }
  }
  return 0;
}


