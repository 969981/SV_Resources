/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03367258; name: FUN_03367258
 */


undefined8 * FUN_03367258(undefined8 *param_1,undefined8 *param_2,ulong *param_3,byte param_4)

{
  undefined *puVar1;
  char *pcVar2;
  undefined8 *puVar3;
  size_t sVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  int iVar16;
  undefined1 *local_108;
  undefined1 *puStack_100;
  char *local_f8;
  ulong local_f0;
  char local_e8 [128];
  undefined4 local_68;
  
  puVar1 = PTR_DAT_047d1a08;
  if ((ulong *)0x1 < param_3) {
    uVar10 = *param_3;
    uVar8 = (uint)uVar10;
    if ((uVar8 >> 0x11 & 1) != 0) {
      uVar7 = CONCAT44(uVar8,uVar8) & 0x1ffff0001ffff;
      if (((uint)param_3[(ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8)) +
                                      POPCOUNT((char)(uVar7 >> 0x10))) + 2] >> 0x10 & 1) != 0) {
        local_f8 = (char *)0x28;
        puVar3 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_f8,0);
        if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
          (**(code **)(puVar1 + 0x10))(puVar3,"Field");
        }
        puVar3[2] = 0;
        puVar3[3] = 0xffffffff00000000;
        *puVar3 = 0;
        puVar3[1] = 0;
        *(byte *)(puVar3 + 4) = *(byte *)(puVar3 + 4) & 0xfc;
        FUN_031ca644(puVar3,*param_2,param_2[1]);
        local_f8 = local_e8;
        local_68 = 1;
        local_f0 = 0x8000008000000001;
        puVar11 = param_3;
        do {
          uVar10 = *puVar11;
          if (((uint)uVar10 >> 3 & 1) != 0) {
            uVar10 = puVar11[(ulong)(byte)POPCOUNT((byte)uVar10 & 7) + 2];
            goto LAB_03367830;
          }
        } while (((uVar10 & 1) == 0) && (puVar11 = (ulong *)puVar11[1], puVar11 != (ulong *)0x0));
        uVar10 = 0;
LAB_03367830:
        do {
          uVar8 = (uint)*param_3;
          if ((uVar8 >> 0xf & 1) != 0) {
            uVar7 = CONCAT44(uVar8,uVar8) & 0x7fff00007fff;
            uVar7 = param_3[(ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8))) + 2]
            ;
            goto LAB_03367870;
          }
        } while (((*param_3 & 9) == 0) && (param_3 = (ulong *)param_3[1], param_3 != (ulong *)0x0));
        uVar7 = 0;
LAB_03367870:
        local_e8[0] = '\0';
        FUN_031e20f0(uVar10,uVar7,&local_f8);
        pcVar2 = local_f8;
        uVar10 = puVar3[1];
        if (local_f8 != (char *)(uVar10 & 0xfffffffffffffffe)) {
          if (local_f8 == (char *)0x0) {
            uVar7 = 0;
          }
          else {
            sVar4 = strlen(local_f8);
            sVar4 = (size_t)((int)sVar4 + 1);
            pvVar5 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar4)
            ;
            memcpy(pvVar5,pcVar2,sVar4);
            uVar7 = (ulong)pvVar5 | 1;
          }
          puVar3[1] = uVar7;
          if ((uVar10 & 1) != 0) {
            (**(code **)(puVar1 + 8))(0,uVar10 - 1,0);
          }
        }
        *(byte *)(puVar3 + 4) = *(byte *)(puVar3 + 4) & 0xfe;
        puVar3[2] = PTR_DAT_047e5f40;
        puVar3[3] = 0;
        goto LAB_03367658;
      }
      puVar11 = param_3;
      if ((uVar10 & 1) == 0) {
        do {
          puVar11 = (ulong *)puVar11[1];
        } while ((*puVar11 & 1) == 0);
      }
      if ((param_3 == (ulong *)0x0) || ((puVar11[2] & 0x1f) != 0)) {
        uVar13 = 0;
        puVar11 = param_3;
        uVar7 = uVar10;
        if ((uVar8 >> 0x15 & 1) != 0) goto LAB_03367484;
        do {
          uVar15 = 0;
          while( true ) {
            uVar13 = uVar15 | uVar13;
            if (((uVar7 & 1) != 0) || (puVar11 = (ulong *)puVar11[1], puVar11 == (ulong *)0x0)) {
              if ((uVar13 & 3) == 0) goto LAB_03367298;
              uVar7 = 0;
              puVar11 = param_3;
              if ((uVar8 >> 0x15 & 1) != 0) goto LAB_033674dc;
              goto LAB_03367500;
            }
            uVar7 = *puVar11;
            if (((uint)uVar7 >> 0x15 & 1) == 0) break;
LAB_03367484:
            uVar15 = CONCAT44((int)uVar7,(int)uVar7) & 0x1fffff001fffff;
            uVar15 = puVar11[(ulong)(byte)(POPCOUNT((char)uVar15) + POPCOUNT((char)(uVar15 >> 8)) +
                                          POPCOUNT((char)(uVar15 >> 0x10))) + 2];
          }
        } while( true );
      }
    }
  }
