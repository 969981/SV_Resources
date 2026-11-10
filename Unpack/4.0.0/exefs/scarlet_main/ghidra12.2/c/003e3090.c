/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e3090; name: FUN_003e3090
 */


undefined8 FUN_003e3090(int *param_1,long *param_2,char *param_3,ulong param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *local_80;
  char *local_78;
  char *local_70;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  
  local_80 = (char *)*param_2;
  if ((param_1 == (int *)0x0) && ((param_4 & 1) == 0)) {
    *param_2 = (long)(local_80 + (long)param_3);
    return 1;
  }
  if (0 < (long)param_3) {
    if (param_5 < 5) {
      do {
        pcVar2 = local_80;
        if (((param_3 != (char *)0x1) && (*local_80 == '\0')) && (local_80[1] == '\0'))
        goto LAB_003e33c0;
        local_78 = local_80;
        uVar5 = FUN_003debf0(&local_78,&local_70,auStack_64,auStack_68,param_3);
        pcVar3 = local_78;
        if ((uVar5 >> 7 & 1) != 0) {
          FUN_004806c0(0xd,0x68,0x66,"external/openssl/crypto/asn1/tasn_dec.c",0x471);
          goto LAB_003e3364;
        }
        if ((uVar5 & 1) != 0) {
          local_70 = pcVar2 + ((long)param_3 - (long)local_78);
        }
        pcVar4 = local_70;
        local_80 = local_78;
        if ((uVar5 & 0x20) == 0) {
          if (local_70 != (char *)0x0) {
            if (param_1 != (int *)0x0) {
              iVar1 = *param_1;
              lVar6 = FUN_003f3310(param_1,local_70 + iVar1);
              if (lVar6 == 0) goto LAB_003e31f4;
              memcpy((void *)(*(long *)(param_1 + 2) + (long)iVar1),pcVar3,(size_t)pcVar4);
            }
            local_80 = pcVar3 + (long)pcVar4;
          }
        }
        else {
          uVar7 = FUN_003e3090(param_1,&local_80,local_70,uVar5 & 1,param_5 + 1);
          if ((int)uVar7 == 0) {
            return uVar7;
          }
        }
        param_3 = pcVar2 + ((long)param_3 - (long)local_80);
      } while (0 < (long)param_3);
    }
    else {
      do {
        pcVar2 = local_80;
        if (((param_3 != (char *)0x1) && (*local_80 == '\0')) && (local_80[1] == '\0'))
        goto LAB_003e33c0;
        local_78 = local_80;
        uVar5 = FUN_003debf0(&local_78,&local_70,auStack_64,auStack_68,param_3);
        pcVar3 = local_78;
        if ((uVar5 >> 7 & 1) != 0) {
          FUN_004806c0(0xd,0x68,0x66,"external/openssl/crypto/asn1/tasn_dec.c",0x471);
LAB_003e3364:
          uVar7 = 0x6a;
          uVar8 = 0x3a;
          uVar9 = 0x40c;
          goto LAB_003e3398;
        }
        if ((uVar5 & 1) != 0) {
          local_70 = pcVar2 + ((long)param_3 - (long)local_78);
        }
        pcVar4 = local_70;
        local_80 = local_78;
        if ((uVar5 & 0x20) != 0) {
          uVar7 = 0x6a;
          uVar8 = 0xc5;
          uVar9 = 0x413;
          goto LAB_003e3398;
        }
        if (local_70 != (char *)0x0) {
          if (param_1 != (int *)0x0) {
            iVar1 = *param_1;
            lVar6 = FUN_003f3310(param_1,local_70 + iVar1);
            if (lVar6 == 0) goto LAB_003e31f4;
            memcpy((void *)(*(long *)(param_1 + 2) + (long)iVar1),pcVar3,(size_t)pcVar4);
          }
          local_80 = pcVar3 + (long)pcVar4;
        }
        param_3 = pcVar2 + ((long)param_3 - (long)local_80);
      } while (0 < (long)param_3);
    }
  }
  if ((param_4 & 1) == 0) goto LAB_003e333c;
  uVar7 = 0x6a;
  uVar8 = 0x89;
  uVar9 = 0x41d;
LAB_003e3398:
  FUN_004806c0(0xd,uVar7,uVar8,"external/openssl/crypto/asn1/tasn_dec.c",uVar9);
  return 0;
LAB_003e33c0:
  local_80 = local_80 + 2;
  if ((param_4 & 1) != 0) {
LAB_003e333c:
    *param_2 = (long)local_80;
    return 1;
  }
  uVar7 = 0x6a;
  uVar8 = 0x9f;
  uVar9 = 0x403;
  goto LAB_003e3398;
LAB_003e31f4:
  uVar7 = 0x8c;
  uVar8 = 0x41;
  uVar9 = 0x42a;
  goto LAB_003e3398;
}


