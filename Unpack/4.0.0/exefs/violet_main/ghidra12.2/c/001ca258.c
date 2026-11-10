/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ca258; name: FUN_001ca258
 */


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_001ca258(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  size_t sVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined4 local_338;
  uint local_334;
  int local_330;
  undefined4 local_32c;
  uint local_150;
  undefined8 auStack_140 [11];
  undefined1 auStack_e8 [10];
  char acStack_de [126];
  
  lVar21 = *param_1;
  *param_2 = 0;
  if ((*(long *)(lVar21 + 0x1f8) == 0) && (*(long *)(lVar21 + 0x420) == 0)) {
    FUN_001db9c8(lVar21,"Could not DOH-resolve: %s",param_1[0xa2]);
    uVar12 = 5;
    if ((*(byte *)((long)param_1 + 0x3fc) & 0x10) == 0) {
      uVar12 = 6;
    }
    return uVar12;
  }
  if (*(int *)(lVar21 + 0x648) != 0) {
    return 0;
  }
  FUN_001cec9c(*(undefined8 *)(lVar21 + 0xd8));
  FUN_001e4720(*(undefined8 *)(lVar21 + 0x1f8));
  FUN_001cec9c(*(undefined8 *)(lVar21 + 0xd8),*(undefined8 *)(lVar21 + 0x420));
  FUN_001e4720(*(undefined8 *)(lVar21 + 0x420));
  memset(&local_338,0,0x250);
  local_338 = 0x7fffffff;
  uVar5 = FUN_001ca778(*(undefined8 *)(lVar21 + 0x410),*(undefined8 *)(lVar21 + 0x418),
                       *(undefined4 *)(lVar21 + 0x200),&local_338);
  FUN_001ec308(*(undefined8 *)(lVar21 + 0x410));
  if (uVar5 != 0) {
    if (uVar5 < 0xd) {
      pcVar11 = (&PTR_DAT_04484450)[uVar5];
    }
    else {
      pcVar11 = "bad error code";
    }
    puVar1 = &DAT_03c5404d;
    if (*(int *)(lVar21 + 0x200) != 1) {
      puVar1 = &DAT_03c07fcc;
    }
    FUN_001db818(lVar21,"DOH: %s type %s for %s\n",pcVar11,puVar1,*(undefined8 *)(lVar21 + 0x650));
  }
  uVar6 = FUN_001ca778(*(undefined8 *)(lVar21 + 0x638),*(undefined8 *)(lVar21 + 0x640),
                       *(undefined4 *)(lVar21 + 0x428),&local_338);
  FUN_001ec308(*(undefined8 *)(lVar21 + 0x638));
  if (uVar6 == 0) {
LAB_001ca420:
    FUN_001db818(lVar21,"DOH Host name: %s\n",*(undefined8 *)(lVar21 + 0x650));
    FUN_001db818(lVar21,"TTL: %u seconds\n",local_338);
    if (0 < (int)local_334) {
      uVar14 = 0;
      puVar13 = &local_338;
      do {
        if ((&local_330)[uVar14 * 5] == 0x1c) {
          FUN_001ce394(auStack_e8,0x80,"DOH AAAA: ");
          uVar15 = 0;
          lVar16 = 0x76;
          pcVar11 = acStack_de;
          do {
            puVar2 = &DAT_03c886bc;
            if (uVar15 != 0) {
              puVar2 = &DAT_03c9c9c5;
            }
            FUN_001ce394(pcVar11,lVar16,"%s%02x%02x",puVar2,
                         *(undefined1 *)((long)puVar13 + uVar15 + 0xc),
                         *(undefined1 *)((long)puVar13 + uVar15 + 0xd));
            sVar7 = strlen(pcVar11);
            lVar16 = lVar16 - sVar7;
            pcVar11 = pcVar11 + sVar7;
            bVar3 = uVar15 < 0xe;
            uVar15 = uVar15 + 2;
          } while (bVar3);
          FUN_001db818(lVar21,&DAT_03c9c9c7,auStack_e8);
        }
        else if ((&local_330)[uVar14 * 5] == 1) {
          lVar16 = uVar14 * 0x14;
          FUN_001db818(lVar21,"DOH A: %u.%u.%u.%u\n",
                       *(undefined1 *)((long)&local_32c + uVar14 * 0x14),
                       *(undefined1 *)((long)&local_32c + lVar16 + 1U),
                       *(undefined1 *)((long)&local_32c + lVar16 + 2U),
                       *(undefined1 *)((long)&local_32c + lVar16 + 3U));
        }
        uVar14 = uVar14 + 1;
        puVar13 = puVar13 + 5;
      } while (uVar14 < local_334);
    }
    uVar14 = (ulong)local_150;
    if (0 < (int)local_150) {
      uVar15 = 0;
      puVar17 = auStack_140;
      do {
        FUN_001db818(lVar21,"CNAME: %s\n",*puVar17);
        uVar15 = uVar15 + 1;
        puVar17 = puVar17 + 3;
      } while (uVar15 < uVar14);
    }
    if (0 < (int)local_334) {
      uVar19 = *(undefined8 *)(lVar21 + 0x650);
      uVar12 = *(undefined4 *)(lVar21 + 0x658);
      lVar16 = 0;
      puVar13 = &local_32c;
      lVar18 = 0;
      lVar20 = 0;
      do {
        lVar9 = lVar18;
        lVar8 = lVar20;
        if (puVar13[-1] != 0x1c) {
          lVar8 = FUN_001ec338(1,0x30);
          if (lVar8 != 0) {
            lVar9 = FUN_001ec328(uVar19);
            *(long *)(lVar8 + 0x18) = lVar9;
            if (lVar9 != 0) {
              lVar10 = FUN_001ec338(1,0x10);
              *(long *)(lVar8 + 0x20) = lVar10;
              if (lVar10 != 0) {
                lVar9 = lVar8;
                if (lVar18 != 0) {
                  lVar9 = lVar18;
                }
                if (lVar20 != 0) {
                  *(long *)(lVar20 + 0x28) = lVar8;
                  lVar10 = *(long *)(lVar8 + 0x20);
                }
                *(undefined8 *)(lVar8 + 4) = 0x100000002;
                *(undefined4 *)(lVar8 + 0x10) = 0x10;
                *(undefined4 *)(lVar10 + 4) = *puVar13;
                *(undefined1 *)(lVar10 + 1) = 2;
                uVar4 = nnsocketInetHtons(uVar12);
                *(undefined2 *)(lVar10 + 2) = uVar4;
                goto LAB_001ca658;
              }
              FUN_001ec308(*(undefined8 *)(lVar8 + 0x18));
            }
            FUN_001ec308(lVar8);
          }
          FUN_001c7e00(lVar18);
          goto LAB_001ca710;
        }
LAB_001ca658:
        lVar16 = lVar16 + 1;
        puVar13 = puVar13 + 5;
        lVar18 = lVar9;
        lVar20 = lVar8;
      } while (lVar16 < (int)local_334);
      if (lVar9 != 0) {
        if (*(long *)(lVar21 + 0xe8) != 0) {
          FUN_001dc298(lVar21,3,2);
        }
        lVar16 = FUN_001c9228(lVar21,lVar9,*(undefined8 *)(lVar21 + 0x650),
                              *(undefined4 *)(lVar21 + 0x658));
        if (*(long *)(lVar21 + 0xe8) != 0) {
          FUN_001dc2d8(lVar21,3);
        }
        if (0 < (int)local_150) {
          uVar14 = 0;
          puVar17 = auStack_140;
          do {
            FUN_001ec308(*puVar17);
            uVar14 = uVar14 + 1;
            puVar17 = puVar17 + 3;
          } while (uVar14 < local_150);
        }
        if (lVar16 != 0) {
          param_1[0xa4] = lVar16;
          *param_2 = lVar16;
          return 0;
        }
        FUN_001c7e00(lVar9);
        goto LAB_001ca3ec;
      }
    }
LAB_001ca710:
    if ((int)local_150 < 1) {
      uVar12 = 0x1b;
    }
    else {
      uVar14 = 0;
      uVar12 = 0x1b;
      puVar17 = auStack_140;
      do {
        FUN_001ec308(*puVar17);
        uVar14 = uVar14 + 1;
        puVar17 = puVar17 + 3;
      } while (uVar14 < local_150);
    }
  }
  else {
    if (uVar6 < 0xd) {
      pcVar11 = (&PTR_DAT_04484450)[uVar6];
    }
    else {
      pcVar11 = "bad error code";
    }
    puVar1 = &DAT_03c5404d;
    if (*(int *)(lVar21 + 0x428) != 1) {
      puVar1 = &DAT_03c07fcc;
    }
    FUN_001db818(lVar21,"DOH: %s type %s for %s\n",pcVar11,puVar1,*(undefined8 *)(lVar21 + 0x650));
    if (uVar5 == 0) goto LAB_001ca420;
LAB_001ca3ec:
    if (0 < (int)local_150) {
      uVar14 = 0;
      puVar17 = auStack_140;
      do {
        FUN_001ec308(*puVar17);
        uVar14 = uVar14 + 1;
        puVar17 = puVar17 + 3;
      } while (uVar14 < local_150);
    }
    uVar12 = 6;
  }
  return uVar12;
}


