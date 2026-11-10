/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00391560; name: FUN_00391560
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_00391560(undefined8 param_1,code *param_2,byte *param_3,long param_4,long param_5,
                 ulong param_6)

{
  byte *pbVar1;
  undefined8 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  char *pcVar13;
  void *pvVar14;
  byte *pbVar15;
  undefined8 local_4a0;
  code *pcStack_498;
  long local_490;
  undefined1 *local_488;
  undefined1 auStack_480 [1024];
  uint local_80;
  undefined8 local_7c;
  ushort local_74;
  byte local_72;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  puVar5 = PTR_DAT_047cd010;
  local_490 = 0;
  local_4a0 = param_1;
  pcStack_498 = param_2;
  local_488 = auStack_480;
  if (param_4 == -1) {
    pcVar13 = *(char **)(param_3 + 0x10);
    pcVar3 = *(char **)(param_3 + 0x18);
    if (pcVar13 != pcVar3) {
      pvVar14 = *(void **)(param_3 + 8);
      puVar12 = (undefined1 *)0x0;
      pvVar7 = pvVar14;
      do {
        pvVar7 = (void *)((long)pvVar7 + (long)puVar12);
        puVar12 = (undefined1 *)((long)pvVar14 + (*(long *)(pcVar13 + 8) - (long)pvVar7));
        if (*pcVar13 == '\0') {
          if (puVar12 != (undefined1 *)0x0) {
            local_490 = local_490 + (long)puVar12;
            if (puVar12 < auStack_480 + (0x400 - (long)local_488)) {
              memcpy(local_488,pvVar7,(size_t)puVar12);
              local_488 = local_488 + (long)puVar12;
            }
            else {
              (*pcStack_498)(local_4a0,auStack_480,(long)local_488 - (long)auStack_480);
              local_488 = auStack_480;
              (*pcStack_498)(local_4a0,pvVar7,puVar12);
            }
          }
        }
        else {
          iVar4 = *(int *)(pcVar13 + 0x10);
          if (param_6 <= (long)iVar4 - 1U) goto LAB_00391a38;
          uVar11 = (ulong)(byte)pcVar13[0x1c];
          if ((pcVar13[0x1c] & 1U) == 0) {
            local_80 = *(uint *)(pcVar13 + 0x14);
            if ((int)local_80 < -1) {
                    /* try { // try from 0039190c to 003919ff has its CatchHandler @ 00391af0 */
              if ((param_6 < (ulong)(long)(int)~local_80) ||
                 (puVar2 = (undefined8 *)(param_5 + (long)(int)(-2 - local_80) * 0x10),
                 uVar11 = (*(code *)puVar2[1])(*puVar2,0x14,0,&local_80), (uVar11 & 1) == 0))
              goto LAB_00391a38;
              if (-1 < (int)local_80) goto LAB_00391928;
              uVar10 = 0x80000001;
              if (local_80 != 0x80000000) {
                uVar10 = local_80;
              }
              local_80 = -uVar10;
              bVar6 = true;
              local_64 = *(uint *)(pcVar13 + 0x18);
            }
            else {
LAB_00391928:
              bVar6 = false;
              local_64 = *(uint *)(pcVar13 + 0x18);
            }
            if (((int)local_64 < -1) &&
               ((param_6 < (ulong)(long)(int)~local_64 ||
                (puVar2 = (undefined8 *)(param_5 + (long)(int)(-2 - local_64) * 0x10),
                uVar11 = (*(code *)puVar2[1])(*puVar2,0x14,0,&local_64), (uVar11 & 1) == 0))))
            goto LAB_00391a38;
            uVar9 = (ulong)local_80;
            uVar10 = (byte)pcVar13[0x1c] | 2;
            if (!bVar6) {
              uVar10 = (uint)(byte)pcVar13[0x1c];
            }
            uVar11 = (ulong)uVar10;
            uVar10 = local_64;
          }
          else {
            uVar9 = 0xffffffff;
            uVar10 = 0xffffffff;
          }
          puVar2 = (undefined8 *)(param_5 + ((long)iVar4 - 1U) * 0x10);
          uVar11 = (*(code *)puVar2[1])
                             (*puVar2,uVar11 << 8 | uVar9 << 0x20 | (ulong)(byte)pcVar13[0x1e],
                              uVar10,&local_4a0);
          if ((uVar11 & 1) == 0) goto LAB_00391a38;
        }
        pcVar13 = pcVar13 + 0x20;
      } while (pcVar3 != pcVar13);
    }
    bVar6 = *param_3 == 0;
  }
  else {
    local_6c = 0;
    if (param_4 != 0) {
      pbVar1 = param_3 + param_4;
      do {
        pbVar15 = pbVar1 + -(long)param_3;
        pvVar7 = memchr(param_3,0x25,(size_t)pbVar15);
        if (pvVar7 == (void *)0x0) {
          if (pbVar15 != (byte *)0x0) {
            local_490 = local_490 + (long)pbVar15;
            if (pbVar15 < auStack_480 + (0x400 - (long)local_488)) {
              memcpy(local_488,param_3,(size_t)pbVar15);
              local_488 = local_488 + (long)pbVar15;
            }
            else {
                    /* try { // try from 00391a90 to 00391aab has its CatchHandler @ 00391ae8 */
              (*pcStack_498)(local_4a0,auStack_480,(long)local_488 - (long)auStack_480);
              local_488 = auStack_480;
              (*pcStack_498)(local_4a0,param_3,pbVar15);
            }
          }
          break;
        }
        puVar12 = (undefined1 *)((long)pvVar7 - (long)param_3);
        if (puVar12 != (undefined1 *)0x0) {
          local_490 = local_490 + (long)puVar12;
          if (puVar12 < auStack_480 + (0x400 - (long)local_488)) {
            memcpy(local_488,param_3,(size_t)puVar12);
            local_488 = local_488 + (long)puVar12;
          }
          else {
                    /* try { // try from 00391624 to 0039182b has its CatchHandler @ 00391af4 */
            (*pcStack_498)(local_4a0,auStack_480,(long)local_488 - (long)auStack_480);
            local_488 = auStack_480;
            (*pcStack_498)(local_4a0,param_3,puVar12);
          }
        }
        pbVar15 = (byte *)((long)pvVar7 + 1);
        if (pbVar1 <= pbVar15) goto LAB_00391a38;
        if ((char)puVar5[*pbVar15] < '\0') {
          if (*pbVar15 == 0x25) {
            local_490 = local_490 + 1;
            if (auStack_480 + (0x400 - (long)local_488) < (undefined1 *)0x2) {
              (*pcStack_498)(local_4a0,auStack_480,(long)local_488 - (long)auStack_480);
              local_488 = auStack_480;
              (*pcStack_498)(local_4a0,&DAT_03ca40f5,1);
            }
            else {
              *local_488 = 0x25;
              local_488 = local_488 + 1;
            }
            goto LAB_00391698;
          }
          local_7c = 0xffffffffffffffff;
          local_72 = 0x14;
          local_74 = 0x901;
          param_3 = (byte *)FUN_00394140(pbVar15,pbVar1,&local_80,&local_6c);
          if ((param_3 == (byte *)0x0) || (lVar8 = (long)(int)local_80, param_6 <= lVar8 - 1U))
          goto LAB_00391a38;
          uVar11 = (ulong)(byte)local_74;
          if ((local_74 & 1) == 0) {
            local_64 = (uint)local_7c;
            if ((int)(uint)local_7c < -1) {
              if ((param_6 < (ulong)(long)(int)~(uint)local_7c) ||
                 (puVar2 = (undefined8 *)(param_5 + (long)(int)(-2 - (uint)local_7c) * 0x10),
                 uVar11 = (*(code *)puVar2[1])(*puVar2,0x14,0,&local_64), (uVar11 & 1) == 0))
              goto LAB_00391a38;
              if (-1 < (int)local_64) goto LAB_00391770;
              uVar10 = 0x80000001;
              if (local_64 != 0x80000000) {
                uVar10 = local_64;
              }
              local_64 = -uVar10;
              bVar6 = true;
              local_68 = local_7c._4_4_;
            }
            else {
LAB_00391770:
              bVar6 = false;
              local_68 = local_7c._4_4_;
            }
            if (((int)local_68 < -1) &&
               ((param_6 < (ulong)(long)(int)~local_68 ||
                (puVar2 = (undefined8 *)(param_5 + (long)(int)(-2 - local_68) * 0x10),
                uVar11 = (*(code *)puVar2[1])(*puVar2,0x14,0,&local_68), (uVar11 & 1) == 0))))
            goto LAB_00391a38;
            uVar9 = (ulong)local_64;
            uVar10 = (byte)local_74 | 2;
            if (!bVar6) {
              uVar10 = (uint)(byte)local_74;
            }
            uVar11 = (ulong)uVar10;
            uVar10 = local_68;
          }
          else {
            uVar10 = 0xffffffff;
            uVar9 = 0xffffffff;
          }
          puVar2 = (undefined8 *)(param_5 + (lVar8 - 1U) * 0x10);
          uVar11 = (*(code *)puVar2[1])
                             (*puVar2,uVar11 << 8 | uVar9 << 0x20 | (ulong)local_72,uVar10,
                              &local_4a0);
          if ((uVar11 & 1) == 0) goto LAB_00391a38;
        }
        else {
          uVar11 = (ulong)local_6c;
          if ((((int)local_6c < 0) || (local_6c = local_6c + 1, param_6 <= uVar11)) ||
             (puVar2 = (undefined8 *)(param_5 + uVar11 * 0x10),
             uVar11 = (*(code *)puVar2[1])
                                (*puVar2,(ulong)(byte)puVar5[*pbVar15] | 0xffffffff00000100,
                                 0xffffffff,&local_4a0), (uVar11 & 1) == 0)) goto LAB_00391a38;
LAB_00391698:
          param_3 = (byte *)((long)pvVar7 + 2);
        }
      } while (param_3 != pbVar1);
    }
    bVar6 = true;
  }
LAB_00391ab0:
                    /* try { // try from 00391abc to 00391ac3 has its CatchHandler @ 00391aec */
  (*pcStack_498)(local_4a0,auStack_480,(long)local_488 - (long)auStack_480);
  return bVar6;
LAB_00391a38:
  bVar6 = false;
  goto LAB_00391ab0;
}


