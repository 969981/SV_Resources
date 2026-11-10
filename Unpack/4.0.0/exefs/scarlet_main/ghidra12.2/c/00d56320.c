/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d56320; name: FUN_00d56320
 */


ulong FUN_00d56320(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined1 auVar5 [16];
  undefined8 **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_58;
  uint *puStack_50;
  undefined4 uStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  switch(*param_1 ^ (int)*param_1 >> 0x1f) {
  case 0:
    return 1;
  case 1:
    return (ulong)(uint)((int)((ulong)(*(long *)(param_1 + 4) - *(long *)(param_1 + 2)) >> 3) *
                        -0x55555555);
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    FUN_0270c1a0();
  }
  auVar5 = FUN_0270c1c0();
  puVar4 = auVar5._8_8_;
  puVar2 = auVar5._0_8_;
  uStack_38 = FUN_00d56380;
  ppuStack_98 = &puStack_58;
  uVar1 = *puVar2;
  puStack_58 = puVar4;
  puStack_40 = (undefined1 *)((long)register0x00000008 + -0x10);
  uVar3 = FUN_00d56460(uVar1,uVar1 ^ (int)uVar1 >> 0x1f,&ppuStack_98,puVar2 + 2,in_x4,in_x5,0,0);
  if ((uVar3 & 1) == 0) {
    uStack_90 = *puVar4;
    uStack_88 = puVar4[1];
    uStack_80 = puVar4[2];
    ppuStack_98 = (undefined8 **)((ulong)ppuStack_98 & 0xffffffff00000000);
    if (*puVar2 == 0) {
      puStack_50 = (uint *)&uStack_90;
      FUN_00d5a180(0,&puStack_50,puVar2 + 2);
    }
    else {
      uStack_48 = 0;
      puStack_50 = puVar2;
      FUN_00d5a110(&puStack_50,&uStack_90);
    }
    uVar3 = FUN_00d56620((ulong)ppuStack_98 & 0xffffffff,
                         (uint)ppuStack_98 ^ (int)(uint)ppuStack_98 >> 0x1f,&puStack_50,&uStack_90,
                         in_x4,in_x5,0,0);
  }
  return uVar3;
}


