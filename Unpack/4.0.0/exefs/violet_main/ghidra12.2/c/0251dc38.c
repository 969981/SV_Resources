/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0251dc38; name: FUN_0251dc38
 */


void FUN_0251dc38(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 local_70 [2];
  undefined1 local_60 [16];
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_30;
  
  puVar1 = PTR_FUN_047df328;
  if (DAT_0484f2a0 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_70[0] = param_2;
  local_60 = FUN_0251e6bc(param_6,puVar1,0,local_70);
  *param_1 = 1;
  uStack_50 = param_3;
  local_40 = param_4;
  uStack_30 = param_5;
  FUN_00d319d0(param_1 + 8,local_60);
  return;
}


