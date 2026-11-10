/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00532640; name: FUN_00532640
 */


void FUN_00532640(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 **ppuStack_58;
  undefined1 *puStack_50;
  undefined8 uStack_48;
  
  param_1[2] = 0;
  puStack_50 = auStack_a0;
  ppuStack_58 = &local_60;
  *param_1 = 0;
  param_1[1] = 0;
  uStack_48 = 0xffffff80ffffffc8;
                    /* try { // try from 005326a8 to 005326b7 has its CatchHandler @ 005326c8 */
  local_98 = param_3;
  uStack_90 = param_4;
  local_88 = param_5;
  uStack_80 = param_6;
  local_78 = param_7;
  uStack_70 = param_8;
  local_68 = param_9;
  local_60 = (undefined1 *)register0x00000008;
  FUN_00532550(param_1,param_2,&local_60);
  return;
}


