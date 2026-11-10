/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e1598; name: FUN_001e1598
 */


undefined8 FUN_001e1598(long *param_1,long param_2,char *param_3,undefined1 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  char local_74 [4];
  char local_70;
  undefined7 uStack_6f;
  ulong local_68;
  
  uVar4 = *(uint *)(param_1 + 200);
  *(undefined4 *)(param_1 + 200) = 0;
  if ((*(uint *)(param_2 + 0x1c0) & 0x15) == 1) {
    uVar7 = (undefined4)param_1[0x8a];
  }
  else {
    uVar7 = 0xffffffff;
  }
  if ((*(uint *)(param_2 + 0x1c0) & 0x2a) == 2) {
    uVar12 = *(undefined4 *)((long)param_1 + 0x454);
  }
  else {
    uVar12 = 0xffffffff;
  }
  uVar4 = uVar4 | *(long *)(*param_1 + 0x1520) != 0;
  if (uVar4 == 0) {
    uVar4 = FUN_001db41c(uVar7,0xffffffff,uVar12,0);
  }
  if (uVar4 == 4) {
    FUN_001db9c8(param_2,"select/poll returned error");
    return 0x37;
  }
  uVar14 = *(uint *)(param_2 + 0x1c0);
  plVar1 = (long *)(param_2 + 0xf0);
  if (((uVar14 & 1) == 0) ||
     (((uVar4 & 1) == 0 && ((*(byte *)((long)param_1 + 0x3fe) >> 6 & 1) == 0)))) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    uVar16 = 0;
    local_70 = '\0';
    iVar6 = 100;
    *param_3 = '\0';
    *param_4 = 0;
    do {
      lVar13 = *(long *)(param_2 + 0xc10);
      lVar9 = lVar13;
      if (((((*(byte *)(param_1[0x84] + 0x80) & 3) == 0) || ((int)param_1[0x46] != 0x14)) &&
          (*plVar1 != -1)) &&
         (((*(byte *)(param_2 + 0x660) & 1) == 0 &&
          (lVar9 = *plVar1 - *(long *)(param_2 + 0x100), lVar13 <= lVar9)))) {
        lVar9 = lVar13;
      }
      if (lVar9 != 0) {
        uVar8 = FUN_001dc054(param_1,(int)param_1[0x8a],*(undefined8 *)(param_2 + 0x1b8),lVar9,
                             &local_68);
        if ((int)uVar8 == 0) goto LAB_001e17e4;
        if ((int)uVar8 != 0x51) {
          return uVar8;
        }
        goto LAB_001e20c4;
      }
      local_68 = 0;
LAB_001e17e4:
      if (((*(long *)(param_2 + 0x100) == 0) && (*(long *)(param_2 + 0x108) == 0)) &&
         (FUN_001dac98(param_2,7), *(int *)(param_2 + 0x198) != 0)) {
        auVar19 = FUN_001e0dfc();
        *(undefined1 (*) [16])(param_2 + 0x188) = auVar19;
      }
      uVar17 = 1;
      if (local_68 == 0) {
        bVar3 = *(long *)(param_2 + 0x1b0) == 0;
      }
      else {
        bVar3 = false;
      }
      if (((long)local_68 < 1) && (!bVar3)) {
        uVar14 = *(uint *)(param_2 + 0x1c0) & 0xfffffffe;
LAB_001e1d58:
        *(uint *)(param_2 + 0x1c0) = uVar14;
LAB_001e20c4:
        if (0 < iVar6) goto LAB_001e20d8;
        break;
      }
      *(undefined1 *)(*(long *)(param_2 + 0x1b8) + local_68) = 0;
      *(undefined8 *)(param_2 + 0x158) = *(undefined8 *)(param_2 + 0x1b8);
      if (*(code **)(param_1[0x84] + 0x68) != (code *)0x0) {
        uVar8 = (**(code **)(param_1[0x84] + 0x68))(param_2,param_1,&local_68,&local_70);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        if (local_70 != '\0') goto LAB_001e20c4;
      }
      if ((*(byte *)(param_2 + 0x660) & 1) != 0) {
        local_74[0] = '\0';
        uVar8 = FUN_001d52a8(param_2,param_1,&local_68,local_74);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        if (((*(code **)(param_1[0x84] + 0x68) != (code *)0x0) && (*(long *)(param_2 + 0xf8) < 1))
           && (0 < (long)local_68)) {
          uVar8 = (**(code **)(param_1[0x84] + 0x68))(param_2,param_1,&local_68,&local_70);
          if ((int)uVar8 != 0) {
            return uVar8;
          }
          if (local_70 != '\0') goto LAB_001e20c4;
        }
        if (local_74[0] != '\0') {
          if (0 < (long)local_68) {
            uVar16 = FUN_001cf51c(*(undefined8 *)(*param_1 + 0xd8),1);
            if ((uVar16 & 1) == 0) {
              FUN_001db818(param_2,
                           "Excess found in a non pipelined read: excess = %zd url = %s (zero-length body)\n"
                           ,local_68,*(undefined8 *)(param_2 + 0x1580));
            }
            else {
              FUN_001db818(param_2,"Rewinding stream by : %zd bytes on url %s (zero-length body)\n",
                           local_68,*(undefined8 *)(param_2 + 0x1580));
              param_1[0x9e] = param_1[0x9e] - local_68;
              *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) | 0x400000;
            }
          }
          goto LAB_001e20c4;
        }
      }
      if (((*(long *)(param_2 + 0x158) != 0) && ((*(ushort *)(param_2 + 0x660) & 1) == 0)) &&
         (!(bool)((long)local_68 < 1 & (bVar3 ^ 1U)))) {
        if ((*(byte *)(param_2 + 0xf43) & 1) != 0) {
          FUN_001c6c60(param_1,2);
          *param_3 = '\x01';
          return 8;
        }
        if ((!bVar3 && *(long *)(param_2 + 0x1b0) == 0) &&
           ((*(uint *)(param_1[0x84] + 0x80) & 0x40003) != 0)) {
          if (*(long *)(param_2 + 0x1d0) == 0) {
LAB_001e1968:
            if ((((*(long *)(param_2 + 0x14f8) == 0) ||
                 ((*(ushort *)(param_2 + 0x660) >> 1 & 1) != 0)) ||
                ((*(ushort *)(param_2 + 0x660) >> 3 & 1) != 0)) || (*(int *)(param_2 + 0xa38) != 1))
            {
              if (((*(int *)(param_2 + 0xa28) == 0) || (*(long *)(param_2 + 0x14f0) != 0)) ||
                 (uVar10 = FUN_001e151c(param_2,*(undefined8 *)(param_2 + 0x1a8)), (uVar10 & 1) != 0
                 )) goto LAB_001e19a8;
              *param_3 = '\x01';
              *(undefined4 *)(param_2 + 0x15f8) = 0x130;
              FUN_001db818(param_2,"Simulate a HTTP 304 response!\n");
              FUN_001c6c60(param_1,1);
              goto LAB_001e210c;
            }
            if (*plVar1 != *(long *)(param_2 + 0x14f8)) {
              FUN_001db9c8(param_2,
                           "HTTP server doesn\'t seem to support byte ranges. Cannot resume.");
              return 0x21;
            }
            FUN_001db818(param_2,"The entire document is already downloaded");
            FUN_001c6c60(param_1,1);
          }
          else if ((*(byte *)((long)param_1 + 0x3fc) & 1) == 0) {
            *(ushort *)(param_2 + 0x660) = *(ushort *)(param_2 + 0x660) | 8;
            FUN_001db818(param_2,"Ignoring the response-body\n");
            goto LAB_001e1968;
          }
          *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) & 0xfffffffe;
          bVar3 = true;
          goto LAB_001e2090;
        }
LAB_001e19a8:
        *(long *)(param_2 + 0x1b0) = *(long *)(param_2 + 0x1b0) + 1;
        if (((*(byte *)(param_2 + 0xf43) >> 2 & 1) != 0) &&
           ((*(int *)(param_2 + 0x140) == 0 ||
            (FUN_001db920(param_2,3,*(undefined8 *)(param_2 + 0x1120),
                          *(undefined8 *)(param_2 + 0x150)), *(int *)(param_2 + 0x140) == 1)))) {
          FUN_001db920(param_2,3,*(undefined8 *)(param_2 + 0x158),local_68);
        }
        if ((*(byte *)(param_2 + 0x660) >> 5 & 1) != 0) {
          iVar5 = FUN_001d6ee4(param_1,*(undefined8 *)(param_2 + 0x158),local_68,&local_68);
          if (0 < iVar5) {
            if (iVar5 == 4) {
              FUN_001db9c8(param_2,"Failed writing data");
              return 0x17;
            }
            uVar8 = FUN_001d72a0();
            FUN_001db9c8(param_2,"%s in chunked-encoding",uVar8);
            return 0x38;
          }
          if (iVar5 == -1) {
            *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) & 0xfffffffe;
            lVar9 = param_1[9];
            if (lVar9 != 0) {
              FUN_001db818(*param_1,"Leftovers after chunking: %zu bytes\n",lVar9);
              uVar10 = FUN_001cf51c(*(undefined8 *)(*param_1 + 0xd8),1);
              if ((uVar10 & 1) != 0) {
                FUN_001db818(*param_1,"Rewinding %zu bytes\n",lVar9);
                param_1[0x9e] = param_1[0x9e] - lVar9;
                *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) | 0x400000;
              }
            }
          }
        }
        if ((*(int *)(param_2 + 0x140) == 1) && ((*(byte *)(param_2 + 0x660) >> 3 & 1) == 0)) {
          *(long *)(param_2 + 0x100) = *(long *)(param_2 + 0x100) + *(long *)(param_2 + 0x150);
        }
        lVar9 = *(long *)(param_2 + 0xf8);
        if (lVar9 == -1) {
          lVar13 = *(long *)(param_2 + 0x100);
        }
        else {
          lVar13 = *(long *)(param_2 + 0x100);
          uVar10 = (local_68 + lVar13) - lVar9;
          if (lVar9 <= (long)(local_68 + lVar13)) {
            if ((uVar10 != 0) && ((*(byte *)(param_2 + 0x660) >> 3 & 1) == 0)) {
              uVar16 = FUN_001cf51c(*(undefined8 *)(*param_1 + 0xd8),1);
              if ((uVar16 & 1) == 0) {
                FUN_001db818(param_2,
                             "Excess found in a non pipelined read: excess = %zu, size = %ld, maxdownload = %ld, bytecount = %ld\n"
                             ,uVar10,*(undefined8 *)(param_2 + 0xf0),*(undefined8 *)(param_2 + 0xf8)
                             ,*(undefined8 *)(param_2 + 0x100));
              }
              else {
                FUN_001db818(param_2,
                             "Rewinding stream by : %zu bytes on url %s (size = %ld, maxdownload = %ld, bytecount = %ld, nread = %zd)\n"
                             ,uVar10,*(undefined8 *)(param_2 + 0x1580),
                             *(undefined8 *)(param_2 + 0xf0),*(undefined8 *)(param_2 + 0xf8),
                             *(undefined8 *)(param_2 + 0x100),local_68);
                param_1[0x9e] = param_1[0x9e] - uVar10;
                *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) | 0x400000;
              }
            }
            lVar13 = *(long *)(param_2 + 0x100);
            local_68 = *(long *)(param_2 + 0xf8) - lVar13;
            local_68 = local_68 & ((long)local_68 >> 0x3f ^ 0xffffffffffffffffU);
            *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) & 0xfffffffe;
            uVar16 = uVar10;
          }
        }
        *(ulong *)(param_2 + 0x100) = local_68 + lVar13;
        FUN_001daf2c(param_2);
        if ((*(ushort *)(param_2 + 0x660) >> 5 & 1) == 0) {
          uVar14 = *(uint *)(param_2 + 0x140);
          if ((local_68 != 0) || (bVar3 || uVar14 != 0)) {
            if (((*(ushort *)(param_2 + 0x660) >> 3 & 1) == 0) && (uVar14 != 0)) {
              lVar9 = *(long *)(param_2 + 0xf8);
              if (*(long *)(param_2 + 0x150) <= lVar9 || lVar9 == -1) {
                lVar9 = *(long *)(param_2 + 0x150);
              }
              uVar8 = FUN_001dbce0(param_1,1,*(undefined8 *)(param_2 + 0x1120),lVar9);
              if ((int)uVar8 != 0) {
                return uVar8;
              }
              uVar14 = *(uint *)(param_2 + 0x140);
            }
            if (uVar14 < 2) {
              if (((*(byte *)(*param_1 + 0xf45) & 1) == 0) && (*(long *)(param_2 + 0x1a0) != 0)) {
                if ((*(byte *)(param_2 + 0x660) >> 3 & 1) == 0) {
                  uVar8 = FUN_001d63fc(param_1,*(long *)(param_2 + 0x1a0),
                                       *(undefined8 *)(param_2 + 0x158),local_68);
                  goto LAB_001e1c54;
                }
              }
              else if ((*(byte *)(param_2 + 0x660) >> 3 & 1) == 0) {
                uVar8 = FUN_001dbce0(param_1,1,*(undefined8 *)(param_2 + 0x158),local_68);
LAB_001e1c54:
                *(undefined4 *)(param_2 + 0x140) = 0;
                if ((int)uVar8 != 0) {
                  return uVar8;
                }
                goto LAB_001e1c64;
              }
            }
            *(undefined4 *)(param_2 + 0x140) = 0;
          }
        }
      }
