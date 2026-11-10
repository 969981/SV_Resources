/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00439e90; name: FUN_00439e90
 */


undefined8
FUN_00439e90(long *param_1,long param_2,undefined8 param_3,long param_4,long *param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *__src;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  
  uVar7 = 0;
  if (param_6 == 0) {
LAB_00439eec:
    *(undefined4 *)(param_1 + 2) = uVar7;
    lVar6 = *param_1;
    if (param_2 == 0) goto LAB_00439ecc;
LAB_00439ef8:
    if (lVar6 != 0) {
      lVar8 = param_1[0xe];
      if ((*(code **)(lVar6 + 0x28) == (code *)0x0) ||
         (iVar1 = (**(code **)(lVar6 + 0x28))(param_1), iVar1 != 0)) {
        lVar6 = param_1[0xf];
        if ((lVar6 != 0) && (*(int *)(*param_1 + 0x30) != 0)) {
          FUN_00453300();
          lVar6 = param_1[0xf];
        }
        FUN_00452f80(lVar6,"external/openssl/crypto/evp/evp_enc.c",0x21);
        param_1[0x14] = 0;
        param_1[0x11] = 0;
        param_1[0x10] = 0;
        param_1[0x13] = 0;
        param_1[0x12] = 0;
        param_1[0xd] = 0;
        param_1[0xc] = 0;
        param_1[0xf] = 0;
        param_1[0xe] = 0;
        param_1[9] = 0;
        param_1[8] = 0;
        param_1[0xb] = 0;
        param_1[10] = 0;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[7] = 0;
        param_1[6] = 0;
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
      }
      *(undefined4 *)(param_1 + 2) = uVar7;
      param_1[0xe] = lVar8;
    }
    *param_1 = param_2;
    if (*(int *)(param_2 + 0x30) == 0) {
      param_1[0xf] = 0;
      lVar6 = param_2;
LAB_00439f98:
      *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 8);
      param_1[0xe] = param_1[0xe] & 1;
      if ((*(byte *)(lVar6 + 0x10) >> 6 & 1) != 0) {
        if (lVar6 == 0) {
          uVar4 = 0x83;
          uVar5 = 0x290;
LAB_0043a190:
          FUN_004806c0(6,0x7c,uVar4,"external/openssl/crypto/evp/evp_enc.c",uVar5);
        }
        else {
          if (*(code **)(lVar6 + 0x48) == (code *)0x0) {
            uVar4 = 0x84;
            uVar5 = 0x295;
            goto LAB_0043a190;
          }
          iVar1 = (**(code **)(lVar6 + 0x48))(param_1,0,0,0);
          if (iVar1 == -1) {
            uVar4 = 0x85;
            uVar5 = 0x29c;
            goto LAB_0043a190;
          }
          if (iVar1 != 0) {
            lVar6 = *param_1;
            goto LAB_00439fb4;
          }
        }
        *param_1 = 0;
        uVar4 = 0x86;
        uVar5 = 0x90;
        goto LAB_0043a1b4;
      }
      goto LAB_00439fb4;
    }
    lVar6 = FUN_00452ce0((long)*(int *)(param_2 + 0x30),"external/openssl/crypto/evp/evp_enc.c",0x81
                        );
    param_1[0xf] = lVar6;
    if (lVar6 != 0) {
      lVar6 = *param_1;
      goto LAB_00439f98;
    }
    *param_1 = 0;
    uVar4 = 0x41;
    uVar5 = 0x84;
  }
  else {
    if (param_6 != -1) {
      uVar7 = 1;
      goto LAB_00439eec;
    }
    uVar7 = (undefined4)param_1[2];
    lVar6 = *param_1;
    if (param_2 != 0) goto LAB_00439ef8;
LAB_00439ecc:
    if (lVar6 != 0) {
LAB_00439fb4:
      if (0x10 < *(uint *)(lVar6 + 4) || (1 << (ulong)(*(uint *)(lVar6 + 4) & 0x1f) & 0x10102U) == 0
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_003f6d60("assertion failed: ctx->cipher->block_size == 1 || ctx->cipher->block_size == 8 || ctx->cipher->block_size == 16"
                     ,"external/openssl/crypto/evp/evp_enc.c",0x9e);
      }
      if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
        FUN_0043b170(param_1);
        uVar3 = FUN_0043b160();
        if ((uVar3 & 0xf0007) == 0x10002) {
          uVar4 = 0xaa;
          uVar5 = 0xa2;
          goto LAB_0043a1b4;
        }
      }
      FUN_0043b170(param_1);
      uVar2 = FUN_0043b160();
      if ((uVar2 >> 4 & 1) == 0) {
        FUN_0043b170(param_1);
        uVar3 = FUN_0043b160();
        switch(uVar3 & 0xf0007) {
        case 0:
        case 1:
          goto switchD_0043a064_caseD_0;
        case 3:
        case 4:
          *(undefined4 *)(param_1 + 0xb) = 0;
        case 2:
          iVar1 = FUN_0043b4a0(param_1);
          if (0x10 < iVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_003f6d60("assertion failed: EVP_CIPHER_CTX_iv_length(ctx) <= (int)sizeof(ctx->iv)",
                         "external/openssl/crypto/evp/evp_enc.c",0xb6);
          }
          if (param_5 != (long *)0x0) {
            iVar1 = FUN_0043b4a0(param_1);
            memcpy(param_1 + 3,param_5,(long)iVar1);
          }
          __src = param_1 + 3;
          iVar1 = FUN_0043b4a0(param_1);
          break;
        case 5:
          *(undefined4 *)(param_1 + 0xb) = 0;
          if (param_5 == (long *)0x0) goto switchD_0043a064_caseD_0;
          iVar1 = FUN_0043b4a0(param_1);
          __src = param_5;
          break;
        default:
          goto LAB_0043a1c0;
        }
        memcpy(param_1 + 5,__src,(long)iVar1);
      }
switchD_0043a064_caseD_0:
      lVar6 = *param_1;
      if ((param_4 != 0) || ((*(byte *)(lVar6 + 0x10) >> 5 & 1) != 0)) {
        uVar4 = (**(code **)(lVar6 + 0x18))(param_1,param_4,param_5,uVar7);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        lVar6 = *param_1;
      }
      *(undefined4 *)((long)param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(int *)((long)param_1 + 0x84) = *(int *)(lVar6 + 4) + -1;
      return 1;
    }
    uVar4 = 0x83;
    uVar5 = 0x95;
  }
LAB_0043a1b4:
  FUN_004806c0(6,0x7b,uVar4,"external/openssl/crypto/evp/evp_enc.c",uVar5);
LAB_0043a1c0:
  return 0;
}


