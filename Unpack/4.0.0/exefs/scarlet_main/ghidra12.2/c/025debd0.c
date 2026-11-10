/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025debd0; name: FUN_025debd0
 */


void FUN_025debd0(undefined1 *param_1,char *param_2)

{
  char cVar1;
  undefined1 local_70 [4];
  undefined4 local_6c;
  undefined1 local_68;
  undefined1 auStack_64 [20];
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined1 local_2c;
  undefined8 local_28;
  
  if (*param_2 == '\0') {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    local_70[0] = param_2[8] != '\0';
    if ((bool)local_70[0]) {
      local_6c = *(undefined4 *)(param_2 + 0xc);
    }
    local_68 = 0;
    cVar1 = param_2[0x10];
    if (cVar1 != '\0') {
      FUN_00cbd7c0(auStack_64,param_2 + 0x14);
    }
    local_50 = param_2[0x28] != '\0';
    if ((bool)local_50) {
      local_48 = *(undefined8 *)(param_2 + 0x30);
    }
    local_40 = param_2[0x38] != '\0';
    if ((bool)local_40) {
      local_3c = *(undefined8 *)(param_2 + 0x3c);
    }
    local_34 = *(undefined8 *)(param_2 + 0x44);
    local_2c = param_2[0x4c] != '\0';
    if ((bool)local_2c) {
      local_28 = *(undefined8 *)(param_2 + 0x50);
    }
    local_68 = cVar1 != '\0';
    FUN_025decbc(param_1,local_70);
    FUN_019ab5b0(local_70);
  }
  return;
}


