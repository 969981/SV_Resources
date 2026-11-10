/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03482f54; name: FUN_03482f54
 */


void FUN_03482f54(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  *param_1 = &PTR_FUN_047c2c00;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xff;
  local_40 = 0xff;
  local_38 = 0;
  local_60 = param_1;
  FUN_034c8be8(param_1 + 1,&local_60);
  puVar1 = PTR_DAT_047e2fd0;
  puVar2 = (undefined8 *)param_1[5];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(puVar1 + 0x30))(4,puVar2);
    param_1[5] = 0;
  }
  puVar2 = (undefined8 *)param_1[6];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(puVar1 + 0x30))(4,puVar2);
    param_1[6] = 0;
  }
  puVar2 = (undefined8 *)param_1[7];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(puVar1 + 0x30))(4,puVar2);
    param_1[7] = 0;
  }
  puVar2 = (undefined8 *)param_1[8];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(puVar1 + 0x30))(4,puVar2);
    param_1[8] = 0;
  }
  puVar2 = (undefined8 *)param_1[9];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(puVar1 + 0x30))(4,puVar2);
    param_1[9] = 0;
  }
  puVar2 = (undefined8 *)param_1[10];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(puVar1 + 0x30))(4,puVar2);
    param_1[10] = 0;
  }
  puVar2 = (undefined8 *)param_1[0xb];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(puVar1 + 0x30))(4,puVar2);
    param_1[0xb] = 0;
  }
  puVar2 = (undefined8 *)param_1[0xc];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(puVar1 + 0x30))(4,puVar2);
    param_1[0xc] = 0;
  }
  puVar2 = (undefined8 *)param_1[0xd];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(puVar1 + 0x30))(4,puVar2);
    param_1[0xd] = 0;
  }
  puVar2 = (undefined8 *)param_1[0xe];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(puVar1 + 0x30))(4,puVar2);
    param_1[0xe] = 0;
  }
  return;
}


