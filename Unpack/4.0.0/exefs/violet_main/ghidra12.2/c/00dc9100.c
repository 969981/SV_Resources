/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dc9100; name: FUN_00dc9100
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_00dc9100(long param_1,void *param_2,long *param_3,uint *param_4,long *param_5,int *param_6
                  )

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  void *pvVar15;
  void *pvVar16;
  undefined4 uVar17;
  uint *puVar18;
  long lVar19;
  ulong uVar20;
  void *pvVar21;
  long lVar22;
  size_t sVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  void *__src;
  uint *__src_00;
  size_t sVar27;
  int local_64;
  
  if (param_2 == (void *)0x0) {
    pvVar21 = (void *)0x0;
  }
  else {
    pvVar21 = (void *)((long)param_2 + *param_3);
  }
  puVar6 = (uint *)((long)param_4 + *param_5);
  plVar2 = (long *)(param_1 + 0x60);
  local_64 = 0;
  lVar3 = param_1 + 0x88;
  plVar4 = (long *)(param_1 + 0x48);
  *param_5 = 0;
  uVar11 = _UNK_03cabe38;
  uVar10 = _DAT_03cabe30;
  lVar5 = param_1 + 0xb8;
  *param_3 = 0;
  __src = param_2;
  uVar25 = 1;
  __src_00 = param_4;
  do {
    puVar18 = __src_00;
    uVar20 = uVar25;
    switch(*(undefined4 *)(param_1 + 0x24)) {
    case 0:
      uVar25 = (long)puVar6 - (long)__src_00;
      if (uVar25 < 0x13) {
        *plVar4 = 0;
        if (uVar25 == 0) {
          return 7;
        }
        lVar19 = 0;
        *(undefined8 *)(param_1 + 0x50) = 7;
        lVar22 = 7;
        *(undefined4 *)(param_1 + 0x24) = 1;
        goto LAB_00dc9404;
      }
      uVar25 = FUN_008207b0(param_1,__src_00);
      if (0xffffffffffffffec < uVar25) {
        return uVar25;
      }
      puVar18 = (uint *)((long)__src_00 + uVar25);
      break;
    case 1:
      lVar19 = *(long *)(param_1 + 0x48);
      lVar22 = *(long *)(param_1 + 0x50);
      uVar25 = (long)puVar6 - (long)__src_00;
LAB_00dc9404:
      sVar23 = lVar22 - lVar19;
      if (uVar25 <= (ulong)(lVar22 - lVar19)) {
        sVar23 = uVar25;
      }
      memcpy((void *)(param_1 + lVar19 + 0xe8),__src_00,sVar23);
      uVar25 = sVar23 + *(long *)(param_1 + 0x48);
      *(ulong *)(param_1 + 0x48) = uVar25;
      puVar18 = (uint *)((long)__src_00 + sVar23);
      lVar19 = *(ulong *)(param_1 + 0x50) - uVar25;
      if (uVar25 <= *(ulong *)(param_1 + 0x50) && lVar19 != 0) {
        uVar20 = lVar19 + 4;
        goto LAB_00dc9c48;
      }
      uVar25 = FUN_008207b0(param_1,(uint *)(param_1 + 0xe8));
      if (0xffffffffffffffec < uVar25) {
        return uVar25;
      }
      break;
    case 2:
      if (*(int *)(param_1 + 8) != 0) {
        FUN_00820b90(lVar3,0);
      }
      sVar23 = *(long *)(param_1 + 0x30) + (ulong)(*(int *)(param_1 + 4) == 0) * 0x20000;
      if (*(ulong *)(param_1 + 0x38) < sVar23) {
        *(undefined8 *)(param_1 + 0x38) = 0;
        free(*(void **)(param_1 + 0x40));
        pvVar16 = malloc(*(long *)(param_1 + 0x30) + 4);
        *(void **)(param_1 + 0x40) = pvVar16;
        if (pvVar16 == (void *)0x0) {
          return 0xfffffffffffffff7;
        }
        free(*(void **)(param_1 + 0x58));
        pvVar16 = malloc(sVar23);
        *(void **)(param_1 + 0x58) = pvVar16;
        if (pvVar16 == (void *)0x0) {
          return 0xfffffffffffffff7;
        }
        *(size_t *)(param_1 + 0x38) = sVar23;
      }
      else {
        pvVar16 = *(void **)(param_1 + 0x58);
      }
      *plVar4 = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(void **)(param_1 + 0x70) = pvVar16;
      *(long *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined4 *)(param_1 + 0x24) = 3;
    case 3:
      uVar26 = (long)puVar6 - (long)__src_00;
      if (uVar26 < 4) {
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x24) = 4;
LAB_00dc9498:
        sVar23 = 4 - *(long *)(param_1 + 0x48);
        if (uVar26 <= sVar23) {
          sVar23 = uVar26;
        }
        memcpy((void *)(*(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x48)),__src_00,sVar23);
        uVar26 = *(long *)(param_1 + 0x48) + sVar23;
        puVar18 = (uint *)((long)__src_00 + sVar23);
        *(ulong *)(param_1 + 0x48) = uVar26;
        if (uVar26 < 4) {
          uVar20 = 4 - uVar26;
          goto LAB_00dc9c48;
        }
        uVar13 = **(uint **)(param_1 + 0x40);
      }
      else {
        puVar18 = __src_00 + 1;
        uVar13 = *__src_00;
      }
      if (uVar13 == 0) {
        uVar17 = 10;
      }
      else {
        uVar26 = (ulong)uVar13 & 0x7fffffff;
        if (*(ulong *)(param_1 + 0x30) < uVar26) {
          return 0xfffffffffffffffe;
        }
        if (-1 < (int)uVar13) {
          lVar19 = (ulong)*(uint *)(param_1 + 0x1c) * 4 + uVar26;
          *(undefined4 *)(param_1 + 0x24) = 7;
          *(long *)(param_1 + 0x50) = lVar19;
          uVar20 = lVar19 + 4;
          if (__src != pvVar21 && puVar18 != puVar6) {
            uVar20 = uVar25;
          }
          bVar1 = __src != pvVar21 && puVar18 != puVar6;
          goto LAB_00dc91b8;
        }
        *(ulong *)(param_1 + 0x50) = uVar26;
        if (*(uint *)(param_1 + 0x1c) != 0) {
          FUN_00820b90(lVar5,0);
        }
        uVar17 = 5;
      }
LAB_00dc91b0:
      *(undefined4 *)(param_1 + 0x24) = uVar17;
      break;
    case 4:
      uVar26 = (long)puVar6 - (long)__src_00;
      goto LAB_00dc9498;
    case 5:
      if (__src == (void *)0x0) {
        sVar23 = 0;
      }
      else {
        uVar25 = (long)puVar6 - (long)__src_00;
        if ((ulong)((long)pvVar21 - (long)__src) <= (ulong)((long)puVar6 - (long)__src_00)) {
          uVar25 = (long)pvVar21 - (long)__src;
        }
        sVar23 = *(ulong *)(param_1 + 0x50);
        if (uVar25 <= *(ulong *)(param_1 + 0x50)) {
          sVar23 = uVar25;
        }
        memcpy(__src,__src_00,sVar23);
        if (*(int *)(param_1 + 0x1c) != 0) {
          FUN_00820bd0(lVar5,__src_00,sVar23);
        }
        if (*(int *)(param_1 + 8) != 0) {
          FUN_00820bd0(lVar3,__src_00,sVar23);
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          *(size_t *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - sVar23;
        }
        if (*(int *)(param_1 + 4) == 0) {
          sVar27 = *(ulong *)(param_1 + 0x68);
          if (sVar27 == 0) {
            *plVar2 = (long)__src;
          }
          else {
            pvVar15 = (void *)*plVar2;
            pvVar16 = (void *)((long)pvVar15 + sVar27);
            if (pvVar16 != __src) {
              uVar25 = (long)__src + (sVar23 - (long)param_2);
              if (uVar25 < 0x10000) {
                if (pvVar15 == *(void **)(param_1 + 0x58)) {
                  if (*(ulong *)(param_1 + 0x38) < sVar27 + sVar23) {
                    sVar27 = 0x10000 - sVar23;
                    memcpy(pvVar15,(void *)((long)pvVar16 - sVar27),sVar27);
                    pvVar15 = *(void **)(param_1 + 0x58);
                    *(size_t *)(param_1 + 0x68) = sVar27;
                  }
                  memcpy((void *)((long)pvVar15 + sVar27),__src,sVar23);
                  sVar27 = *(ulong *)(param_1 + 0x68);
                  goto LAB_00dc9a9c;
                }
                if (0x10000 - sVar23 <= sVar27) {
                  sVar27 = 0x10000 - sVar23;
                }
                memcpy(*(void **)(param_1 + 0x58),(void *)((long)pvVar16 - sVar27),sVar27);
                memcpy((void *)(*(long *)(param_1 + 0x58) + sVar27),__src,sVar23);
                *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x58);
                *(size_t *)(param_1 + 0x68) = sVar27 + sVar23;
              }
              else {
                *(void **)(param_1 + 0x60) = param_2;
                *(ulong *)(param_1 + 0x68) = uVar25;
              }
              goto LAB_00dc9aa4;
            }
          }
LAB_00dc9a9c:
          *(size_t *)(param_1 + 0x68) = sVar27 + sVar23;
        }
      }
LAB_00dc9aa4:
      puVar18 = (uint *)((long)__src_00 + sVar23);
      __src = (void *)((long)__src + sVar23);
      lVar19 = *(long *)(param_1 + 0x50) - sVar23;
      if (lVar19 == 0) {
        if (*(int *)(param_1 + 0x1c) == 0) goto LAB_00dc9acc;
        uVar17 = 6;
        *plVar4 = 0;
        goto LAB_00dc91b0;
      }
      *(long *)(param_1 + 0x50) = lVar19;
      uVar20 = lVar19 + (ulong)(*(int *)(param_1 + 0x1c) != 0) * 4 + 4;
      goto LAB_00dc9c48;
    case 6:
      lVar19 = *plVar4;
      uVar25 = (long)puVar6 - (long)__src_00;
      if (((long)uVar25 < 4) || (lVar19 != 0)) {
        sVar23 = 4U - lVar19;
        if (uVar25 <= 4U - lVar19) {
          sVar23 = uVar25;
        }
        memcpy((void *)(param_1 + lVar19 + 0xe8),__src_00,sVar23);
        puVar18 = (uint *)((long)__src_00 + sVar23);
        uVar25 = sVar23 + *(long *)(param_1 + 0x48);
        bVar1 = 3 < uVar25;
        *(ulong *)(param_1 + 0x48) = uVar25;
        __src_00 = (uint *)(param_1 + 0xe8);
        if (uVar25 < 4) goto LAB_00dc91b8;
      }
      else {
        puVar18 = __src_00 + 1;
        bVar1 = true;
      }
      uVar13 = *__src_00;
      uVar14 = FUN_00820d70(lVar5);
      if (uVar13 != uVar14) {
        return 0xfffffffffffffff9;
      }
      *(undefined4 *)(param_1 + 0x24) = 3;
      goto LAB_00dc91b8;
    case 7:
      uVar26 = *(ulong *)(param_1 + 0x50);
      if (uVar26 <= (ulong)((long)puVar6 - (long)__src_00)) {
        puVar18 = (uint *)((long)__src_00 + uVar26);
        iVar9 = *(int *)(param_1 + 0x1c);
        goto joined_r0x00dc93c0;
      }
      *(undefined8 *)(param_1 + 0x48) = 0;
      bVar1 = true;
      *(undefined4 *)(param_1 + 0x24) = 8;
      goto LAB_00dc91b8;
    case 8:
      sVar23 = *(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48);
      if ((ulong)((long)puVar6 - (long)__src_00) <= sVar23) {
        sVar23 = (long)puVar6 - (long)__src_00;
      }
      memcpy((void *)(*(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x48)),__src_00,sVar23);
      uVar26 = *(ulong *)(param_1 + 0x50);
      uVar25 = *(long *)(param_1 + 0x48) + sVar23;
      *(ulong *)(param_1 + 0x48) = uVar25;
      puVar18 = (uint *)((long)__src_00 + sVar23);
      if (uVar26 < uVar25 || uVar26 - uVar25 == 0) {
        __src_00 = *(uint **)(param_1 + 0x40);
        iVar9 = *(int *)(param_1 + 0x1c);
joined_r0x00dc93c0:
        if (iVar9 != 0) {
          lVar19 = uVar26 - 4;
          *(long *)(param_1 + 0x50) = lVar19;
          iVar9 = *(int *)((long)__src_00 + lVar19);
          iVar12 = FUN_008209a0(__src_00,lVar19,0);
          if (iVar9 != iVar12) {
            return 0xfffffffffffffff9;
          }
        }
        uVar25 = *(ulong *)(param_1 + 0x30);
        if (uVar25 <= (ulong)((long)pvVar21 - (long)__src)) {
          lVar22 = *(long *)(param_1 + 0x60);
          uVar26 = *(ulong *)(param_1 + 0x68);
          lVar19 = uVar26 + lVar22 + -0x10000;
          if (lVar22 == 0 || uVar26 < 0x40000001) {
            lVar19 = lVar22;
          }
          uVar17 = 0x10000;
          if (lVar22 == 0 || uVar26 < 0x40000001) {
            uVar17 = (undefined4)uVar26;
          }
          uVar13 = FUN_00820770(__src_00,__src,*(undefined4 *)(param_1 + 0x50),uVar25,lVar19,uVar17)
          ;
          if ((int)uVar13 < 0) {
            return 0xffffffffffffffff;
          }
          uVar25 = (ulong)uVar13;
          if (*(int *)(param_1 + 8) != 0) {
            FUN_00820bd0(lVar3,__src,uVar25);
          }
          if (*(long *)(param_1 + 0x10) != 0) {
            *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - uVar25;
          }
          if (*(int *)(param_1 + 4) == 0) {
            sVar23 = *(ulong *)(param_1 + 0x68);
            if (sVar23 == 0) {
              *plVar2 = (long)__src;
LAB_00dc99ac:
              uVar26 = sVar23 + uVar25;
            }
            else {
              pvVar15 = (void *)*plVar2;
              pvVar16 = (void *)((long)pvVar15 + sVar23);
              if (pvVar16 == __src) goto LAB_00dc99ac;
              uVar26 = (long)__src + (uVar25 - (long)param_2);
              if (uVar26 < 0x10000) {
                if (pvVar15 != *(void **)(param_1 + 0x58)) {
                  if (0x10000 - uVar25 <= sVar23) {
                    sVar23 = 0x10000 - uVar25;
                  }
                  memcpy(*(void **)(param_1 + 0x58),(void *)((long)pvVar16 - sVar23),sVar23);
                  memcpy((void *)(*(long *)(param_1 + 0x58) + sVar23),__src,uVar25);
                  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x58);
                  goto LAB_00dc99ac;
                }
                if (*(ulong *)(param_1 + 0x38) < sVar23 + uVar25) {
                  sVar23 = 0x10000 - uVar25;
                  memcpy(pvVar15,(void *)((long)pvVar16 - sVar23),sVar23);
                  pvVar15 = *(void **)(param_1 + 0x58);
                  *(size_t *)(param_1 + 0x68) = sVar23;
                }
                memcpy((void *)((long)pvVar15 + sVar23),__src,uVar25);
                uVar26 = *(long *)(param_1 + 0x68) + uVar25;
              }
              else {
                *plVar2 = (long)param_2;
              }
            }
            *(ulong *)(param_1 + 0x68) = uVar26;
          }
          __src = (void *)((long)__src + uVar25);
          goto LAB_00dc9acc;
        }
        if (*(int *)(param_1 + 4) == 0) {
          pvVar16 = *(void **)(param_1 + 0x60);
          uVar26 = *(ulong *)(param_1 + 0x68);
          if (pvVar16 == *(void **)(param_1 + 0x58)) {
            if (0x20000 < uVar26) {
              memcpy(pvVar16,(void *)((long)pvVar16 + (uVar26 - 0x10000)),0x10000);
              pvVar16 = *(void **)(param_1 + 0x58);
              *(undefined8 *)(param_1 + 0x68) = 0x10000;
              uVar25 = *(ulong *)(param_1 + 0x30);
              uVar26 = 0x10000;
            }
            lVar19 = (long)pvVar16 + uVar26;
          }
          else {
            uVar7 = uVar26;
            if (0xffff < uVar26) {
              uVar7 = 0x10000;
            }
            lVar19 = (long)*(void **)(param_1 + 0x58) + uVar7;
          }
          *(long *)(param_1 + 0x70) = lVar19;
        }
        else {
          uVar26 = *(ulong *)(param_1 + 0x68);
          lVar19 = *(long *)(param_1 + 0x70);
        }
        lVar24 = *(long *)(param_1 + 0x60);
        lVar22 = uVar26 + lVar24 + -0x10000;
        if (lVar24 == 0 || uVar26 < 0x40000001) {
          lVar22 = lVar24;
        }
        uVar17 = 0x10000;
        if (lVar24 == 0 || uVar26 < 0x40000001) {
          uVar17 = (undefined4)uVar26;
        }
        uVar13 = FUN_00820770(__src_00,lVar19,*(undefined4 *)(param_1 + 0x50),uVar25,lVar22,uVar17);
        if ((int)uVar13 < 0) {
          return 0xfffffffffffffff0;
        }
        uVar25 = (ulong)uVar13;
        if (*(int *)(param_1 + 8) != 0) {
          FUN_00820bd0(lVar3,*(undefined8 *)(param_1 + 0x70),uVar25);
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          *(ulong *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - uVar25;
        }
        *(ulong *)(param_1 + 0x78) = uVar25;
        *(undefined8 *)(param_1 + 0x80) = 0;
        *(undefined4 *)(param_1 + 0x24) = 9;
        goto switchD_00dc91d4_caseD_9;
      }
      uVar20 = (uVar26 - uVar25) + (ulong)(*(int *)(param_1 + 0x1c) != 0) * 4 + 4;
      goto LAB_00dc9c48;
    case 9:
switchD_00dc91d4_caseD_9:
      if (__src == (void *)0x0) {
        lVar19 = *(long *)(param_1 + 0x80);
      }
      else {
        sVar23 = *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x80);
        if ((ulong)((long)pvVar21 - (long)__src) <= sVar23) {
          sVar23 = (long)pvVar21 - (long)__src;
        }
        memcpy(__src,(void *)(*(long *)(param_1 + 0x70) + *(long *)(param_1 + 0x80)),sVar23);
        if (*(int *)(param_1 + 4) == 0) {
          lVar19 = *(long *)(param_1 + 0x68);
          if (lVar19 == 0) {
            *plVar2 = (long)__src;
LAB_00dc98e4:
            uVar25 = lVar19 + sVar23;
          }
          else {
            pvVar16 = (void *)(*plVar2 + lVar19);
            if (pvVar16 == __src) goto LAB_00dc98e4;
            uVar25 = (long)__src + (sVar23 - (long)param_2);
            if (uVar25 < 0x10000) {
              if (*plVar2 == *(long *)(param_1 + 0x58)) goto LAB_00dc98e4;
              uVar26 = *(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x58);
              uVar25 = 0;
              if (*(ulong *)(param_1 + 0x78) < 0x10001) {
                uVar25 = 0x10000 - *(ulong *)(param_1 + 0x78);
              }
              sVar27 = uVar26;
              if (uVar25 <= uVar26) {
                sVar27 = uVar25;
              }
              memcpy((void *)(*(long *)(param_1 + 0x70) - sVar27),
                     (void *)((long)pvVar16 + (-sVar27 - *(long *)(param_1 + 0x80))),sVar27);
              *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x58);
              uVar25 = uVar26 + sVar23 + *(long *)(param_1 + 0x80);
            }
            else {
              *plVar2 = (long)param_2;
            }
          }
          *(ulong *)(param_1 + 0x68) = uVar25;
        }
        lVar19 = *(long *)(param_1 + 0x80) + sVar23;
        __src = (void *)((long)__src + sVar23);
        *(long *)(param_1 + 0x80) = lVar19;
      }
      if (lVar19 == *(long *)(param_1 + 0x78)) {
LAB_00dc9acc:
        uVar17 = 3;
        goto LAB_00dc91b0;
      }
      uVar20 = 4;
      goto LAB_00dc9c48;
    case 10:
      if (*(long *)(param_1 + 0x28) != 0) {
        return 0xfffffffffffffff2;
      }
      if (*(int *)(param_1 + 8) == 0) {
        uVar20 = 0;
        goto LAB_00dc9c3c;
      }
      uVar25 = (long)puVar6 - (long)__src_00;
      if ((long)uVar25 < 4) {
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0xb;
        goto LAB_00dc9ae8;
      }
      puVar18 = __src_00 + 1;
      goto LAB_00dc9b5c;
    case 0xb:
      uVar25 = (long)puVar6 - (long)__src_00;
