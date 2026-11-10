/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ae6f70; name: FUN_01ae6f70
 */


void FUN_01ae6f70(char *param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  cVar1 = *param_2;
  if (cVar1 != '\x01') {
    uVar2 = 0;
    local_40 = 0;
    local_38 = 0;
    local_48 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
    local_48 = *(undefined8 *)(param_2 + 0x10);
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    local_40 = *(undefined8 *)(param_2 + 0x18);
    local_38 = *(undefined8 *)(param_2 + 0x20);
  }
  *param_1 = '\x01';
  local_50 = 0;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = local_48;
  *(undefined8 *)(param_1 + 0x18) = local_40;
  *(undefined8 *)(param_1 + 0x20) = local_38;
  if (cVar1 != '\x01') {
    FUN_01ae0f84(&local_50);
  }
  else {
    FUN_01ae0f84(&local_50);
  }
  cVar1 = *param_2;
  *param_1 = cVar1;
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  return;
}


