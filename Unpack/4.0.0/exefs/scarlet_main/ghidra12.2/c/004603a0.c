/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004603a0; name: FUN_004603a0
 */


char * FUN_004603a0(char *param_1,uint param_2,undefined8 *param_3,int *param_4)

{
  ulong uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  size_t sVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong local_58;
  
  local_58 = 0;
  sVar13 = (size_t)param_2;
  if (param_2 == 0xffffffff) {
    sVar13 = strlen(param_1);
    param_2 = (uint)sVar13;
  }
  if ((int)param_2 < 1) {
    iVar11 = 2;
    pcVar4 = (char *)FUN_00452c30(2,"external/openssl/crypto/pkcs12/p12_utl.c",0x75);
    if (pcVar4 == (char *)0x0) {
LAB_00460520:
      FUN_004806c0(0x23,0x81,0x41,"external/openssl/crypto/pkcs12/p12_utl.c",0x76);
      return (char *)0x0;
    }
    pcVar3 = pcVar4;
  }
  else {
    iVar11 = 0;
    iVar15 = 0;
    do {
      iVar12 = (int)sVar13;
      iVar2 = FUN_003de4e0(param_1 + iVar15,iVar12 - iVar15,&local_58);
      if (iVar2 < 0) {
        if (iVar12 == -1) {
          sVar13 = strlen(param_1);
        }
        uVar5 = (sVar13 & 0xffffffff) << 1;
        uVar16 = -(sVar13 >> 0x1f & 1) & 0xfffffffe00000000 | uVar5;
        iVar15 = (int)uVar5;
        iVar11 = iVar15 + 2;
        pcVar3 = (char *)FUN_00452c30((long)iVar11,"external/openssl/crypto/pkcs12/p12_utl.c",0x19);
        if (pcVar3 == (char *)0x0) {
          FUN_004806c0(0x23,0x79,0x41,"external/openssl/crypto/pkcs12/p12_utl.c",0x1a);
          return (char *)0x0;
        }
        if ((int)sVar13 < 1) goto LAB_004605ec;
        uVar5 = uVar16;
        if ((long)uVar16 < 3) {
          uVar5 = 2;
        }
        if (0x7d < uVar5 - 1) {
          uVar1 = uVar16;
          if ((long)uVar16 < 3) {
            uVar1 = 2;
          }
          if ((param_1 + (uVar1 - 1 >> 1) + 1 <= pcVar3) || (pcVar3 + uVar1 <= param_1)) {
            uVar1 = (uVar5 - 1 >> 1) + 1;
            uVar9 = uVar1 & 0x7fffffffffffffc0;
            uVar7 = 0;
            uVar5 = uVar9 << 1;
            pcVar6 = pcVar3 + 0x40;
            do {
              uVar10 = uVar7 & 0x7fffffffffffffc0;
              uVar7 = uVar7 + 0x40;
              pcVar4 = param_1 + uVar10;
              uVar20 = *(undefined8 *)(pcVar4 + 8);
              uVar19 = *(undefined8 *)pcVar4;
              uVar22 = *(undefined8 *)(pcVar4 + 0x18);
              uVar21 = *(undefined8 *)(pcVar4 + 0x10);
              uVar24 = *(undefined8 *)(pcVar4 + 0x28);
              uVar23 = *(undefined8 *)(pcVar4 + 0x20);
              uVar18 = *(undefined8 *)(pcVar4 + 0x38);
              uVar17 = *(undefined8 *)(pcVar4 + 0x30);
              pcVar6[-0x40] = '\0';
              pcVar6[-0x3f] = (char)uVar19;
              pcVar6[-0x3e] = '\0';
              pcVar6[-0x3d] = (char)((ulong)uVar19 >> 8);
              pcVar6[-0x3c] = '\0';
              pcVar6[-0x3b] = (char)((ulong)uVar19 >> 0x10);
              pcVar6[-0x3a] = '\0';
              pcVar6[-0x39] = (char)((ulong)uVar19 >> 0x18);
              pcVar6[-0x38] = '\0';
              pcVar6[-0x37] = (char)((ulong)uVar19 >> 0x20);
              pcVar6[-0x36] = '\0';
              pcVar6[-0x35] = (char)((ulong)uVar19 >> 0x28);
              pcVar6[-0x34] = '\0';
              pcVar6[-0x33] = (char)((ulong)uVar19 >> 0x30);
              pcVar6[-0x32] = '\0';
              pcVar6[-0x31] = (char)((ulong)uVar19 >> 0x38);
              pcVar6[-0x30] = '\0';
              pcVar6[-0x2f] = (char)uVar20;
              pcVar6[-0x2e] = '\0';
              pcVar6[-0x2d] = (char)((ulong)uVar20 >> 8);
              pcVar6[-0x2c] = '\0';
              pcVar6[-0x2b] = (char)((ulong)uVar20 >> 0x10);
              pcVar6[-0x2a] = '\0';
              pcVar6[-0x29] = (char)((ulong)uVar20 >> 0x18);
              pcVar6[-0x28] = '\0';
              pcVar6[-0x27] = (char)((ulong)uVar20 >> 0x20);
              pcVar6[-0x26] = '\0';
              pcVar6[-0x25] = (char)((ulong)uVar20 >> 0x28);
              pcVar6[-0x24] = '\0';
              pcVar6[-0x23] = (char)((ulong)uVar20 >> 0x30);
              pcVar6[-0x22] = '\0';
              pcVar6[-0x21] = (char)((ulong)uVar20 >> 0x38);
              pcVar6[-0x20] = '\0';
              pcVar6[-0x1f] = (char)uVar21;
              pcVar6[-0x1e] = '\0';
              pcVar6[-0x1d] = (char)((ulong)uVar21 >> 8);
              pcVar6[-0x1c] = '\0';
              pcVar6[-0x1b] = (char)((ulong)uVar21 >> 0x10);
              pcVar6[-0x1a] = '\0';
              pcVar6[-0x19] = (char)((ulong)uVar21 >> 0x18);
              pcVar6[-0x18] = '\0';
              pcVar6[-0x17] = (char)((ulong)uVar21 >> 0x20);
              pcVar6[-0x16] = '\0';
              pcVar6[-0x15] = (char)((ulong)uVar21 >> 0x28);
              pcVar6[-0x14] = '\0';
              pcVar6[-0x13] = (char)((ulong)uVar21 >> 0x30);
              pcVar6[-0x12] = '\0';
              pcVar6[-0x11] = (char)((ulong)uVar21 >> 0x38);
              pcVar6[-0x10] = '\0';
              pcVar6[-0xf] = (char)uVar22;
              pcVar6[-0xe] = '\0';
              pcVar6[-0xd] = (char)((ulong)uVar22 >> 8);
              pcVar6[-0xc] = '\0';
              pcVar6[-0xb] = (char)((ulong)uVar22 >> 0x10);
              pcVar6[-10] = '\0';
              pcVar6[-9] = (char)((ulong)uVar22 >> 0x18);
              pcVar6[-8] = '\0';
              pcVar6[-7] = (char)((ulong)uVar22 >> 0x20);
              pcVar6[-6] = '\0';
              pcVar6[-5] = (char)((ulong)uVar22 >> 0x28);
              pcVar6[-4] = '\0';
              pcVar6[-3] = (char)((ulong)uVar22 >> 0x30);
              pcVar6[-2] = '\0';
              pcVar6[-1] = (char)((ulong)uVar22 >> 0x38);
              *pcVar6 = '\0';
              pcVar6[1] = (char)uVar23;
              pcVar6[2] = '\0';
              pcVar6[3] = (char)((ulong)uVar23 >> 8);
              pcVar6[4] = '\0';
              pcVar6[5] = (char)((ulong)uVar23 >> 0x10);
              pcVar6[6] = '\0';
              pcVar6[7] = (char)((ulong)uVar23 >> 0x18);
              pcVar6[8] = '\0';
              pcVar6[9] = (char)((ulong)uVar23 >> 0x20);
              pcVar6[10] = '\0';
              pcVar6[0xb] = (char)((ulong)uVar23 >> 0x28);
              pcVar6[0xc] = '\0';
              pcVar6[0xd] = (char)((ulong)uVar23 >> 0x30);
              pcVar6[0xe] = '\0';
              pcVar6[0xf] = (char)((ulong)uVar23 >> 0x38);
              pcVar6[0x10] = '\0';
              pcVar6[0x11] = (char)uVar24;
              pcVar6[0x12] = '\0';
              pcVar6[0x13] = (char)((ulong)uVar24 >> 8);
              pcVar6[0x14] = '\0';
              pcVar6[0x15] = (char)((ulong)uVar24 >> 0x10);
              pcVar6[0x16] = '\0';
              pcVar6[0x17] = (char)((ulong)uVar24 >> 0x18);
              pcVar6[0x18] = '\0';
              pcVar6[0x19] = (char)((ulong)uVar24 >> 0x20);
              pcVar6[0x1a] = '\0';
              pcVar6[0x1b] = (char)((ulong)uVar24 >> 0x28);
              pcVar6[0x1c] = '\0';
              pcVar6[0x1d] = (char)((ulong)uVar24 >> 0x30);
              pcVar6[0x1e] = '\0';
              pcVar6[0x1f] = (char)((ulong)uVar24 >> 0x38);
              pcVar6[0x20] = '\0';
              pcVar6[0x21] = (char)uVar17;
              pcVar6[0x22] = '\0';
              pcVar6[0x23] = (char)((ulong)uVar17 >> 8);
              pcVar6[0x24] = '\0';
              pcVar6[0x25] = (char)((ulong)uVar17 >> 0x10);
              pcVar6[0x26] = '\0';
              pcVar6[0x27] = (char)((ulong)uVar17 >> 0x18);
              pcVar6[0x28] = '\0';
              pcVar6[0x29] = (char)((ulong)uVar17 >> 0x20);
              pcVar6[0x2a] = '\0';
              pcVar6[0x2b] = (char)((ulong)uVar17 >> 0x28);
              pcVar6[0x2c] = '\0';
              pcVar6[0x2d] = (char)((ulong)uVar17 >> 0x30);
              pcVar6[0x2e] = '\0';
              pcVar6[0x2f] = (char)((ulong)uVar17 >> 0x38);
              pcVar6[0x30] = '\0';
              pcVar6[0x31] = (char)uVar18;
              pcVar6[0x32] = '\0';
              pcVar6[0x33] = (char)((ulong)uVar18 >> 8);
              pcVar6[0x34] = '\0';
              pcVar6[0x35] = (char)((ulong)uVar18 >> 0x10);
              pcVar6[0x36] = '\0';
              pcVar6[0x37] = (char)((ulong)uVar18 >> 0x18);
              pcVar6[0x38] = '\0';
              pcVar6[0x39] = (char)((ulong)uVar18 >> 0x20);
              pcVar6[0x3a] = '\0';
              pcVar6[0x3b] = (char)((ulong)uVar18 >> 0x28);
              pcVar6[0x3c] = '\0';
              pcVar6[0x3d] = (char)((ulong)uVar18 >> 0x30);
              pcVar6[0x3e] = '\0';
              pcVar6[0x3f] = (char)((ulong)uVar18 >> 0x38);
              pcVar6 = pcVar6 + 0x80;
            } while (uVar9 != uVar7);
            if (uVar1 != uVar9) {
LAB_004605cc:
              pcVar6 = param_1 + (uVar5 >> 1);
              do {
                pcVar4 = pcVar3 + uVar5;
                uVar5 = uVar5 + 2;
                *pcVar4 = '\0';
                pcVar4[1] = *pcVar6;
                pcVar6 = pcVar6 + 1;
              } while ((long)uVar5 < (long)uVar16);
            }
LAB_004605ec:
            pcVar3[uVar16] = '\0';
            pcVar3[(long)iVar15 | 1] = '\0';
            goto joined_r0x004605fc;
          }
        }
        uVar5 = 0;
        goto LAB_004605cc;
      }
      if (0x10 < local_58 >> 0x10) {
        return (char *)0x0;
      }
      iVar14 = 4;
      if (local_58 >> 0x10 == 0) {
        iVar14 = 2;
      }
      iVar15 = iVar2 + iVar15;
      iVar11 = iVar14 + iVar11;
    } while (iVar15 < iVar12);
    iVar11 = iVar11 + 2;
    pcVar3 = (char *)FUN_00452c30(iVar11,"external/openssl/crypto/pkcs12/p12_utl.c",0x75);
    if (pcVar3 == (char *)0x0) goto LAB_00460520;
    if (iVar12 < 1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      goto joined_r0x004605fc;
    }
    iVar15 = 0;
    pcVar6 = pcVar3;
    do {
      iVar2 = FUN_003de4e0(param_1 + iVar15,iVar12 - iVar15,&local_58);
      uVar5 = local_58 - 0x10000;
      if (local_58 < 0x10000) {
        pcVar4 = pcVar6 + 2;
        *pcVar6 = (char)(local_58 >> 8);
        uVar8 = (uint)(byte)local_58;
      }
      else {
        uVar8 = (int)(uVar5 >> 10) + 0xd800;
        *pcVar6 = (char)(uVar8 >> 8);
        pcVar6[2] = (byte)(uVar5 >> 8) & 3 | 0xdc;
        pcVar4 = pcVar6 + 4;
        pcVar6[3] = (char)uVar5;
        local_58 = uVar5;
      }
      iVar15 = iVar2 + iVar15;
      pcVar6[1] = (char)uVar8;
      pcVar6 = pcVar4;
    } while (iVar15 < iVar12);
  }
  pcVar4[0] = '\0';
  pcVar4[1] = '\0';
joined_r0x004605fc:
  if (param_4 != (int *)0x0) {
    *param_4 = iVar11;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = pcVar3;
  }
  return pcVar3;
}


