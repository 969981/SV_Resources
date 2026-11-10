/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008195dc; name: FUN_008195dc
 */


long * FUN_008195dc(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  uint uVar2;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 **ppuStack_58;
  ulong *puStack_50;
  undefined8 uStack_48;
  
  local_90 = param_2 & 0xffffffff;
  puStack_50 = &local_90;
  ppuStack_58 = &local_60;
  uStack_48 = 0xffffff80ffffffd0;
  uStack_88 = param_4;
  local_80 = param_5;
  uStack_78 = param_6;
  local_70 = param_7;
  uStack_68 = param_8;
  local_60 = (undefined1 *)register0x00000008;
  uVar2 = vsnprintf((char *)(*param_1 + param_1[2]),param_1[1] - param_1[2],"%d",&local_60);
  if ((int)uVar2 < 0) {
    *(undefined1 *)(*param_1 + param_1[2]) = 0;
  }
  else {
    uVar1 = param_1[1] + ~param_1[2];
    if (uVar1 <= uVar2) {
      uVar2 = (uint)uVar1;
    }
    param_1[2] = param_1[2] + (long)(int)uVar2;
  }
  return param_1;
}


