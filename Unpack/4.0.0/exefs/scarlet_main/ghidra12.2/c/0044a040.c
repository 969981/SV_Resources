/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0044a040; name: FUN_0044a040
 */


void FUN_0044a040(uint *param_1,uint *param_2,long param_3,undefined8 param_4,uint *param_5,
                 uint *param_6,uint *param_7,int param_8)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  long lVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_68;
  uint local_64;
  
  uVar2 = *param_6;
  uVar4 = param_6[1];
  uVar10 = *param_7;
  uVar5 = param_7[1];
  uVar12 = *param_5;
  uVar14 = param_5[1];
  if (param_8 == 0) {
    if (8 < param_3) {
      lVar8 = param_3;
      puVar9 = param_2;
      uVar11 = uVar12;
      uVar13 = uVar14;
      do {
        uVar12 = *param_1;
        local_68 = uVar12 ^ uVar10;
        uVar14 = param_1[1];
        param_1 = param_1 + 2;
        local_64 = uVar14 ^ uVar5;
        param_3 = lVar8 + -8;
        FUN_004348c0(&local_68,param_4,0);
        local_68 = uVar11 ^ uVar2 ^ local_68;
        local_64 = uVar13 ^ uVar4 ^ local_64;
        *(char *)puVar9 = (char)local_68;
        *(char *)((long)puVar9 + 1) = (char)(local_68 >> 8);
        *(char *)((long)puVar9 + 3) = (char)(local_68 >> 0x18);
        *(char *)((long)puVar9 + 5) = (char)(local_64 >> 8);
        *(char *)((long)puVar9 + 6) = (char)(local_64 >> 0x10);
        *(char *)(puVar9 + 1) = (char)local_64;
        *(char *)((long)puVar9 + 2) = (char)(local_68 >> 0x10);
        param_2 = puVar9 + 2;
        *(char *)((long)puVar9 + 7) = (char)(local_64 >> 0x18);
        bVar1 = 0x10 < lVar8;
        lVar8 = param_3;
        puVar9 = param_2;
        uVar11 = uVar12;
        uVar13 = uVar14;
      } while (bVar1);
    }
    if (param_3 != 0) {
      uVar11 = *param_1;
      local_68 = uVar11 ^ uVar10;
      uVar10 = param_1[1];
      local_64 = uVar10 ^ uVar5;
      FUN_004348c0(&local_68,param_4,0);
      if (param_3 - 1U < 8) {
        local_68 = uVar12 ^ uVar2 ^ local_68;
        local_64 = uVar14 ^ uVar4 ^ local_64;
        puVar6 = (undefined1 *)((long)param_2 + param_3);
        switch(param_3) {
        case 8:
          puVar6 = puVar6 + -1;
          *puVar6 = (char)(local_64 >> 0x18);
        case 7:
          puVar6 = puVar6 + -1;
          *puVar6 = (char)(local_64 >> 0x10);
        case 6:
          puVar6 = puVar6 + -1;
          *puVar6 = (char)(local_64 >> 8);
        case 5:
          puVar6 = puVar6 + -1;
          *puVar6 = (char)local_64;
        case 4:
          puVar6 = puVar6 + -1;
          *puVar6 = (char)(local_68 >> 0x18);
        case 3:
          puVar6 = puVar6 + -1;
          *puVar6 = (char)(local_68 >> 0x10);
        case 2:
          puVar6 = puVar6 + -1;
          *puVar6 = (char)(local_68 >> 8);
        case 1:
          puVar6[-1] = (char)local_68;
        }
      }
      goto LAB_0044a328;
    }
  }
  else {
    lVar8 = param_3;
    puVar9 = param_2;
    if (7 < param_3) {
      do {
        puVar3 = param_1 + 1;
        local_68 = uVar12 ^ uVar2 ^ *param_1;
        param_1 = param_1 + 2;
        local_64 = uVar14 ^ uVar4 ^ *puVar3;
        param_3 = lVar8 + -8;
        FUN_004348c0(&local_68,param_4,1);
        uVar12 = local_68 ^ uVar10;
        *puVar9 = uVar12;
        uVar14 = local_64 ^ uVar5;
        param_2 = puVar9 + 2;
        puVar9[1] = uVar14;
        bVar1 = 0xf < lVar8;
        lVar8 = param_3;
        puVar9 = param_2;
      } while (bVar1);
    }
    if (param_3 != 0) {
      local_68 = 0;
      if (param_3 - 1U < 7) {
        pbVar7 = (byte *)((long)param_1 + param_3);
        local_64 = 0;
        switch(param_3) {
        case 7:
          pbVar7 = pbVar7 + -1;
          local_68 = (uint)*pbVar7 << 0x10;
        case 6:
          pbVar7 = pbVar7 + -1;
          local_68 = local_68 | (uint)*pbVar7 << 8;
        case 5:
          pbVar7 = pbVar7 + -1;
          local_68 = local_68 | *pbVar7;
        case 4:
          local_64 = local_68;
          pbVar7 = pbVar7 + -1;
          local_68 = (uint)*pbVar7 << 0x18;
        case 3:
          pbVar7 = pbVar7 + -1;
          local_68 = local_68 | (uint)*pbVar7 << 0x10;
        case 2:
          pbVar7 = pbVar7 + -1;
          local_68 = local_68 | (uint)*pbVar7 << 8;
        case 1:
          local_68 = local_68 | pbVar7[-1];
        }
      }
      else {
        local_64 = 0;
      }
      local_68 = uVar12 ^ uVar2 ^ local_68;
      local_64 = uVar14 ^ uVar4 ^ local_64;
      FUN_004348c0(&local_68,param_4,1);
      *param_2 = local_68 ^ uVar10;
      param_2[1] = local_64 ^ uVar5;
      uVar11 = local_68 ^ uVar10;
      uVar10 = local_64 ^ uVar5;
      goto LAB_0044a328;
    }
  }
  uVar11 = uVar12;
  uVar10 = uVar14;
LAB_0044a328:
  *(char *)((long)param_5 + 1) = (char)(uVar11 >> 8);
  *(char *)((long)param_5 + 3) = (char)(uVar11 >> 0x18);
  *(char *)((long)param_5 + 5) = (char)(uVar10 >> 8);
  *(char *)((long)param_5 + 2) = (char)(uVar11 >> 0x10);
  *(char *)((long)param_5 + 6) = (char)(uVar10 >> 0x10);
  *(char *)param_5 = (char)uVar11;
  *(char *)(param_5 + 1) = (char)uVar10;
  *(char *)((long)param_5 + 7) = (char)(uVar10 >> 0x18);
  return;
}


