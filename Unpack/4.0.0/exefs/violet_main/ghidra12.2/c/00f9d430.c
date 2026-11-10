/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f9d430; name: FUN_00f9d430
 */


void FUN_00f9d430(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  size_t sVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined1 uVar13;
  int *piVar14;
  byte *pbVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined1 *puVar23;
  undefined8 uVar24;
  uint *puVar25;
  long *plVar26;
  void *__s;
  ulong *puVar27;
  long lVar28;
  char *pcVar29;
  void *pvVar30;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  piVar14 = (int *)*param_2;
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 5) ||
     (uVar18 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[2], uVar18 == 0)) {
    lVar20 = 0;
  }
  else {
    puVar25 = (uint *)((long)piVar14 + uVar18);
    lVar20 = (long)puVar25 + (ulong)*puVar25;
  }
  puVar23 = &DAT_cbf29ce484222645;
  sVar8 = strlen((char *)(lVar20 + 4));
  bVar5 = *(byte *)(lVar20 + 4);
  if (bVar5 != 0) {
    pbVar15 = (byte *)(lVar20 + 5);
    do {
      puVar23 = (undefined1 *)(((ulong)puVar23 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (bVar5 != 0);
  }
  *(undefined8 *)(param_1 + 0x38) = puVar23;
  *(char **)(param_1 + 0x40) = (char *)(lVar20 + 4);
  *(size_t *)(param_1 + 0x48) = sVar8;
  plVar9 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  plVar9 = (long *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0x50) = 0;
  piVar14 = (int *)*param_2;
  puVar25 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (8 - (long)*piVar14)));
  uVar18 = (ulong)*(uint *)((long)puVar25 + (ulong)*puVar25);
  lVar20 = *(long *)(param_1 + 0xe0) - *plVar9 >> 5;
  uVar21 = lVar20 * -0x5555555555555555;
  if (uVar21 < uVar18) {
    FUN_00f9e4e8(plVar9,uVar18 + lVar20 * 0x5555555555555555);
  }
  else if (uVar21 != uVar18) {
    FUN_027177d0(plVar9,*plVar9 + uVar18 * 0x60);
  }
  piVar14 = (int *)*param_2;
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 9) ||
     (uVar18 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[4], uVar18 == 0)) {
    lVar20 = 0;
  }
  else {
    puVar25 = (uint *)((long)piVar14 + uVar18);
    lVar20 = (long)puVar25 + (ulong)*puVar25;
  }
  FUN_00f9ea4c(plVar9,lVar20);
  piVar14 = (int *)*param_2;
  lVar20 = param_1 + 0x110;
  puVar25 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (10 - (long)*piVar14)));
  uVar18 = (ulong)*(uint *)((long)puVar25 + (ulong)*puVar25);
  lVar22 = *(long *)(param_1 + 0x118) - *(long *)(param_1 + 0x110) >> 5;
  uVar21 = lVar22 * -0x5555555555555555;
  if (uVar21 < uVar18) {
    FUN_00f9e4e8(lVar20,uVar18 + lVar22 * 0x5555555555555555);
  }
  else if (uVar21 != uVar18) {
    FUN_027177d0(lVar20,*(long *)(param_1 + 0x110) + uVar18 * 0x60);
  }
  piVar14 = (int *)*param_2;
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 0xb) ||
     (uVar18 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[5], uVar18 == 0)) {
    lVar22 = 0;
  }
  else {
    puVar25 = (uint *)((long)piVar14 + uVar18);
    lVar22 = (long)puVar25 + (ulong)*puVar25;
  }
  FUN_00f9ea4c(lVar20,lVar22);
  piVar14 = (int *)*param_2;
  plVar9 = (long *)(param_1 + 0x148);
  puVar25 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (0xc - (long)*piVar14)));
  uVar4 = *(uint *)((long)puVar25 + (ulong)*puVar25);
  uVar21 = (ulong)uVar4;
  uVar18 = *(long *)(param_1 + 0x150) - *(long *)(param_1 + 0x148) >> 2;
  if (uVar18 < uVar21) {
    FUN_00c6d688(plVar9,uVar21 - uVar18);
  }
  else if (uVar21 < uVar18) {
    *(ulong *)(param_1 + 0x150) = *(long *)(param_1 + 0x148) + uVar21 * 4;
  }
  piVar14 = (int *)*param_2;
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 0xf) ||
     (uVar18 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[7], uVar18 == 0)) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined1 *)((long)piVar14 + uVar18);
  }
  *(undefined1 *)(param_1 + 0x1b8) = uVar13;
  piVar14 = (int *)*param_2;
  if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 0x11) ||
     (uVar18 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[8], uVar18 == 0)) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined1 *)((long)piVar14 + uVar18);
  }
  *(undefined1 *)(param_1 + 0x1b9) = uVar13;
  if (uVar4 != 0) {
    piVar14 = (int *)*param_2;
    if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 0xd) ||
       (uVar18 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[6], uVar18 == 0)) {
      lVar20 = 0;
    }
    else {
      puVar25 = (uint *)((long)piVar14 + uVar18);
      lVar20 = (long)puVar25 + (ulong)*puVar25;
    }
    memcpy((void *)*plVar9,(void *)(lVar20 + 4),uVar21 << 2);
  }
  lVar20 = nn::util::BinaryFileHeader::GetFirstBlock();
  plVar1 = (long *)(param_1 + 0x180);
  uVar4 = *(uint *)(lVar20 + 0x1c);
  uVar18 = (ulong)(int)uVar4;
  bVar5 = *(byte *)(param_1 + 0x1b8);
  bVar6 = *(byte *)(param_1 + 0x1b9);
  lVar20 = *(long *)(param_1 + 0x180);
  lVar22 = *(long *)(param_1 + 0x188) - lVar20 >> 5;
  if ((ulong)(lVar22 * -0x5555555555555555) < uVar18) {
    if ((ulong)((*(long *)(param_1 + 400) - *(long *)(param_1 + 0x188) >> 5) * -0x5555555555555555)
        < uVar18 + lVar22 * 0x5555555555555555) {
      uVar21 = *(ulong *)(param_1 + 0x1a0);
      if (0x7ffffffffffffffe < uVar21) {
        uVar21 = 0x7fffffffffffffff;
      }
      if (uVar21 < uVar18) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar20 = *(long *)(param_1 + 400) - lVar20 >> 5;
      uVar19 = lVar20 * 0x5555555555555556;
      uVar16 = uVar18;
      if (uVar18 <= uVar19) {
        uVar16 = uVar19;
      }
      puVar2 = (undefined8 *)(param_1 + 0x198);
      if (uVar21 >> 1 <= (ulong)(lVar20 * -0x5555555555555555)) {
        uVar16 = uVar21;
      }
      if (uVar16 == 0) {
        lVar20 = 0;
      }
      else {
        lVar20 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar16 * 0x60,8);
        if (lVar20 == 0) {
          (**(code **)(*(long *)*puVar2 + 0xe8))();
        }
      }
      pvVar30 = (void *)(lVar20 + lVar22 * 0x20);
      lVar22 = uVar18 * 0x60 + lVar22 * -0x20;
      __s = pvVar30;
      do {
        uVar24 = *puVar2;
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar10 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar10 == 0) {
          memset(__s,0,0x60);
          FUN_00f9e058(__s);
          *(undefined1 *)((long)__s + 0x38) = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar24;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          memset(__s,0,0x60);
          FUN_00f9e058(__s);
          *(undefined1 *)((long)__s + 0x38) = 0;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        }
        __s = (void *)((long)__s + 0x60);
        lVar22 = lVar22 + -0x60;
      } while (lVar22 != 0);
      plVar17 = *(long **)(param_1 + 0x180);
      plVar26 = *(long **)(param_1 + 0x188);
      if (plVar26 == plVar17) {
        plVar26 = plVar17;
      }
      else {
        do {
          pvVar30 = (void *)((long)pvVar30 + -0x60);
          plVar26 = plVar26 + -0xc;
          FUN_00fa2b28(puVar2,pvVar30,plVar26);
        } while (plVar17 != plVar26);
        plVar26 = *(long **)(param_1 + 0x180);
        plVar17 = *(long **)(param_1 + 0x188);
      }
      *(void **)(param_1 + 0x180) = pvVar30;
      *(ulong *)(param_1 + 0x188) = lVar20 + uVar18 * 0x60;
      lVar22 = *(long *)(param_1 + 400);
      *(ulong *)(param_1 + 400) = lVar20 + uVar16 * 0x60;
      if (plVar17 != plVar26) {
        if ((char)plVar17[-5] != '\0') {
          if ((long *)plVar17[-1] != (long *)0x0) {
            (**(code **)(*(long *)plVar17[-1] + 0x20))();
          }
          *(undefined1 *)(plVar17 + -5) = 0;
        }
        lVar20 = plVar17[-0xc];
        if (lVar20 != 0) {
          lVar10 = plVar17[-10];
          plVar12 = (long *)plVar17[-9];
          plVar17[-0xb] = lVar20;
          uVar18 = (**(code **)(*plVar12 + 0xf8))(plVar12);
          if (((uVar18 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
            (**(code **)(*plVar12 + 0x18))(plVar12,lVar20,lVar10 - lVar20,1);
          }
          else {
            FUN_00c48fe8(plVar12,lVar20,lVar10 - lVar20,1);
          }
        }
        if (plVar17 + -0xc != plVar26) {
          lVar20 = 0;
          do {
            if (*(char *)((long)plVar17 + lVar20 + -0x88) != '\0') {
              plVar12 = *(long **)((long)plVar17 + lVar20 + -0x68);
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 0x20))();
              }
              *(undefined1 *)((long)plVar17 + lVar20 + -0x88) = 0;
            }
            lVar10 = *(long *)((long)plVar17 + lVar20 + -0xc0);
            if (lVar10 != 0) {
              *(long *)((long)plVar17 + lVar20 + -0xb8) = lVar10;
              plVar12 = *(long **)((long)plVar17 + lVar20 + -0xa8);
              lVar11 = *(long *)((long)plVar17 + lVar20 + -0xb0) - lVar10;
              uVar18 = (**(code **)(*plVar12 + 0xf8))(plVar12);
              if (((uVar18 & 1) == 0) || (lVar28 = FUN_00c4e600(), *(int *)(lVar28 + 0x12c8) < 1)) {
                (**(code **)(*plVar12 + 0x18))(plVar12,lVar10,lVar11,1);
              }
              else {
                FUN_00c48fe8(plVar12,lVar10,lVar11,1);
              }
            }
            lVar20 = lVar20 + -0x60;
          } while ((long)plVar26 + (0x60 - (long)plVar17) != lVar20);
        }
      }
      if (plVar26 != (long *)0x0) {
        plVar17 = (long *)*puVar2;
        lVar22 = lVar22 - (long)plVar26;
        uVar18 = (**(code **)(*plVar17 + 0xf8))(plVar17);
        if (((uVar18 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
          (**(code **)(*plVar17 + 0x18))(plVar17,plVar26,lVar22,8);
        }
        else {
          FUN_00c48fe8(plVar17,plVar26,lVar22,8);
        }
      }
    }
    else {
      FUN_00fa2da0(plVar1);
    }
  }
  else if (lVar22 * -0x5555555555555555 != uVar18) {
    FUN_0271783c(plVar1,lVar20 + uVar18 * 0x60);
  }
  if (0 < (int)uVar4) {
    uVar16 = 0;
    lVar20 = (ulong)bVar6 + (ulong)bVar5;
    uVar3 = (uint)bVar6 + (uint)bVar5;
    uVar21 = lVar20 * 9;
    uVar18 = 0;
    do {
      lVar22 = *plVar1;
      iVar7 = (int)lVar20;
      if (iVar7 == 0) {
        lVar11 = *(long *)(param_1 + 0x30);
        uVar24 = *(undefined8 *)(param_1 + 0x40);
        lVar10 = nn::util::BinaryFileHeader::GetFirstBlock();
        lVar11 = *(long *)(lVar11 + 0x30);
        local_78 = *(undefined8 *)(lVar11 + 8);
        uStack_70 = *(undefined8 *)(lVar11 + 0x6098);
        local_68 = lVar11 + 0x10;
        FUN_00f9a318(&local_a8,*(undefined8 *)(lVar11 + 0x6120),&local_78,uVar24,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(lVar10 + 0x20) +
                                           ((long)(uVar18 << 0x20) >> 0x1a) +
                                          *(long *)(PTR_DAT_047d1f00 +
                                                   (ulong)*(byte *)(lVar10 + 0x14) * 8)) + 0x68) + 8
                      ));
        plVar17 = local_88;
        pcVar29 = (char *)(lVar22 + uVar18 * 0x60 + 0x38);
        if (*pcVar29 == '\0') {
          if ((char)local_a8 != '\0') {
            lVar22 = lVar22 + uVar18 * 0x60;
            *(undefined8 *)(lVar22 + 0x40) = local_a0;
            *(undefined8 *)(lVar22 + 0x48) = local_98;
            *(undefined8 *)(lVar22 + 0x50) = local_90;
            local_88 = (long *)0x0;
            *(long **)(lVar22 + 0x58) = plVar17;
            *pcVar29 = '\x01';
            goto LAB_00f9dc14;
          }
        }
        else {
          if ((char)local_a8 == '\0') {
            plVar17 = *(long **)(lVar22 + uVar18 * 0x60 + 0x58);
            if (plVar17 != (long *)0x0) {
              (**(code **)(*plVar17 + 0x20))();
            }
            *pcVar29 = '\0';
          }
          else {
            lVar22 = lVar22 + uVar18 * 0x60;
            plVar17 = *(long **)(lVar22 + 0x58);
            *(undefined8 *)(lVar22 + 0x40) = local_a0;
            *(undefined8 *)(lVar22 + 0x48) = local_98;
            *(undefined8 *)(lVar22 + 0x50) = local_90;
            *(undefined8 *)(lVar22 + 0x58) = 0;
            if (plVar17 != (long *)0x0) {
              (**(code **)(*plVar17 + 0x20))();
            }
            plVar17 = local_88;
            local_88 = (long *)0x0;
            *(long **)(lVar22 + 0x58) = plVar17;
          }
LAB_00f9dc14:
          if ((char)local_a8 != '\0') {
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x20))();
            }
            local_a8 = local_a8 & 0xffffffffffffff00;
          }
        }
      }
      else {
        puVar27 = (ulong *)(lVar22 + uVar18 * 0x60);
        plVar17 = (long *)(lVar22 + uVar18 * 0x60 + 8);
        pcVar29 = (char *)*puVar27;
        uVar19 = *plVar17 - (long)pcVar29;
        if (uVar19 < uVar21) {
          FUN_00f9e194(puVar27,uVar21 - uVar19);
          pcVar29 = (char *)*puVar27;
        }
        else if (uVar19 != uVar21) {
          *plVar17 = (long)(pcVar29 + uVar21);
        }
        lVar10 = *plVar9;
        puVar25 = (uint *)(lVar10 + (ulong)(uint)(iVar7 * (int)uVar18) * 4);
        snprintf(pcVar29,9,"%08X",(ulong)*puVar25);
        pcVar29[8] = '_';
        if (iVar7 != 1) {
          snprintf(pcVar29 + 9,9,"%08X",(ulong)puVar25[1]);
          pcVar29[0x11] = '_';
          if (iVar7 != 2) {
            snprintf(pcVar29 + 0x12,9,"%08X",(ulong)puVar25[2]);
            pcVar29[0x1a] = '_';
            if (iVar7 != 3) {
              pcVar29 = pcVar29 + 0x1b;
              puVar25 = (uint *)(lVar10 + uVar16 * 4 + 0xc);
              lVar10 = (ulong)uVar3 - 3;
              do {
                snprintf(pcVar29,9,"%08X",(ulong)*puVar25);
                pcVar29[8] = '_';
                lVar10 = lVar10 + -1;
                pcVar29 = pcVar29 + 9;
                puVar25 = puVar25 + 1;
              } while (lVar10 != 0);
            }
          }
        }
        *(undefined1 *)(*puVar27 + (ulong)((int)uVar21 - 1)) = 0;
        local_a8 = *puVar27;
        FUN_00f9dfdc(&local_80,(undefined8 *)(param_1 + 0x38),&local_a8);
        lVar10 = *(long *)(param_1 + 0x30);
        plVar17 = (long *)PTR_PTR_047d4508;
        if (local_80 != (long *)0x0) {
          plVar17 = local_80 + 7;
        }
        lVar28 = *plVar17;
        lVar11 = nn::util::BinaryFileHeader::GetFirstBlock();
        lVar10 = *(long *)(lVar10 + 0x30);
        local_78 = *(undefined8 *)(lVar10 + 8);
        uStack_70 = *(undefined8 *)(lVar10 + 0x6098);
        local_68 = lVar10 + 0x10;
        FUN_00f9a318(&local_a8,*(undefined8 *)(lVar10 + 0x6120),&local_78,lVar28,
                     *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(lVar11 + 0x20) +
                                           ((long)(uVar18 << 0x20) >> 0x1a) +
                                          *(long *)(PTR_DAT_047d1f00 +
                                                   (ulong)*(byte *)(lVar11 + 0x14) * 8)) + 0x68) + 8
                      ));
        plVar17 = local_88;
        pcVar29 = (char *)(lVar22 + uVar18 * 0x60 + 0x38);
        if (*pcVar29 == '\0') {
          if ((char)local_a8 != '\0') {
            lVar22 = lVar22 + uVar18 * 0x60;
            *(undefined8 *)(lVar22 + 0x40) = local_a0;
            *(undefined8 *)(lVar22 + 0x48) = local_98;
            *(undefined8 *)(lVar22 + 0x50) = local_90;
            local_88 = (long *)0x0;
            *(long **)(lVar22 + 0x58) = plVar17;
            *pcVar29 = '\x01';
            goto LAB_00f9da58;
          }
        }
        else {
          if ((char)local_a8 == '\0') {
            plVar17 = *(long **)(lVar22 + uVar18 * 0x60 + 0x58);
            if (plVar17 != (long *)0x0) {
              (**(code **)(*plVar17 + 0x20))();
            }
            *pcVar29 = '\0';
          }
          else {
            lVar22 = lVar22 + uVar18 * 0x60;
            plVar17 = *(long **)(lVar22 + 0x58);
            *(undefined8 *)(lVar22 + 0x40) = local_a0;
            *(undefined8 *)(lVar22 + 0x48) = local_98;
            *(undefined8 *)(lVar22 + 0x50) = local_90;
            *(undefined8 *)(lVar22 + 0x58) = 0;
            if (plVar17 != (long *)0x0) {
              (**(code **)(*plVar17 + 0x20))();
            }
            plVar17 = local_88;
            local_88 = (long *)0x0;
            *(long **)(lVar22 + 0x58) = plVar17;
          }
LAB_00f9da58:
          if ((char)local_a8 != '\0') {
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x20))();
            }
            local_a8 = local_a8 & 0xffffffffffffff00;
          }
        }
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
      }
      uVar18 = uVar18 + 1;
      uVar16 = (ulong)((int)uVar16 + uVar3);
    } while (uVar18 != uVar4);
  }
  return;
}


