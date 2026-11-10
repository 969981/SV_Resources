/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0015b4b0; name: FUN_0015b4b0
 */


long FUN_0015b4b0(code *param_1,byte *param_2,size_t param_3,long param_4,undefined8 param_5,
                 byte *param_6,long param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  size_t __n;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *__src;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  undefined8 local_d8;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulong local_68;
  
  if (*(code **)PTR_DAT_047cb878 == (code *)0x0) {
    local_d8 = 0xffffffffffffffff;
  }
  else {
    local_d8 = (**(code **)PTR_DAT_047cb878)("Encode_LZB_Chunker",0);
  }
  lVar6 = param_4;
  if (0 < (long)param_3) {
    pbVar1 = param_2 + param_3;
    __src = param_2;
    lVar13 = param_4;
    do {
      __n = param_3;
      if (0x3ffff < (long)param_3) {
        __n = 0x40000;
      }
      iVar5 = *(int *)(param_7 + 0x20);
      if ((__src == param_2) && (*(int *)(param_7 + 8) != 0)) {
        uVar14 = 1;
      }
      else {
        uVar14 = (uint)(__src == param_6);
      }
      local_70 = CONCAT44(iVar5,uVar14);
      local_80 = 0x200000004;
      local_78 = 0;
      lVar6 = FUN_0015c610(&local_80,lVar13);
      pbVar2 = __src + __n;
      if (__src < pbVar2) {
        pbVar10 = pbVar2 + -8;
        if (iVar5 == 0) {
          pbVar11 = __src;
          do {
            while( true ) {
              uVar9 = (long)pbVar2 - (long)pbVar11;
              if (0x3fff < (long)uVar9) {
                uVar9 = 0x4000;
              }
              local_78 = 0;
              local_80 = (ulong)((int)uVar9 - 1);
              local_70 = 0;
              local_68 = 0;
              iVar5 = FUN_0015cee0(pbVar11,uVar9 & 0xffffffff);
              if (iVar5 != 0) break;
              iVar5 = FUN_0015c9b0(lVar6,&local_80,0,uVar9 & 0xffffffff);
              pvVar8 = (void *)(lVar6 + iVar5);
              if ((pbVar11 + 4 < pbVar10) &&
                 (uVar7 = (*param_1)(pbVar11,uVar9,pvVar8,param_5,param_6,pbVar10,pbVar1,&local_80),
                 (long)uVar7 < (long)uVar9)) {
                uVar12 = uVar7;
              }
              else {
                memcpy(pvVar8,pbVar11,uVar9);
                uVar7 = uVar9 & 0xffffffff;
                local_68 = local_68 & 0xffffffff00000000;
                uVar12 = uVar9;
              }
              local_80 = CONCAT44(local_80._4_4_,(int)uVar7);
              FUN_0015c9b0(lVar6,&local_80,0,uVar9 & 0xffffffff);
              lVar6 = (long)pvVar8 + uVar12;
              pbVar11 = pbVar11 + uVar9;
              if (pbVar2 <= pbVar11) goto LAB_0015b7d4;
            }
            local_80 = (ulong)*pbVar11 << 0x20;
            iVar5 = FUN_0015c9b0(lVar6,&local_80,0,uVar9 & 0xffffffff);
            lVar6 = lVar6 + iVar5;
            pbVar11 = pbVar11 + uVar9;
          } while (pbVar11 < pbVar2);
        }
        else {
          pbVar11 = __src;
          do {
            while( true ) {
              uVar9 = (long)pbVar2 - (long)pbVar11;
              if (0x3fff < (long)uVar9) {
                uVar9 = 0x4000;
              }
              local_78 = 0;
              local_80 = (ulong)((int)uVar9 - 1);
              local_70 = 0;
              local_68 = 0;
              iVar3 = FUN_0015cee0(pbVar11,uVar9 & 0xffffffff);
              if (iVar3 != 0) break;
              iVar3 = FUN_0015c9b0(lVar6,&local_80,iVar5,uVar9 & 0xffffffff);
              pvVar8 = (void *)(lVar6 + iVar3);
              if ((pbVar11 + 4 < pbVar10) &&
                 (uVar7 = (*param_1)(pbVar11,uVar9,pvVar8,param_5,param_6,pbVar10,pbVar1,&local_80),
                 (long)uVar7 < (long)uVar9)) {
                uVar12 = uVar7;
              }
              else {
                memcpy(pvVar8,pbVar11,uVar9);
                uVar7 = uVar9 & 0xffffffff;
                local_68 = local_68 & 0xffffffff00000000;
                uVar12 = uVar9;
              }
              local_80 = CONCAT44(local_80._4_4_,(int)uVar7);
              uVar4 = FUN_0015c990(pvVar8,uVar12);
              local_80 = CONCAT44(uVar4,(undefined4)local_80);
              FUN_0015c9b0(lVar6,&local_80,iVar5,uVar9 & 0xffffffff);
              lVar6 = (long)pvVar8 + uVar12;
              pbVar11 = pbVar11 + uVar9;
              if (pbVar2 <= pbVar11) goto LAB_0015b7d4;
            }
            local_80 = (ulong)*pbVar11 << 0x20;
            iVar3 = FUN_0015c9b0(lVar6,&local_80,iVar5,uVar9 & 0xffffffff);
            lVar6 = lVar6 + iVar3;
            pbVar11 = pbVar11 + uVar9;
          } while (pbVar11 < pbVar2);
        }
      }
LAB_0015b7d4:
      if ((long)__n <= lVar6 - lVar13) {
        local_78 = 0x100000000;
        local_80 = 0x200000004;
        local_70 = (ulong)uVar14;
        pvVar8 = (void *)FUN_0015c610(&local_80);
        memcpy(pvVar8,__src,__n);
        lVar6 = (long)pvVar8 + __n;
      }
      param_3 = param_3 - __n;
      __src = pbVar2;
      lVar13 = lVar6;
    } while (0 < (long)param_3);
  }
  if (*(code **)PTR_DAT_047cb880 != (code *)0x0) {
    (**(code **)PTR_DAT_047cb880)(local_d8);
  }
  return lVar6 - param_4;
}


