/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002ff320; name: FUN_002ff320
 */


undefined8 FUN_002ff320(long *param_1,byte *param_2,size_t param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  size_t sVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  
  if (param_3 == 0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
    pbVar6 = param_2;
    sVar7 = param_3;
LAB_002ff358:
    do {
      bVar1 = *pbVar6;
      if (bVar1 == 0x3a) {
        bVar2 = true;
LAB_002ff3f0:
        uVar5 = param_1[1];
        goto joined_r0x002ff3f4;
      }
      if (bVar1 < 0x30) {
        if (bVar1 != 0x2e) {
          bVar2 = false;
          uVar5 = param_1[1];
          goto joined_r0x002ff3f4;
        }
        bVar2 = false;
        if ((uVar5 == 0) || (3 < uVar4)) goto LAB_002ff3f0;
        uVar5 = 0;
        uVar4 = uVar4 + 1;
        sVar7 = sVar7 - 1;
        pbVar6 = pbVar6 + 1;
        if (sVar7 == 0) break;
        goto LAB_002ff358;
      }
      bVar2 = false;
      if ((3 < uVar5) || (0x39 < bVar1)) goto LAB_002ff3f0;
      uVar5 = uVar5 + 1;
      sVar7 = sVar7 - 1;
      pbVar6 = pbVar6 + 1;
    } while (sVar7 != 0);
  }
  bVar2 = 2 < uVar4 && uVar5 != 0;
  uVar5 = param_1[1];
joined_r0x002ff3f4:
  if (uVar5 != 0) {
    if (bVar2) {
      puVar9 = (undefined8 *)*param_1;
      uVar4 = 0;
      lVar12 = 0;
      puVar10 = (undefined8 *)0x0;
      if (param_3 == 0) {
        do {
          pcVar8 = (char *)*puVar9;
          puVar11 = puVar10;
          if (pcVar8 != (char *)0x0) {
            iVar3 = strcmp(pcVar8,"x509_subject_alternative_name");
            if (iVar3 == 0) {
              if (puVar9[2] == 0) {
                return 1;
              }
              lVar12 = lVar12 + 1;
            }
            else {
              iVar3 = strcmp(pcVar8,"x509_subject_common_name");
              puVar11 = puVar9;
              if (iVar3 != 0) {
                puVar11 = puVar10;
              }
            }
          }
          uVar4 = uVar4 + 1;
          puVar9 = puVar9 + 3;
          puVar10 = puVar11;
        } while (uVar4 < uVar5);
      }
      else {
        do {
          pcVar8 = (char *)*puVar9;
          puVar11 = puVar10;
          if (pcVar8 != (char *)0x0) {
            iVar3 = strcmp(pcVar8,"x509_subject_alternative_name");
            if (iVar3 == 0) {
              lVar12 = lVar12 + 1;
              if ((param_3 == puVar9[2]) &&
                 (iVar3 = memcmp(param_2,(void *)puVar9[1],param_3), iVar3 == 0)) {
                return 1;
              }
            }
            else {
              iVar3 = strcmp(pcVar8,"x509_subject_common_name");
              puVar11 = puVar9;
              if (iVar3 != 0) {
                puVar11 = puVar10;
              }
            }
          }
          uVar4 = uVar4 + 1;
          puVar9 = puVar9 + 3;
          puVar10 = puVar11;
        } while (uVar4 < uVar5);
      }
    }
    else {
      lVar13 = 0;
      uVar4 = 0;
      lVar12 = 0;
      puVar9 = (undefined8 *)0x0;
      do {
        puVar10 = (undefined8 *)(*param_1 + lVar13);
        pcVar8 = (char *)*puVar10;
        puVar11 = puVar9;
        if (pcVar8 != (char *)0x0) {
          iVar3 = strcmp(pcVar8,"x509_subject_alternative_name");
          if (iVar3 == 0) {
            iVar3 = FUN_002ff5c0(puVar10[1],puVar10[2],param_2,param_3);
            if (iVar3 != 0) {
              return 1;
            }
            uVar5 = param_1[1];
            lVar12 = lVar12 + 1;
          }
          else {
            iVar3 = strcmp(pcVar8,"x509_subject_common_name");
            puVar11 = puVar10;
            if (iVar3 != 0) {
              puVar11 = puVar9;
            }
          }
        }
        uVar4 = uVar4 + 1;
        lVar13 = lVar13 + 0x18;
        puVar9 = puVar11;
      } while (uVar4 < uVar5);
    }
    if ((((!bVar2) && (puVar11 != (undefined8 *)0x0)) && (lVar12 == 0)) &&
       (iVar3 = FUN_002ff5c0(puVar11[1],puVar11[2],param_2,param_3), iVar3 != 0)) {
      return 1;
    }
  }
  return 0;
}


