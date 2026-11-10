/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d1b640; name: FUN_01d1b640
 */


void FUN_01d1b640(char *param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (*param_2 == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 8);
    local_18 = *(undefined8 *)(param_2 + 0x10);
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    local_10 = *(undefined8 *)(param_2 + 0x18);
    local_8 = *(undefined8 *)(param_2 + 0x20);
  }
  else {
    uVar2 = 0;
    local_18 = 0;
    local_10 = 0;
    local_8 = 0;
  }
  *param_1 = '\x01';
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = local_10;
  *(undefined8 *)(param_1 + 0x20) = local_8;
  *(undefined8 *)(param_1 + 0x10) = local_18;
  cVar1 = *param_2;
  *param_1 = cVar1;
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  return;
}


