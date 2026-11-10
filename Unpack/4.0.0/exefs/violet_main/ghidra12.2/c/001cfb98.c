/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001cfb98; name: FUN_001cfb98
 */


undefined8 FUN_001cfb98(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  uint *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  char *pcVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  byte local_94 [4];
  long local_90;
  int local_88;
  char local_84 [4];
  char local_80 [4];
  char local_7c [4];
  char local_78 [4];
  char local_74 [4];
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_7c[0] = '\0';
  local_80[0] = '\0';
  local_84[0] = '\0';
  if (param_4 == 0) {
    uVar13 = 2;
  }
  else {
    uVar13 = 2;
    if (*(int *)(param_4 + 0x16f0) == -0x3f212453) {
      iVar8 = 0;
      plVar1 = (long *)(param_4 + 0x10);
      puVar2 = (uint *)(param_4 + 0x60);
      local_70 = param_2;
      uStack_68 = param_3;
      do {
        if ((*plVar1 == 0) && (*puVar2 - 3 < 0xd)) {
          FUN_001db9c8(param_4,"In state %d with no conn, bail out!\n");
          return 4;
        }
        cVar3 = *(char *)(param_1 + 0xf0);
        *(undefined1 *)(param_1 + 0xf0) = 0;
        if (cVar3 != '\0') {
          FUN_001d1530(param_1);
        }
        if (((long *)*plVar1 != (long *)0x0) &&
           ((0xd < *puVar2 - 3 || (*(long *)*plVar1 = param_4, *(long *)(param_4 + 0x10) != 0)))) {
          uVar11 = *puVar2;
          if (0xe < uVar11 - 2) goto LAB_001cfc94;
          iVar5 = FUN_001c5a28(param_4,&local_70,uVar11 < 9);
          if (-1 < iVar5) goto LAB_001cfc90;
          if (*puVar2 == 4) {
            uVar6 = FUN_001e0e28(local_70,uStack_68,*(undefined8 *)(param_4 + 0x1008),
                                 *(undefined8 *)(param_4 + 0x1010));
            pcVar10 = "Connection timed out after %d milliseconds";
LAB_001d015c:
            FUN_001db9c8(param_4,pcVar10,uVar6);
          }
          else {
            if (*puVar2 == 3) {
              uVar6 = FUN_001e0e28(local_70,uStack_68,*(undefined8 *)(param_4 + 0x1008),
                                   *(undefined8 *)(param_4 + 0x1010));
              pcVar10 = "Resolving timed out after %d milliseconds";
              goto LAB_001d015c;
            }
            lVar15 = *(long *)(param_4 + 0xf0);
            uVar6 = FUN_001e0e28(local_70,uStack_68,*(undefined8 *)(param_4 + 0x1008),
                                 *(undefined8 *)(param_4 + 0x1010));
            if (lVar15 == -1) {
              FUN_001db9c8(param_4,
                           "Operation timed out after %d milliseconds with %ld bytes received",uVar6
                           ,*(undefined8 *)(param_4 + 0x100));
            }
            else {
              FUN_001db9c8(param_4,
                           "Operation timed out after %d milliseconds with %ld out of %ld bytes received"
                           ,uVar6,*(undefined8 *)(param_4 + 0x100),*(undefined8 *)(param_4 + 0xf0));
            }
          }
          bVar4 = 9 < *puVar2;
          if (bVar4) {
            FUN_001c6c60(*plVar1,2);
          }
          iVar8 = 0x1c;
          goto LAB_001d04c4;
        }
LAB_001cfc90:
        uVar11 = *puVar2;
LAB_001cfc94:
        bVar4 = false;
        iVar5 = 0;
        switch(uVar11) {
        case 0:
          iVar8 = FUN_001e2344(param_4);
          if (iVar8 != 0) {
LAB_001d0280:
            bVar4 = false;
            goto LAB_001d0840;
          }
          if (*puVar2 != 2) {
            *(undefined4 *)(param_4 + 0x60) = 2;
            FUN_001e2330(param_4);
          }
          FUN_001dac98(param_4,1);
LAB_001d0554:
          iVar8 = 0;
          goto LAB_001d055c;
        case 1:
        case 0x11:
          break;
        case 2:
          FUN_001dac98(param_4,2);
          if (*(long *)(param_4 + 0x7a8) != 0) {
            FUN_001cea34(param_4,*(long *)(param_4 + 0x7a8),8);
          }
          if (*(long *)(param_4 + 0x7b0) != 0) {
            FUN_001cea34(param_4,*(long *)(param_4 + 0x7b0),2);
          }
          iVar8 = FUN_001e56d8(param_4,local_78,local_7c);
          if (iVar8 != 0) {
            if (iVar8 != 0x59) goto LAB_001d0280;
            if (*puVar2 != 1) {
              *puVar2 = 1;
            }
            FUN_001cb588(param_1 + 0x40,*(undefined8 *)(param_1 + 0x48),param_4,param_4 + 0x18);
            goto LAB_001d0838;
          }
          iVar8 = FUN_001da1d8(param_4,*(undefined8 *)(param_4 + 0x10));
          if (iVar8 != 0) goto LAB_001cffe0;
          if (local_78[0] != '\0') {
            if (*puVar2 == 3) goto LAB_001cfe90;
            uVar11 = 3;
            goto LAB_001d0468;
          }
          if (local_7c[0] != '\0') {
            bVar4 = (*(ulong *)(param_1 + 0xe8) & 1) == 0;
            iVar8 = 8;
            goto LAB_001d0548;
          }
          uVar9 = FUN_001d21c8(*plVar1);
          if ((uVar9 & 1) == 0) {
            iVar5 = -1;
            if (*puVar2 != 4) {
              uVar11 = 4;
              goto LAB_001d0230;
            }
          }
          else {
            iVar5 = -1;
            if (*puVar2 != 5) {
              uVar11 = 5;
              goto LAB_001d0230;
            }
          }
          goto LAB_001d0a8c;
        case 3:
          local_90 = 0;
          lVar15 = *plVar1;
          if ((*(uint *)(lVar15 + 0x3fc) >> 5 & 1) == 0) {
            if ((*(uint *)(lVar15 + 0x3fc) >> 2 & 1) == 0) {
              puVar12 = (undefined8 *)(lVar15 + 0xd0);
            }
            else {
              puVar12 = (undefined8 *)(lVar15 + 0x100);
            }
          }
          else {
            puVar12 = (undefined8 *)(lVar15 + 0x160);
          }
          uVar13 = *puVar12;
          local_90 = FUN_001c90bc(lVar15,uVar13,*(undefined4 *)(lVar15 + 400));
          if (local_90 == 0) {
LAB_001d0410:
            iVar8 = FUN_001c966c(*plVar1,&local_90);
          }
          else {
            *(long *)(lVar15 + 0x520) = local_90;
            *(byte *)(lVar15 + 0x538) = *(byte *)(lVar15 + 0x538) | 1;
            FUN_001db818(param_4,"Hostname \'%s\' was found in DNS cache\n",uVar13);
            if (local_90 == 0) goto LAB_001d0410;
            iVar8 = 0;
          }
          FUN_001cf174(param_1,param_4);
          if (local_90 == 0) {
            iVar5 = 0;
            if (iVar8 == 0) goto LAB_001d081c;
          }
          else {
            iVar8 = FUN_001c9b8c(*plVar1,local_7c);
            if (iVar8 == 0) {
              if (local_7c[0] == '\0') {
                uVar9 = FUN_001d21c8(*plVar1);
                if ((uVar9 & 1) == 0) {
                  iVar5 = -1;
                  if (*puVar2 != 4) {
                    uVar11 = 4;
                    goto LAB_001d0814;
                  }
                }
                else {
                  iVar5 = -1;
                  if (*puVar2 != 5) {
                    uVar11 = 5;
LAB_001d0814:
                    *puVar2 = uVar11;
                    goto LAB_001d0818;
                  }
                }
              }
              else {
                uVar6 = 8;
                if ((*(ulong *)(param_1 + 0xe8) & 1) == 0) {
                  uVar6 = 9;
                }
                FUN_001ce9e4(param_4,uVar6);
LAB_001d0818:
                iVar5 = -1;
              }
LAB_001d081c:
              iVar8 = 0;
              bVar4 = false;
              break;
            }
            *plVar1 = 0;
          }
          goto LAB_001cffe0;
        case 4:
          iVar8 = FUN_001c5dfc(*plVar1,0,local_74);
          if ((iVar8 == 0) && (local_74[0] != '\0')) {
            if (((*(int *)(*plVar1 + 0x178) != 2) || (*(char *)(*plVar1 + 0x3f8) != '\0')) &&
               (uVar9 = FUN_001d21c8(), (uVar9 & 1) == 0)) {
              bVar4 = (*(uint *)(*(long *)(param_4 + 0x10) + 0x3fc) & 0x4000) == 0;
              iVar8 = 5;
LAB_001d0548:
              if (bVar4) {
                iVar8 = iVar8 + 1;
              }
LAB_001d054c:
              FUN_001ce9e4(param_4,iVar8);
              goto LAB_001d0554;
            }
            if (*puVar2 == 5) goto LAB_001cfe90;
            uVar11 = 5;
LAB_001d0468:
            iVar5 = 0;
            *puVar2 = uVar11;
            goto LAB_001d0a8c;
          }
LAB_001cfeb4:
          if (iVar8 == 0) goto LAB_001d0280;
          goto LAB_001d01dc;
        case 5:
          iVar8 = FUN_001d3a80(*plVar1,local_7c);
          lVar15 = *plVar1;
          if (*(char *)(lVar15 + 0x3fe) < '\0') {
            FUN_001cef34(param_4,0,0);
            iVar5 = -1;
            if (*(int *)(param_4 + 0x60) != 2) {
              *(undefined4 *)(param_4 + 0x60) = 2;
              FUN_001e2330(param_4);
              goto LAB_001d0554;
            }
          }
          else {
            if (iVar8 != 0) goto LAB_001cffe0;
            if (((*(int *)(lVar15 + 0x178) == 2) && (*(char *)(lVar15 + 0x3f8) == '\0')) ||
               (uVar9 = FUN_001d21a4(), (uVar9 & 1) == 0)) goto LAB_001d0838;
            iVar5 = -1;
            if (*puVar2 != 6) {
              uVar11 = 6;
              goto LAB_001d0230;
            }
          }
          goto LAB_001d0a8c;
        case 6:
          iVar8 = FUN_001e5244(*plVar1,local_7c);
          if ((iVar8 == 0) && (local_7c[0] == '\0')) {
            if (*puVar2 != 7) {
              uVar11 = 7;
              goto LAB_001d0468;
            }
LAB_001cfe90:
            iVar5 = 0;
            goto LAB_001d0a8c;
          }
          if (iVar8 == 0) goto LAB_001d01f4;
LAB_001d01dc:
          FUN_001e2510(param_4);
          bVar4 = true;
LAB_001d04c4:
          FUN_001cef34(param_4,iVar8,1);
LAB_001d0840:
          iVar5 = 0;
          break;
        case 7:
          iVar8 = FUN_001e51e4(*plVar1,local_7c);
          if ((local_7c[0] == '\0') || (iVar8 != 0)) goto LAB_001cfeb4;
LAB_001d01f4:
          uVar6 = 8;
          if ((*(ulong *)(param_1 + 0xe8) & 1) == 0) {
            uVar6 = 9;
          }
          FUN_001ce9e4(param_4,uVar6);
          goto LAB_001d055c;
        case 8:
          uVar9 = FUN_001da5f0(param_4,*(undefined8 *)(param_4 + 0x10));
          if ((uVar9 & 1) == 0) goto LAB_001d0280;
          if (*puVar2 == 9) goto LAB_001d070c;
          *(undefined4 *)(param_4 + 0x60) = 9;
          FUN_001d21ec(param_4);
LAB_001d055c:
          bVar4 = false;
          iVar5 = -1;
          break;
        case 9:
          plVar14 = *(long **)(param_4 + 0x10);
          if ((*(byte *)(param_4 + 0xf44) >> 6 & 1) == 0) {
            if (*(code **)(plVar14[0x84] + 0x10) != (code *)0x0) {
              iVar8 = (**(code **)(plVar14[0x84] + 0x10))(plVar14,local_80);
              if (iVar8 == 0x37) {
                if ((*(byte *)(*plVar1 + 0x3fc) >> 1 & 1) != 0) {
                  local_90 = 0;
                  iVar5 = FUN_001e27b8(*plVar1,&local_90);
                  bVar4 = iVar5 != 0;
                  iVar8 = 0x37;
                  if (bVar4) {
                    iVar8 = iVar5;
                  }
                  FUN_001e2510(param_4);
                  iVar5 = FUN_001cef34(param_4,iVar8,0);
                  if (local_90 == 0) {
                    iVar5 = 0;
                    bVar4 = true;
                  }
                  else if (((iVar5 == 0x37) || (iVar8 = iVar5, iVar5 == 0)) &&
                          (iVar8 = FUN_001e2518(param_4,local_90,2), iVar8 == 0)) {
                    if (*puVar2 != 2) {
                      *(undefined4 *)(param_4 + 0x60) = 2;
                      FUN_001e2330(param_4);
                    }
                    iVar8 = 0;
                    iVar5 = -1;
                  }
                  else {
                    iVar5 = 0;
                  }
                  FUN_001ec308(local_90);
                  break;
                }
              }
              else if (iVar8 == 0) {
                if (local_80[0] != '\0') {
                  *(ushort *)(*plVar14 + 0x660) = *(ushort *)(*plVar14 + 0x660) & 0xffdf;
                  FUN_001dac98(*plVar14,6);
                  goto LAB_001cff44;
                }
                goto LAB_001d0628;
              }
              FUN_001e2510(param_4);
              if (*(long *)(param_4 + 0x10) == 0) goto LAB_001cffe0;
              goto LAB_001cffcc;
            }
LAB_001cff44:
            if (local_80[0] != '\0') {
              if ((*(byte *)(*plVar1 + 0x3fd) >> 3 & 1) != 0) {
                if (*puVar2 != 0xb) {
                  uVar11 = 0xb;
                  goto LAB_001d0468;
                }
                goto LAB_001cfe90;
              }
              iVar5 = -1;
              if (*puVar2 != 0xc) {
                uVar11 = 0xc;
                goto LAB_001d0230;
              }
              goto LAB_001d0a8c;
            }
LAB_001d0628:
            if ((-1 < *(char *)(param_4 + 0x15a4)) || ((*(uint *)(param_4 + 0x15a8) | 2) != 7)) {
              if (*puVar2 == 10) goto LAB_001cfe90;
              uVar11 = 10;
              goto LAB_001d0468;
            }
            FUN_001cef34(param_4,0,0);
            uVar11 = *(uint *)(param_4 + 0x60);
          }
          else {
            FUN_001c6c60(plVar14,0);
            uVar11 = *puVar2;
          }
          iVar5 = -1;
          if (uVar11 != 0x10) {
            uVar11 = 0x10;
LAB_001d0230:
            *puVar2 = uVar11;
            iVar5 = -1;
          }
          goto LAB_001d0a8c;
        case 10:
          iVar8 = FUN_001e5214(*plVar1,local_80);
          if (iVar8 == 0) {
            if (local_80[0] != '\0') {
              bVar4 = (*(uint *)(*(long *)(param_4 + 0x10) + 0x3fc) & 0x800) == 0;
              iVar8 = 0xb;
              goto LAB_001d0548;
            }
            goto LAB_001d0838;
          }
LAB_001cffc0:
          FUN_001e2510(param_4);
LAB_001cffcc:
          FUN_001cef34(param_4,iVar8,0);
LAB_001cffe0:
          iVar5 = 0;
          bVar4 = true;
          break;
        case 0xb:
          plVar14 = (long *)*plVar1;
          local_88 = 0;
          if (*(code **)(plVar14[0x84] + 0x20) != (code *)0x0) {
            iVar8 = (**(code **)(plVar14[0x84] + 0x20))(plVar14,&local_88);
            if (iVar8 != 0) goto LAB_001cffc0;
            if (local_88 == 1) {
              *(ushort *)(*plVar14 + 0x660) = *(ushort *)(*plVar14 + 0x660) & 0xffdf;
              FUN_001dac98(*plVar14,6);
            }
            if (local_88 != 0) {
              iVar8 = 0xc;
              if (local_88 != 1) {
                iVar8 = 10;
              }
              goto LAB_001d054c;
            }
          }
LAB_001d0838:
          bVar4 = false;
          iVar8 = 0;
          goto LAB_001d0840;
        case 0xc:
          FUN_001da264(param_4,*(undefined8 *)(param_4 + 0x10));
          lVar15 = *(long *)(param_4 + 0x10);
          if (((*(byte *)(lVar15 + 0x3ff) >> 2 & 1) != 0) || (*(long *)(lVar15 + 0x4c0) != 0)) {
            FUN_001d1530(param_1);
            lVar15 = *plVar1;
          }
          if ((*(int *)(lVar15 + 0x450) == -1) && (*(int *)(lVar15 + 0x454) == -1)) {
            if ((*(char *)(param_4 + 0x15a4) < '\0') &&
               ((*(byte *)(*(long *)(lVar15 + 0x420) + 0x85) >> 4 & 1) == 0)) {
              *(undefined4 *)(param_4 + 0x15a8) = 7;
            }
            if (*puVar2 != 0x10) {
              uVar11 = 0x10;
              goto LAB_001d0708;
            }
          }
          else if (*puVar2 != 0xd) {
            uVar11 = 0xd;
LAB_001d0708:
            *puVar2 = uVar11;
          }
          goto LAB_001d070c;
        case 0xd:
          uVar9 = FUN_001da62c(param_4,*(undefined8 *)(param_4 + 0x10));
          if ((uVar9 & 1) == 0) goto LAB_001d0280;
          if (*puVar2 != 0xe) {
            uVar11 = 0xe;
            goto LAB_001d0708;
          }
LAB_001d070c:
          bVar4 = false;
          iVar5 = -1;
          goto LAB_001d0850;
        case 0xe:
          local_90 = 0;
          local_94[0] = 0;
          if (*(long *)(param_4 + 0x7f0) < 1) {
            iVar5 = 0;
          }
          else {
            iVar5 = FUN_001dae90(*(undefined8 *)(param_4 + 0xf98),*(undefined8 *)(param_4 + 0x1048),
                                 *(long *)(param_4 + 0x7f0),*(undefined8 *)(param_4 + 0x1038),
                                 *(undefined8 *)(param_4 + 0x1040),local_70,uStack_68);
          }
          if (*(long *)(param_4 + 0x7f8) < 1) {
            iVar7 = 0;
          }
          else {
            iVar7 = FUN_001dae90(*(undefined8 *)(param_4 + 0xf90),*(undefined8 *)(param_4 + 0x1060),
                                 *(long *)(param_4 + 0x7f8),*(undefined8 *)(param_4 + 0x1050),
                                 *(undefined8 *)(param_4 + 0x1058),local_70,uStack_68);
          }
          if (iVar7 == 0 && iVar5 == 0) {
            iVar8 = FUN_001e1598(*(undefined8 *)(param_4 + 0x10),param_4,local_84,local_94);
            uVar11 = *(uint *)(param_4 + 0x1c0);
            if ((uVar11 & 1) == 0) {
              FUN_001da668(*(undefined8 *)(param_4 + 0x10));
              uVar11 = *(uint *)(param_4 + 0x1c0);
            }
            if ((uVar11 >> 1 & 1) == 0) {
              FUN_001da254(*plVar1);
            }
            if ((iVar8 == 0x38) || (local_84[0] != '\0')) {
              iVar5 = FUN_001e27b8(*plVar1,&local_90);
              if (iVar5 == 0) {
                if (local_90 != 0) {
LAB_001d06f4:
                  bVar4 = true;
                  local_84[0] = '\x01';
                  goto LAB_001d0908;
                }
                if (iVar8 == 0) goto LAB_001d08fc;
              }
              else {
                if (iVar8 != 0) {
                  iVar5 = iVar8;
                }
                iVar8 = iVar5;
              }
LAB_001d057c:
              if ((iVar8 != 0x5c) && ((*(uint *)(*(long *)(*plVar1 + 0x420) + 0x84) >> 1 & 1) == 0))
              {
                FUN_001c6c60(*plVar1,2);
              }
              FUN_001e2510(param_4);
              FUN_001cef34(param_4,iVar8,1);
              goto LAB_001d05b4;
            }
            if (iVar8 != 0) {
              if (iVar8 == 0x5c) {
                uVar9 = FUN_001d8b54(*plVar1);
                if ((uVar9 & 1) != 0) {
                  iVar5 = FUN_001e27b8(*(undefined8 *)(param_4 + 0x10),&local_90);
                  FUN_001db818(param_4,"Forcing HTTP/1.1 for NTLM");
                  *(undefined8 *)(param_4 + 0xa40) = 2;
                  iVar8 = 0x5c;
                  if (iVar5 == 0) {
                    if (local_90 != 0) goto LAB_001d06f4;
                  }
                  else {
                    iVar8 = iVar5;
                  }
                }
              }
              goto LAB_001d057c;
            }
LAB_001d08fc:
            if (local_84[0] == '\0') {
              bVar4 = false;
              iVar8 = 0;
              iVar5 = -(local_94[0] & 1);
              break;
            }
            bVar4 = false;
LAB_001d0908:
            FUN_001e2510(param_4);
            FUN_001e4f14(param_4,*(long *)(param_4 + 0x10) + 0x4c8);
            puVar12 = *(undefined8 **)(*(long *)(param_4 + 0x10) + 0x4c8);
            if (puVar12 != (undefined8 *)0x0) {
              FUN_001cea34(*puVar12,0,6);
            }
            if (!(bool)(*(long *)(param_4 + 0x1d0) == 0 & (bVar4 ^ 1U))) {
              if (bVar4) {
                uVar13 = 2;
              }
              else {
                FUN_001ec308(local_90);
                local_90 = *(long *)(param_4 + 0x1d0);
                uVar13 = 3;
                *(undefined8 *)(param_4 + 0x1d0) = 0;
              }
              iVar8 = FUN_001cef34(param_4,0,0);
              if ((iVar8 == 0) && (iVar8 = FUN_001e2518(param_4,local_90,uVar13), iVar8 == 0)) {
                if (*puVar2 != 2) {
                  *(undefined4 *)(param_4 + 0x60) = 2;
                  FUN_001e2330(param_4);
                }
                iVar8 = 0;
                iVar5 = -1;
              }
              else {
                iVar5 = 0;
              }
              FUN_001ec308(local_90);
              bVar4 = false;
              break;
            }
            if (*(long *)(param_4 + 0x1c8) == 0) {
LAB_001d09b4:
              bVar4 = false;
LAB_001d09b8:
              if (*puVar2 != 0x10) {
                *puVar2 = 0x10;
              }
              iVar8 = 0;
              iVar5 = -1;
              break;
            }
            FUN_001ec308(local_90);
            local_90 = *(long *)(param_4 + 0x1c8);
            *(undefined8 *)(param_4 + 0x1c8) = 0;
            iVar8 = FUN_001e2518(param_4,local_90,1);
            FUN_001ec308(local_90);
            if (iVar8 == 0) goto LAB_001d09b4;
            bVar4 = true;
            iVar8 = FUN_001cef34(param_4,iVar8,1);
            if (iVar8 == 0) goto LAB_001d09b8;
          }
          else {
            FUN_001dadf4(param_4,local_70,uStack_68);
            if (*(int *)(param_4 + 0x60) != 0xf) {
              *puVar2 = 0xf;
            }
            if (iVar5 < iVar7) {
              iVar5 = iVar7;
            }
            FUN_001cea34(param_4,(long)iVar5,9);
LAB_001d05b4:
            bVar4 = false;
          }
          iVar5 = 0;
          break;
        case 0xf:
          iVar8 = FUN_001da6d0(*plVar1);
          if (iVar8 == 0) {
            iVar8 = FUN_001e0538(param_4,local_70,uStack_68);
            if (iVar8 != 0) goto LAB_001d0280;
            if (*(long *)(param_4 + 0x7f0) < 1) {
              iVar8 = 0;
            }
            else {
              iVar8 = FUN_001dae90(*(undefined8 *)(param_4 + 0xf98),
                                   *(undefined8 *)(param_4 + 0x1048),*(long *)(param_4 + 0x7f0),
                                   *(undefined8 *)(param_4 + 0x1038),
                                   *(undefined8 *)(param_4 + 0x1040),local_70,uStack_68);
            }
            if (*(long *)(param_4 + 0x7f8) < 1) {
              iVar5 = 0;
            }
            else {
              iVar5 = FUN_001dae90(*(undefined8 *)(param_4 + 0xf90),
                                   *(undefined8 *)(param_4 + 0x1060),*(long *)(param_4 + 0x7f8),
                                   *(undefined8 *)(param_4 + 0x1050),
                                   *(undefined8 *)(param_4 + 0x1058),local_70,uStack_68);
            }
            if (iVar5 == 0 && iVar8 == 0) {
              if (*puVar2 != 0xe) {
                *puVar2 = 0xe;
              }
              FUN_001dadf4(param_4,local_70,uStack_68);
            }
            else {
              if (iVar8 < iVar5) {
                iVar8 = iVar5;
              }
              FUN_001cea34(param_4,(long)iVar8,9);
            }
            goto LAB_001d0838;
          }
          bVar4 = false;
          iVar5 = 0;
          iVar8 = 0x2a;
          break;
        case 0x10:
          iVar7 = iVar8;
          if (*plVar1 != 0) {
            FUN_001e4f14(param_4,*plVar1 + 0x4c8);
            if (((*(byte *)(*(long *)(param_4 + 0x10) + 0x3ff) >> 2 & 1) != 0) ||
               (*(long *)(*(long *)(param_4 + 0x10) + 0x4c0) != 0)) {
              FUN_001d1530(param_1);
            }
            iVar7 = FUN_001cef34(param_4,iVar8,0);
            if (iVar8 != 0) {
              iVar7 = iVar8;
            }
            if (*(long *)(param_4 + 0x10) != 0) {
              *plVar1 = 0;
            }
          }
          iVar8 = iVar7;
          if ((*(char *)(param_4 + 0x15a4) < '\0') && (*(int *)(param_4 + 0x15a8) != 7)) {
            if (*puVar2 != 0) {
              *puVar2 = 0;
            }
            goto LAB_001d070c;
          }
          if (*puVar2 != 0x11) {
            *(undefined4 *)(param_4 + 0x60) = 0x11;
            *(int *)(*(long *)(param_4 + 0xd8) + 0x1c) =
                 *(int *)(*(long *)(param_4 + 0xd8) + 0x1c) + -1;
            *(undefined8 *)(param_4 + 0x10) = 0;
            FUN_001ceea8(param_4);
            goto LAB_001d055c;
          }
          iVar5 = -1;
          goto LAB_001d0adc;
        case 0x12:
          goto switchD_001cfcb4_caseD_12;
        default:
          return 4;
        }
        uVar11 = *puVar2;
        if (uVar11 < 0x11) {
LAB_001d0850:
          if (iVar8 == 0) {
LAB_001d0a8c:
            if ((*plVar1 != 0) && (iVar8 = FUN_001da6d0(), iVar8 != 0)) {
              FUN_001c6c60(*(undefined8 *)(param_4 + 0x10),2);
              uVar6 = 0x10;
              if (0xf < *(uint *)(param_4 + 0x60)) {
                uVar6 = 0x11;
              }
              FUN_001ce9e4(param_4,uVar6);
              iVar8 = 0x2a;
              goto LAB_001d0ac4;
            }
            iVar8 = 0;
          }
          else {
            FUN_001d1530(param_1);
            if (*plVar1 == 0) {
              uVar11 = *puVar2;
              if (uVar11 == 2) {
                FUN_001e2510(param_4);
                goto LAB_001d08c4;
              }
            }
            else {
              FUN_001da254();
              FUN_001da668(*(undefined8 *)(param_4 + 0x10));
              FUN_001e4f14(param_4,*(long *)(param_4 + 0x10) + 0x4a8);
              FUN_001e4f14(param_4,*(long *)(param_4 + 0x10) + 0x4c8);
              if (bVar4) {
                FUN_001e4c44(param_4,*(undefined8 *)(param_4 + 0x10),iVar8 == 0x1c);
                *(undefined8 *)(param_4 + 0x10) = 0;
              }
LAB_001d08c4:
              uVar11 = *puVar2;
            }
            if (uVar11 != 0x11) {
              *(undefined4 *)(param_4 + 0x60) = 0x11;
              *(int *)(*(long *)(param_4 + 0xd8) + 0x1c) =
                   *(int *)(*(long *)(param_4 + 0xd8) + 0x1c) + -1;
              *(undefined8 *)(param_4 + 0x10) = 0;
              FUN_001ceea8(param_4);
            }
LAB_001d0ac4:
            iVar5 = -1;
          }
          uVar11 = *puVar2;
        }
        iVar7 = iVar8;
        if (uVar11 == 0x11) {
LAB_001d0adc:
          if (*(code **)(param_4 + 0xf18) == (code *)0x0) {
            *(undefined4 *)(param_4 + 0x80) = 1;
            *(long *)(param_4 + 0x88) = param_4;
            *(int *)(param_4 + 0x90) = iVar7;
            FUN_001cb588(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),param_4 + 0x68,
                         param_4 + 0x68);
            iVar5 = 0;
          }
          else {
            (**(code **)(param_4 + 0xf18))(param_4,iVar7);
          }
          iVar8 = iVar7;
          if (*puVar2 != 0x12) {
            *puVar2 = 0x12;
          }
        }
      } while ((iVar5 == -1) || (*(char *)(param_1 + 0xf0) != '\0'));
switchD_001cfcb4_caseD_12:
      uVar13 = 0;
      *(int *)(param_4 + 100) = iVar8;
    }
  }
  return uVar13;
}


