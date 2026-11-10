/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00436a80; name: FUN_00436a80
 */


void FUN_00436a80(uint *param_1,undefined1 *param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,uint *param_7,int param_8)

{
  bool bVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_68;
  uint uStack_64;
  
  uVar7 = *param_7;
  uVar9 = param_7[1];
  if (param_8 == 0) {
    if (7 < param_3) {
      puVar2 = param_1;
      puVar4 = param_2;
      lVar5 = param_3;
      uVar6 = uVar7;
      uVar8 = uVar9;
      do {
        param_1 = puVar2 + 2;
        uVar7 = *puVar2;
        uVar9 = puVar2[1];
        param_3 = lVar5 + -8;
        local_68 = uVar7;
        uStack_64 = uVar9;
        FUN_004366c0(&local_68,param_4,param_5,param_6);
        local_68 = local_68 ^ uVar6;
        *puVar4 = (char)local_68;
        uStack_64 = uStack_64 ^ uVar8;
        puVar4[4] = (char)uStack_64;
        puVar4[1] = (char)(local_68 >> 8);
        param_2 = puVar4 + 8;
        puVar4[2] = (char)(local_68 >> 0x10);
        puVar4[3] = (char)(local_68 >> 0x18);
        puVar4[5] = (char)(uStack_64 >> 8);
        puVar4[6] = (char)(uStack_64 >> 0x10);
        puVar4[7] = (char)(uStack_64 >> 0x18);
        bVar1 = 0xf < lVar5;
        puVar2 = param_1;
        puVar4 = param_2;
        lVar5 = param_3;
        uVar6 = uVar7;
        uVar8 = uVar9;
      } while (bVar1);
    }
    if (param_3 != 0) {
      uVar6 = *param_1;
      uVar8 = param_1[1];
      local_68 = uVar6;
      uStack_64 = uVar8;
      FUN_004366c0(&local_68,param_4,param_5,param_6);
      if (param_3 - 1U < 7) {
        param_2 = param_2 + param_3;
        local_68 = local_68 ^ uVar7;
        uStack_64 = uStack_64 ^ uVar9;
        switch(param_3) {
        case 7:
          param_2 = param_2 + -1;
          *param_2 = (char)(uStack_64 >> 0x10);
        case 6:
          param_2 = param_2 + -1;
          *param_2 = (char)(uStack_64 >> 8);
        case 5:
          param_2 = param_2 + -1;
          *param_2 = (char)uStack_64;
        case 4:
          param_2 = param_2 + -1;
          *param_2 = (char)(local_68 >> 0x18);
        case 3:
          param_2 = param_2 + -1;
          *param_2 = (char)(local_68 >> 0x10);
        case 2:
          param_2 = param_2 + -1;
          *param_2 = (char)(local_68 >> 8);
        case 1:
          param_2[-1] = (char)local_68;
        }
      }
      goto LAB_00436d48;
    }
  }
  else {
    puVar4 = param_2;
    lVar5 = param_3;
    local_68 = uVar7;
    uStack_64 = uVar9;
    if (7 < param_3) {
      do {
        uVar7 = *param_1;
        puVar2 = param_1 + 1;
        param_1 = param_1 + 2;
        local_68 = uVar7 ^ local_68;
        uStack_64 = *puVar2 ^ uStack_64;
        param_3 = lVar5 + -8;
        FUN_004365c0(&local_68,param_4,param_5,param_6);
        puVar4[1] = (char)(local_68 >> 8);
        puVar4[3] = (char)(local_68 >> 0x18);
        *puVar4 = (char)local_68;
        puVar4[4] = (char)uStack_64;
        puVar4[2] = (char)(local_68 >> 0x10);
        param_2 = puVar4 + 8;
        puVar4[6] = (char)(uStack_64 >> 0x10);
        puVar4[5] = (char)(uStack_64 >> 8);
        puVar4[7] = (char)(uStack_64 >> 0x18);
        bVar1 = 0xf < lVar5;
        puVar4 = param_2;
        lVar5 = param_3;
      } while (bVar1);
    }
    uVar7 = local_68;
    uVar9 = uStack_64;
    if (param_3 != 0) {
      uVar7 = 0;
      if (param_3 - 1U < 7) {
        pbVar3 = (byte *)((long)param_1 + param_3);
        uVar9 = 0;
        switch(param_3) {
        case 7:
          pbVar3 = pbVar3 + -1;
          uVar7 = (uint)*pbVar3 << 0x10;
        case 6:
          pbVar3 = pbVar3 + -1;
          uVar7 = uVar7 | (uint)*pbVar3 << 8;
        case 5:
          pbVar3 = pbVar3 + -1;
          uVar7 = uVar7 | *pbVar3;
        case 4:
          uVar9 = uVar7;
          pbVar3 = pbVar3 + -1;
          uVar7 = (uint)*pbVar3 << 0x18;
        case 3:
          pbVar3 = pbVar3 + -1;
          uVar7 = uVar7 | (uint)*pbVar3 << 0x10;
        case 2:
          pbVar3 = pbVar3 + -1;
          uVar7 = uVar7 | (uint)*pbVar3 << 8;
        case 1:
          uVar7 = uVar7 | pbVar3[-1];
        }
      }
      else {
        uVar9 = 0;
      }
      local_68 = uVar7 ^ local_68;
      uStack_64 = uVar9 ^ uStack_64;
      FUN_004365c0(&local_68,param_4,param_5,param_6);
      param_2[1] = (char)(local_68 >> 8);
      param_2[2] = (char)(local_68 >> 0x10);
      param_2[3] = (char)(local_68 >> 0x18);
      param_2[5] = (char)(uStack_64 >> 8);
      param_2[6] = (char)(uStack_64 >> 0x10);
      *param_2 = (char)local_68;
      param_2[4] = (char)uStack_64;
      param_2[7] = (char)(uStack_64 >> 0x18);
      uVar6 = local_68;
      uVar8 = uStack_64;
      goto LAB_00436d48;
    }
  }
  uVar6 = uVar7;
  uVar8 = uVar9;
LAB_00436d48:
  *(char *)((long)param_7 + 1) = (char)(uVar6 >> 8);
  *(char *)((long)param_7 + 3) = (char)(uVar6 >> 0x18);
  *(char *)((long)param_7 + 5) = (char)(uVar8 >> 8);
  *(char *)((long)param_7 + 2) = (char)(uVar6 >> 0x10);
  *(char *)((long)param_7 + 6) = (char)(uVar8 >> 0x10);
  *(char *)param_7 = (char)uVar6;
  *(char *)(param_7 + 1) = (char)uVar8;
  *(char *)((long)param_7 + 7) = (char)(uVar8 >> 0x18);
  return;
}


