/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002b7ba8; name: FUN_002b7ba8
 */


char * FUN_002b7ba8(char *param_1,char *param_2)

{
  char *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  
  if (*param_2 == '\0') {
    if (*param_1 != '\0') {
      plVar2 = (long *)(param_1 + 8);
      if (*plVar2 != 0) {
        FUN_002c14bc(plVar2);
        FUN_0049e790(PTR_LAB_047cba48,*plVar2);
      }
      *param_1 = '\0';
    }
  }
  else {
    plVar2 = (long *)(param_1 + 8);
    pcVar1 = param_2 + 8;
    if (*param_1 == '\0') {
      *plVar2 = 0;
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      uVar3 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 8) = uVar3;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
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
      *param_1 = '\x01';
    }
    else {
      if (*plVar2 != 0) {
        FUN_002c14bc(plVar2);
        FUN_0049e790(PTR_LAB_047cba48,*plVar2);
        *plVar2 = 0;
        param_1[0x10] = '\0';
        param_1[0x11] = '\0';
        param_1[0x12] = '\0';
        param_1[0x13] = '\0';
        param_1[0x14] = '\0';
        param_1[0x15] = '\0';
        param_1[0x16] = '\0';
        param_1[0x17] = '\0';
        param_1[0x18] = '\0';
        param_1[0x19] = '\0';
        param_1[0x1a] = '\0';
        param_1[0x1b] = '\0';
        param_1[0x1c] = '\0';
        param_1[0x1d] = '\0';
        param_1[0x1e] = '\0';
        param_1[0x1f] = '\0';
      }
      uVar3 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 8) = uVar3;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
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
      param_2[0x10] = '\0';
      param_2[0x11] = '\0';
      param_2[0x12] = '\0';
      param_2[0x13] = '\0';
      param_2[0x14] = '\0';
      param_2[0x15] = '\0';
      param_2[0x16] = '\0';
      param_2[0x17] = '\0';
    }
  }
  return param_1;
}


