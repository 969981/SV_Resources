/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c66694; name: FUN_00c66694
 */


undefined8 FUN_00c66694(long param_1,short param_2)

{
  undefined2 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined2 *puVar6;
  undefined2 *puVar5;
  
  lVar4 = *(long *)(param_1 + 0x38);
  lVar3 = (long)param_2;
  if (*(char *)(lVar4 + lVar3 * 0x140 + 0x139) != '\0') {
    return 0;
  }
  if (*(char *)(lVar4 + lVar3 * 0x140 + 0x138) == '\0') {
    lVar4 = lVar4 + lVar3 * 0x140;
    puVar5 = *(undefined2 **)(lVar4 + 0xf0);
    puVar1 = *(undefined2 **)(lVar4 + 0xf8);
    if (puVar5 == puVar1) {
      return 0;
    }
    while( true ) {
      puVar6 = puVar5 + 2;
      uVar2 = FUN_00c66694(param_1,*puVar5);
      if ((uVar2 & 1) != 0) break;
      puVar5 = puVar6;
      if (puVar1 == puVar6) {
        return 0;
      }
    }
  }
  return 1;
}


