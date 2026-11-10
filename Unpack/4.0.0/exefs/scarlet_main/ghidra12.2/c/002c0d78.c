/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c0d78; name: FUN_002c0d78
 */


char * FUN_002c0d78(char *param_1,char *param_2)

{
  char *pcVar1;
  long *plVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*param_2 == '\0') {
    if (*param_1 != '\0') {
      if (param_1[0x20] != '\0') {
        plVar2 = (long *)(param_1 + 0x28);
        if (*plVar2 != 0) {
          FUN_002c14bc(plVar2);
          FUN_0049e790(PTR_LAB_047cba48,*plVar2);
        }
        param_1[0x20] = '\0';
      }
      if ((param_1[8] & 1U) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x18));
      }
      *param_1 = '\0';
    }
  }
  else {
    pbVar3 = (byte *)(param_1 + 8);
    pcVar1 = param_2 + 8;
    if (*param_1 == '\0') {
      uVar5 = *(undefined8 *)(param_2 + 0x10);
      uVar4 = *(undefined8 *)pcVar1;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = uVar5;
      *(undefined8 *)pbVar3 = uVar4;
      param_2[0x10] = '\0';
      param_2[0x11] = '\0';
      param_2[0x12] = '\0';
      param_2[0x13] = '\0';
      param_2[0x14] = '\0';
      param_2[0x15] = '\0';
      param_2[0x16] = '\0';
      param_2[0x17] = '\0';
      param_2[0x18] = '\0';
      param_2[0x19] = '\0';
      param_2[0x1a] = '\0';
      param_2[0x1b] = '\0';
      param_2[0x1c] = '\0';
      param_2[0x1d] = '\0';
      param_2[0x1e] = '\0';
      param_2[0x1f] = '\0';
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      param_1[0x28] = '\0';
      param_1[0x29] = '\0';
      param_1[0x2a] = '\0';
      param_1[0x2b] = '\0';
      param_1[0x2c] = '\0';
      param_1[0x2d] = '\0';
      param_1[0x2e] = '\0';
      param_1[0x2f] = '\0';
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
      param_1[0x38] = '\0';
      param_1[0x39] = '\0';
      param_1[0x3a] = '\0';
      param_1[0x3b] = '\0';
      param_1[0x3c] = '\0';
      param_1[0x3d] = '\0';
      param_1[0x3e] = '\0';
      param_1[0x3f] = '\0';
      param_1[0x30] = '\0';
      param_1[0x31] = '\0';
      param_1[0x32] = '\0';
      param_1[0x33] = '\0';
      param_1[0x34] = '\0';
      param_1[0x35] = '\0';
      param_1[0x36] = '\0';
      param_1[0x37] = '\0';
      if (param_2[0x20] != '\0') {
        param_1[0x28] = '\0';
        param_1[0x29] = '\0';
        param_1[0x2a] = '\0';
        param_1[0x2b] = '\0';
        param_1[0x2c] = '\0';
        param_1[0x2d] = '\0';
        param_1[0x2e] = '\0';
        param_1[0x2f] = '\0';
        param_1[0x30] = '\0';
        param_1[0x31] = '\0';
        param_1[0x32] = '\0';
        param_1[0x33] = '\0';
        param_1[0x34] = '\0';
        param_1[0x35] = '\0';
        param_1[0x36] = '\0';
        param_1[0x37] = '\0';
        param_1[0x38] = '\0';
        param_1[0x39] = '\0';
        param_1[0x3a] = '\0';
        param_1[0x3b] = '\0';
        param_1[0x3c] = '\0';
        param_1[0x3d] = '\0';
        param_1[0x3e] = '\0';
        param_1[0x3f] = '\0';
        uVar4 = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
        *(undefined8 *)(param_1 + 0x28) = uVar4;
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
        param_2[0x28] = '\0';
        param_2[0x29] = '\0';
        param_2[0x2a] = '\0';
        param_2[0x2b] = '\0';
        param_2[0x2c] = '\0';
        param_2[0x2d] = '\0';
        param_2[0x2e] = '\0';
        param_2[0x2f] = '\0';
        param_2[0x30] = '\0';
        param_2[0x31] = '\0';
        param_2[0x32] = '\0';
        param_2[0x33] = '\0';
        param_2[0x34] = '\0';
        param_2[0x35] = '\0';
        param_2[0x36] = '\0';
        param_2[0x37] = '\0';
        param_2[0x38] = '\0';
        param_2[0x39] = '\0';
        param_2[0x3a] = '\0';
        param_2[0x3b] = '\0';
        param_2[0x3c] = '\0';
        param_2[0x3d] = '\0';
        param_2[0x3e] = '\0';
        param_2[0x3f] = '\0';
        param_1[0x20] = '\x01';
      }
      *param_1 = '\x01';
    }
    else {
      if ((*pbVar3 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x18));
      }
      uVar5 = *(undefined8 *)(param_2 + 0x10);
      uVar4 = *(undefined8 *)pcVar1;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = uVar5;
      *(undefined8 *)pbVar3 = uVar4;
      param_2[8] = '\0';
      param_2[9] = '\0';
      FUN_002b7ba8(param_1 + 0x20,param_2 + 0x20);
    }
  }
  return param_1;
}


