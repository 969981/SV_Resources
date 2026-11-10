/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00819180; name: FUN_00819180
 */


ulong FUN_00819180(byte *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 *local_b0;
  undefined1 **ppuStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  uStack_58 = 0xffffff80ffffffd0;
  uStack_78 = 0xffffff80ffffffd0;
  local_e0 = param_3;
  uStack_d8 = param_4;
  local_d0 = param_5;
  uStack_c8 = param_6;
  local_c0 = param_7;
  uStack_b8 = param_8;
  local_90 = (undefined1 *)register0x00000008;
  ppuStack_88 = &local_b0;
  puStack_80 = &local_e0;
  local_70 = (undefined1 *)register0x00000008;
  ppuStack_68 = &local_b0;
  puStack_60 = &local_e0;
  uVar2 = vsnprintf((char *)0x0,0,param_2,&local_90);
  uVar3 = (ulong)uVar2;
  if ((int)uVar2 < 1) {
    return uVar3;
  }
  if ((*param_1 & 1) == 0) {
    uVar4 = (ulong)(*param_1 >> 1);
    uVar3 = uVar4 + uVar3;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8);
    uVar3 = uVar4 + uVar3;
    if (uVar3 <= uVar4) {
      *(undefined1 *)(*(long *)(param_1 + 0x10) + uVar3) = 0;
      *(ulong *)(param_1 + 8) = uVar3;
      bVar1 = *param_1;
      goto joined_r0x0081925c;
    }
  }
  FUN_002ce498(param_1,uVar3 - uVar4,0);
  bVar1 = *param_1;
joined_r0x0081925c:
  if ((bVar1 & 1) == 0) {
    param_1 = param_1 + 1;
  }
  else {
    param_1 = *(byte **)(param_1 + 0x10);
  }
  uStack_98 = 0xffffff80ffffffd0;
  local_b0 = (undefined1 *)register0x00000008;
  ppuStack_a8 = &local_b0;
  puStack_a0 = &local_e0;
  uVar2 = vsnprintf((char *)(param_1 + uVar4),(long)(int)(uVar2 + 1),param_2,&local_b0);
  return (ulong)uVar2;
}


