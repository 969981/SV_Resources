/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020fff20; name: FUN_020fff20
 */


ulong FUN_020fff20(long param_1)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  byte local_a0 [12];
  uint local_94 [3];
  undefined1 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_44;
  
  pbVar6 = local_a0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_a0[4] = 0;
  local_a0[5] = 0;
  local_a0[6] = 0;
  local_a0[7] = 0;
  local_a0[8] = 0;
  local_94[0] = 0;
  local_94[1] = 0;
  local_94[2] = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  bVar2 = FUN_00f7e274(*(undefined8 *)(param_1 + 0x208));
  if (bVar2 != 0) {
    uVar8 = 0;
    uVar7 = 0;
    do {
      if (((uint)uVar8 & 0xff) < (uint)*(byte *)(*(long *)(param_1 + 0x208) + 0x30)) {
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x208) + uVar8 * 8);
      }
      else {
        uVar5 = 0;
      }
      uVar4 = FUN_020ffc00(param_1,uVar5);
      if ((uVar4 & 1) != 0) {
        lVar1 = (long)(int)uVar7;
        uVar7 = uVar7 + 1;
        *(undefined8 *)(local_a0 + lVar1 * 0x10) = uVar5;
        local_a0[lVar1 * 0x10 + 8] = (byte)uVar8;
      }
      uVar8 = uVar8 + 1;
    } while (bVar2 != uVar8);
    if (uVar7 != 0) {
      if (0 < (int)uVar7) {
        uVar8 = (ulong)uVar7;
        do {
          uVar3 = (**(code **)(**(long **)pbVar6 + 0x110))();
          *(uint *)((long)pbVar6 + 0xc) = uVar3 & 0xffff;
          uVar8 = uVar8 - 1;
          pbVar6 = (byte *)((long)pbVar6 + 0x10);
        } while (uVar8 != 0);
      }
      FUN_02100430(local_a0,local_a0 + (long)(int)uVar7 * 0x10);
      return (ulong)local_a0[8];
    }
  }
  return 0xffffffff;
}


