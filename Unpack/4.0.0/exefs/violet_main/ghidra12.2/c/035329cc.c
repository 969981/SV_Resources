/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 035329cc; name: FUN_035329cc
 */


void FUN_035329cc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_047c9228;
  param_1[3] = &PTR_LAB_047c92b8;
  param_1[5] = &PTR_FUN_047c92e0;
  param_1[0xd] = 0;
  puVar2 = (undefined8 *)param_1[0x11];
  param_1[0xe] = 0;
  puVar1 = PTR_DAT_047e2fd0;
  while (puVar2 != (undefined8 *)0x0) {
    if (puVar2[6] == 0) {
      param_1[0x11] = 0;
    }
    else {
      param_1[0x11] = puVar2[6];
    }
    (**(code **)*puVar2)(puVar2);
    (**(code **)(puVar1 + 0x30))(0,puVar2);
    puVar2 = (undefined8 *)param_1[0x11];
  }
  if ((long *)param_1[0xf] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf] + 0x30))();
  }
  param_1[0xc] = PTR_DAT_047e7558 + 0x10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_0351bd94(param_1);
  return;
}


