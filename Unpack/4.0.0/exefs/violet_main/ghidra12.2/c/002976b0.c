/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002976b0; name: FUN_002976b0
 */


void FUN_002976b0(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] != '\0') {
    plVar2 = (long *)(lVar1 + 0x70);
    if (*plVar2 != 0) {
      FUN_00297750(plVar2);
      FUN_0049e790(PTR_LAB_047cba48,*plVar2);
    }
    FUN_0025cef0(lVar1 + 0x58,*(undefined8 *)(lVar1 + 0x60));
    if ((*(byte *)(lVar1 + 0x40) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(lVar1 + 0x50));
    }
    if ((*(byte *)(lVar1 + 0x20) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(lVar1 + 0x30));
    }
  }
  FUN_0049e790(PTR_LAB_047cba48,lVar1);
  return;
}


