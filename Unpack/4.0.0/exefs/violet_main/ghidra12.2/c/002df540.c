/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002df540; name: FUN_002df540
 */


char * FUN_002df540(long param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  long lVar4;
  
  FUN_002df2a0();
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  FUN_002e4804();
  FUN_002e0a38(param_1,6);
  pcVar3 = *(char **)(param_1 + 0x20);
  if (pcVar3 == (char *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    return (char *)0x0;
  }
  if (*(long *)(pcVar3 + 0x10) == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    pcVar3[0x10] = '\0';
    pcVar3[0x11] = '\0';
    pcVar3[0x12] = '\0';
    pcVar3[0x13] = '\0';
    pcVar3[0x14] = '\0';
    pcVar3[0x15] = '\0';
    pcVar3[0x16] = '\0';
    pcVar3[0x17] = '\0';
    if ((*pcVar3 == '\x14') && (lVar4 = *(long *)(pcVar3 + 0x20), lVar4 != 0)) {
      pcVar3[0x20] = '\0';
      pcVar3[0x21] = '\0';
      pcVar3[0x22] = '\0';
      pcVar3[0x23] = '\0';
      pcVar3[0x24] = '\0';
      pcVar3[0x25] = '\0';
      pcVar3[0x26] = '\0';
      pcVar3[0x27] = '\0';
      uVar1 = FUN_002e7144(lVar4);
      *(undefined8 *)(pcVar3 + 0x18) = uVar1;
      FUN_002e3684(lVar4 + 0x10,*(undefined8 *)(lVar4 + 0x18));
      FUN_0049e790(PTR_LAB_047cba48,lVar4);
      return pcVar3;
    }
  }
  else {
    puVar2 = *(undefined4 **)(param_1 + 0x18);
    *puVar2 = 6;
    uVar1 = *(undefined8 *)(param_1 + 8);
    pcVar3 = (char *)0x0;
    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(puVar2 + 2) = uVar1;
  }
  return pcVar3;
}


