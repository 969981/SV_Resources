/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b7f638; name: FUN_00b7f638
 */


void FUN_00b7f638(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  char *pcVar8;
  ulong uVar9;
  string *psVar10;
  undefined8 uVar11;
  int *piVar12;
  long lVar13;
  int *piVar14;
  byte *pbVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  string *this;
  long lVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  ushort local_78;
  undefined1 local_76;
  long local_68;
  
  puVar6 = PTR_DAT_047dabb0;
  psVar10 = (string *)*param_1;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1;
  if (*(string **)(param_2 + 0x18) == *(string **)puVar6) {
    FUN_00b6eb88();
  }
  else {
    std::string::operator=(*(string **)(param_2 + 0x18),psVar10);
  }
  psVar10 = (string *)param_1[1];
  if (((byte)*psVar10 & 1) == 0) {
    if ((byte)*psVar10 >> 1 == 0) goto LAB_00b7f6ec;
  }
  else if (*(long *)(psVar10 + 8) == 0) goto LAB_00b7f6ec;
  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 2;
  if (*(string **)(param_2 + 0x20) == *(string **)puVar6) {
    FUN_00b6eb88();
  }
  else {
    std::string::operator=(*(string **)(param_2 + 0x20),psVar10);
  }
LAB_00b7f6ec:
  if (*(int *)((long)param_1 + 0x7c) == 3) {
    FUN_00b8050c(param_2,"proto3");
  }
  puVar1 = PTR_LAB_047dabf0;
  lVar5 = tpidr_el0;
  if (0 < *(int *)(param_1 + 3)) {
    lVar18 = 0;
    do {
      psVar10 = (string *)**(undefined8 **)(param_1[4] + lVar18 * 8);
      piVar12 = *(int **)(param_2 + 0x38);
      if (piVar12 == (int *)0x0) {
        iVar7 = *(int *)(param_2 + 0x30);
        iVar17 = *(int *)(param_2 + 0x34);
LAB_00b7f794:
        if (iVar7 <= iVar17) {
          FUN_00c11f04((long *)(param_2 + 0x28),(iVar17 - iVar7) + 1);
          piVar12 = *(int **)(param_2 + 0x38);
        }
        iVar17 = *piVar12;
LAB_00b7f7b0:
        *piVar12 = iVar17 + 1;
        lVar19 = *(long *)(param_2 + 0x28);
        if (lVar19 == 0) {
          plVar24 = *(long **)(lVar5 + 0x30);
          if (plVar24 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar24 = DAT_04859430;
            *(long **)(lVar5 + 0x30) = DAT_04859430;
          }
          this = (string *)(**(code **)(*plVar24 + 0x10))(plVar24,0x18,8);
          *(undefined8 *)this = 0;
          *(undefined8 *)(this + 8) = 0;
          *(undefined8 *)(this + 0x10) = 0;
        }
        else {
          this = (string *)FUN_00c0e238(lVar19,0,0x18);
          *(undefined8 *)this = 0;
          *(undefined8 *)(this + 8) = 0;
          *(undefined8 *)(this + 0x10) = 0;
          FUN_00c0e13c(lVar19,this,puVar1);
        }
        iVar7 = *(int *)(param_2 + 0x30);
        *(int *)(param_2 + 0x30) = iVar7 + 1;
        *(string **)(*(long *)(param_2 + 0x38) + (long)iVar7 * 8 + 8) = this;
      }
      else {
        iVar7 = *(int *)(param_2 + 0x30);
        iVar17 = *piVar12;
        if (iVar17 <= iVar7) {
          if (iVar17 == *(int *)(param_2 + 0x34)) goto LAB_00b7f794;
          goto LAB_00b7f7b0;
        }
        *(int *)(param_2 + 0x30) = iVar7 + 1;
        this = *(string **)(piVar12 + (long)iVar7 * 2 + 2);
      }
      std::string::operator=(this,psVar10);
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)(param_1 + 3));
  }
  if (0 < *(int *)(param_1 + 5)) {
    lVar18 = 0;
    do {
      uVar4 = *(undefined4 *)(param_1[6] + lVar18 * 4);
      iVar7 = *(int *)(param_2 + 0x40);
      if (iVar7 == *(int *)(param_2 + 0x44)) {
        FUN_00ba867c((int *)(param_2 + 0x40),iVar7 + 1);
        iVar7 = *(int *)(param_2 + 0x40);
      }
      *(int *)(param_2 + 0x40) = iVar7 + 1;
      *(undefined4 *)(*(long *)(param_2 + 0x48) + (long)iVar7 * 4 + 8) = uVar4;
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)(param_1 + 5));
  }
  if (0 < *(int *)(param_1 + 7)) {
    lVar18 = 0;
    do {
      uVar4 = *(undefined4 *)(param_1[8] + lVar18 * 4);
      iVar7 = *(int *)(param_2 + 0x50);
      if (iVar7 == *(int *)(param_2 + 0x54)) {
        FUN_00ba867c((int *)(param_2 + 0x50),iVar7 + 1);
        iVar7 = *(int *)(param_2 + 0x50);
      }
      *(int *)(param_2 + 0x50) = iVar7 + 1;
      *(undefined4 *)(*(long *)(param_2 + 0x58) + (long)iVar7 * 4 + 8) = uVar4;
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)(param_1 + 7));
  }
  if (0 < *(int *)(param_1 + 9)) {
    lVar19 = 0;
    lVar18 = 0;
    do {
      lVar13 = param_1[10];
      piVar12 = *(int **)(param_2 + 0x70);
      if (piVar12 == (int *)0x0) {
        iVar7 = *(int *)(param_2 + 0x68);
        iVar17 = *(int *)(param_2 + 0x6c);
LAB_00b7f9d8:
        if (iVar7 <= iVar17) {
          FUN_00c11f04(param_2 + 0x60,(iVar17 - iVar7) + 1);
          piVar12 = *(int **)(param_2 + 0x70);
        }
        iVar17 = *piVar12;
LAB_00b7f9f4:
        *piVar12 = iVar17 + 1;
        uVar11 = FUN_00ba8784(0,*(undefined8 *)(param_2 + 0x60));
        iVar7 = *(int *)(param_2 + 0x68);
        *(int *)(param_2 + 0x68) = iVar7 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x70) + (long)iVar7 * 8 + 8) = uVar11;
      }
      else {
        iVar7 = *(int *)(param_2 + 0x68);
        iVar17 = *piVar12;
        if (iVar17 <= iVar7) {
          if (iVar17 == *(int *)(param_2 + 0x6c)) goto LAB_00b7f9d8;
          goto LAB_00b7f9f4;
        }
        *(int *)(param_2 + 0x68) = iVar7 + 1;
        uVar11 = *(undefined8 *)(piVar12 + (long)iVar7 * 2 + 2);
      }
      FUN_00b80768(lVar13 + lVar19,uVar11);
      lVar18 = lVar18 + 1;
      lVar19 = lVar19 + 0xa8;
    } while (lVar18 < *(int *)(param_1 + 9));
  }
  if (0 < *(int *)(param_1 + 0xb)) {
    lVar19 = 0;
    lVar18 = 0;
    do {
      lVar13 = param_1[0xc];
      piVar12 = *(int **)(param_2 + 0x88);
      if (piVar12 == (int *)0x0) {
        iVar7 = *(int *)(param_2 + 0x80);
        iVar17 = *(int *)(param_2 + 0x84);
LAB_00b7faa4:
        if (iVar7 <= iVar17) {
          FUN_00c11f04(param_2 + 0x78,(iVar17 - iVar7) + 1);
          piVar12 = *(int **)(param_2 + 0x88);
        }
        iVar17 = *piVar12;
LAB_00b7fac0:
        *piVar12 = iVar17 + 1;
        uVar11 = FUN_00ba888c(0,*(undefined8 *)(param_2 + 0x78));
        iVar7 = *(int *)(param_2 + 0x80);
        *(int *)(param_2 + 0x80) = iVar7 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0x88) + (long)iVar7 * 8 + 8) = uVar11;
      }
      else {
        iVar7 = *(int *)(param_2 + 0x80);
        iVar17 = *piVar12;
        if (iVar17 <= iVar7) {
          if (iVar17 == *(int *)(param_2 + 0x84)) goto LAB_00b7faa4;
          goto LAB_00b7fac0;
        }
        *(int *)(param_2 + 0x80) = iVar7 + 1;
        uVar11 = *(undefined8 *)(piVar12 + (long)iVar7 * 2 + 2);
      }
      FUN_00b811f8(lVar13 + lVar19,uVar11);
      lVar18 = lVar18 + 1;
      lVar19 = lVar19 + 0x38;
    } while (lVar18 < *(int *)(param_1 + 0xb));
  }
  if (0 < *(int *)(param_1 + 0xd)) {
    puVar1 = PTR_DAT_047dabf8 + 0x10;
    lVar18 = 0;
    puVar2 = PTR_DAT_047dac00 + 0x10;
    do {
      lVar19 = param_1[0xe];
      piVar12 = *(int **)(param_2 + 0xa0);
      if (piVar12 == (int *)0x0) {
        iVar7 = *(int *)(param_2 + 0x98);
        iVar17 = *(int *)(param_2 + 0x9c);
LAB_00b7fb90:
        if (iVar7 <= iVar17) {
          FUN_00c11f04(param_2 + 0x90,(iVar17 - iVar7) + 1);
          piVar12 = *(int **)(param_2 + 0xa0);
        }
        iVar17 = *piVar12;
LAB_00b7fbac:
        *piVar12 = iVar17 + 1;
        lVar13 = FUN_00ba898c(0,*(undefined8 *)(param_2 + 0x90));
        iVar7 = *(int *)(param_2 + 0x98);
        *(int *)(param_2 + 0x98) = iVar7 + 1;
        *(long *)(*(long *)(param_2 + 0xa0) + (long)iVar7 * 8 + 8) = lVar13;
      }
      else {
        iVar7 = *(int *)(param_2 + 0x98);
        iVar17 = *piVar12;
        if (iVar17 <= iVar7) {
          if (iVar17 == *(int *)(param_2 + 0x9c)) goto LAB_00b7fb90;
          goto LAB_00b7fbac;
        }
        *(int *)(param_2 + 0x98) = iVar7 + 1;
        lVar13 = *(long *)(piVar12 + (long)iVar7 * 2 + 2);
      }
      psVar10 = *(string **)(lVar19 + lVar18 * 0x30);
      *(uint *)(lVar13 + 0x10) = *(uint *)(lVar13 + 0x10) | 1;
      if (*(string **)(lVar13 + 0x18) == *(string **)puVar6) {
        FUN_00b6eb88();
      }
      else {
        std::string::operator=(*(string **)(lVar13 + 0x18),psVar10);
      }
      piVar12 = (int *)(lVar19 + lVar18 * 0x30 + 0x20);
      if (0 < *piVar12) {
        lVar22 = 0;
        lVar20 = 0;
        do {
          lVar21 = *(long *)(lVar19 + lVar18 * 0x30 + 0x28);
          piVar14 = *(int **)(lVar13 + 0x30);
          if (piVar14 == (int *)0x0) {
            iVar7 = *(int *)(lVar13 + 0x28);
            iVar17 = *(int *)(lVar13 + 0x2c);
LAB_00b7fc90:
            if (iVar7 <= iVar17) {
              FUN_00c11f04(lVar13 + 0x20,(iVar17 - iVar7) + 1);
              piVar14 = *(int **)(lVar13 + 0x30);
            }
            iVar17 = *piVar14;
LAB_00b7fcac:
            *piVar14 = iVar17 + 1;
            lVar23 = FUN_00ba916c(0,*(undefined8 *)(lVar13 + 0x20));
            iVar7 = *(int *)(lVar13 + 0x28);
            *(int *)(lVar13 + 0x28) = iVar7 + 1;
            *(long *)(*(long *)(lVar13 + 0x30) + (long)iVar7 * 8 + 8) = lVar23;
          }
          else {
            iVar7 = *(int *)(lVar13 + 0x28);
            iVar17 = *piVar14;
            if (iVar17 <= iVar7) {
              if (iVar17 == *(int *)(lVar13 + 0x2c)) goto LAB_00b7fc90;
              goto LAB_00b7fcac;
            }
            *(int *)(lVar13 + 0x28) = iVar7 + 1;
            lVar23 = *(long *)(piVar14 + (long)iVar7 * 2 + 2);
          }
          psVar10 = *(string **)(lVar21 + lVar22);
          *(uint *)(lVar23 + 0x10) = *(uint *)(lVar23 + 0x10) | 1;
          if (*(string **)(lVar23 + 0x18) == *(string **)puVar6) {
            FUN_00b6eb88();
          }
          else {
            std::string::operator=(*(string **)(lVar23 + 0x18),psVar10);
          }
          lVar21 = lVar21 + lVar22;
          if (*(char *)(*(long *)(lVar21 + 0x18) + 0x29) == '\0') {
            *(uint *)(lVar23 + 0x10) = *(uint *)(lVar23 + 0x10) | 2;
            local_78 = 0x2e02;
            local_76 = 0;
            if (*(string **)(lVar23 + 0x20) == *(string **)puVar6) {
              FUN_00b6eb88();
            }
            else {
              std::string::operator=(*(string **)(lVar23 + 0x20),(string *)&local_78);
            }
            lVar16 = local_68;
            if (((local_78 & 1) != 0) && (local_68 != 0)) {
              plVar24 = *(long **)(lVar5 + 0x30);
              if (plVar24 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar24 = DAT_04859430;
                *(long **)(lVar5 + 0x30) = DAT_04859430;
              }
              uVar9 = (**(code **)(*plVar24 + 0xf8))(plVar24);
              if (((uVar9 & 1) == 0) || (lVar25 = FUN_00c4e600(), *(int *)(lVar25 + 0x12c8) < 1)) {
                (**(code **)(*plVar24 + 0x18))(plVar24,lVar16,0,8);
              }
              else {
                FUN_00c48fe8(plVar24,lVar16,0,8);
              }
            }
          }
          plVar24 = (long *)(lVar23 + 0x20);
          pcVar8 = (char *)*plVar24;
          *(uint *)(lVar23 + 0x10) = *(uint *)(lVar23 + 0x10) | 2;
          if (pcVar8 == *(char **)puVar6) {
            FUN_00b6eb88(plVar24);
            pcVar8 = (char *)*plVar24;
          }
          pbVar15 = *(byte **)(*(long *)(lVar21 + 0x18) + 8);
          pbVar3 = *(byte **)(pbVar15 + 0x10);
          if ((*pbVar15 & 1) == 0) {
            pbVar3 = pbVar15 + 1;
          }
          std::string::append(pcVar8,(ulong)pbVar3);
          if (*(char *)(*(long *)(lVar21 + 0x20) + 0x29) == '\0') {
            *(uint *)(lVar23 + 0x10) = *(uint *)(lVar23 + 0x10) | 4;
            local_78 = 0x2e02;
            local_76 = 0;
            if (*(string **)(lVar23 + 0x28) == *(string **)puVar6) {
              FUN_00b6eb88();
            }
            else {
              std::string::operator=(*(string **)(lVar23 + 0x28),(string *)&local_78);
            }
            lVar16 = local_68;
            if (((local_78 & 1) != 0) && (local_68 != 0)) {
              plVar24 = *(long **)(lVar5 + 0x30);
              if (plVar24 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar24 = DAT_04859430;
                *(long **)(lVar5 + 0x30) = DAT_04859430;
              }
              uVar9 = (**(code **)(*plVar24 + 0xf8))(plVar24);
              if (((uVar9 & 1) == 0) || (lVar25 = FUN_00c4e600(), *(int *)(lVar25 + 0x12c8) < 1)) {
                (**(code **)(*plVar24 + 0x18))(plVar24,lVar16,0,8);
              }
              else {
                FUN_00c48fe8(plVar24,lVar16,0,8);
              }
            }
          }
          plVar24 = (long *)(lVar23 + 0x28);
          pcVar8 = (char *)*plVar24;
          *(uint *)(lVar23 + 0x10) = *(uint *)(lVar23 + 0x10) | 4;
          if (pcVar8 == *(char **)puVar6) {
            FUN_00b6eb88(plVar24);
            pcVar8 = (char *)*plVar24;
          }
          pbVar15 = *(byte **)(*(long *)(lVar21 + 0x20) + 8);
          pbVar3 = *(byte **)(pbVar15 + 0x10);
          if ((*pbVar15 & 1) == 0) {
            pbVar3 = pbVar15 + 1;
          }
          std::string::append(pcVar8,(ulong)pbVar3);
          lVar25 = *(long *)(lVar21 + 0x28);
          lVar16 = *(long *)PTR_DAT_047dac08;
          if (lVar16 == 0) {
            FUN_00bb5d70();
            lVar16 = *(long *)PTR_DAT_047dac08;
          }
          if (lVar25 != lVar16) {
            plVar24 = *(long **)(lVar23 + 0x30);
            *(uint *)(lVar23 + 0x10) = *(uint *)(lVar23 + 0x10) | 8;
            if (plVar24 == (long *)0x0) {
              plVar24 = *(long **)(lVar5 + 0x30);
              if (plVar24 == (long *)0x0) {
                if (((DAT_04859438 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
                  DAT_04859430 = DAT_04859418;
                  __cxa_guard_release(&DAT_04859438);
                }
                plVar24 = DAT_04859430;
                *(long **)(lVar5 + 0x30) = DAT_04859430;
              }
              plVar24 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0x58,8);
              plVar24[3] = 0;
              plVar24[4] = 0;
              plVar24[2] = 0;
              *plVar24 = (long)puVar1;
              plVar24[1] = (long)(plVar24 + 2);
              plVar24[9] = 0;
              *(undefined1 *)(plVar24 + 10) = 0;
              plVar24[5] = 0;
              plVar24[6] = 0;
              plVar24[7] = 0;
              plVar24[8] = 0;
              *(long **)(lVar23 + 0x30) = plVar24;
            }
            plVar26 = *(long **)(lVar21 + 0x28);
            if (plVar26 != plVar24) {
              (**(code **)(*plVar24 + 0x38))(plVar24);
              FUN_00bcee88(plVar24,plVar26);
            }
          }
          if (*(char *)(lVar21 + 0x30) != '\0') {
            *(uint *)(lVar23 + 0x10) = *(uint *)(lVar23 + 0x10) | 0x10;
            *(undefined1 *)(lVar23 + 0x38) = 1;
          }
          if (*(char *)(lVar21 + 0x31) != '\0') {
            *(uint *)(lVar23 + 0x10) = *(uint *)(lVar23 + 0x10) | 0x20;
            *(undefined1 *)(lVar23 + 0x39) = 1;
          }
          lVar20 = lVar20 + 1;
          lVar22 = lVar22 + 0x38;
        } while (lVar20 < *piVar12);
      }
      plVar24 = (long *)(lVar19 + lVar18 * 0x30 + 0x18);
      lVar20 = *plVar24;
      lVar19 = *(long *)PTR_DAT_047dac10;
      if (lVar19 == 0) {
        FUN_00bb5d70();
        lVar19 = *(long *)PTR_DAT_047dac10;
      }
      if (lVar20 != lVar19) {
        plVar26 = *(long **)(lVar13 + 0x38);
        *(uint *)(lVar13 + 0x10) = *(uint *)(lVar13 + 0x10) | 4;
        if (plVar26 == (long *)0x0) {
          plVar26 = *(long **)(lVar5 + 0x30);
          if (plVar26 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar26 = DAT_04859430;
            *(long **)(lVar5 + 0x30) = DAT_04859430;
          }
          plVar26 = (long *)(**(code **)(*plVar26 + 0x10))(plVar26,0x58,8);
          plVar26[3] = 0;
          plVar26[4] = 0;
          plVar26[2] = 0;
          *plVar26 = (long)puVar2;
          plVar26[1] = (long)(plVar26 + 2);
          plVar26[9] = 0;
          *(undefined1 *)(plVar26 + 10) = 0;
          plVar26[5] = 0;
          plVar26[6] = 0;
          plVar26[7] = 0;
          plVar26[8] = 0;
          *(long **)(lVar13 + 0x38) = plVar26;
        }
        plVar24 = (long *)*plVar24;
        if (plVar24 != plVar26) {
          (**(code **)(*plVar26 + 0x38))(plVar26);
          FUN_00bccb94(plVar26,plVar24);
        }
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)(param_1 + 0xd));
  }
  if (0 < *(int *)(param_1 + 0xf)) {
    lVar19 = 0;
    lVar18 = 0;
    do {
      lVar13 = param_1[0x11];
      piVar12 = *(int **)(param_2 + 0xb8);
      if (piVar12 == (int *)0x0) {
        iVar7 = *(int *)(param_2 + 0xb0);
        iVar17 = *(int *)(param_2 + 0xb4);
LAB_00b80360:
        if (iVar7 <= iVar17) {
          FUN_00c11f04(param_2 + 0xa8,(iVar17 - iVar7) + 1);
          piVar12 = *(int **)(param_2 + 0xb8);
        }
        iVar17 = *piVar12;
LAB_00b8037c:
        *piVar12 = iVar17 + 1;
        uVar11 = FUN_00ba8a8c(0,*(undefined8 *)(param_2 + 0xa8));
        iVar7 = *(int *)(param_2 + 0xb0);
        *(int *)(param_2 + 0xb0) = iVar7 + 1;
        *(undefined8 *)(*(long *)(param_2 + 0xb8) + (long)iVar7 * 8 + 8) = uVar11;
      }
      else {
        iVar7 = *(int *)(param_2 + 0xb0);
        iVar17 = *piVar12;
        if (iVar17 <= iVar7) {
          if (iVar17 == *(int *)(param_2 + 0xb4)) goto LAB_00b80360;
          goto LAB_00b8037c;
        }
        *(int *)(param_2 + 0xb0) = iVar7 + 1;
        uVar11 = *(undefined8 *)(piVar12 + (long)iVar7 * 2 + 2);
      }
      FUN_00b8160c(lVar13 + lVar19,uVar11);
      lVar18 = lVar18 + 1;
      lVar19 = lVar19 + 0x90;
    } while (lVar18 < *(int *)(param_1 + 0xf));
  }
  puVar6 = PTR_DAT_047dac18;
  lVar19 = param_1[0x12];
  lVar18 = *(long *)PTR_DAT_047dac18;
  if (lVar18 == 0) {
    FUN_00bb5d70();
    lVar18 = *(long *)puVar6;
  }
  if (lVar19 != lVar18) {
    plVar24 = *(long **)(param_2 + 0xc0);
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x200;
    if (plVar24 == (long *)0x0) {
      plVar24 = *(long **)(lVar5 + 0x30);
      if (plVar24 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar24 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      plVar24 = (long *)(**(code **)(*plVar24 + 0x10))(plVar24,0x88,8);
      FUN_00bcf2c4();
      *(long **)(param_2 + 0xc0) = plVar24;
    }
    plVar26 = (long *)param_1[0x12];
    if (plVar26 != plVar24) {
      (**(code **)(*plVar24 + 0x38))(plVar24);
      FUN_00bbd238(plVar24,plVar26);
      return;
    }
  }
  return;
}


