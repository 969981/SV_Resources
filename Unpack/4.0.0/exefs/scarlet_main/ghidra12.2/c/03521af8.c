/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03521af8; name: FUN_03521af8
 */


undefined8 FUN_03521af8(long param_1)

{
  uint uVar1;
  size_t __n;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  char *pcVar9;
  byte *pbVar10;
  ulong __n_00;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  
  bVar6 = *(byte *)(param_1 + 0x6c);
  if (((bVar6 >> 1 & 1) == 0) ||
     ((pcVar9 = *(char **)(param_1 + 0x38), (bVar6 >> 2 & 1) == 0 && (pcVar9 == (char *)0x0)))) {
    return 0;
  }
  bVar6 = bVar6 & 4;
  if (pcVar9 != (char *)0x0) {
    pbVar4 = (byte *)(param_1 + 0x44);
    bVar2 = *pbVar4;
    bVar3 = ((bVar2 ^ 0xff) & 0xf0) != 0 & bVar2 >> 7;
    uVar7 = (uint)bVar2;
    if (bVar3 == 0) {
      if (bVar2 == 0xf0) {
LAB_03521bb4:
        pbVar5 = (byte *)(param_1 + 0x45);
      }
      else {
        if (bVar2 != 0xff) {
          if (uVar7 != 0xf7) goto LAB_03521d5c;
          goto LAB_03521bb4;
        }
        pbVar5 = (byte *)(param_1 + 0x46);
      }
      pbVar13 = pbVar5 + 1;
      uVar12 = *pbVar5 & 0x7f;
      if ((char)*pbVar5 < '\0') {
        uVar12 = pbVar5[1] & 0x7f | uVar12 << 7;
        if (-1 < (char)pbVar5[1]) {
          pbVar13 = pbVar5 + 2;
          goto LAB_03521c18;
        }
        uVar12 = pbVar5[2] & 0x7f | uVar12 << 7;
        pbVar13 = pbVar5 + 3;
        if (-1 < (char)pbVar5[2]) goto LAB_03521c18;
        if (((char)*pbVar13 < '\0') ||
           (uVar12 = *pbVar13 & 0x7f | uVar12 << 7, uVar12 == 0xffffffff)) goto LAB_03521d5c;
        uVar12 = ((int)pbVar5 - (int)pbVar4) + uVar12 + 4;
      }
      else {
LAB_03521c18:
        uVar12 = uVar12 + ((int)pbVar13 - (int)pbVar4);
      }
      if (uVar12 != 0xffffffff) goto LAB_03521c28;
LAB_03521d5c:
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      uVar12 = uVar7;
      if (bVar2 < 0xf0) {
        uVar12 = uVar7 & 0xf0;
      }
      uVar1 = (uVar12 + 0x50) * 0x10 & 0xff | uVar12 + 0x50 >> 4 & 0xf;
      if (uVar1 - 1 < 2) {
LAB_03521b94:
        iVar11 = 2;
      }
      else {
        if (uVar1 == 5) goto LAB_03521d5c;
        if (uVar1 == 0) {
          if (*(char *)(param_1 + 0x45) < '\0') goto LAB_03521d5c;
          if ((uVar12 | 0x10) == 0xd0) goto LAB_03521b94;
        }
        iVar11 = 3;
      }
      uVar12 = iVar11 + ((int)*pcVar9 >> 7 ^ 0xffffffffU);
LAB_03521c28:
      pbVar5 = (byte *)(pcVar9 + uVar12);
      pbVar10 = *(byte **)(param_1 + 0x30);
      pbVar13 = (byte *)0x0;
      if (pbVar5 <= pbVar10) {
        pbVar13 = pbVar5;
      }
      *(byte **)(param_1 + 0x38) = pbVar13;
      if (pbVar5 <= pbVar10) {
        if (bVar3 == 0) {
          uVar7 = 0;
        }
        *(char *)(param_1 + 0x4a) = (char)uVar7;
        if (pbVar13 != pbVar10) {
          pbVar5 = pbVar13 + 1;
          *(undefined4 *)(param_1 + 0x40) = 0;
          *(byte **)(param_1 + 0x38) = pbVar5;
          bVar2 = *pbVar13;
          uVar12 = bVar2 & 0x7f;
          *(uint *)(param_1 + 0x40) = uVar12;
          if ((char)bVar2 < '\0') {
            uVar12 = uVar12 << 7;
            pbVar5 = pbVar13 + 2;
            *(uint *)(param_1 + 0x40) = uVar12;
            *(byte **)(param_1 + 0x38) = pbVar5;
            bVar2 = pbVar13[1];
            uVar12 = uVar12 | bVar2 & 0x7f;
            *(uint *)(param_1 + 0x40) = uVar12;
            if ((char)bVar2 < '\0') {
              uVar12 = uVar12 << 7;
              pbVar5 = pbVar13 + 3;
              *(uint *)(param_1 + 0x40) = uVar12;
              *(byte **)(param_1 + 0x38) = pbVar5;
              bVar2 = pbVar13[2];
              uVar12 = uVar12 | bVar2 & 0x7f;
              *(uint *)(param_1 + 0x40) = uVar12;
              if ((char)bVar2 < '\0') {
                uVar12 = uVar12 << 7;
                pbVar5 = pbVar13 + 4;
                *(uint *)(param_1 + 0x40) = uVar12;
                *(byte **)(param_1 + 0x38) = pbVar5;
                uVar12 = uVar12 | pbVar13[3] & 0x7f;
                if ((pbVar13[3] & 0x80) != 0) {
                  uVar12 = 0xffffffff;
                }
                *(uint *)(param_1 + 0x40) = uVar12;
                if (uVar12 == 0xffffffff) goto LAB_03521d60;
              }
            }
          }
          if (pbVar5 < pbVar10) {
            lVar8 = 6;
            *(undefined2 *)(param_1 + 0x48) = 0;
            pbVar4[0] = 0;
            pbVar4[1] = 0;
            pbVar4[2] = 0;
            pbVar4[3] = 0;
            if ((uVar7 != 0) && (-1 < (char)*pbVar5)) {
              pbVar4 = (byte *)(param_1 + 0x45);
              lVar8 = 5;
              *(char *)(param_1 + 0x44) = (char)uVar7;
            }
            uVar7 = (int)pbVar10 - (int)pbVar5;
            if (pbVar5 + lVar8 <= pbVar10) {
              uVar7 = (uint)lVar8;
            }
            memcpy(pbVar4,pbVar5,(ulong)uVar7 & 0xff);
            if (*(long *)(param_1 + 0x38) != 0) goto LAB_03521e68;
            bVar6 = *(byte *)(param_1 + 0x6c) & 4;
            goto LAB_03521d74;
          }
        }
      }
    }
LAB_03521d60:
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x47) = 0;
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  }
LAB_03521d74:
  if (bVar6 != 0) {
    pbVar4 = *(byte **)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x4a) = 0;
    *(byte **)(param_1 + 0x38) = pbVar4;
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    if (pbVar4 != (byte *)0x0) {
      pbVar5 = pbVar4 + 1;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(byte **)(param_1 + 0x38) = pbVar5;
      bVar6 = *pbVar4;
      uVar7 = bVar6 & 0x7f;
      *(uint *)(param_1 + 0x40) = uVar7;
      if ((char)bVar6 < '\0') {
        uVar7 = uVar7 << 7;
        pbVar5 = pbVar4 + 2;
        *(uint *)(param_1 + 0x40) = uVar7;
        *(byte **)(param_1 + 0x38) = pbVar5;
        bVar6 = pbVar4[1];
        uVar7 = uVar7 | bVar6 & 0x7f;
        *(uint *)(param_1 + 0x40) = uVar7;
        if ((char)bVar6 < '\0') {
          uVar7 = uVar7 << 7;
          pbVar5 = pbVar4 + 3;
          *(uint *)(param_1 + 0x40) = uVar7;
          *(byte **)(param_1 + 0x38) = pbVar5;
          bVar6 = pbVar4[2];
          uVar7 = uVar7 | bVar6 & 0x7f;
          *(uint *)(param_1 + 0x40) = uVar7;
          if ((char)bVar6 < '\0') {
            uVar7 = uVar7 << 7;
            pbVar5 = pbVar4 + 4;
            *(uint *)(param_1 + 0x40) = uVar7;
            *(byte **)(param_1 + 0x38) = pbVar5;
            uVar7 = uVar7 | pbVar4[3] & 0x7f;
            if ((pbVar4[3] & 0x80) != 0) {
              uVar7 = 0xffffffff;
            }
            *(uint *)(param_1 + 0x40) = uVar7;
            if (uVar7 == 0xffffffff) goto LAB_03521e68;
          }
        }
      }
      pbVar4 = *(byte **)(param_1 + 0x30);
      if (pbVar5 < pbVar4) {
        __n_00 = (ulong)(uint)((int)pbVar4 - (int)pbVar5) & 0xff;
        if (pbVar5 + 6 <= pbVar4) {
          __n_00 = 6;
        }
        __n = 0;
        if (__n_00 < 6) {
          __n = 6 - __n_00;
        }
        memset((void *)(param_1 + 0x44 + __n_00),0,__n);
        memcpy((void *)(param_1 + 0x44),pbVar5,__n_00);
      }
    }
  }
LAB_03521e68:
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x40);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  return 1;
}


