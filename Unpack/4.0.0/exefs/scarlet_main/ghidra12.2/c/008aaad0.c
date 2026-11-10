/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008aaad0; name: FUN_008aaad0
 */


void FUN_008aaad0(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ushort local_48;
  ushort local_46;
  
  lVar8 = *(long *)(param_1 + 0x58);
  if ((((lVar8 == 0) || ((*(byte *)(param_1 + 0x228) >> 2 & 1) != 0)) ||
      ((*(byte *)(lVar8 + 8) >> 5 & 1) == 0)) || (*(char *)(param_1 + 0x98) == '\0')) {
    uStack_68 = *(undefined8 *)(param_2 + 0x148);
    uVar4 = *(undefined8 *)(param_2 + 0x150);
    puVar1 = (undefined8 *)(param_2 + 0x130);
    local_80 = *(undefined8 *)(param_2 + 0x130);
    uStack_78 = *(undefined8 *)(param_2 + 0x138);
    puVar2 = (undefined8 *)(param_2 + 0x100);
    local_70 = *(undefined8 *)(param_2 + 0x140);
    uStack_a8 = *(undefined8 *)(param_2 + 0x108);
    uVar3 = *(undefined8 *)(param_2 + 0xf8);
    local_b0 = *(undefined8 *)(param_2 + 0x100);
    local_a0 = *(undefined8 *)(param_2 + 0x110);
    uStack_98 = *(undefined8 *)(param_2 + 0x118);
    local_90 = *(undefined8 *)(param_2 + 0x120);
    uStack_88 = *(undefined8 *)(param_2 + 0x128);
    uVar9 = (uint)*(byte *)(lVar8 + 8);
    if (((*(byte *)(lVar8 + 8) >> 2 & 1) != 0) && (-1 < *(int *)(param_1 + 0xd4))) {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      if (((*(byte *)(param_1 + 0x228) >> 2 & 1) == 0) && ((*(byte *)(lVar8 + 8) >> 5 & 1) != 0)) {
        lVar8 = *(long *)(param_1 + 0x90) + 0x40;
        local_110 = 0xff000000ff;
        uStack_108 = 0xff000000ff;
        FUN_008f0dc8(param_3,lVar8,&local_110,0);
        (**(code **)(**(long **)(param_1 + 0x90) + 0x20))(&local_48);
        uVar5 = NEON_ucvtf((uint)local_48);
        uVar6 = NEON_ucvtf((uint)local_46);
        FUN_008b53b0((short)uVar5,(short)uVar6,&local_100,&local_d0);
        *(long *)(param_2 + 0xf8) = lVar8;
        uVar7 = 1;
        *(undefined8 *)(param_2 + 0x150) = 0;
        *puVar2 = local_100;
        *(undefined8 *)(param_2 + 0x108) = uStack_f8;
        *(undefined8 *)(param_2 + 0x120) = local_e0;
        *(undefined8 *)(param_2 + 0x128) = uStack_d8;
        *(undefined8 *)(param_2 + 0x110) = local_f0;
        *(undefined8 *)(param_2 + 0x118) = uStack_e8;
        *(undefined8 *)(param_2 + 0x140) = local_c0;
        *(undefined8 *)(param_2 + 0x148) = uStack_b8;
        *puVar1 = local_d0;
        *(undefined8 *)(param_2 + 0x138) = uStack_c8;
        lVar8 = *(long *)(param_1 + 0x58);
      }
      else {
        switch(*(undefined1 *)(lVar8 + 0xf)) {
        case 1:
          uVar7 = 4;
          break;
        case 2:
          uVar7 = 2;
          break;
        case 3:
          uVar7 = 3;
          break;
        case 4:
          uVar7 = 5;
          break;
        default:
          uVar7 = 0;
        }
      }
      FUN_008aca44(param_1,param_2,param_3,2,uVar7,*(byte *)(lVar8 + 8) >> 3 & 1);
      lVar8 = *(long *)(param_1 + 0x58);
      uVar9 = (uint)*(byte *)(lVar8 + 8);
    }
    if (((uVar9 >> 1 & 1) != 0) && (-1 < *(int *)(param_1 + 0xd0))) {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      if ((lVar8 == 0) ||
         (((*(byte *)(param_1 + 0x228) >> 2 & 1) != 0 || ((*(byte *)(lVar8 + 8) >> 5 & 1) == 0)))) {
        switch(*(undefined1 *)(lVar8 + 0xe)) {
        case 1:
          uVar7 = 4;
          break;
        case 2:
          uVar7 = 2;
          break;
        case 3:
          uVar7 = 3;
          break;
        case 4:
          uVar7 = 5;
          break;
        default:
          uVar7 = 0;
        }
      }
      else {
        lVar8 = *(long *)(param_1 + 0x88) + 0x40;
        local_110 = 0xff000000ff;
        uStack_108 = 0xff000000ff;
        FUN_008f0dc8(param_3,lVar8,&local_110,0);
        (**(code **)(**(long **)(param_1 + 0x88) + 0x20))(&local_48);
        uVar5 = NEON_ucvtf((uint)local_48);
        uVar6 = NEON_ucvtf((uint)local_46);
        FUN_008b53b0((short)uVar5,(short)uVar6,&local_100,&local_d0);
        *(long *)(param_2 + 0xf8) = lVar8;
        uVar7 = 1;
        *(undefined8 *)(param_2 + 0x150) = 0;
        *puVar2 = local_100;
        *(undefined8 *)(param_2 + 0x108) = uStack_f8;
        *(undefined8 *)(param_2 + 0x120) = local_e0;
        *(undefined8 *)(param_2 + 0x128) = uStack_d8;
        *(undefined8 *)(param_2 + 0x110) = local_f0;
        *(undefined8 *)(param_2 + 0x118) = uStack_e8;
        *(undefined8 *)(param_2 + 0x140) = local_c0;
        *(undefined8 *)(param_2 + 0x148) = uStack_b8;
        *puVar1 = local_d0;
        *(undefined8 *)(param_2 + 0x138) = uStack_c8;
        lVar8 = *(long *)(param_1 + 0x58);
      }
      FUN_008aca44(param_1,param_2,param_3,1,uVar7,*(byte *)(lVar8 + 8) >> 3 & 1);
      lVar8 = *(long *)(param_1 + 0x58);
      uVar9 = (uint)*(byte *)(lVar8 + 8);
    }
    if (((uVar9 & 1) != 0) && (-1 < *(int *)(param_1 + 0xcc))) {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      if ((lVar8 == 0) ||
         (((*(byte *)(param_1 + 0x228) >> 2 & 1) != 0 || ((*(byte *)(lVar8 + 8) >> 5 & 1) == 0)))) {
        switch(*(undefined1 *)(lVar8 + 0xd)) {
        case 1:
          uVar7 = 4;
          break;
        case 2:
          uVar7 = 2;
          break;
        case 3:
          uVar7 = 3;
          break;
        case 4:
          uVar7 = 5;
          break;
        default:
          uVar7 = 0;
        }
      }
      else {
        lVar8 = *(long *)(param_1 + 0x80) + 0x40;
        local_110 = 0xff000000ff;
        uStack_108 = 0xff000000ff;
        FUN_008f0dc8(param_3,lVar8,&local_110,0);
        (**(code **)(**(long **)(param_1 + 0x80) + 0x20))(&local_48);
        uVar5 = NEON_ucvtf((uint)local_48);
        uVar6 = NEON_ucvtf((uint)local_46);
        FUN_008b53b0((short)uVar5,(short)uVar6,&local_100,&local_d0);
        *(long *)(param_2 + 0xf8) = lVar8;
        uVar7 = 1;
        *(undefined8 *)(param_2 + 0x150) = 0;
        *puVar2 = local_100;
        *(undefined8 *)(param_2 + 0x108) = uStack_f8;
        *(undefined8 *)(param_2 + 0x120) = local_e0;
        *(undefined8 *)(param_2 + 0x128) = uStack_d8;
        *(undefined8 *)(param_2 + 0x110) = local_f0;
        *(undefined8 *)(param_2 + 0x118) = uStack_e8;
        *(undefined8 *)(param_2 + 0x140) = local_c0;
        *(undefined8 *)(param_2 + 0x148) = uStack_b8;
        *puVar1 = local_d0;
        *(undefined8 *)(param_2 + 0x138) = uStack_c8;
        lVar8 = *(long *)(param_1 + 0x58);
      }
      FUN_008aca44(param_1,param_2,param_3,0,uVar7,*(byte *)(lVar8 + 8) >> 3 & 1);
      lVar8 = *(long *)(param_1 + 0x58);
    }
    if (((lVar8 != 0) && ((*(byte *)(param_1 + 0x228) >> 2 & 1) == 0)) &&
       ((*(byte *)(lVar8 + 8) >> 5 & 1) != 0)) {
      FUN_00d8d070(param_3,0x80);
      FUN_008f110c(param_3,0x20);
      *(undefined1 *)(param_1 + 0x98) = 1;
      *(undefined8 *)(param_2 + 0xf8) = uVar3;
      *(undefined8 *)(param_2 + 0x150) = uVar4;
      *puVar2 = local_b0;
      *(undefined8 *)(param_2 + 0x108) = uStack_a8;
      *(undefined8 *)(param_2 + 0x120) = local_90;
      *(undefined8 *)(param_2 + 0x128) = uStack_88;
      *(undefined8 *)(param_2 + 0x110) = local_a0;
      *(undefined8 *)(param_2 + 0x118) = uStack_98;
      *(undefined8 *)(param_2 + 0x140) = local_70;
      *(undefined8 *)(param_2 + 0x148) = uStack_68;
      *puVar1 = local_80;
      *(undefined8 *)(param_2 + 0x138) = uStack_78;
      FUN_00892e3c(param_2,param_3);
    }
  }
  return;
}


