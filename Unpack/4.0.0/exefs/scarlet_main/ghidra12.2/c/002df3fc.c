/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002df3fc; name: FUN_002df3fc
 */


undefined8 FUN_002df3fc(uint *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  
  FUN_002df2a0();
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
  FUN_002e4804();
  FUN_002e0a38(param_1,6);
  pcVar7 = *(char **)(param_1 + 8);
  if (((pcVar7 == (char *)0x0) || (pcVar5 = *(char **)(pcVar7 + 0x10), pcVar5 == (char *)0x0)) ||
     (*pcVar5 != '\x16')) {
    puVar4 = *(undefined4 **)(param_1 + 6);
    *puVar4 = 6;
    uVar2 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(puVar4 + 2) = uVar2;
    return 0;
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pcVar5 + 0x10);
  *param_1 = (uint)*(ushort *)(pcVar5 + 2);
  if (*(int *)(pcVar5 + 0x18) < 1) {
    FUN_002e4804(pcVar5);
  }
  else {
    *pcVar5 = '\v';
    pcVar5[6] = '\x01';
    pcVar5[7] = '\0';
    pcVar7[0x10] = '\0';
    pcVar7[0x11] = '\0';
    pcVar7[0x12] = '\0';
    pcVar7[0x13] = '\0';
    pcVar7[0x14] = '\0';
    pcVar7[0x15] = '\0';
    pcVar7[0x16] = '\0';
    pcVar7[0x17] = '\0';
    if ((*pcVar7 == '\x14') && (lVar6 = *(long *)(pcVar7 + 0x20), lVar6 != 0)) {
      pcVar7[0x20] = '\0';
      pcVar7[0x21] = '\0';
      pcVar7[0x22] = '\0';
      pcVar7[0x23] = '\0';
      pcVar7[0x24] = '\0';
      pcVar7[0x25] = '\0';
      pcVar7[0x26] = '\0';
      pcVar7[0x27] = '\0';
      uVar2 = FUN_002e7144(lVar6);
      *(undefined8 *)(pcVar7 + 0x18) = uVar2;
      FUN_002e3684(lVar6 + 0x10,*(undefined8 *)(lVar6 + 0x18));
      FUN_0049e790(PTR_LAB_047cba48,lVar6);
      pcVar3 = pcVar5 + 8;
      if (1 < *(ushort *)(pcVar5 + 6)) {
        pcVar3 = *(char **)pcVar3;
      }
    }
    else {
      pcVar3 = pcVar5 + 8;
    }
    *(char **)pcVar3 = pcVar7;
    bVar1 = FUN_002e7540(pcVar5);
    pcVar5[1] = bVar1 & 1;
    pcVar7 = pcVar5;
  }
  FUN_002de558(param_1,pcVar7);
  return 1;
}


