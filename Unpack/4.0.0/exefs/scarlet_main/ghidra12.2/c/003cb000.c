/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003cb000; name: FUN_003cb000
 */


undefined8 FUN_003cb000(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_150 [256];
  ulong local_50;
  long local_48;
  
  uVar7 = param_2[4];
  if ((ulong)param_2[1] < param_2[3] + uVar7) {
    return 0xffffffff;
  }
  uVar5 = *(ulong *)(param_1 + 0x6a8);
  if (uVar5 < 0x454d) {
    uVar5 = 0x454c;
  }
  if (uVar5 < (ulong)param_2[1]) {
    return 0xffffffff;
  }
  if (uVar7 == 0) {
    return 0xfffffffd;
  }
  local_48 = (ulong)(ushort)(*(ushort *)(param_2 + 2) >> 8 | *(ushort *)(param_2 + 2) << 8) << 0x30;
  lVar3 = FUN_003a2e30(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x118),&local_48);
  if (lVar3 == 0) {
    puVar8 = (undefined8 *)FUN_003cacd0(param_2[1],1);
    if (puVar8 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    uVar11 = *param_2;
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    puVar8[1] = param_2[1];
    *puVar8 = uVar11;
    uVar16 = param_2[5];
    uVar15 = param_2[4];
    uVar14 = param_2[7];
    uVar13 = param_2[6];
    uVar12 = param_2[9];
    uVar11 = param_2[8];
    puVar8[10] = param_2[10];
    puVar8[3] = uVar10;
    puVar8[2] = uVar9;
    puVar8[5] = uVar16;
    puVar8[4] = uVar15;
    puVar8[7] = uVar14;
    puVar8[6] = uVar13;
    puVar8[9] = uVar12;
    puVar8[8] = uVar11;
    puVar8[3] = 0;
    puVar8[4] = puVar8[1];
    if (puVar8[0xc] == 0) goto LAB_003cb194;
LAB_003cb0b0:
    iVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x68))
                      (param_1,0x16,0,puVar8[0xb] + param_2[3],uVar7,0,&local_50);
    if (0 < iVar2 && local_50 == uVar7) {
      uVar5 = param_2[3];
      if ((long)uVar7 < 9) {
        if ((long)uVar5 < (long)(uVar5 + uVar7)) {
          do {
            *(byte *)(puVar8[0xc] + ((long)uVar5 >> 3)) =
                 *(byte *)(puVar8[0xc] + ((long)uVar5 >> 3)) | (byte)(1 << (uVar5 & 7));
            uVar5 = uVar5 + 1;
          } while ((long)uVar5 < (long)(param_2[3] + uVar7));
        }
      }
      else {
        *(byte *)(puVar8[0xc] + ((long)uVar5 >> 3)) =
             *(byte *)(puVar8[0xc] + ((long)uVar5 >> 3)) | (&DAT_03cb55e0)[uVar5 & 7];
        lVar6 = ((long)param_2[3] >> 3) + 1;
        uVar5 = param_2[3] + uVar7;
        lVar4 = (long)(uVar5 - 1) >> 3;
        if (lVar6 < lVar4) {
          do {
            *(undefined1 *)(puVar8[0xc] + lVar6) = 0xff;
            uVar5 = param_2[3] + uVar7;
            lVar6 = lVar6 + 1;
            lVar4 = (long)(uVar5 - 1) >> 3;
          } while (lVar6 < lVar4);
        }
        *(byte *)(puVar8[0xc] + lVar4) = *(byte *)(puVar8[0xc] + lVar4) | (&DAT_03cb55f0)[uVar5 & 7]
        ;
      }
      uVar7 = param_2[1];
      if (uVar7 != 0) {
        lVar4 = puVar8[0xc];
        lVar6 = (long)(uVar7 - 1) >> 3;
        if (*(char *)(lVar4 + lVar6) == (&DAT_03cb55f0)[uVar7 & 7]) {
          do {
            if (lVar6 < 1) {
              FUN_00452f80(lVar4,"external/openssl/ssl/statem/statem_dtls.c",0x261);
              puVar8[0xc] = 0;
              break;
            }
            lVar1 = lVar4 + lVar6;
            lVar6 = lVar6 + -1;
          } while (*(char *)(lVar1 + -1) == -1);
        }
        if (lVar3 != 0) {
          return 0xfffffffd;
        }
        lVar3 = FUN_003a2c60(&local_48,puVar8);
        if ((lVar3 != 0) &&
           (lVar3 = FUN_003a2d50(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x118),lVar3),
           lVar3 != 0)) {
          return 0xfffffffd;
        }
        if (puVar8 == (undefined8 *)0x0) {
          return 0xffffffff;
        }
        goto LAB_003cb2b0;
      }
    }
  }
  else {
    puVar8 = *(undefined8 **)(lVar3 + 8);
    if (puVar8[1] != param_2[1]) {
      return 0xffffffff;
    }
    if (puVar8[0xc] != 0) goto LAB_003cb0b0;
LAB_003cb194:
    while( true ) {
      uVar5 = uVar7;
      if (0xff < uVar7) {
        uVar5 = 0x100;
      }
      iVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x68))
                        (param_1,0x16,0,auStack_150,uVar5,0,&local_50);
      if (iVar2 < 1) break;
      uVar7 = uVar7 - local_50;
      if (uVar7 == 0) {
        return 0xfffffffd;
      }
    }
  }
  if (lVar3 != 0) {
    return 0xffffffff;
  }
  if (puVar8 == (undefined8 *)0x0) {
    return 0xffffffff;
  }
LAB_003cb2b0:
  if (*(int *)(puVar8 + 5) != 0) {
    FUN_00439e00(puVar8[6]);
    FUN_0042bbe0(puVar8[7]);
  }
  FUN_00452f80(puVar8[0xb],"external/openssl/ssl/statem/statem_dtls.c",0x67);
  FUN_00452f80(puVar8[0xc],"external/openssl/ssl/statem/statem_dtls.c",0x68);
  FUN_00452f80(puVar8,"external/openssl/ssl/statem/statem_dtls.c",0x69);
  return 0xffffffff;
}


