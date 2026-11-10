/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0116e948; name: FUN_0116e948
 */


void FUN_0116e948(long param_1)

{
  void **ppvVar1;
  long *plVar2;
  void *__dest;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  size_t sVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  void *pvVar18;
  ulong *puVar19;
  char *pcVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  void *local_b8;
  uint local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined1 auStack_a0 [48];
  long *local_70;
  long *local_68;
  
  if (((*(char *)(param_1 + 0x11e) != '\0') && (*(long *)(param_1 + 0x120) != 0)) &&
     (*(long *)(param_1 + 0x128) != 0)) {
    FUN_00c9e664(&local_70,param_1 + 0xe8);
    lVar8 = (**(code **)(*(long *)local_68[9] + 0x68))();
    uVar22 = *(undefined8 *)(lVar8 + 0x30);
    fVar23 = *(float *)(param_1 + 0x160);
    fVar25 = (float)*(undefined8 *)(param_1 + 0x150);
    fVar26 = (float)((ulong)*(undefined8 *)(param_1 + 0x150) >> 0x20);
    fVar21 = *(float *)(param_1 + 0x148);
    uVar24 = *(undefined8 *)(*(long *)(param_1 + 0x120) + 0x120);
    memcpy(auStack_a0,(void *)(*(long *)(param_1 + 0x128) + 0x1b0),0x30);
    if (((*PTR_DAT_047d8c00 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
    lVar8 = *(long *)PTR_DAT_047d8c08;
    *(long *)PTR_DAT_047d8c10 = lVar8;
    FUN_0116f1c8(&local_b8,
                 CONCAT44((float)((ulong)uVar22 >> 0x20) + fVar26 * fVar23,
                          (float)uVar22 + fVar25 * fVar23),
                 CONCAT44((float)((ulong)uVar24 >> 0x20) - fVar26 * fVar21,
                          (float)uVar24 - fVar25 * fVar21),*(undefined8 *)(lVar8 + 0x70),auStack_a0,
                 *(undefined4 *)(param_1 + 0x164),10,1);
    uVar6 = local_b0;
    pvVar12 = local_b8;
    ppvVar1 = (void **)(param_1 + 0x130);
    if (&local_b8 != ppvVar1) {
      lVar8 = (long)(int)local_b0;
      if ((int)(*(uint *)(param_1 + 0x13c) & 0x7fffffff) < (int)local_b0) {
        FUN_011702d4(ppvVar1,lVar8);
      }
      uVar13 = *(uint *)(param_1 + 0x138);
      if ((int)uVar6 < (int)uVar13) {
        lVar16 = (long)(int)uVar13;
        pvVar10 = *ppvVar1;
        pvVar18 = (void *)((long)pvVar10 + lVar8 * 0x40);
        uVar15 = *(ulong *)((long)pvVar10 + lVar16 * 0x40 + -8);
        if ((uVar15 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar15 - 1,0);
        }
        if ((void *)((long)pvVar10 + lVar16 * 0x40 + -0x40) != pvVar18) {
          uVar15 = *(ulong *)((long)pvVar10 + lVar16 * 0x40 + -0x48);
          if ((uVar15 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar15 - 1,0);
          }
          if ((void *)((long)pvVar10 + lVar16 * 0x40 + -0x80) != pvVar18) {
            uVar15 = *(ulong *)((long)pvVar10 + lVar16 * 0x40 + -0x88);
            if ((uVar15 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar15 - 1,0);
            }
            if ((void *)((long)pvVar10 + lVar16 * 0x40 + -0xc0) != pvVar18) {
              uVar15 = *(ulong *)((long)pvVar10 + lVar16 * 0x40 + -200);
              if ((uVar15 & 1) != 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar15 - 1,0);
              }
              puVar5 = PTR_DAT_047d1a08;
              if ((void *)((long)pvVar10 + lVar16 * 0x40 + -0x100) != pvVar18) {
                puVar17 = (ulong *)((long)pvVar10 + lVar16 * 0x40 + -0x108);
                lVar8 = lVar8 * 0x40 + lVar16 * -0x40 + 0x100;
                do {
                  if ((*puVar17 & 1) != 0) {
                    (**(code **)(puVar5 + 8))(0,*puVar17 - 1,0);
                  }
                  puVar17 = puVar17 + -8;
                  lVar8 = lVar8 + 0x40;
                } while (lVar8 != 0);
              }
            }
          }
        }
        uVar13 = *(uint *)(param_1 + 0x138);
      }
      pvVar18 = *ppvVar1;
      if ((int)uVar6 <= (int)uVar13) {
        uVar13 = uVar6;
      }
      if ((pvVar18 != pvVar12) && (0 < (int)uVar13)) {
        memcpy(pvVar18,pvVar12,0x34);
        pcVar20 = (char *)(*(ulong *)((long)pvVar12 + 0x38) & 0xfffffffffffffffe);
        uVar15 = *(ulong *)((long)pvVar18 + 0x38);
        if ((char *)(uVar15 & 0xfffffffffffffffe) != pcVar20) {
          if (pcVar20 == (char *)0x0) {
            uVar14 = 0;
          }
          else {
            sVar9 = strlen(pcVar20);
            sVar9 = (size_t)((int)sVar9 + 1);
            pvVar10 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                        (PTR_PTR_047d1a50,sVar9);
            memcpy(pvVar10,pcVar20,sVar9);
            uVar14 = (ulong)pvVar10 | 1;
          }
          *(ulong *)((long)pvVar18 + 0x38) = uVar14;
          if ((uVar15 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar15 - 1,0);
          }
        }
        if (uVar13 != 1) {
          memcpy((void *)((long)pvVar18 + 0x40),(void *)((long)pvVar12 + 0x40),0x34);
          pcVar20 = (char *)(*(ulong *)((long)pvVar12 + 0x78) & 0xfffffffffffffffe);
          uVar15 = *(ulong *)((long)pvVar18 + 0x78);
          if ((char *)(uVar15 & 0xfffffffffffffffe) != pcVar20) {
            if (pcVar20 == (char *)0x0) {
              uVar14 = 0;
            }
            else {
              sVar9 = strlen(pcVar20);
              sVar9 = (size_t)((int)sVar9 + 1);
              pvVar10 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                          (PTR_PTR_047d1a50,sVar9);
              memcpy(pvVar10,pcVar20,sVar9);
              uVar14 = (ulong)pvVar10 | 1;
            }
            *(ulong *)((long)pvVar18 + 0x78) = uVar14;
            if ((uVar15 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar15 - 1,0);
            }
          }
          if (uVar13 != 2) {
            puVar17 = (ulong *)((long)pvVar18 + 0xb8);
            puVar19 = (ulong *)((long)pvVar12 + 0xb8);
            lVar8 = (ulong)uVar13 - 2;
            do {
              memcpy(puVar17 + -7,puVar19 + -7,0x34);
              pcVar20 = (char *)(*puVar19 & 0xfffffffffffffffe);
              uVar15 = *puVar17;
              if ((char *)(uVar15 & 0xfffffffffffffffe) != pcVar20) {
                if (pcVar20 == (char *)0x0) {
                  uVar14 = 0;
                }
                else {
                  sVar9 = strlen(pcVar20);
                  pvVar18 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))();
                  memcpy(pvVar18,pcVar20,(long)((int)sVar9 + 1));
                  uVar14 = (ulong)pvVar18 | 1;
                }
                *puVar17 = uVar14;
                if ((uVar15 & 1) != 0) {
                  (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar15 - 1,0);
                }
              }
              puVar17 = puVar17 + 8;
              lVar8 = lVar8 + -1;
              puVar19 = puVar19 + 8;
            } while (lVar8 != 0);
          }
        }
        pvVar18 = *ppvVar1;
      }
      iVar7 = uVar6 - uVar13;
      if (0 < iVar7) {
        lVar8 = (long)(int)uVar13;
        pvVar10 = (void *)((long)pvVar12 + lVar8 * 0x40);
        __dest = (void *)((long)pvVar18 + lVar8 * 0x40);
        memcpy(__dest,pvVar10,0x34);
        *(ulong *)((long)__dest + 0x38) = 0;
        pcVar20 = (char *)(*(ulong *)((long)pvVar10 + 0x38) & 0xfffffffffffffffe);
        if (pcVar20 != (char *)0x0) {
          sVar9 = strlen(pcVar20);
          sVar9 = (size_t)((int)sVar9 + 1);
          pvVar11 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar9);
          memcpy(pvVar11,pcVar20,sVar9);
          *(ulong *)((long)__dest + 0x38) = (ulong)pvVar11 | 1;
        }
        if (iVar7 != 1) {
          memcpy((void *)((long)__dest + 0x40),(void *)((long)pvVar10 + 0x40),0x34);
          *(undefined8 *)((long)__dest + 0x78) = 0;
          pcVar20 = (char *)(*(ulong *)((long)pvVar10 + 0x78) & 0xfffffffffffffffe);
          if (pcVar20 != (char *)0x0) {
            sVar9 = strlen(pcVar20);
            sVar9 = (size_t)((int)sVar9 + 1);
            pvVar11 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                        (PTR_PTR_047d1a50,sVar9);
            memcpy(pvVar11,pcVar20,sVar9);
            *(ulong *)((long)__dest + 0x78) = (ulong)pvVar11 | 1;
          }
          if (iVar7 != 2) {
            memcpy((void *)((long)__dest + 0x80),(void *)((long)pvVar10 + 0x80),0x34);
            *(undefined8 *)((long)__dest + 0xb8) = 0;
            pcVar20 = (char *)(*(ulong *)((long)pvVar10 + 0xb8) & 0xfffffffffffffffe);
            if (pcVar20 != (char *)0x0) {
              sVar9 = strlen(pcVar20);
              sVar9 = (size_t)((int)sVar9 + 1);
              pvVar10 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                          (PTR_PTR_047d1a50,sVar9);
              memcpy(pvVar10,pcVar20,sVar9);
              *(ulong *)((long)__dest + 0xb8) = (ulong)pvVar10 | 1;
            }
            iVar7 = iVar7 + -3;
            if (iVar7 != 0) {
              puVar17 = (ulong *)((long)pvVar12 + lVar8 * 0x40 + 0xf8);
              puVar19 = (ulong *)((long)pvVar18 + lVar8 * 0x40 + 0xf8);
              do {
                memcpy(puVar19 + -7,puVar17 + -7,0x34);
                *puVar19 = 0;
                pcVar20 = (char *)(*puVar17 & 0xfffffffffffffffe);
                if (pcVar20 != (char *)0x0) {
                  sVar9 = strlen(pcVar20);
                  sVar9 = (size_t)((int)sVar9 + 1);
                  pvVar12 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                              (PTR_PTR_047d1a50,sVar9);
                  memcpy(pvVar12,pcVar20,sVar9);
                  *puVar19 = (ulong)pvVar12 | 1;
                }
                iVar7 = iVar7 + -1;
                puVar17 = puVar17 + 8;
                puVar19 = puVar19 + 8;
              } while (iVar7 != 0);
            }
          }
        }
      }
      *(uint *)(param_1 + 0x138) = uVar6;
    }
    pvVar12 = local_b8;
    *(undefined4 *)(param_1 + 0x140) = local_a8;
    lVar8 = (long)(int)local_b0;
    if (local_b0 != 0) {
      pvVar18 = (void *)((long)local_b8 + lVar8 * 0x40 + -0x40);
      uVar15 = *(ulong *)((long)local_b8 + lVar8 * 0x40 + -8);
      if ((uVar15 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar15 - 1,0);
      }
      if (pvVar18 != pvVar12) {
        uVar15 = *(ulong *)((long)pvVar12 + lVar8 * 0x40 + -0x48);
        if ((uVar15 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar15 - 1,0);
        }
        if ((void *)((long)pvVar12 + lVar8 * 0x40 + -0x80) != pvVar12) {
          uVar15 = *(ulong *)((long)pvVar12 + lVar8 * 0x40 + -0x88);
          if ((uVar15 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar15 - 1,0);
          }
          if ((void *)((long)pvVar12 + lVar8 * 0x40 + -0xc0) != pvVar12) {
            uVar15 = *(ulong *)((long)pvVar12 + lVar8 * 0x40 + -200);
            if ((uVar15 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar15 - 1,0);
            }
            puVar5 = PTR_DAT_047d1a08;
            if ((void *)((long)pvVar12 + lVar8 * 0x40 + -0x100) != pvVar12) {
              lVar8 = lVar8 << 6;
              do {
                uVar15 = *(ulong *)((long)pvVar12 + lVar8 + -0x108);
                if ((uVar15 & 1) != 0) {
                  (**(code **)(puVar5 + 8))(0,uVar15 - 1,0);
                }
                lVar8 = lVar8 + -0x40;
              } while (lVar8 != 0x100);
            }
          }
        }
      }
    }
    local_b0 = 0;
    if ((-1 < (int)local_ac) && (local_b8 != (void *)0x0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,local_b8,(ulong)local_ac << 6);
    }
    if (local_68 != (long *)0x0) {
      plVar2 = local_68 + 5;
      do {
        lVar8 = *plVar2;
        iVar7 = (int)lVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
      else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x60))();
    }
  }
  return;
}


