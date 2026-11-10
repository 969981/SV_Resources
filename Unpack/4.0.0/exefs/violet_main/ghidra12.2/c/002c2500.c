/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c2500; name: FUN_002c2500
 */


void FUN_002c2500(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] != '\0') {
    if (*(char *)(lVar1 + 0x50) != '\0') {
      if (*(char *)(lVar1 + 0x70) != '\0') {
        if ((*(byte *)(lVar1 + 0x78) & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(lVar1 + 0x88));
        }
        *(undefined1 *)(lVar1 + 0x70) = 0;
      }
      if ((*(byte *)(lVar1 + 0x58) & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(lVar1 + 0x68));
      }
      *(undefined1 *)(lVar1 + 0x50) = 0;
    }
    FUN_002c25a0(lVar1 + 0x38,*(undefined8 *)(lVar1 + 0x40));
    if ((*(byte *)(lVar1 + 0x20) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(lVar1 + 0x30));
    }
  }
  FUN_0049e790(PTR_LAB_047cba48,lVar1);
  return;
}