LAB_03367298:
  local_f8 = (char *)0x28;
  puVar3 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(0,&local_f8,0);
  if (*(code **)(puVar1 + 0x10) != (code *)0x0) {
    (**(code **)(puVar1 + 0x10))(puVar3,"Field");
  }
  puVar3[2] = 0;
  puVar3[3] = 0xffffffff00000000;
  *puVar3 = 0;
  puVar3[1] = 0;
  *(byte *)(puVar3 + 4) = *(byte *)(puVar3 + 4) & 0xfc;
  FUN_031ca644(puVar3,*param_2,param_2[1]);
  local_f8 = local_e8;
  local_68 = 1;
  local_f0 = 0x8000008000000001;
  puVar11 = param_3;
  while (uVar10 = *puVar11, ((uint)uVar10 >> 3 & 1) == 0) {
    if (((uVar10 & 1) != 0) || (puVar11 = (ulong *)puVar11[1], puVar11 == (ulong *)0x0))
    goto LAB_03367364;
  }
  if (puVar11 != (ulong *)0x0) {
    uVar10 = puVar11[(ulong)(byte)POPCOUNT((byte)uVar10 & 7) + 2];
    goto LAB_03367368;
  }
LAB_03367364:
  uVar10 = 0;
LAB_03367368:
  puVar11 = param_3;
  do {
    uVar8 = (uint)*puVar11;
    if ((uVar8 >> 0xf & 1) != 0) {
      uVar7 = CONCAT44(uVar8,uVar8) & 0x7fff00007fff;
      uVar7 = puVar11[(ulong)(byte)(POPCOUNT((char)uVar7) + POPCOUNT((char)(uVar7 >> 8))) + 2];
      goto LAB_033673b0;
    }
  } while (((*puVar11 & 9) == 0) && (puVar11 = (ulong *)puVar11[1], puVar11 != (ulong *)0x0));
  uVar7 = 0;
