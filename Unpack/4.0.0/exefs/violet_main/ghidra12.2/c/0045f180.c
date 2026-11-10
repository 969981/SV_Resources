/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0045f180; name: FUN_0045f180
 */


ulong FUN_0045f180(undefined8 param_1,undefined8 param_2,long param_3,long param_4,int param_5,
                  uint param_6,undefined1 *param_7,undefined1 *param_8)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  int local_a8;
  uint local_a4;
  undefined1 local_a0 [64];
  
  local_a4 = 0;
  uVar5 = FUN_0043b6e0();
  uVar9 = uVar5 & 0xffffffff;
  iVar2 = FUN_0043b690(param_1);
  if (0x40 < (int)uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_003f6d60("assertion failed: nkey <= EVP_MAX_KEY_LENGTH",
                 "external/openssl/crypto/evp/evp_key.c",0x56);
  }
  if (0x10 < iVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_003f6d60("assertion failed: niv <= EVP_MAX_IV_LENGTH",
                 "external/openssl/crypto/evp/evp_key.c",0x57);
  }
  if (param_4 != 0) {
    lVar6 = FUN_0042bbc0();
    if (lVar6 == 0) {
LAB_0045f3bc:
      uVar9 = 0;
    }
    else {
      local_a8 = 0;
      do {
        iVar3 = FUN_0042bc40(lVar6,param_2,0);
        if (((iVar3 == 0) ||
            ((((local_a8 != 0 && (iVar3 = FUN_0042bd60(lVar6,local_a0,local_a4), iVar3 == 0)) ||
              (iVar3 = FUN_0042bd60(lVar6,param_4,(long)param_5), iVar3 == 0)) ||
             ((param_3 != 0 && (iVar3 = FUN_0042bd60(lVar6,param_3,8), iVar3 == 0)))))) ||
           (iVar3 = FUN_0042be20(lVar6,local_a0,&local_a4), iVar3 == 0)) goto LAB_0045f3bc;
        iVar3 = param_6 - 1;
        if (1 < param_6) {
          do {
            iVar4 = FUN_0042bc40(lVar6,param_2,0);
            if (((iVar4 == 0) || (iVar4 = FUN_0042bd60(lVar6,local_a0,local_a4), iVar4 == 0)) ||
               (iVar4 = FUN_0042be20(lVar6,local_a0,&local_a4), iVar4 == 0)) goto LAB_0045f3bc;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        iVar3 = (int)uVar9;
        if (iVar3 == 0) {
          uVar9 = 0;
        }
        else {
          uVar5 = 0;
          puVar8 = param_7;
          do {
            param_7 = puVar8;
            if (uVar5 == local_a4) {
              uVar1 = (ulong)(uint)(iVar3 - (int)uVar5);
              goto joined_r0x0045f354;
            }
            if (puVar8 != (undefined1 *)0x0) {
              param_7 = puVar8 + 1;
              *puVar8 = local_a0[uVar5];
            }
            uVar5 = uVar5 + 1;
            puVar8 = param_7;
          } while (iVar3 != (int)uVar5);
        }
        uVar1 = 0;
        uVar5 = uVar9;
joined_r0x0045f354:
        uVar9 = uVar1;
        if (iVar2 != 0) {
          uVar7 = (uint)uVar5;
          puVar8 = param_8;
          while (param_8 = puVar8, uVar7 != local_a4) {
            if (puVar8 != (undefined1 *)0x0) {
              param_8 = puVar8 + 1;
              *puVar8 = local_a0[uVar5 & 0xffffffff];
            }
            iVar2 = iVar2 + -1;
            if (iVar2 == 0) break;
            uVar7 = (int)uVar5 + 1;
            uVar5 = (ulong)uVar7;
            puVar8 = param_8;
          }
        }
        local_a8 = local_a8 + 1;
      } while (iVar2 != 0 || (int)uVar9 != 0);
      uVar9 = FUN_0043b6e0(param_1);
      uVar9 = uVar9 & 0xffffffff;
    }
    FUN_0042bbe0(lVar6);
    FUN_00453300(local_a0,0x40);
  }
  return uVar9;
}


