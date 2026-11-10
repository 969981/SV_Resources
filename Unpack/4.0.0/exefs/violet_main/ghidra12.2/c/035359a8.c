/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 035359a8; name: FUN_035359a8
 */


long FUN_035359a8(long *param_1,byte *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  byte local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char cStack_58;
  undefined8 local_50;
  
  *param_2 = 0;
  if (((*(byte *)((long)param_1 + 0x5a) & 0xe) == 0) && ((char)param_1[0x18] != '\0')) {
    uVar2 = *(uint *)(param_1 + 0x17);
    uVar3 = *(undefined4 *)((long)param_1 + 0xbc);
    FUN_03530468(param_1 + 0x13);
    lVar15 = param_1[0xf];
    if (lVar15 == 0) {
      uVar6 = 0;
    }
    else {
      if (*(long *)(lVar15 + 0x18) == 0) goto LAB_035359d0;
      uVar6 = *(uint *)(*(long *)(*(long *)(lVar15 + 0x18) + 0x78) + 0x18);
    }
    uVar4 = *(uint *)(param_1[0x12] + 0x138);
    uVar9 = (ulong)uVar4;
    puVar8 = *(undefined8 **)(param_1[0x12] + 0x130);
    if (0 < (int)uVar4) {
      do {
        uVar10 = uVar9 - 1 & 0xffffffff;
        puVar16 = puVar8 + uVar10 * 0xc;
        uVar4 = *(uint *)(puVar16 + 1);
        if (uVar4 != 0) {
          puVar11 = (uint *)*puVar16;
          if (*puVar11 != 0xffffffff) {
            puVar12 = puVar11;
            uVar13 = uVar4;
            do {
              puVar14 = puVar12 + (uVar13 >> 1);
              uVar5 = *puVar14;
              if (uVar5 == uVar6) goto LAB_03535aa0;
              puVar14 = puVar14 + 1;
              if (uVar5 >= uVar6) {
                puVar14 = puVar12;
              }
              uVar13 = uVar13 - (uVar5 < uVar6) >> 1;
              puVar12 = puVar14;
            } while (uVar13 != 0);
            puVar14 = puVar11 + uVar4;
LAB_03535aa0:
            if (puVar14 == puVar11 + uVar4) goto LAB_03535b10;
          }
          uVar4 = *(uint *)(puVar8 + uVar10 * 0xc + 3);
          if (uVar4 != 0) {
            puVar11 = (uint *)puVar8[uVar10 * 0xc + 2];
            if (*puVar11 == 0xffffffff) goto LAB_03535b20;
            puVar12 = puVar11;
            uVar13 = uVar4;
            do {
              puVar14 = puVar12 + (uVar13 >> 1);
              uVar5 = *puVar14;
              if (uVar5 == uVar2) goto LAB_03535b04;
              puVar14 = puVar14 + 1;
              if (uVar5 >= uVar2) {
                puVar14 = puVar12;
              }
              uVar13 = uVar13 - (uVar5 < uVar2) >> 1;
              puVar12 = puVar14;
            } while (uVar13 != 0);
            puVar14 = puVar11 + uVar4;
LAB_03535b04:
            if (puVar14 != puVar11 + uVar4) goto LAB_03535b20;
          }
        }
LAB_03535b10:
        bVar1 = 1 < (long)uVar9;
        uVar9 = uVar9 - 1;
      } while (bVar1);
    }
    puVar16 = puVar8;
LAB_03535b20:
    lVar7 = puVar16[10];
    if (lVar7 == 0) {
      *param_2 = *(byte *)(puVar16 + 9) >> 6 & 1;
      lVar15 = FUN_035360ac(param_1,puVar16,lVar15,uVar2,uVar3);
      return lVar15;
    }
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_70 = *(byte *)(puVar16 + 6);
    local_80 = puVar16[4];
    local_78 = puVar16[5];
    local_50 = 0;
    local_6c = *(undefined8 *)(lVar7 + 4);
    local_64 = *(undefined4 *)(lVar7 + 0xc);
    uStack_60 = 0;
    cStack_58 = (*(byte *)(lVar7 + 0x1c) & 1) << 6;
    *param_2 = *(byte *)(lVar7 + 0x1c) & 1;
    lVar15 = FUN_035360ac(param_1,&local_a0,lVar15,*(undefined4 *)puVar16[10],0);
    if (lVar15 != 0) {
      if (*(long *)(lVar15 + 0x18) == 0) {
        lVar15 = (**(code **)(*param_1 + 0x120))(param_1);
      }
      else {
        lVar7 = puVar16[10];
        local_80 = *(undefined8 *)(lVar7 + 0x10);
        local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(lVar7 + 0x18));
        local_70 = local_70 & 0xc0 | (*(byte *)(lVar7 + 0x1c) >> 1 & 1) << 5 | 7;
        local_6c = *(undefined8 *)((long)puVar16 + 0x34);
        uStack_5c = (undefined4)((ulong)*(undefined8 *)((long)puVar16 + 0x41) >> 0x18);
        cStack_58 = (char)((ulong)*(undefined8 *)((long)puVar16 + 0x41) >> 0x38);
        local_64 = (undefined4)*(undefined8 *)((long)puVar16 + 0x3c);
        uStack_60 = (undefined4)((ulong)*(undefined8 *)((long)puVar16 + 0x3c) >> 0x20);
        FUN_035360ac(param_1,&local_a0,lVar15,uVar2,uVar3);
      }
    }
  }
  else {
LAB_035359d0:
    lVar15 = 0;
  }
  return lVar15;
}


