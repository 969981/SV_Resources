/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0126736c; name: FUN_0126736c
 */


void FUN_0126736c(long param_1,undefined8 param_2,undefined4 param_3,ulong param_4)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  size_t __n;
  bool bVar4;
  int iVar5;
  undefined1 uVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong *__dest;
  ushort uVar13;
  ushort uVar14;
  undefined8 uVar15;
  long *local_b8 [4];
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  undefined1 local_70;
  undefined1 local_64 [4];
  
  local_98 = param_4;
  FUN_01267a34(local_b8,param_2,param_3);
  plVar12 = local_b8[0];
  if (local_b8[0] == (long *)0x0) goto LAB_01267754;
  lVar8 = local_b8[0][2];
  bVar2 = *(byte *)(*local_b8[0] + lVar8);
  local_b8[0][2] = lVar8 + 1;
  if (0x80 < bVar2) goto LAB_01267754;
  if (bVar2 == 0x80) {
    bVar2 = *(byte *)(*local_b8[0] + lVar8 + 1);
    local_b8[0][2] = lVar8 + 2;
  }
  if (bVar2 == 1) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x40));
    lVar10 = *plVar12;
    lVar9 = plVar12[2];
    lVar8 = lVar9 + 1;
    bVar2 = *(byte *)(lVar10 + lVar9);
    uVar13 = (ushort)bVar2;
    plVar12[2] = lVar8;
    if (bVar2 < 0x82) {
      if (bVar2 == 0x80) {
        uVar13 = (ushort)*(byte *)(lVar10 + lVar8);
        lVar9 = lVar9 + 2;
LAB_012677b8:
        plVar12[2] = lVar9;
      }
      else if (bVar2 == 0x81) {
        uVar13 = *(ushort *)(lVar10 + lVar8);
        lVar9 = lVar9 + 3;
        goto LAB_012677b8;
      }
      if (uVar13 != 0) {
        uVar14 = 0;
        do {
          local_78 = 0;
          if (plVar12 != (long *)0x0) {
            FUN_01267904(&local_90,&local_78,plVar12);
            uVar11 = local_98;
            if ((int)local_90 == 0) {
              puVar7 = *(ulong **)(param_1 + 0x70);
              puVar1 = *(ulong **)(param_1 + 0x78);
              if (puVar7 == puVar1) {
LAB_01267718:
                if (puVar7 == puVar1) goto LAB_01267618;
                if (puVar7[2] == local_98) {
                  *(short *)(puVar7 + 1) = (short)puVar7[1] + 1;
                  goto LAB_0126768c;
                }
                uVar6 = 0;
                local_80 = local_98;
              }
              else {
                do {
                  if (*puVar7 == local_78) goto LAB_01267718;
                  puVar7 = puVar7 + 3;
                } while (puVar1 != puVar7);
LAB_01267618:
                local_88 = CONCAT62(local_88._2_6_,1);
                local_80 = local_98;
                local_90 = local_78;
                if (puVar1 < *(ulong **)(param_1 + 0x80)) {
                  uVar15 = *(undefined8 *)(param_1 + 0x88);
                  if (((DAT_04865a38 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
                    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                    __cxa_guard_release(&DAT_04865a38);
                  }
                  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
                  if (lVar8 == 0) {
                    puVar1[1] = local_88;
                    puVar1[2] = local_80;
                    *puVar1 = local_90;
                  }
                  else {
                    if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_01267900;
                    *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar15;
                    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
                    *puVar1 = local_90;
                    puVar1[1] = local_88;
                    puVar1[2] = local_80;
                    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
                  }
                  *(ulong **)(param_1 + 0x78) = puVar1 + 3;
                  uVar11 = local_98;
                }
                else {
                  FUN_012680d0(param_1 + 0x70,&local_90);
                }
LAB_0126768c:
                uVar6 = 1;
                local_80 = uVar11;
              }
              local_90 = local_78;
              local_88 = CONCAT71(local_88._1_7_,uVar6);
              puVar7 = *(ulong **)(param_1 + 0xb0);
              if (puVar7 < *(ulong **)(param_1 + 0xb8)) {
                uVar15 = *(undefined8 *)(param_1 + 0xc0);
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar8 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar8 == 0) {
                  puVar7[1] = local_88;
                  puVar7[2] = local_80;
                  *puVar7 = local_90;
                }
                else {
                  if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_01267900:
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar15;
                  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
                  *puVar7 = local_90;
                  puVar7[1] = local_88;
                  puVar7[2] = local_80;
                  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
                }
                *(ulong **)(param_1 + 0xb0) = puVar7 + 3;
              }
              else {
                FUN_01268590(param_1 + 0xa8,&local_90);
              }
            }
          }
          uVar14 = uVar14 + 1;
          if (uVar13 <= uVar14) break;
          plVar12 = local_b8[0];
        } while( true );
      }
    }
  }
  else {
    if (bVar2 != 3) {
      if (bVar2 == 2) {
        FUN_01267f08(param_1,local_b8,&local_98);
      }
      goto LAB_01267754;
    }
    nn::os::LockMutex((MutexType *)(param_1 + 0x40));
    lVar9 = *local_b8[0];
    lVar10 = local_b8[0][2];
    lVar8 = lVar10 + 1;
    bVar2 = *(byte *)(lVar9 + lVar10);
    uVar13 = (ushort)bVar2;
    local_b8[0][2] = lVar8;
    if (0x81 < bVar2) goto LAB_01267750;
    if (bVar2 == 0x80) {
      uVar13 = (ushort)*(byte *)(lVar9 + lVar8);
      lVar8 = lVar10 + 2;
LAB_012677d4:
      local_b8[0][2] = lVar8;
    }
    else if (bVar2 == 0x81) {
      uVar13 = *(ushort *)(lVar9 + lVar8);
      lVar8 = lVar10 + 3;
      goto LAB_012677d4;
    }
    if (uVar13 != 0) {
      uVar14 = 0;
      do {
        local_78 = 0;
        local_70 = 0;
        cVar3 = *(char *)(lVar9 + lVar8);
        local_b8[0][2] = lVar8 + 1;
        if (cVar3 == -0x47) {
          bVar2 = *(byte *)(lVar9 + lVar8 + 1);
          uVar11 = (ulong)bVar2;
          lVar10 = lVar8 + 2;
          local_b8[0][2] = lVar10;
          if (0x83 < uVar11) goto LAB_01267540;
          switch(bVar2) {
          case 0x80:
            uVar11 = (ulong)*(byte *)(lVar9 + lVar10);
            lVar8 = lVar8 + 3;
            break;
          case 0x81:
            uVar11 = (ulong)*(ushort *)(lVar9 + lVar10);
            lVar8 = lVar8 + 4;
            break;
          case 0x82:
            uVar11 = (ulong)*(uint *)(lVar9 + lVar10);
            lVar8 = lVar8 + 6;
            break;
          case 0x83:
            uVar11 = *(ulong *)(lVar9 + lVar10);
            lVar8 = lVar8 + 10;
            break;
          default:
            goto switchD_01267564_default;
          }
          local_b8[0][2] = lVar8;
switchD_01267564_default:
          if (uVar11 == 2) {
            FUN_01267904(&local_90,&local_78,local_b8[0]);
            if ((int)local_90 == 0) {
              bVar2 = *(byte *)(*local_b8[0] + local_b8[0][2]);
              local_b8[0][2] = local_b8[0][2] + 1;
              if (bVar2 < 2) {
                bVar4 = bVar2 != 0;
                puVar7 = *(ulong **)(param_1 + 0x118);
                puVar1 = *(ulong **)(param_1 + 0x120);
                __dest = puVar7;
                if (puVar7 != puVar1) {
                  do {
                    if (((char)puVar7[3] != '\0') && (__dest = puVar7, *puVar7 == local_78)) break;
                    puVar7 = puVar7 + 4;
                    __dest = puVar1;
                  } while (puVar1 != puVar7);
                }
                local_70 = bVar4;
                if (puVar1 != __dest) {
                  if (bVar2 != 0) {
                    FUN_0102321c(param_1 + 0xe0,__dest);
                  }
                  if (DAT_04839a50 != (code *)0x0) {
                    local_90 = __dest[1];
                    local_88 = __dest[2];
                    local_64[0] = bVar4;
                    (*DAT_04839a50)(&DAT_04839a70,&local_90,local_64);
                  }
                  __n = *(long *)(param_1 + 0x120) - (long)(__dest + 4);
                  if (__n != 0) {
                    memmove(__dest,__dest + 4,__n);
                  }
                  *(size_t *)(param_1 + 0x120) = (long)__dest + __n;
                }
              }
            }
            else {
              local_90 = local_90 & 0xffffffff00000000;
            }
          }
        }
LAB_01267540:
        uVar14 = uVar14 + 1;
        if (uVar13 <= uVar14) break;
        lVar9 = *local_b8[0];
        lVar8 = local_b8[0][2];
      } while( true );
    }
  }
LAB_01267750:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x40));
LAB_01267754:
  FUN_01267b4c(local_b8);
  return;
}


