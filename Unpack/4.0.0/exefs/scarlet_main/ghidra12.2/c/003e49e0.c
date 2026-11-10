/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e49e0; name: FUN_003e49e0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_003e49e0(long *******param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  long *******ppppppplVar2;
  long ******pppppplVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *******ppppppplVar7;
  undefined8 uVar8;
  ulong *puVar9;
  code *pcVar10;
  long *******local_48;
  
  lVar5 = *(long *)(param_2 + 0x20);
  if ((lVar5 == 0) || (pcVar10 = *(code **)(lVar5 + 0x18), pcVar10 == (code *)0x0)) {
    pcVar10 = (code *)0x0;
  }
  uVar8 = 1;
  switch(*param_2) {
  case 0:
    puVar9 = *(ulong **)(param_2 + 0x10);
    if (puVar9 != (ulong *)0x0) {
      uVar6 = *puVar9;
      ppppppplVar7 = param_1;
      if (((uint)uVar6 >> 0xc & 1) != 0) {
        ppppppplVar7 = (long *******)&local_48;
        local_48 = param_1;
      }
      if ((uVar6 & 1) != 0) {
        FUN_003e4f20(ppppppplVar7,puVar9);
        return 1;
      }
      if ((uVar6 & 0x300) != 0) {
        *ppppppplVar7 = (long ******)0x0;
        return 1;
      }
      if ((uVar6 & 6) == 0) {
        iVar1 = FUN_003e49e0(ppppppplVar7,puVar9[4],(uint)uVar6 & 0x1000);
        goto joined_r0x003e4b2c;
      }
      pppppplVar3 = (long ******)FUN_0047dcc0();
      if (pppppplVar3 != (long ******)0x0) {
        *ppppppplVar7 = pppppplVar3;
        return 1;
      }
      FUN_004806c0(0xd,0x85,0x41,"external/openssl/crypto/asn1/tasn_new.c",0xe7);
      goto LAB_003e4d3c;
    }
    break;
  case 1:
  case 6:
    if (pcVar10 != (code *)0x0) {
      iVar1 = (*pcVar10)(0,param_1,param_2,0);
      if (iVar1 != 0) {
        if (iVar1 == 2) goto LAB_003e4ce8;
        goto LAB_003e4a60;
      }
      goto LAB_003e4c84;
    }
LAB_003e4a60:
    if (param_3 == 0) {
      pppppplVar3 = (long ******)
                    FUN_00452ce0(*(undefined8 *)(param_2 + 0x28),
                                 "external/openssl/crypto/asn1/tasn_new.c",0x7a);
      *param_1 = pppppplVar3;
      if (pppppplVar3 != (long ******)0x0) {
        iVar1 = FUN_003e5150(param_1,0,param_2);
        if (-1 < iVar1) goto LAB_003e4b64;
        FUN_00452f80(*param_1,"external/openssl/crypto/asn1/tasn_new.c",0x81);
        *param_1 = (long ******)0x0;
      }
    }
    else {
      memset(*param_1,0,*(size_t *)(param_2 + 0x28));
      iVar1 = FUN_003e5150(param_1,0,param_2);
      if (-1 < iVar1) {
LAB_003e4b64:
        FUN_003e5260(param_1,param_2);
        if (0 < *(long *)(param_2 + 0x18)) {
          puVar9 = *(ulong **)(param_2 + 0x10);
          lVar5 = 0;
          do {
            ppppppplVar2 = (long *******)FUN_003e5460(param_1,puVar9);
            uVar6 = *puVar9;
            ppppppplVar7 = ppppppplVar2;
            if (((uint)uVar6 >> 0xc & 1) != 0) {
              ppppppplVar7 = (long *******)&local_48;
              local_48 = ppppppplVar2;
            }
            if ((uVar6 & 1) == 0) {
              if ((uVar6 & 0x300) == 0) {
                if ((uVar6 & 6) == 0) {
                  iVar1 = FUN_003e49e0(ppppppplVar7,puVar9[4],(uint)uVar6 & 0x1000);
                  if (iVar1 == 0) goto LAB_003e4d0c;
                }
                else {
                  pppppplVar3 = (long ******)FUN_0047dcc0();
                  if (pppppplVar3 == (long ******)0x0) {
                    FUN_004806c0(0xd,0x85,0x41,"external/openssl/crypto/asn1/tasn_new.c",0xe7);
LAB_003e4d0c:
                    FUN_003e4570(param_1,param_2,param_3);
                    goto LAB_003e4d3c;
                  }
                  *ppppppplVar7 = pppppplVar3;
                }
              }
              else {
                *ppppppplVar7 = (long ******)0x0;
              }
            }
            else {
              FUN_003e4f20(ppppppplVar7,puVar9);
            }
            lVar5 = lVar5 + 1;
            puVar9 = puVar9 + 5;
          } while (lVar5 < *(long *)(param_2 + 0x18));
        }
        goto joined_r0x003e4c54;
      }
    }
    goto LAB_003e4d3c;
  case 2:
    if (pcVar10 != (code *)0x0) {
      iVar1 = (*pcVar10)(0,param_1,param_2,0);
      if (iVar1 == 0) goto LAB_003e4c84;
      if (iVar1 == 2) goto LAB_003e4ce8;
    }
    if (param_3 == 0) {
      pppppplVar3 = (long ******)
                    FUN_00452ce0(*(undefined8 *)(param_2 + 0x28),
                                 "external/openssl/crypto/asn1/tasn_new.c",0x61);
      *param_1 = pppppplVar3;
      if (pppppplVar3 == (long ******)0x0) goto LAB_003e4d3c;
    }
    else {
      memset(*param_1,0,*(size_t *)(param_2 + 0x28));
    }
    FUN_003e5130(param_1,0xffffffff,param_2);
joined_r0x003e4c54:
    if (pcVar10 == (code *)0x0) goto LAB_003e4ce8;
    iVar1 = (*pcVar10)(1,param_1,param_2,0);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_003e4570(param_1,param_2,param_3);
LAB_003e4c84:
    uVar8 = 100;
    uVar4 = 0xa1;
    goto LAB_003e4d54;
  default:
    goto switchD_003e4a38_caseD_3;
  case 4:
    if ((lVar5 == 0) || (*(code **)(lVar5 + 8) == (code *)0x0)) goto LAB_003e4ce8;
    iVar1 = (**(code **)(lVar5 + 8))(param_1,param_2);
    goto joined_r0x003e4b2c;
  case 5:
    break;
  }
  iVar1 = FUN_003e4d80(param_1,param_2,param_3);
joined_r0x003e4b2c:
  if (iVar1 == 0) {
LAB_003e4d3c:
    uVar8 = 0x41;
    uVar4 = 0x98;
LAB_003e4d54:
    FUN_004806c0(0xd,0x79,uVar8,"external/openssl/crypto/asn1/tasn_new.c",uVar4);
    uVar8 = 0;
  }
  else {
LAB_003e4ce8:
    uVar8 = 1;
  }
switchD_003e4a38_caseD_3:
  return uVar8;
}


