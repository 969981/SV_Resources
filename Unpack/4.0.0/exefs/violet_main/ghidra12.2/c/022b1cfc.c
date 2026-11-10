/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022b1cfc; name: FUN_022b1cfc
 */


void FUN_022b1cfc(undefined1 *param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined *puVar1;
  undefined8 local_90 [2];
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];
  undefined4 local_8;
  float local_4;
  
  local_4 = (float)param_3;
  puVar1 = PTR_LAB_047dde60;
  if (DAT_04843c00 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_90[0] = param_2;
  local_8 = param_5;
  FUN_022b2fe8(auStack_80,param_4,puVar1,0,local_90,&local_4,&local_8);
  *param_1 = 1;
  memcpy(auStack_50,auStack_80,0x30);
  FUN_022b2d24(param_1 + 8,auStack_50);
  return;
}