LAB_00dc9ae8:
      sVar23 = 4 - *(long *)(param_1 + 0x48);
      if (uVar25 <= sVar23) {
        sVar23 = uVar25;
      }
      memcpy((void *)(*(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x48)),__src_00,sVar23);
      uVar20 = *(long *)(param_1 + 0x48) + sVar23;
      puVar18 = (uint *)((long)__src_00 + sVar23);
      *(ulong *)(param_1 + 0x48) = uVar20;
      if (uVar20 < 4) {
        uVar20 = 4 - uVar20;
      }
      else {
        __src_00 = *(uint **)(param_1 + 0x40);
LAB_00dc9b5c:
        uVar13 = *__src_00;
        uVar14 = FUN_00820d70(lVar3);
        if (uVar13 != uVar14) {
          return 0xffffffffffffffee;
        }
        uVar20 = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
LAB_00dc9c40:
        *plVar2 = 0;
        *(undefined8 *)(param_1 + 0x68) = 0;
      }
      goto LAB_00dc9c48;
    case 0xc:
      uVar20 = (long)puVar6 - (long)__src_00;
      if ((long)uVar20 < 4) {
        *(undefined4 *)(param_1 + 0x24) = 0xd;
        *(undefined8 *)(param_1 + 0x50) = uVar11;
        *(undefined8 *)(param_1 + 0x48) = uVar10;
        goto LAB_00dc96bc;
      }
      puVar18 = __src_00 + 1;
      goto LAB_00dc96fc;
    case 0xd:
      uVar20 = (long)puVar6 - (long)__src_00;
