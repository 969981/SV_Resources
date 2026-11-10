/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020ffcd0; name: FUN_020ffcd0
 */


ulong FUN_020ffcd0(long param_1,long *param_2)

{
  long lVar1;
  ushort uVar2;
  byte bVar3;
  short sVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  byte local_c0 [12];
  uint local_b4 [3];
  undefined1 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 local_68;
  undefined4 local_64;
  
  if (param_2 == (long *)0x0) {
    return 0xffffffff;
  }
  local_c0[0] = 0;
  local_c0[1] = 0;
  local_c0[2] = 0;
  local_c0[3] = 0;
  local_c0[4] = 0;
  local_c0[5] = 0;
  local_c0[6] = 0;
  local_c0[7] = 0;
  local_c0[8] = 0;
  local_b4[0] = 0;
  local_b4[1] = 0;
  local_b4[2] = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  bVar3 = FUN_00f7e274(*(undefined8 *)(param_1 + 0x208));
  if (bVar3 != 0) {
    uVar13 = 0;
    uVar14 = 0;
    do {
      if (((uint)uVar13 & 0xff) < (uint)*(byte *)(*(long *)(param_1 + 0x208) + 0x30)) {
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x208) + uVar13 * 8);
      }
      else {
        uVar10 = 0;
      }
      uVar9 = FUN_020ffc00(param_1,uVar10);
      if ((uVar9 & 1) != 0) {
        lVar1 = (long)(int)uVar14;
        uVar14 = uVar14 + 1;
        *(undefined8 *)(local_c0 + lVar1 * 0x10) = uVar10;
        local_c0[lVar1 * 0x10 + 8] = (byte)uVar13;
      }
      uVar13 = uVar13 + 1;
    } while (bVar3 != uVar13);
    if (uVar14 != 0) {
      if (0 < (int)uVar14) {
        uVar13 = 0;
        do {
          plVar11 = *(long **)(local_c0 + uVar13 * 0x10);
          bVar3 = (**(code **)(*plVar11 + 0x708))(plVar11);
          if (bVar3 != 0) {
            uVar12 = 0;
            do {
              uVar6 = (**(code **)(*plVar11 + 0x730))(plVar11,uVar12);
              sVar4 = (**(code **)(*plVar11 + 0x690))(plVar11,uVar12);
              uVar7 = FUN_015d9898(uVar6);
              uVar5 = FUN_015d9950(uVar6);
              if ((sVar4 != 0) && (uVar9 = FUN_015d973c(uVar6), (uVar9 & 1) != 0)) {
                uVar2 = 0x3c;
                if (9 < uVar5) {
                  uVar2 = uVar5;
                }
                uVar6 = (**(code **)(*param_2 + 0x2f8))(param_2);
                uVar10 = FUN_02100428(*(undefined8 *)(param_1 + 0x30));
                uVar6 = FUN_015d9aac(uVar10,uVar7,uVar6);
                uVar8 = FUN_015d9800(uVar2,uVar6);
                if (local_b4[uVar13 * 4] < uVar8) {
                  local_b4[uVar13 * 4] = uVar8;
                }
              }
              uVar12 = uVar12 + 1;
            } while (bVar3 != uVar12);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar14);
      }
      FUN_02100060(local_c0,local_c0 + (long)(int)uVar14 * 0x10);
      return (ulong)local_c0[8];
    }
  }
  return 0xffffffff;
}