LAB_001e1c64:
      if (((uVar16 != 0) && (*(long *)(param_1[0x84] + 0x68) != 0)) &&
         ((*(byte *)((long)param_1 + 0x3fe) >> 6 & 1) == 0)) {
        lVar9 = *(long *)(param_2 + 0x158) + local_68;
        uVar10 = *(long *)(param_2 + 0x1b8) + *(long *)(param_2 + 0xc10);
        *(long *)(param_2 + 0x158) = lVar9;
        local_68 = uVar10 - lVar9;
        if (lVar9 + uVar16 <= uVar10) {
          local_68 = uVar16;
        }
        uVar8 = (**(code **)(param_1[0x84] + 0x68))(param_2,param_1,&local_68,&local_70);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        if (local_70 != '\0') {
          uVar14 = *(uint *)(param_2 + 0x1c0) | 1;
          goto LAB_001e1d58;
        }
        goto LAB_001e20c4;
      }
      uVar14 = *(uint *)(param_2 + 0x1c0);
      if (bVar3) {
        uVar14 = uVar14 & 0xfffffffe;
        *(uint *)(param_2 + 0x1c0) = uVar14;
      }
      if (((uVar14 >> 4 & 1) != 0) ||
         ((((*(byte *)(param_1[0x84] + 0x80) & 0x30) == 0 &&
           (uVar10 = thunk_FUN_001ec4e8(param_1,0), (uVar10 & 1) == 0)) &&
          (((*(byte *)(param_1[0x84] + 0x80) & 3) == 0 || ((int)param_1[0x46] != 0x14))))))
      goto LAB_001e20c4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != -1);
    *(undefined4 *)(param_1 + 200) = 1;
    *param_4 = 1;
