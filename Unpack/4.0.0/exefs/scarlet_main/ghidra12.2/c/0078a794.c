/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078a794; name: FUN_0078a794
 */


void FUN_0078a794(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  size_t sVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  int iVar14;
  ulong uVar15;
  char *pcVar16;
  char cVar17;
  int iVar18;
  ulong uVar19;
  size_t sVar20;
  long lVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  int local_d0 [3];
  char acStack_c2 [50];
  char local_90 [6];
  char local_8a;
  char local_89;
  ushort local_88 [4];
  ushort local_80;
  ushort local_7e;
  ushort local_7c;
  ushort local_7a;
  undefined2 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_58 [2];
  
  piVar9 = local_d0;
  local_8a = 0;
  local_78 = 0;
  pcVar4 = (char *)FUN_00793098(param_3);
  local_89 = '\0';
  pcVar5 = strchr(pcVar4,0x2e);
  if (pcVar5 == (char *)0x0) {
    local_8a = '\x01';
    if (*pcVar4 == '[') {
      local_89 = '\x01';
      pcVar5 = strstr(pcVar4,"]:");
      if (pcVar5 == (char *)0x0) goto LAB_0078acf0;
      pcVar4 = pcVar4 + 1;
    }
    else {
      pcVar5 = (char *)0x0;
    }
    uVar8 = FUN_0078b2d0(acStack_c2 + 2,pcVar4,pcVar5,2);
joined_r0x0078a8b4:
    if ((uVar8 & 1) != 0) {
LAB_0078a990:
      if (local_8a == '\0') {
        pcVar4 = (char *)FUN_007c42b8(acStack_c2 + 2,0x2e,local_d0,1);
        if (pcVar4 != (char *)0x0) {
          lVar21 = 0;
          do {
            if (((lVar21 == 8) || (uVar8 = strtol(pcVar4,(char **)&local_70,10), 0xff < uVar8)) ||
               (*local_70 != '\0')) goto LAB_0078acf0;
            *(short *)((long)local_88 + lVar21) = (short)uVar8;
            pcVar4 = (char *)FUN_007c42b8(0,0x2e,local_d0,1);
            lVar21 = lVar21 + 2;
          } while (pcVar4 != (char *)0x0);
          if ((int)lVar21 == 8) {
LAB_0078acb0:
            if (local_89 != '\0') {
              uVar8 = strtol(local_90,(char **)&local_70,10);
              if ((uVar8 >> 0x10 != 0) || (*local_70 != '\0')) {
                local_70 = (char *)CONCAT44(local_70._4_4_,0x10407);
                goto LAB_0078ad04;
              }
              local_78 = (undefined2)uVar8;
            }
            local_70 = (char *)((ulong)local_70 & 0xffffffff00000000);
            goto LAB_0078ad04;
          }
        }
      }
      else {
        pcVar4 = strstr(acStack_c2 + 2,"::");
        if (pcVar4 == (char *)0x0) goto LAB_0078ac08;
        pcVar5 = strstr(pcVar4 + 1,"::");
        if (pcVar5 == (char *)0x0) {
          sVar20 = strlen(acStack_c2 + 2);
          iVar18 = 6;
          if ((acStack_c2 + 2 != pcVar4) && (acStack_c2[2] != '\0')) {
            iVar18 = 0;
            pcVar5 = (char *)((ulong)(acStack_c2 + 2) | 1);
            do {
              if (acStack_c2[2] == ':') {
                iVar18 = iVar18 + 1;
              }
              acStack_c2[2] = *pcVar5;
            } while ((pcVar4 != pcVar5) && (pcVar5 = pcVar5 + 1, acStack_c2[2] != '\0'));
            iVar18 = 6 - iVar18;
          }
          cVar17 = pcVar4[2];
          if (cVar17 != '\0') {
            iVar14 = 0;
            pcVar5 = pcVar4 + 3;
            do {
              if (cVar17 == ':') {
                iVar14 = iVar14 + 1;
              }
              cVar17 = *pcVar5;
              pcVar5 = pcVar5 + 1;
            } while (cVar17 != '\0');
            iVar18 = iVar18 - iVar14;
          }
          if (0 < iVar18) {
            puVar12 = &local_70;
            if (pcVar4 == acStack_c2 + 2) {
              puVar12 = (undefined8 *)((ulong)puVar12 | 1);
              local_70 = (char *)CONCAT71(local_70._1_7_,0x30);
            }
            puVar1 = (undefined1 *)((long)puVar12 + 1);
            do {
              puVar22 = puVar1;
              memcpy(puVar22 + -1,&DAT_03c8a4bf,2);
              iVar18 = iVar18 + -1;
              puVar1 = puVar22 + 2;
            } while (iVar18 != 0);
            puVar22[1] = 0x3a;
            puVar23 = puVar1;
            if (pcVar4 == acStack_c2 + sVar20) {
              puVar23 = puVar22 + 3;
              *puVar1 = 0x30;
            }
            *puVar23 = 0;
            if ((sVar20 + (long)((int)puVar23 - (int)&local_70)) - 2 < 0x2f) {
              if ((char)local_70 == '\0') {
                lVar21 = 0;
                pcVar5 = pcVar4;
LAB_0078ab98:
                FUN_007c41e0(pcVar5,local_90 + (-lVar21 - (long)pcVar4),pcVar4 + 2);
                if (lVar21 == -1) {
                  if ((char)local_70 != '\0') {
                    pcVar4 = (char *)((ulong)&local_70 | 1);
                    do {
                      cVar17 = *pcVar4;
                      pcVar4 = pcVar4 + 1;
                    } while (cVar17 != '\0');
                  }
                }
                else if (0 < lVar21) goto LAB_0078abc4;
              }
              else {
                lVar21 = 0;
                do {
                  pcVar5 = (char *)(((ulong)&local_70 | 1) + lVar21);
                  lVar21 = lVar21 + 1;
                } while (*pcVar5 != '\0');
                pcVar5 = pcVar4 + lVar21;
                if (lVar21 != 2) goto LAB_0078ab98;
LAB_0078abc4:
                pcVar13 = (char *)&local_70;
                do {
                  pcVar16 = pcVar4 + 1;
                  lVar21 = lVar21 + -1;
                  *pcVar4 = *pcVar13;
                  if (lVar21 == 0) break;
                  pcVar13 = pcVar13 + 1;
                  pcVar4 = pcVar16;
                } while (pcVar16 < pcVar5);
              }
LAB_0078ac08:
              bVar3 = local_8a != '\0';
              uVar10 = 4;
              if (bVar3) {
                uVar10 = 8;
              }
              uVar11 = 0x2e;
              if (bVar3) {
                uVar11 = 0x3a;
              }
              iVar18 = 10;
              if (bVar3) {
                iVar18 = 0x10;
              }
              uVar8 = 0xff;
              if (bVar3) {
                uVar8 = 0xffff;
              }
              pcVar4 = (char *)FUN_007c42b8(acStack_c2 + 2,uVar11,local_d0,1);
              if (pcVar4 != (char *)0x0) {
                uVar15 = 0;
                do {
                  if (((uVar10 == uVar15) ||
                      (uVar7 = strtol(pcVar4,(char **)&local_70,iVar18), uVar8 < uVar7)) ||
                     (*local_70 != '\0')) goto LAB_0078acf0;
                  local_88[uVar15] = (ushort)uVar7;
                  uVar15 = uVar15 + 1;
                  pcVar4 = (char *)FUN_007c42b8(0,uVar11,local_d0,1);
                } while (pcVar4 != (char *)0x0);
                if (uVar10 == (uint)uVar15) goto LAB_0078acb0;
              }
            }
          }
        }
      }
    }
  }
  else {
    local_8a = '\0';
    pcVar5 = strchr(pcVar4,0x3a);
    if (pcVar5 == (char *)0x0) {
      uVar8 = FUN_0078b2d0(acStack_c2 + 2,pcVar4,0,1);
      goto joined_r0x0078a8b4;
    }
    local_89 = '\x01';
    uVar15 = (long)pcVar5 - (long)pcVar4;
    pcVar13 = acStack_c2 + 2;
    uVar8 = uVar15;
    if (0x2e < uVar15) {
      uVar8 = 0x2f;
    }
    if (uVar8 != 0) {
      uVar7 = 0;
      do {
        uVar19 = uVar7;
        if (pcVar4[uVar19] == '\0') {
          acStack_c2[uVar19 + 2] = '\0';
          uVar8 = uVar19;
          goto joined_r0x0078a8d0;
        }
        pcVar13[uVar19] = pcVar4[uVar19];
        uVar7 = uVar19 + 1;
      } while (uVar8 != uVar19 + 1);
      pcVar13 = acStack_c2 + uVar19 + 3;
    }
    *pcVar13 = '\0';
joined_r0x0078a8d0:
    if (uVar8 == uVar15) {
      cVar17 = pcVar5[1];
      if (cVar17 == '\0') {
        bVar3 = false;
        sVar20 = 0;
        pcVar4 = local_90;
      }
      else {
        cVar2 = pcVar5[2];
        local_90[0] = cVar17;
        if (cVar2 == '\0') {
          pcVar4 = local_90 + 1;
          bVar3 = true;
          sVar20 = 1;
        }
        else {
          cVar17 = pcVar5[3];
          local_90[1] = cVar2;
          if (cVar17 == '\0') {
            pcVar4 = local_90 + 2;
            bVar3 = true;
            sVar20 = 2;
          }
          else {
            cVar2 = pcVar5[4];
            local_90[2] = cVar17;
            if (cVar2 == '\0') {
              pcVar4 = local_90 + 3;
              bVar3 = true;
              sVar20 = 3;
            }
            else {
              local_90[3] = cVar2;
              if (pcVar5[5] == '\0') {
                pcVar4 = local_90 + 4;
                bVar3 = true;
                sVar20 = 4;
              }
              else {
                pcVar4 = local_90 + 5;
                bVar3 = true;
                sVar20 = 5;
                local_90[4] = pcVar5[5];
              }
            }
          }
        }
      }
      *pcVar4 = '\0';
      sVar6 = strlen(pcVar5 + 1);
      if ((!bVar3) || (sVar20 != sVar6)) goto LAB_0078acf0;
      goto LAB_0078a990;
    }
  }
LAB_0078acf0:
  local_70 = (char *)CONCAT44(local_70._4_4_,0x10407);
LAB_0078ad04:
  local_d0[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_70 | 4),(Result *)local_d0);
  FUN_00cbd7c0(local_d0,&local_70);
  if (local_d0[0] == 0) {
    if (local_8a == '\0') {
      local_70 = (char *)CONCAT44(local_70._4_4_,
                                  (uint)local_88[1] * 0x10000 + (uint)local_88[0] * 0x1000000 +
                                  (uint)local_88[2] * 0x100 + (uint)local_88[3]);
      memset((void *)(param_2 + 8),0,0x10);
      memcpy((void *)(param_2 + 8),&local_70,4);
    }
    else {
      local_70 = (char *)CONCAT26(local_88[3] >> 8 | local_88[3] << 8,
                                  CONCAT24(local_88[2] >> 8 | local_88[2] << 8,
                                           CONCAT22(local_88[1] >> 8 | local_88[1] << 8,
                                                    local_88[0] >> 8 | local_88[0] << 8)));
      local_68 = CONCAT26(local_7a >> 8 | local_7a << 8,
                          CONCAT24(local_7c >> 8 | local_7c << 8,
                                   CONCAT22(local_7e >> 8 | local_7e << 8,
                                            local_80 >> 8 | local_80 << 8)));
      memset((void *)(param_2 + 8),0,0x10);
      memcpy((void *)(param_2 + 8),&local_70,0x10);
    }
    if (local_89 != '\0') {
      *(undefined2 *)(param_2 + 0x18) = local_78;
    }
    local_70 = (char *)((ulong)local_70 & 0xffffffff00000000);
    local_58[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_70 | 4),(Result *)local_58);
    piVar9 = (int *)&local_70;
  }
  FUN_00cbd7c0(param_1,piVar9);
  return;
}


