/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f5a14; name: FUN_001f5a14
 */


int FUN_001f5a14(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  size_t sVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  char cVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  size_t __n;
  size_t *psVar18;
  long lVar19;
  uint uVar20;
  ulong local_78;
  undefined8 local_70;
  uint local_68;
  undefined1 local_64;
  
  if (*(char *)((long)param_1 + 0x3c) != '\0') {
    return -0x20b;
  }
  if ((char)param_1[0x8a] == '\0') {
LAB_001f5aac:
    if (param_4 != 0) {
      lVar19 = 0;
      do {
        puVar14 = (undefined8 *)(param_3 + lVar19 * 0x28);
        __n = puVar14[2];
        pbVar4 = (byte *)*puVar14;
        lVar15 = param_1[4];
        uVar7 = FUN_001f6c08(pbVar4,__n);
        uVar5 = uVar7 & 0xffffffff;
        uVar3 = (uint)uVar7;
        if (uVar3 == 0xffffffff) {
          uVar20 = 0x811c9dc5;
          if (__n != 0) {
            uVar20 = 0x811c9dc5;
            pbVar8 = pbVar4;
            sVar6 = __n;
            do {
              uVar20 = (uVar20 ^ *pbVar8) * 0x1000193;
              sVar6 = sVar6 - 1;
              pbVar8 = pbVar8 + 1;
            } while (sVar6 != 0);
            goto LAB_001f5b6c;
          }
LAB_001f5b90:
          if ((*(byte *)(param_3 + lVar19 * 0x28 + 0x20) & 1) != 0) goto LAB_001f5bd4;
          if ((uVar3 < 0x37) && ((1L << (uVar7 & 0x3f) & 0x40218208100008U) != 0)) {
            cVar10 = '\x01';
          }
          else {
            cVar10 = (ulong)(param_1[6] * 3) >> 2 <
                     __n + *(long *)(param_3 + lVar19 * 0x28 + 0x18) + 0x20;
          }
        }
        else {
          if ((int)uVar3 < 0x3d) {
            uVar20 = *(uint *)(&DAT_04485194 + (long)(int)uVar3 * 0x80);
          }
          else {
            uVar20 = 0;
          }
LAB_001f5b6c:
          if ((uVar3 != 0x16) &&
             ((uVar3 != 0x1f || (0x13 < *(ulong *)(param_3 + lVar19 * 0x28 + 0x18)))))
          goto LAB_001f5b90;
LAB_001f5bd4:
          cVar10 = '\x02';
        }
        plVar17 = (long *)param_1[(ulong)(uVar20 & 0x7f) + 8];
        if (plVar17 == (long *)0x0) {
          uVar7 = 0xffffffffffffffff;
          if (0x3c < uVar3) goto LAB_001f5d80;
LAB_001f5cc0:
          if (cVar10 != '\x02') {
            lVar9 = param_3 + lVar19 * 0x28;
            psVar18 = (size_t *)(&DAT_04485158 + uVar5 * 0x80);
            uVar7 = uVar5;
            do {
              if ((uint)psVar18[7] != uVar3) break;
              if ((*psVar18 == *(size_t *)(lVar9 + 0x18)) &&
                 (iVar2 = memcmp((void *)psVar18[-1],*(void **)(lVar9 + 8),*psVar18), iVar2 == 0))
              goto LAB_001f5e98;
              uVar7 = uVar7 + 1;
              psVar18 = psVar18 + 0x10;
            } while ((int)uVar7 != 0x3d);
            uVar7 = uVar5;
LAB_001f5d80:
            if (cVar10 == '\0') {
              if (uVar7 == 0xffffffffffffffff) {
                iVar2 = FUN_001f8284(&local_78,pbVar4,__n,lVar15);
                if (iVar2 != 0) goto LAB_001f5aa0;
              }
              else {
                if (uVar7 < 0x3d) {
                  local_78 = uVar7 * 0x80 + 0x4485118;
                }
                else {
                  local_78 = **(ulong **)(*param_1 + ((uVar7 + param_1[2]) - 0x3d & param_1[1]) * 8)
                  ;
                }
                FUN_001f82e8();
              }
              lVar9 = param_3 + lVar19 * 0x28;
              iVar2 = FUN_001f8284(&local_70,*(undefined8 *)(lVar9 + 8),
                                   *(undefined8 *)(lVar9 + 0x18),lVar15);
              if (iVar2 != 0) {
                FUN_001f8300(local_78);
                goto LAB_001f5aa0;
              }
              local_64 = 0;
              local_68 = uVar3;
              iVar2 = FUN_001f7a10(param_1,&local_78,param_1 + 8,uVar20);
              FUN_001f8300(local_70);
              FUN_001f8300(local_78);
              if (iVar2 != 0) {
                iVar2 = -0x20b;
                goto LAB_001f5aa0;
              }
            }
            uVar5 = uVar7;
            if (uVar7 == 0xffffffffffffffff) {
              iVar2 = FUN_001f6aac(param_2,puVar14,cVar10);
              goto LAB_001f5e78;
            }
          }
          iVar2 = FUN_001f6998(param_2,uVar5,puVar14,cVar10);
        }
        else {
          lVar9 = param_3 + lVar19 * 0x28;
          plVar16 = (long *)0x0;
          do {
            if ((*(uint *)(plVar17 + 2) == uVar3) &&
               ((uVar3 != 0xffffffff ||
                (((*(uint *)((long)plVar17 + 0x4c) == uVar20 &&
                  (*(size_t *)(*plVar17 + 0x18) == __n)) &&
                 (iVar2 = memcmp(*(void **)(*plVar17 + 0x10),pbVar4,__n), iVar2 == 0)))))) {
              bVar1 = plVar16 == (long *)0x0;
              if (bVar1) {
                plVar16 = plVar17;
              }
              if (bVar1 && cVar10 == '\x02') {
                plVar16 = plVar17;
                break;
              }
              sVar6 = *(size_t *)(plVar17[1] + 0x18);
              if ((sVar6 == *(size_t *)(lVar9 + 0x18)) &&
                 (iVar2 = memcmp(*(void **)(plVar17[1] + 0x10),*(void **)(lVar9 + 8),sVar6),
                 iVar2 == 0)) {
                bVar1 = false;
                plVar16 = plVar17;
                goto LAB_001f5d64;
              }
            }
            plVar17 = (long *)plVar17[8];
          } while (plVar17 != (long *)0x0);
          if (uVar3 < 0x3d) goto LAB_001f5cc0;
          if (plVar16 == (long *)0x0) {
            uVar7 = 0xffffffffffffffff;
            goto LAB_001f5d80;
          }
          bVar1 = true;
LAB_001f5d64:
          uVar7 = (ulong)((int)param_1[7] + ~*(uint *)(plVar16 + 9) + 0x3d);
          if (bVar1) goto LAB_001f5d80;
LAB_001f5e98:
          if (uVar7 + 1 < 0x7f) {
            local_78 = CONCAT71(local_78._1_7_,(char)(uVar7 + 1)) | 0x80;
            lVar15 = 1;
LAB_001f5f3c:
            iVar2 = FUN_001f4310(param_2,&local_78,lVar15);
          }
          else {
            uVar7 = uVar7 - 0x7e;
            if (uVar7 < 0x80) {
              lVar15 = 2;
              pbVar4 = (byte *)((ulong)&local_78 | 1);
LAB_001f5f38:
              local_78 = CONCAT71(local_78._1_7_,0xff);
              *pbVar4 = (byte)uVar7;
              goto LAB_001f5f3c;
            }
            uVar5 = 1;
            uVar12 = uVar7;
            do {
              uVar11 = uVar5;
              uVar13 = uVar12 >> 0xe;
              uVar12 = uVar12 >> 7;
              uVar5 = uVar11 + 1;
            } while (uVar13 != 0);
            iVar2 = -0x20b;
            if (uVar5 < 0x10) {
              lVar15 = uVar11 + 2;
              pbVar8 = (byte *)((ulong)&local_78 | 1);
              do {
                pbVar4 = pbVar8 + 1;
                *pbVar8 = (byte)uVar7 | 0x80;
                uVar5 = uVar7 >> 0xe;
                uVar7 = uVar7 >> 7;
                pbVar8 = pbVar4;
              } while (uVar5 != 0);
              goto LAB_001f5f38;
            }
          }
        }
LAB_001f5e78:
        if (iVar2 != 0) goto LAB_001f5aa0;
        lVar19 = lVar19 + 1;
      } while (lVar19 != param_4);
    }
    iVar2 = 0;
  }
  else {
    uVar5 = param_1[0x89];
    param_1[0x89] = 0xffffffff;
    uVar7 = param_1[6];
    *(undefined1 *)(param_1 + 0x8a) = 0;
    if (uVar5 < uVar7) {
      iVar2 = FUN_001f5fb8(param_2);
      if (iVar2 == 0) {
        uVar7 = param_1[6];
        goto LAB_001f5a8c;
      }
    }
    else {
LAB_001f5a8c:
      iVar2 = FUN_001f5fb8(param_2,uVar7);
      if (iVar2 == 0) goto LAB_001f5aac;
    }
LAB_001f5aa0:
    *(undefined1 *)((long)param_1 + 0x3c) = 1;
  }
  return iVar2;
}


