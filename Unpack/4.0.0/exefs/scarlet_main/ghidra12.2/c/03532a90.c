/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03532a90; name: FUN_03532a90
 */


void FUN_03532a90(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  param_1[-3] = &PTR_LAB_047c9228;
  *param_1 = &PTR_LAB_047c92b8;
  param_1[0xb] = 0;
  param_1[2] = &PTR_FUN_047c92e0;
  param_1[10] = 0;
  puVar1 = PTR_DAT_047e2fd0;
  puVar2 = (undefined8 *)param_1[0xe];
  while (puVar2 != (undefined8 *)0x0) {
    if (puVar2[6] == 0) {
      param_1[0xe] = 0;
    }
    else {
      param_1[0xe] = puVar2[6];
    }
    (**(code **)*puVar2)(puVar2);
    (**(code **)(puVar1 + 0x30))(0,puVar2);
    puVar2 = (undefined8 *)param_1[0xe];
  }
  if ((long *)param_1[0xc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc] + 0x30))();
  }
  param_1[9] = PTR_DAT_047e7558 + 0x10;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_0351bd94(param_1 + -3);
  return;
}