LAB_00dc96bc:
      sVar23 = *(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48);
      if (uVar20 <= sVar23) {
        sVar23 = uVar20;
      }
      memcpy((void *)(param_1 + *(long *)(param_1 + 0x48) + 0xe8),__src_00,sVar23);
      uVar26 = sVar23 + *(long *)(param_1 + 0x48);
      puVar18 = (uint *)((long)__src_00 + sVar23);
      *(ulong *)(param_1 + 0x48) = uVar26;
      uVar20 = *(ulong *)(param_1 + 0x50) - uVar26;
      if (*(ulong *)(param_1 + 0x50) < uVar26 || uVar20 == 0) {
        __src_00 = (uint *)(param_1 + 0xec);
LAB_00dc96fc:
        uVar13 = *__src_00;
        *(ulong *)(param_1 + 0x10) = (ulong)uVar13;
        *(ulong *)(param_1 + 0x50) = (ulong)uVar13;
        *(undefined4 *)(param_1 + 0x24) = 0xe;
        bVar1 = true;
        uVar20 = uVar25;
        goto LAB_00dc91b8;
      }
      goto LAB_00dc9c48;
    case 0xe:
      uVar20 = *(ulong *)(param_1 + 0x50);
      uVar25 = uVar20;
      if ((ulong)((long)puVar6 - (long)__src_00) <= uVar20) {
        uVar25 = (long)puVar6 - (long)__src_00;
      }
      puVar18 = (uint *)((long)__src_00 + uVar25);
      uVar20 = uVar20 - uVar25;
      *(ulong *)(param_1 + 0x50) = uVar20;
      if (uVar20 == 0) {
LAB_00dc9c3c:
        *(undefined4 *)(param_1 + 0x24) = 0;
        goto LAB_00dc9c40;
      }
      goto LAB_00dc9c48;
    }
    bVar1 = true;
