/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02369478; name: FUN_02369478
 */


void FUN_02369478(undefined1 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 local_50 [16];
  undefined8 uStack_40;
  undefined8 local_30;
  
  puVar1 = &LAB_0236f590;
  if (DAT_04849198 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_50 = FUN_0236f650(param_5,puVar1,0);
  *param_1 = 1;
  uStack_40 = param_3;
  local_30 = param_4;
  FUN_0236f6c0(param_1 + 8,local_50);
  return;
}


