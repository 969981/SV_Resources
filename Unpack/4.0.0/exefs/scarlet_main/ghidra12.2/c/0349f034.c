/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0349f034; name: FUN_0349f034
 */


uint FUN_0349f034(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  byte bVar17;
  uint local_68;
  uint uStack_64;
  
  uVar14 = *(uint *)PTR_DAT_047e6fc0;
  if ((int)uVar14 < 1) {
    uVar14 = 0x15;
    *(undefined4 *)PTR_DAT_047e6fc0 = 0x15;
  }
  uVar4 = 0;
  if (uVar14 != 0) {
    uVar4 = 1000 / uVar14;
  }
  uVar14 = *(uint *)(*(long *)PTR_DAT_047e2fe8 + 0x78);
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = uVar14 / uVar4;
  }
  uVar3 = *(ushort *)(PTR_DAT_047e6c18 + 0xa4);
  if ((DAT_048b0104 == 0) && ((DAT_048b0100 & 0xfffffffd) == 1)) {
    FUN_034a03f8(DAT_048b0100 == 1,DAT_047c3898,0);
  }
  pcVar7 = DAT_048b0140;
  lVar15 = DAT_048b0118;
  if ((DAT_048afef0 != DAT_048afeec) && (DAT_048b0118 != 0)) {
    DAT_048afef0 = DAT_048afeec;
    if (DAT_048b0140 != (code *)0x0) {
      if (((DAT_048afc00 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_048afc00), iVar11 != 0)) {
        DAT_048afbf8 = PTR_DAT_047e6ff0 + 0x10;
        __cxa_guard_release(&DAT_048afc00);
      }
      (*pcVar7)(&DAT_048afbf8,*(undefined4 *)(lVar15 + 0x80),*(undefined4 *)(lVar15 + 0x84),2,1);
    }
    FUN_0349afcc(lVar15,0);
    if ((*(int *)(lVar15 + 0x468) != 2) &&
       (*(undefined4 *)(lVar15 + 0x468) = 2, *PTR_DAT_047e7258 != '\0')) {
      nn::os::SignalEvent((EventType *)PTR_DAT_047e6fe8);
    }
  }
  cVar6 = DAT_048afef4;
  puVar1 = PTR_DAT_047e7258;
  puVar2 = PTR_DAT_047e6980;
  local_68 = 0xffffffff;
  uStack_64 = 0;
  if (DAT_048b0118 == 0) {
    DAT_048afef4 = 1;
  }
  else {
    if (uVar14 - uVar5 * uVar4 < (uint)uVar3 || (param_1 & 1) != 0) {
      iVar11 = 0;
      bVar17 = 1;
      puVar1 = PTR_DAT_047e6ff0 + 0x10;
      lVar15 = DAT_048b0118;
      do {
        plVar12 = *(long **)(lVar15 + 0x3f0);
        if (plVar12 == (long *)0x0) {
LAB_0349f278:
          iVar10 = 2;
        }
        else {
          iVar10 = *(int *)(lVar15 + 0x468);
          if (DAT_048b0100 < 2) {
            bVar8 = iVar10 != 1;
            iVar10 = 1;
            if (bVar8) {
              iVar10 = 2;
            }
            iVar9 = (**(code **)(*plVar12 + 0x40))(plVar12,&uStack_64);
            pcVar7 = DAT_048b0140;
            if (iVar9 == 2) {
              if (DAT_048b0140 != (code *)0x0) {
                if (((DAT_048afc00 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(&DAT_048afc00), iVar10 != 0)) {
                  DAT_048afbf8 = PTR_DAT_047e6ff0 + 0x10;
                  __cxa_guard_release(&DAT_048afc00);
                }
                (*pcVar7)(&DAT_048afbf8,*(undefined4 *)(lVar15 + 0x80),
                          *(undefined4 *)(lVar15 + 0x84),2,1);
              }
              FUN_0349afcc(lVar15,0);
              iVar10 = 2;
              if ((*(int *)(lVar15 + 0x468) != 2) &&
                 (*(undefined4 *)(lVar15 + 0x468) = 2, *PTR_DAT_047e7258 != '\0')) {
                nn::os::SignalEvent((EventType *)PTR_DAT_047e6fe8);
                goto LAB_0349f278;
              }
            }
          }
        }
        if ((*(char *)(lVar15 + 0x46d) == '\0') || (*(int *)(lVar15 + 0x468) == 0)) {
          bVar8 = true;
        }
        else {
          bVar8 = *(int *)(lVar15 + 0x30) == 0xb50007;
        }
        if (iVar10 == 1) {
LAB_0349f33c:
          if ((!bVar8) && (uStack_64 <= local_68)) {
            local_68 = uStack_64;
          }
          bVar17 = bVar17 & bVar8;
        }
        else if (iVar10 == 2) {
          if (*puVar2 == '\0') {
            iVar10 = FUN_0349cd08(lVar15);
          }
          else {
            iVar10 = FUN_0349afcc(lVar15,1);
          }
          pcVar7 = DAT_048b0140;
          if (iVar10 == 1) {
            if (DAT_048b0140 != (code *)0x0) {
              if (((DAT_048afc00 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(&DAT_048afc00), iVar10 != 0)) {
                DAT_048afbf8 = puVar1;
                __cxa_guard_release(&DAT_048afc00);
              }
              (*pcVar7)(&DAT_048afbf8,*(undefined4 *)(lVar15 + 0x80),*(undefined4 *)(lVar15 + 0x84),
                        0,1);
            }
            lVar16 = *(long *)PTR_DAT_047e2fe8;
            uVar13 = nn::os::GetSystemTick();
            *(undefined8 *)(lVar16 + 0x88) = uVar13;
            iVar11 = iVar11 + 1;
            iVar10 = (**(code **)(**(long **)(lVar15 + 0x3f0) + 0x40))
                               (*(long **)(lVar15 + 0x3f0),&uStack_64);
            if (iVar10 == 1) goto LAB_0349f33c;
          }
          else {
            (**(code **)(*(long *)(lVar15 + 0x150) + 0x28))(lVar15 + 0x150);
            (**(code **)(*(long *)(lVar15 + 0x1b8) + 0x28))(lVar15 + 0x1b8);
            (**(code **)(*(long *)(lVar15 + 0x220) + 0x28))(lVar15 + 0x220);
            (**(code **)(*(long *)(lVar15 + 0x288) + 0x28))(lVar15 + 0x288);
            FUN_0349afcc(lVar15,0);
            iVar11 = iVar11 + 1;
          }
        }
        lVar15 = *(long *)(lVar15 + 0x20);
      } while (lVar15 != 0);
    }
    else {
      puVar2 = PTR_DAT_047e6ff0 + 0x10;
      bVar17 = 1;
      lVar15 = DAT_048b0118;
      do {
        plVar12 = *(long **)(lVar15 + 0x3f0);
        if (plVar12 == (long *)0x0) {
LAB_0349f4e4:
          iVar11 = 2;
        }
        else {
          iVar11 = *(int *)(lVar15 + 0x468);
          if (DAT_048b0100 < 2) {
            bVar8 = iVar11 != 1;
            iVar11 = 1;
            if (bVar8) {
              iVar11 = 2;
            }
            iVar10 = (**(code **)(*plVar12 + 0x40))(plVar12,&uStack_64);
            pcVar7 = DAT_048b0140;
            if (iVar10 == 2) {
              if (DAT_048b0140 != (code *)0x0) {
                if (((DAT_048afc00 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(&DAT_048afc00), iVar11 != 0)) {
                  DAT_048afbf8 = puVar2;
                  __cxa_guard_release(&DAT_048afc00);
                }
                (*pcVar7)(&DAT_048afbf8,*(undefined4 *)(lVar15 + 0x80),
                          *(undefined4 *)(lVar15 + 0x84),2,1);
              }
              FUN_0349afcc(lVar15,0);
              iVar11 = 2;
              if ((*(int *)(lVar15 + 0x468) != 2) &&
                 (*(undefined4 *)(lVar15 + 0x468) = 2, *puVar1 != '\0')) {
                nn::os::SignalEvent((EventType *)PTR_DAT_047e6fe8);
                goto LAB_0349f4e4;
              }
            }
          }
        }
        if ((*(char *)(lVar15 + 0x46d) == '\0') || (*(int *)(lVar15 + 0x468) == 0)) {
          bVar8 = true;
        }
        else {
          bVar8 = *(int *)(lVar15 + 0x30) == 0xb50007;
        }
        if (iVar11 == 1) {
          if ((bVar8 == false) && (uStack_64 <= local_68)) {
            local_68 = uStack_64;
          }
          bVar17 = bVar17 & bVar8;
        }
        lVar15 = *(long *)(lVar15 + 0x20);
      } while (lVar15 != 0);
      iVar11 = 0;
    }
    DAT_048afef4 = bVar17;
    if (DAT_048b0108 != 0) {
      if (bVar17 == 0) {
        if ((cVar6 != '\0') && (DAT_048b0100 == 0)) {
          (**(code **)(**(long **)(DAT_048b0118 + 0x3f0) + 0x40))
                    (*(long **)(DAT_048b0118 + 0x3f0),&local_68);
        }
      }
      else {
        plVar12 = *(long **)(DAT_048b0118 + 0x3f0);
        if ((plVar12 == (long *)0x0) ||
           (iVar10 = (**(code **)(*plVar12 + 0x40))(plVar12,&local_68), iVar10 != 1)) {
          DAT_048afef0 = DAT_048afef0 + -1;
          return 0;
        }
        if (cVar6 == '\0') {
          if (DAT_048b0118 == 0) {
            DAT_048afef4 = true;
          }
          else {
            lVar15 = DAT_048b0118;
            iVar10 = 1;
            do {
              iVar9 = FUN_0349afcc(lVar15,0);
              lVar15 = *(long *)(lVar15 + 0x20);
              if (iVar9 == 1 || iVar10 != 1) {
                iVar9 = iVar10;
              }
              iVar10 = iVar9;
            } while (lVar15 != 0);
            DAT_048afef4 = iVar9 == 1;
          }
          if (*(int *)PTR_DAT_047e7008 != 2) {
            *(undefined4 *)PTR_DAT_047e7008 = 1;
          }
          DAT_047c3898 = 1;
          nn::os::SignalEvent((EventType *)&DAT_048b00d8);
          local_68 = 0;
        }
      }
      if ((iVar11 != 0) && (*(int *)PTR_DAT_047e7008 != 2)) {
        *(int *)PTR_DAT_047e7008 = 1;
      }
      if (local_68 == 0) {
        return 0;
      }
      uVar14 = *(uint *)PTR_DAT_047e6fc0;
      iVar11 = DAT_048b0104 - uVar14 * local_68;
      if (uVar14 * local_68 <= DAT_048b0104 && iVar11 != 0) {
        DAT_048b0104 = iVar11;
        return local_68;
      }
      if ((DAT_048b0100 & 0xfffffffd) != 1) {
        return local_68;
      }
      if (DAT_048b0100 == 1) {
        local_68 = 0;
        if (uVar14 != 0) {
          local_68 = DAT_048b0104 / uVar14;
        }
        if (local_68 < 2) {
          local_68 = 1;
        }
      }
      DAT_048b0104 = 0;
      return local_68;
    }
  }
  return 0;
}


