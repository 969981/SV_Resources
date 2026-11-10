/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00448e60; name: FUN_00448e60
 */


void FUN_00448e60(uint *param_1,undefined1 *param_2,long param_3,undefined8 param_4,uint *param_5,
                 int param_6)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint local_58;
  uint uStack_54;
  
  uVar2 = (*param_5 & 0xff00ff00) >> 8 | (*param_5 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar7 = (param_5[1] & 0xff00ff00) >> 8 | (param_5[1] & 0xff00ff) << 8;
  uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
  if (param_6 == 0) {
    puVar4 = param_2;
    lVar5 = param_3;
    uVar8 = uVar2;
    uVar6 = uVar7;
    if (7 < param_3) {
      do {
        uVar2 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
        uVar7 = uVar2 >> 0x10 | uVar2 << 0x10;
        uVar2 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
        uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
        param_1 = param_1 + 2;
        param_3 = lVar5 + -8;
        local_58 = uVar2;
        uStack_54 = uVar7;
        FUN_00448a20(&local_58,param_4);
        local_58 = local_58 ^ uVar8;
        *puVar4 = (char)(local_58 >> 0x18);
        uStack_54 = uStack_54 ^ uVar6;
        puVar4[3] = (char)local_58;
        puVar4[2] = (char)(local_58 >> 8);
        puVar4[1] = (char)(local_58 >> 0x10);
        puVar4[4] = (char)(uStack_54 >> 0x18);
        param_2 = puVar4 + 8;
        puVar4[7] = (char)uStack_54;
        puVar4[5] = (char)(uStack_54 >> 0x10);
        puVar4[6] = (char)(uStack_54 >> 8);
        bVar1 = 0xf < lVar5;
        puVar4 = param_2;
        lVar5 = param_3;
        uVar8 = uVar2;
        uVar6 = uVar7;
      } while (bVar1);
    }
    if (param_3 != 0) {
      uVar8 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
      uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
      uVar6 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
      uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
      local_58 = uVar8;
      uStack_54 = uVar6;
      FUN_00448a20(&local_58,param_4);
      if (param_3 - 1U < 7) {
        param_2 = param_2 + param_3;
        local_58 = local_58 ^ uVar2;
        uStack_54 = uStack_54 ^ uVar7;
        switch(param_3) {
        case 7:
          param_2 = param_2 + -1;
          *param_2 = (char)(uStack_54 >> 8);
        case 6:
          param_2 = param_2 + -1;
          *param_2 = (char)(uStack_54 >> 0x10);
        case 5:
          param_2 = param_2 + -1;
          *param_2 = (char)(uStack_54 >> 0x18);
        case 4:
          param_2 = param_2 + -1;
          *param_2 = (char)local_58;
        case 3:
          param_2 = param_2 + -1;
          *param_2 = (char)(local_58 >> 8);
        case 2:
          param_2 = param_2 + -1;
          *param_2 = (char)(local_58 >> 0x10);
        case 1:
          param_2[-1] = (char)(local_58 >> 0x18);
        }
      }
      goto LAB_00449114;
    }
  }
  else {
    puVar4 = param_2;
    lVar5 = param_3;
    local_58 = uVar2;
    uStack_54 = uVar7;
    if (7 < param_3) {
      do {
        uVar2 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
        uVar7 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
        param_1 = param_1 + 2;
        local_58 = (uVar2 >> 0x10 | uVar2 << 0x10) ^ local_58;
        uStack_54 = (uVar7 >> 0x10 | uVar7 << 0x10) ^ uStack_54;
        param_3 = lVar5 + -8;
        FUN_004485e0(&local_58,param_4);
        *puVar4 = (char)(local_58 >> 0x18);
        puVar4[1] = (char)(local_58 >> 0x10);
        puVar4[2] = (char)(local_58 >> 8);
        puVar4[4] = (char)(uStack_54 >> 0x18);
        puVar4[5] = (char)(uStack_54 >> 0x10);
        puVar4[6] = (char)(uStack_54 >> 8);
        param_2 = puVar4 + 8;
        puVar4[3] = (char)local_58;
        puVar4[7] = (char)uStack_54;
        bVar1 = 0xf < lVar5;
        puVar4 = param_2;
        lVar5 = param_3;
      } while (bVar1);
    }
    uVar2 = local_58;
    uVar7 = uStack_54;
    if (param_3 != 0) {
      uVar2 = 0;
      if (param_3 - 1U < 7) {
        pbVar3 = (byte *)((long)param_1 + param_3);
        uVar7 = 0;
        switch(param_3) {
        case 7:
          pbVar3 = pbVar3 + -1;
          uVar2 = (uint)*pbVar3 << 8;
        case 6:
          pbVar3 = pbVar3 + -1;
          uVar2 = uVar2 | (uint)*pbVar3 << 0x10;
        case 5:
          pbVar3 = pbVar3 + -1;
          uVar2 = uVar2 | (uint)*pbVar3 << 0x18;
        case 4:
          uVar7 = uVar2;
          pbVar3 = pbVar3 + -1;
          uVar2 = (uint)*pbVar3;
        case 3:
          pbVar3 = pbVar3 + -1;
          uVar2 = uVar2 | (uint)*pbVar3 << 8;
        case 2:
          pbVar3 = pbVar3 + -1;
          uVar2 = uVar2 | (uint)*pbVar3 << 0x10;
        case 1:
          uVar2 = uVar2 | (uint)pbVar3[-1] << 0x18;
        }
      }
      else {
        uVar7 = 0;
      }
      local_58 = uVar2 ^ local_58;
      uStack_54 = uVar7 ^ uStack_54;
      FUN_004485e0(&local_58,param_4);
      *param_2 = (char)(local_58 >> 0x18);
      param_2[1] = (char)(local_58 >> 0x10);
      param_2[2] = (char)(local_58 >> 8);
      param_2[4] = (char)(uStack_54 >> 0x18);
      param_2[5] = (char)(uStack_54 >> 0x10);
      param_2[3] = (char)local_58;
      param_2[7] = (char)uStack_54;
      param_2[6] = (char)(uStack_54 >> 8);
      uVar8 = local_58;
      uVar6 = uStack_54;
      goto LAB_00449114;
    }
  }
  uVar8 = uVar2;
  uVar6 = uVar7;
LAB_00449114:
  *(char *)param_5 = (char)(uVar8 >> 0x18);
  *(char *)((long)param_5 + 1) = (char)(uVar8 >> 0x10);
  *(char *)(param_5 + 1) = (char)(uVar6 >> 0x18);
  *(char *)((long)param_5 + 2) = (char)(uVar8 >> 8);
  *(char *)((long)param_5 + 3) = (char)uVar8;
  *(char *)((long)param_5 + 5) = (char)(uVar6 >> 0x10);
  *(char *)((long)param_5 + 6) = (char)(uVar6 >> 8);
  *(char *)((long)param_5 + 7) = (char)uVar6;
  return;
}