LAB_001e20d8:
    if (((*(uint *)(param_2 + 0x1c0) & 3) == 2) && ((*(byte *)((long)param_1 + 0x3fc) & 1) != 0)) {
      FUN_001db818(param_2,"we are done reading and this is set to close, stop send\n");
      *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) & 0xfffffffd;
    }
LAB_001e210c:
    if (*param_3 != '\0') {
      return 0;
    }
    uVar14 = *(uint *)(param_2 + 0x1c0);
  }
  uVar18 = uVar17;
  if (((uVar4 & uVar14) >> 1 & 1) != 0) {
    if ((*(long *)(param_2 + 0x100) == 0) && (*(long *)(param_2 + 0x108) == 0)) {
      FUN_001dac98(param_2,7);
    }
    uVar18 = uVar17 | 2;
    lVar9 = *(long *)(param_2 + 0x1d8);
    if (*(long *)(param_2 + 0x1d8) == 0) {
      lVar9 = *(long *)(param_2 + 0x1138);
      if (lVar9 == 0) {
        lVar9 = FUN_001ec2f8(*(undefined8 *)(param_2 + 0xc18));
        *(long *)(param_2 + 0x1138) = lVar9;
        if (lVar9 == 0) {
          return 0x1b;
        }
      }
      *(long *)(param_2 + 0x1e0) = lVar9;
      if ((*(byte *)(param_2 + 0x660) >> 2 & 1) == 0) {
        if ((*(int *)(param_2 + 0x198) == 2) && (*(int *)(*(long *)(param_2 + 0x1e8) + 0x208) == 2))
        {
          *(undefined4 *)(param_2 + 0x198) = 1;
          *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) & 0xfffffffd;
          auVar19 = FUN_001e0dfc();
          *(undefined1 (*) [16])(param_2 + 0x188) = auVar19;
          FUN_001cea34(param_2,*(undefined8 *)(param_2 + 0xee0),0);
          uVar18 = uVar17;
          goto LAB_001e1f50;
        }
        if ((*(uint *)(param_1[0x84] + 0x80) & 0x40003) == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = *(int *)(*(long *)(param_2 + 0x1e8) + 0x208) == 1;
        }
        uVar8 = FUN_001e0f68(param_1,*(undefined8 *)(param_2 + 0xc18),&local_70);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
        lVar13 = CONCAT71(uStack_6f,local_70);
        if (lVar13 != 0) {
          if (0 < lVar13) {
            *(long *)(param_2 + 0x1d8) = lVar13;
            lVar9 = lVar13;
            if ((!bVar3) && ((*(ushort *)(param_2 + 0xf40) & 0x840) != 0)) {
              lVar11 = *(long *)(param_2 + 0x11b8);
              if (lVar11 == 0) {
                lVar11 = FUN_001ec2f8(*(long *)(param_2 + 0xc18) << 1);
                *(long *)(param_2 + 0x11b8) = lVar11;
                if (lVar11 == 0) {
                  FUN_001db9c8(param_2,"Failed to alloc scratch buffer!");
                  return 0x1b;
                }
              }
              lVar15 = 0;
              lVar9 = 0;
              while( true ) {
                cVar2 = *(char *)(*(long *)(param_2 + 0x1e0) + lVar15);
                if (cVar2 == '\n') {
                  *(undefined1 *)(lVar11 + lVar9) = 0xd;
                  lVar9 = lVar9 + 1;
                  *(undefined1 *)(*(long *)(param_2 + 0x11b8) + lVar9) = 10;
                  if (((*(byte *)(param_2 + 0xf40) >> 6 & 1) == 0) &&
                     (*(long *)(param_2 + 0x1518) != -1)) {
                    *(long *)(param_2 + 0x1518) = *(long *)(param_2 + 0x1518) + 1;
                  }
                }
                else {
                  *(char *)(lVar11 + lVar9) = cVar2;
                }
                lVar9 = lVar9 + 1;
                if (lVar13 + -1 == lVar15) break;
                lVar11 = *(long *)(param_2 + 0x11b8);
                lVar15 = lVar15 + 1;
              }
              if (lVar9 == lVar13) {
                lVar9 = *(long *)(param_2 + 0x1d8);
              }
              else {
                *(long *)(param_2 + 0x1d8) = lVar9;
                *(undefined8 *)(param_2 + 0x1e0) = *(undefined8 *)(param_2 + 0x11b8);
              }
            }
            goto LAB_001e16a0;
          }
          goto LAB_001e1f3c;
        }
      }
      if ((*(byte *)(param_2 + 0x1c0) >> 5 & 1) == 0) {
LAB_001e1f3c:
        uVar8 = FUN_001e2a68(param_1,plVar1);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
      }
    }
    else {
LAB_001e16a0:
      uVar8 = FUN_001dbac0(param_1,*(undefined4 *)((long)param_1 + 0x454),
                           *(undefined8 *)(param_2 + 0x1e0),lVar9,&local_68);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      if ((*(byte *)(param_2 + 0xf43) >> 2 & 1) != 0) {
        FUN_001db920(param_2,4,*(undefined8 *)(param_2 + 0x1e0),local_68);
      }
      *(ulong *)(param_2 + 0x108) = *(long *)(param_2 + 0x108) + local_68;
      FUN_001daf34(param_2);
      if (((*(ushort *)(param_2 + 0x660) & 0x140) != 0x40) &&
         (*(long *)(param_2 + 0x108) == *(long *)(param_2 + 0x1518))) {
        *(ushort *)(param_2 + 0x660) = *(ushort *)(param_2 + 0x660) | 4;
        FUN_001db818(param_2,"We are completely uploaded and fine\n");
      }
      lVar9 = *(long *)(param_2 + 0x1d8) - local_68;
      if (lVar9 == 0) {
        lVar9 = *(long *)(param_2 + 0x1138);
        if (lVar9 == 0) {
          lVar9 = FUN_001ec2f8(*(undefined8 *)(param_2 + 0xc18));
          *(long *)(param_2 + 0x1138) = lVar9;
          if (lVar9 == 0) {
            return 0x1b;
          }
        }
        *(undefined8 *)(param_2 + 0x1d8) = 0;
        *(long *)(param_2 + 0x1e0) = lVar9;
        if ((*(byte *)(param_2 + 0x660) >> 2 & 1) != 0) goto LAB_001e1f3c;
      }
      else {
        *(long *)(param_2 + 0x1d8) = lVar9;
        *(ulong *)(param_2 + 0x1e0) = *(long *)(param_2 + 0x1e0) + local_68;
      }
    }
  }