LAB_033673b0:
  local_e8[0] = '\0';
  FUN_031e20f0(uVar10,uVar7,&local_f8);
  pcVar2 = local_f8;
  uVar10 = puVar3[1];
  if (local_f8 != (char *)(uVar10 & 0xfffffffffffffffe)) {
    if (local_f8 == (char *)0x0) {
      uVar7 = 0;
    }
    else {
      sVar4 = strlen(local_f8);
      sVar4 = (size_t)((int)sVar4 + 1);
      pvVar5 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar4);
      memcpy(pvVar5,pcVar2,sVar4);
      uVar7 = (ulong)pvVar5 | 1;
    }
    puVar3[1] = uVar7;
    if ((uVar10 & 1) != 0) {
      (**(code **)(puVar1 + 8))(0,uVar10 - 1,0);
    }
  }
  *(undefined4 *)(puVar3 + 3) = 0;
  *(byte *)(puVar3 + 4) = *(byte *)(puVar3 + 4) & 0xfe | param_4 & 1;
  uVar10 = *param_3;
  uVar8 = (uint)uVar10;
  puVar11 = param_3;
  if ((uVar10 & 1) == 0) {
    do {
      puVar11 = (ulong *)puVar11[1];
    } while ((*puVar11 & 1) == 0);
  }
  if ((param_3 == (ulong *)0x0) || (3 < ((uint)puVar11[2] & 0x1f) - 2)) {
    puVar11 = param_3;
    if ((uVar10 & 1) == 0) {
      do {
        puVar11 = (ulong *)puVar11[1];
      } while ((*puVar11 & 1) == 0);
    }
    if (((param_3 == (ulong *)0x0) || ((puVar11[2] & 0x1f) != 0)) &&
       (uVar7 = FUN_033670d0(param_3), (uVar7 & 1) == 0)) {
      puVar11 = param_3;
      if ((uVar10 & 1) == 0) {
        puVar14 = param_3;
        do {
          puVar14 = (ulong *)puVar14[1];
        } while ((*puVar14 & 1) == 0);
        puVar12 = param_3;
        if ((param_3 != (ulong *)0x0) && ((puVar14[2] & 0x1f) == 6)) goto LAB_033677c8;
        do {
          puVar12 = (ulong *)puVar12[1];
        } while ((*puVar12 & 1) == 0);
        if ((param_3 != (ulong *)0x0) && ((puVar12[2] & 0x1f) == 8)) goto LAB_0336792c;
        if ((uVar10 & 1) == 0) {
          do {
            puVar11 = (ulong *)puVar11[1];
          } while ((*puVar11 & 1) == 0);
        }
LAB_03367990:
        if ((param_3 == (ulong *)0x0) || ((puVar11[2] & 0x1f) != 7)) {
          uVar10 = FUN_0220e630(&DAT_047ad560,"Not implemented");
          if ((uVar10 & 1) != 0) {
            CallSupervisor(0x26);
          }
          goto LAB_03367658;
        }
        uVar6 = (**(code **)*param_1)(param_1,param_3);
        uVar9 = 3;
      }
      else {
        if ((param_3 != (ulong *)0x0) && ((param_3[2] & 0x1f) == 6)) {
LAB_033677c8:
          puVar14 = param_3;
          if ((uVar8 >> 1 & 1) == 0) {
            do {
              puVar14 = (ulong *)puVar14[1];
              if (puVar14 == (ulong *)0x0) goto LAB_03367a10;
            } while (((byte)*puVar14 >> 1 & 1) == 0);
          }
          if ((puVar14[3] == 0) ||
             (uVar10 = FUN_031dd260(puVar14[3],PTR_DAT_047e5c40), (uVar10 & 1) == 0)) {
LAB_03367a10:
            do {
              if (((byte)*puVar11 >> 1 & 1) != 0) {
                if (puVar11[3] != 0) {
                  local_108 = &DAT_03c886bc;
                  puStack_100 = &DAT_03c886bc;
                  goto LAB_03367a38;
                }
                break;
              }
              puVar14 = puVar11 + 1;
              puVar11 = (ulong *)*puVar14;
            } while ((ulong *)*puVar14 != (ulong *)0x0);
            uVar9 = 1;
          }
          else {
            uVar9 = 2;
          }
          *(undefined4 *)((long)puVar3 + 0x1c) = uVar9;
          puVar3[2] = 0;
          goto LAB_03367658;
        }
        if ((param_3 == (ulong *)0x0) || ((param_3[2] & 0x1f) != 8)) goto LAB_03367990;
LAB_0336792c:
        if ((uVar10 & 1) == 0) {
          do {
            puVar11 = (ulong *)puVar11[1];
            if (puVar11 == (ulong *)0x0) goto LAB_033679c0;
          } while ((*puVar11 & 1) == 0);
        }
        iVar16 = (int)(puVar11[2] >> 8);
        if (iVar16 != 0) {
          local_108 = &DAT_03c886bc;
          puStack_100 = &DAT_03c886bc;
          if ((uVar8 >> 1 & 1) == 0) {
            do {
              param_3 = (ulong *)param_3[1];
              if (param_3 == (ulong *)0x0) {
                uVar10 = 0;
                goto LAB_03367aac;
              }
            } while (((byte)*param_3 >> 1 & 1) == 0);
          }
          uVar10 = param_3[3];
LAB_03367aac:
          uVar6 = FUN_03367258(param_1,&local_108,uVar10,1);
          puVar3[2] = uVar6;
          *(int *)(puVar3 + 3) = iVar16;
          *(undefined4 *)((long)puVar3 + 0x1c) = 5;
          goto LAB_03367658;
        }
LAB_033679c0:
        puVar11 = param_3;
        if ((uVar8 >> 1 & 1) == 0) {
          do {
            puVar11 = (ulong *)puVar11[1];
            if (puVar11 == (ulong *)0x0) goto LAB_03367a80;
          } while (((byte)*puVar11 >> 1 & 1) == 0);
        }
        if (puVar11[3] == 0) {
LAB_03367a80:
          uVar6 = 0;
        }
        else {
          local_108 = &DAT_03c886bc;
          puStack_100 = &DAT_03c886bc;
          if ((uVar8 >> 1 & 1) == 0) {
            do {
              param_3 = (ulong *)param_3[1];
              if (param_3 == (ulong *)0x0) {
                uVar10 = 0;
                goto LAB_03367ad0;
              }
            } while (((byte)*param_3 >> 1 & 1) == 0);
          }
          uVar10 = param_3[3];
LAB_03367ad0:
          uVar6 = FUN_03367258(param_1,&local_108,uVar10,1);
        }
        uVar9 = 4;
      }
      *(undefined4 *)((long)puVar3 + 0x1c) = uVar9;
      goto LAB_03367ae8;
    }
  }
  for (; param_3 != (ulong *)0x0; param_3 = (ulong *)param_3[1]) {
    uVar10 = 0;
    puVar11 = param_3;
    do {
      uVar8 = (uint)*puVar11;
      if ((uVar8 >> 0x15 & 1) == 0) {
        uVar7 = 0;
      }
      else {
        uVar8 = uVar8 & 0x1fffff;
        uVar7 = puVar11[(ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8)) +
                                     POPCOUNT((char)(uVar8 >> 0x10))) + 2];
      }
      uVar10 = uVar7 | uVar10;
    } while (((*puVar11 & 1) == 0) && (puVar11 = (ulong *)puVar11[1], puVar11 != (ulong *)0x0));
    if ((((uint)uVar10 >> 3 & 1) == 0) &&
       (((param_3 < (ulong *)0x2 || (((uint)*param_3 >> 0x11 & 1) == 0)) ||
        (uVar8 = (uint)*param_3 & 0x1ffff,
        (param_3[(ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8)) +
                              POPCOUNT((char)(uVar8 >> 0x10))) + 2] & 0x300000) == 0 ||
        (param_3[(ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8)) +
                              POPCOUNT((char)(uVar8 >> 0x10))) + 2] & 0x400000) == 0)))) break;
  }
  *(undefined4 *)((long)puVar3 + 0x1c) = 0;
  puVar3[2] = param_3;
  goto LAB_03367658;
