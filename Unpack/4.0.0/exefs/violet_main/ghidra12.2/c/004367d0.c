/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004367d0; name: FUN_004367d0
 */


void FUN_004367d0(uint *param_1,uint *param_2,long param_3,undefined8 param_4,uint *param_5,
                 int param_6)

{
  bool bVar1;
  uint *puVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  uint *puVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_58;
  uint local_54;
  
  uVar8 = *param_5;
  uVar10 = param_5[1];
  if (param_6 == 0) {
    puVar5 = param_2;
    lVar6 = param_3;
    uVar7 = uVar8;
    uVar9 = uVar10;
    if (7 < param_3) {
      do {
        uVar8 = *param_1;
        uVar10 = param_1[1];
        param_1 = param_1 + 2;
        param_3 = lVar6 + -8;
        local_58 = uVar8;
        local_54 = uVar10;
        FUN_004348c0(&local_58,param_4,0);
        local_58 = local_58 ^ uVar7;
        *(char *)((long)puVar5 + 1) = (char)(local_58 >> 8);
        *(char *)puVar5 = (char)local_58;
        local_54 = local_54 ^ uVar9;
        *(char *)((long)puVar5 + 3) = (char)(local_58 >> 0x18);
        *(char *)((long)puVar5 + 2) = (char)(local_58 >> 0x10);
        param_2 = puVar5 + 2;
        *(char *)(puVar5 + 1) = (char)local_54;
        *(char *)((long)puVar5 + 6) = (char)(local_54 >> 0x10);
        *(char *)((long)puVar5 + 5) = (char)(local_54 >> 8);
        *(char *)((long)puVar5 + 7) = (char)(local_54 >> 0x18);
        bVar1 = 0xf < lVar6;
        puVar5 = param_2;
        lVar6 = param_3;
        uVar7 = uVar8;
        uVar9 = uVar10;
      } while (bVar1);
    }
    if (param_3 != 0) {
      uVar7 = *param_1;
      uVar9 = param_1[1];
      local_58 = uVar7;
      local_54 = uVar9;
      FUN_004348c0(&local_58,param_4,0);
      if (param_3 - 1U < 7) {
        puVar3 = (undefined1 *)((long)param_2 + param_3);
        local_58 = local_58 ^ uVar8;
        local_54 = local_54 ^ uVar10;
        switch(param_3) {
        case 7:
          puVar3 = puVar3 + -1;
          *puVar3 = (char)(local_54 >> 0x10);
        case 6:
          puVar3 = puVar3 + -1;
          *puVar3 = (char)(local_54 >> 8);
        case 5:
          puVar3 = puVar3 + -1;
          *puVar3 = (char)local_54;
        case 4:
          puVar3 = puVar3 + -1;
          *puVar3 = (char)(local_58 >> 0x18);
        case 3:
          puVar3 = puVar3 + -1;
          *puVar3 = (char)(local_58 >> 0x10);
        case 2:
          puVar3 = puVar3 + -1;
          *puVar3 = (char)(local_58 >> 8);
        case 1:
          puVar3[-1] = (char)local_58;
        }
      }
      goto LAB_00436a1c;
    }
  }
  else {
    puVar5 = param_2;
    lVar6 = param_3;
    local_58 = uVar8;
    local_54 = uVar10;
    if (7 < param_3) {
      do {
        uVar8 = *param_1;
        puVar2 = param_1 + 1;
        param_1 = param_1 + 2;
        local_58 = uVar8 ^ local_58;
        local_54 = *puVar2 ^ local_54;
        param_3 = lVar6 + -8;
        FUN_004348c0(&local_58,param_4,1);
        *puVar5 = local_58;
        param_2 = puVar5 + 2;
        puVar5[1] = local_54;
        bVar1 = 0xf < lVar6;
        puVar5 = param_2;
        lVar6 = param_3;
      } while (bVar1);
    }
    uVar8 = local_58;
    uVar10 = local_54;
    if (param_3 != 0) {
      uVar8 = 0;
      if (param_3 - 1U < 7) {
        pbVar4 = (byte *)((long)param_1 + param_3);
        uVar10 = 0;
        switch(param_3) {
        case 7:
          pbVar4 = pbVar4 + -1;
          uVar8 = (uint)*pbVar4 << 0x10;
        case 6:
          pbVar4 = pbVar4 + -1;
          uVar8 = uVar8 | (uint)*pbVar4 << 8;
        case 5:
          pbVar4 = pbVar4 + -1;
          uVar8 = uVar8 | *pbVar4;
        case 4:
          uVar10 = uVar8;
          pbVar4 = pbVar4 + -1;
          uVar8 = (uint)*pbVar4 << 0x18;
        case 3:
          pbVar4 = pbVar4 + -1;
          uVar8 = uVar8 | (uint)*pbVar4 << 0x10;
        case 2:
          pbVar4 = pbVar4 + -1;
          uVar8 = uVar8 | (uint)*pbVar4 << 8;
        case 1:
          uVar8 = uVar8 | pbVar4[-1];
        }
      }
      else {
        uVar10 = 0;
      }
      local_58 = uVar8 ^ local_58;
      local_54 = uVar10 ^ local_54;
      FUN_004348c0(&local_58,param_4,1);
      *param_2 = local_58;
      param_2[1] = local_54;
      uVar7 = local_58;
      uVar9 = local_54;
      goto LAB_00436a1c;
    }
  }
  uVar7 = uVar8;
  uVar9 = uVar10;
LAB_00436a1c:
  *(char *)((long)param_5 + 1) = (char)(uVar7 >> 8);
  *(char *)((long)param_5 + 3) = (char)(uVar7 >> 0x18);
  *(char *)((long)param_5 + 5) = (char)(uVar9 >> 8);
  *(char *)((long)param_5 + 2) = (char)(uVar7 >> 0x10);
  *(char *)((long)param_5 + 6) = (char)(uVar9 >> 0x10);
  *(char *)param_5 = (char)uVar7;
  *(char *)(param_5 + 1) = (char)uVar9;
  *(char *)((long)param_5 + 7) = (char)(uVar9 >> 0x18);
  return;
}


