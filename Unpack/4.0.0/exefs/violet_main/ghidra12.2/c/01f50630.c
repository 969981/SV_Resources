/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f50630; name: FUN_01f50630
 */


void FUN_01f50630(undefined1 *param_1,char *param_2)

{
  *param_1 = 0;
  if (*param_2 != '\0') {
    param_1[8] = 0;
    if (param_2[8] != '\0') {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      param_1[8] = 1;
    }
    param_1[0x10] = 0;
    if (param_2[0x10] != '\0') {
      FUN_00cbd7c0(param_1 + 0x14,param_2 + 0x14);
      param_1[0x10] = 1;
    }
    param_1[0x28] = 0;
    if (param_2[0x28] != '\0') {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
      param_1[0x28] = 1;
    }
    param_1[0x38] = 0;
    if (param_2[0x38] != '\0') {
      *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_2 + 0x3c);
      param_1[0x38] = 1;
    }
    *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x44);
    param_1[0x4c] = 0;
    if (param_2[0x4c] != '\0') {
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
      param_1[0x4c] = 1;
    }
    *param_1 = 1;
  }
  return;
}