LAB_00dc91b8:
    uVar25 = uVar20;
    __src_00 = puVar18;
  } while (bVar1);
LAB_00dc9c48:
  if (((*(int *)(param_1 + 4) == 0) &&
      (pvVar21 = *(void **)(param_1 + 0x60), pvVar21 != (void *)0x0)) &&
     (pvVar16 = *(void **)(param_1 + 0x58), pvVar21 != pvVar16)) {
    piVar8 = &local_64;
    if (param_6 != (int *)0x0) {
      piVar8 = param_6;
    }
    if ((*piVar8 == 0) && (*(int *)(param_1 + 0x24) - 2U < 8)) {
      if (*(int *)(param_1 + 0x24) == 9) {
        uVar26 = *(long *)(param_1 + 0x70) - (long)pvVar16;
        uVar25 = 0;
        if (*(ulong *)(param_1 + 0x78) < 0x10001) {
          uVar25 = 0x10000 - *(ulong *)(param_1 + 0x78);
        }
        sVar23 = uVar26;
        if (uVar25 <= uVar26) {
          sVar23 = uVar25;
        }
        memcpy((void *)(*(long *)(param_1 + 0x70) - sVar23),
               (void *)((long)pvVar21 +
                       ((*(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x80)) - sVar23)),sVar23);
        *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x58);
        *(ulong *)(param_1 + 0x68) = *(long *)(param_1 + 0x80) + uVar26;
      }
      else {
        uVar25 = *(ulong *)(param_1 + 0x68);
        sVar23 = uVar25;
        if (0xffff < uVar25) {
          sVar23 = 0x10000;
        }
        memcpy(pvVar16,(void *)((long)pvVar21 + (uVar25 - sVar23)),sVar23);
        *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x58);
        *(size_t *)(param_1 + 0x68) = sVar23;
        *(size_t *)(param_1 + 0x70) = *(long *)(param_1 + 0x58) + sVar23;
      }
    }
  }
  *param_5 = (long)puVar18 - (long)param_4;
  *param_3 = (long)__src - (long)param_2;
  return uVar20;
}