LAB_03367500:
  uVar13 = 0;
  while( true ) {
    uVar7 = uVar13 | uVar7;
    if (((uVar10 & 1) != 0) || (puVar11 = (ulong *)puVar11[1], puVar11 == (ulong *)0x0)) {
      if (((uint)uVar7 >> 1 & 1) == 0) {
        return (undefined8 *)0x0;
      }
      goto LAB_03367298;
    }
    uVar10 = *puVar11;
    if (((uint)uVar10 >> 0x15 & 1) == 0) break;
LAB_033674dc:
    uVar13 = CONCAT44((int)uVar10,(int)uVar10) & 0x1fffff001fffff;
    uVar13 = puVar11[(ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                                  POPCOUNT((char)(uVar13 >> 0x10))) + 2];
  }
  goto LAB_03367500;
  while (param_3 = (ulong *)param_3[1], param_3 != (ulong *)0x0) {
LAB_03367a38:
    if (((byte)*param_3 >> 1 & 1) != 0) {
      uVar10 = param_3[3];
      goto LAB_03367a8c;
    }
  }
  uVar10 = 0;
LAB_03367a8c:
  uVar6 = FUN_03367258(param_1,&local_108,uVar10,1);
  *(undefined4 *)((long)puVar3 + 0x1c) = 1;
LAB_03367ae8:
  puVar3[2] = uVar6;
LAB_03367658:
  uVar10 = local_f0;
  local_f0 = local_f0 & 0xffffffff00000000;
  if ((-1 < (long)uVar10) && (local_f8 != (char *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  return puVar3;
}


