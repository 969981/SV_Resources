/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002fe1a0; name: FUN_002fe1a0
 */


int FUN_002fe1a0(undefined8 param_1,int param_2,long *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  byte bVar15;
  ulong uVar16;
  undefined1 *local_90 [6];
  
  lVar5 = FUN_004843e0(param_1,0x55,0,0);
  if (lVar5 == 0) {
    uVar16 = 0;
    bVar15 = 0;
    lVar7 = 2;
    if (param_2 != 0) {
      lVar7 = 3;
    }
  }
  else {
    uVar2 = FUN_0047e430(lVar5);
    if ((int)uVar2 < 0) goto LAB_002fe5a4;
    lVar7 = 2;
    if (param_2 != 0) {
      lVar7 = 3;
    }
    uVar16 = (ulong)uVar2;
    lVar7 = lVar7 + uVar16;
    if (uVar2 == 0) {
      bVar15 = 0;
    }
    else {
      uVar12 = 0;
      do {
        piVar6 = (int *)FUN_0047e450(lVar5,uVar12);
        uVar12 = uVar12 + 1;
        if (*piVar6 == 6) {
          lVar7 = lVar7 + 1;
        }
      } while (uVar2 != uVar12);
      bVar15 = 1;
    }
  }
  iVar3 = FUN_0038c2e0(lVar7,param_3);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (param_2 == 0) {
    uVar2 = 0;
LAB_002fe2a4:
    lVar11 = *param_3;
    uVar14 = (ulong)(uVar2 + 1);
    lVar7 = FUN_00483b40(param_1);
    if ((lVar7 == 0) || (iVar3 = FUN_0048a3f0(lVar7,0xd,0xffffffff), iVar3 == -1)) {
      iVar3 = 0;
      local_90[0] = (undefined1 *)0x0;
LAB_002fe310:
      puVar1 = &DAT_03c886bc;
      if (local_90[0] != (undefined1 *)0x0) {
        puVar1 = local_90[0];
      }
      iVar3 = FUN_0038c280("x509_subject_common_name",puVar1,iVar3,lVar11 + (ulong)uVar2 * 0x18);
      FUN_00452f80(local_90[0],
                   "external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x145);
      if (iVar3 == 0) {
        lVar7 = *param_3;
        FUN_003eaa20();
        uVar8 = FUN_003e8a30();
        iVar3 = FUN_0045f880(uVar8,param_1);
        if ((iVar3 == 0) || (lVar11 = FUN_003e9560(uVar8,3,0,local_90), lVar11 < 1)) {
          FUN_003e8b90(uVar8);
          iVar3 = 7;
        }
        else {
          iVar3 = FUN_0038c280("x509_pem_cert",local_90[0],lVar11,lVar7 + uVar14 * 0x18);
          FUN_003e8b90(uVar8);
          if (!(bool)(bVar15 ^ 1 | iVar3 != 0)) {
            uVar10 = 0;
            uVar14 = (ulong)(uVar2 | 2);
            do {
              piVar6 = (int *)FUN_0047e450(lVar5,uVar10 & 0xffffffff);
              iVar3 = *piVar6;
              iVar13 = (int)uVar14;
              if (iVar3 - 1U < 2) {
LAB_002fe474:
                local_90[0] = (undefined1 *)0x0;
                iVar4 = FUN_003dd5a0(local_90,*(undefined8 *)(piVar6 + 2));
                if (iVar4 < 0) goto LAB_002fe52c;
                uVar14 = (long)iVar13 + 1;
                iVar3 = FUN_0038c280("x509_subject_alternative_name",local_90[0],iVar4,
                                     *param_3 + (long)iVar13 * 0x18);
                if (iVar3 != 0) {
                  FUN_00452f80(local_90[0],
                               "external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc"
                               ,0x17e);
                  break;
                }
                if (*piVar6 == 6) {
                  iVar3 = FUN_0038c280("x509_uri",local_90[0],iVar4,*param_3 + uVar14 * 0x18);
                  uVar14 = (ulong)(iVar13 + 2);
                }
                else {
                  iVar3 = 0;
                }
                FUN_00452f80(local_90[0],
                             "external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",
                             0x187);
joined_r0x002fe524:
                if (iVar3 != 0) break;
              }
              else {
                if (iVar3 == 7) {
                  iVar3 = **(int **)(piVar6 + 2);
                  if (iVar3 == 4) {
                    iVar3 = 2;
                  }
                  else {
                    if (iVar3 != 0x10) goto LAB_002fe52c;
                    iVar3 = 0x1c;
                  }
                  pcVar9 = inet_ntop(iVar3,*(void **)(*(int **)(piVar6 + 2) + 2),(char *)local_90,
                                     0x2e);
                  if (pcVar9 != (char *)0x0) {
                    uVar14 = (ulong)(iVar13 + 1);
                    iVar3 = FUN_0038c210("x509_subject_alternative_name",pcVar9,
                                         *param_3 + (long)iVar13 * 0x18);
                    goto joined_r0x002fe524;
                  }
                  goto LAB_002fe52c;
                }
                if (iVar3 == 6) goto LAB_002fe474;
              }
              uVar10 = uVar10 + 1;
              iVar3 = 0;
            } while (uVar16 != uVar10);
            goto LAB_002fe530;
          }
        }
        uVar14 = (ulong)(uVar2 | 2);
      }
    }
    else {
      lVar7 = FUN_0048a390(lVar7,iVar3);
      if ((lVar7 == 0) || (lVar7 = FUN_0048a380(), lVar7 == 0)) {
LAB_002fe52c:
        iVar3 = 7;
      }
      else {
        iVar3 = FUN_003dd5a0(local_90,lVar7);
        if (-1 < iVar3) goto LAB_002fe310;
        iVar3 = 0xc;
      }
    }
  }
  else {
    iVar3 = FUN_0038c210("certificate_type",&DAT_03c472f2,*param_3);
    uVar2 = 1;
    uVar14 = 1;
    if (iVar3 == 0) goto LAB_002fe2a4;
  }
LAB_002fe530:
  if (lVar5 != 0) {
    FUN_0047e3b0(lVar5,PTR_FUN_047cca70);
  }
  if (iVar3 != 0) {
    FUN_0038c190(param_3);
  }
  if ((int)uVar14 == (int)param_3[1]) {
    return iVar3;
  }
LAB_002fe5a4:
                    /* WARNING: Subroutine does not return */
  abort();
}


