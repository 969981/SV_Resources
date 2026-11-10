/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019db8bc; name: FUN_019db8bc
 */


void FUN_019db8bc(char *param_1,char *param_2)

{
  if (*param_1 == '\0') {
    param_1[8] = '\0';
    if (*param_2 != '\0') {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 4);
      param_1[8] = '\x01';
    }
    param_1[0x10] = '\0';
    if (param_2[8] != '\0') {
      FUN_00cbd7c0(param_1 + 0x14,param_2 + 0xc);
      param_1[0x10] = '\x01';
    }
    param_1[0x28] = '\0';
    if (param_2[0x20] != '\0') {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x28);
      param_1[0x28] = '\x01';
    }
    param_1[0x38] = '\0';
    if (param_2[0x30] != '\0') {
      *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x34);
      param_1[0x38] = '\x01';
    }
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x3c);
    param_1[0x4c] = '\0';
    if (param_2[0x44] != '\0') {
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x48);
      param_1[0x4c] = '\x01';
    }
    *param_1 = '\x01';
  }
  else {
    if (param_1[8] == '\0') {
      if (*param_2 != '\0') {
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 4);
        param_1[8] = '\x01';
      }
    }
    else if (*param_2 == '\0') {
      param_1[8] = '\0';
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 4);
    }
    FUN_01f50810(param_1 + 0x10,param_2 + 8);
    if (param_1[0x28] == '\0') {
      if (param_2[0x20] != '\0') {
        *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x28);
        param_1[0x28] = '\x01';
      }
    }
    else if (param_2[0x20] == '\0') {
      param_1[0x28] = '\0';
    }
    else {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x28);
    }
    if (param_1[0x38] == '\0') {
      if (param_2[0x30] != '\0') {
        *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x34);
        param_1[0x38] = '\x01';
      }
    }
    else if (param_2[0x30] == '\0') {
      param_1[0x38] = '\0';
    }
    else {
      *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x34);
    }
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x3c);
    if (param_1[0x4c] == '\0') {
      if (param_2[0x44] != '\0') {
        *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x48);
        param_1[0x4c] = '\x01';
      }
    }
    else if (param_2[0x44] == '\0') {
      param_1[0x4c] = '\0';
    }
    else {
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x48);
    }
  }
  return;
}