LAB_001e1f50:
  auVar19 = FUN_001e0dfc();
  *(undefined1 (*) [16])(param_2 + 0x130) = auVar19;
  if (((uVar18 == 0) && (*(int *)(param_2 + 0x198) == 1)) &&
     (iVar6 = FUN_001e0e28(auVar19._0_8_,auVar19._8_8_,*(undefined8 *)(param_2 + 0x188),
                           *(undefined8 *)(param_2 + 400)),
     *(long *)(param_2 + 0xee0) <= (long)iVar6)) {
    *(undefined4 *)(param_2 + 0x198) = 0;
    *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) | 2;
    thunk_FUN_001d1464(param_2,0);
    FUN_001db818(param_2,"Done waiting for 100-continue\n");
  }
  iVar6 = FUN_001da6d0(param_1);
  if (iVar6 == 0) {
    uVar8 = FUN_001e0538(param_2,*(undefined8 *)(param_2 + 0x130),*(undefined8 *)(param_2 + 0x138));
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    if (*(int *)(param_2 + 0x1c0) == 0) {
      if ((*(byte *)(param_2 + 0xf43) & 1) == 0) {
        lVar9 = *plVar1;
        if (lVar9 != -1) {
          lVar13 = lVar9 - *(long *)(param_2 + 0x100);
          if (((lVar13 != 0) && (*(long *)(param_2 + 0x100) != *(long *)(param_2 + 0x14e8) + lVar9))
             && (*(long *)(param_2 + 0x1d0) == 0)) {
            FUN_001db9c8(param_2,"transfer closed with %ld bytes remaining to read",lVar13);
            return 0x12;
          }
        }
        if (((*(byte *)(param_2 + 0x660) >> 5 & 1) != 0) && ((int)param_1[7] != 4)) {
          FUN_001db9c8(param_2,"transfer closed with outstanding read data remaining");
          return 0x12;
        }
      }
      iVar6 = FUN_001da6d0(param_1);
      if (iVar6 != 0) goto LAB_001e1fb4;
    }
    else {
      iVar6 = FUN_001c5a28(param_2,param_2 + 0x130,0);
      if (iVar6 < 0) {
        lVar9 = *(long *)(param_2 + 0xf0);
        uVar7 = FUN_001e0e28(*(undefined8 *)(param_2 + 0x130),*(undefined8 *)(param_2 + 0x138),
                             *(undefined8 *)(param_2 + 0x1008),*(undefined8 *)(param_2 + 0x1010));
        if (lVar9 == -1) {
          FUN_001db9c8(param_2,"Operation timed out after %d milliseconds with %ld bytes received",
                       uVar7,*(undefined8 *)(param_2 + 0x100));
        }
        else {
          FUN_001db9c8(param_2,
                       "Operation timed out after %d milliseconds with %ld out of %ld bytes received"
                       ,uVar7,*(undefined8 *)(param_2 + 0x100),*(undefined8 *)(param_2 + 0xf0));
        }
        return 0x1c;
      }
    }
    bVar3 = (*(uint *)(param_2 + 0x1c0) & 0x33) == 0;
LAB_001e2090:
    uVar8 = 0;
    *param_3 = bVar3;
  }
  else {
LAB_001e1fb4:
    uVar8 = 0x2a;
  }
  return uVar8;
}


