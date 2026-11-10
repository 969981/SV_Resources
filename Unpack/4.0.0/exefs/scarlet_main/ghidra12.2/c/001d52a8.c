/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d52a8; name: FUN_001d52a8
 */


int FUN_001d52a8(long param_1,long param_2,size_t *param_3,char *param_4)

{
  int *param3;
  long *plVar1;
  long *plVar2;
  int *param5;
  int *param3_00;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  ulong uVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  size_t sVar16;
  undefined4 *puVar17;
  char *pcVar18;
  long lVar19;
  long local_70;
  uchar local_68 [4];
  int local_64;
  
  sVar16 = *param_3;
  pcVar18 = *(char **)(param_1 + 0x158);
  param3 = (int *)(param_2 + 0x234);
  plVar1 = (long *)(param_1 + 0xf0);
  plVar2 = (long *)(param_1 + 0x170);
  param5 = (int *)(param_1 + 0x180);
  param3_00 = (int *)(param_2 + 0x230);
  pcVar12 = pcVar18;
  do {
    *(char **)(param_1 + 0x160) = pcVar12;
    pvVar9 = memchr(pcVar12,10,*param_3);
    *(void **)(param_1 + 0x168) = pvVar9;
    if (pvVar9 == (void *)0x0) {
      iVar7 = FUN_001d6174(param_1,plVar1,*param_3);
      if (iVar7 != 0) {
        return iVar7;
      }
      if (*(int *)(param_1 + 0x144) != 0) {
        return 0;
      }
      iVar7 = FUN_001d6264(param_1,*(undefined8 *)(param_1 + 0x1120),
                           *(undefined8 *)(param_1 + 0x150));
      if (iVar7 != 2) {
        return 0;
      }
      *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) & 0xfffe;
      *(undefined4 *)(param_1 + 0x140) = 2;
      FUN_001c6c60(param_2,2);
      if ((*(byte *)(param_1 + 0xf47) >> 2 & 1) != 0) {
        return 0;
      }
LAB_001d5f70:
      pcVar12 = "Received HTTP/0.9 when not allowed\n";
      goto LAB_001d60cc;
    }
    *param_3 = (size_t)(pcVar12 + *param_3 + ~(ulong)pvVar9);
    lVar19 = *(long *)(param_1 + 0x168) + 1;
    *(long *)(param_1 + 0x158) = lVar19;
    iVar7 = FUN_001d6174(param_1,plVar1,lVar19 - *(long *)(param_1 + 0x160));
    if (iVar7 != 0) {
      return iVar7;
    }
    pcVar12 = *(char **)(param_1 + 0x1120);
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x148);
    *(char **)(param_1 + 0x170) = pcVar12;
    if (*(int *)(param_1 + 0x144) == 0) {
      iVar7 = FUN_001d6264(param_1,pcVar12,*(undefined8 *)(param_1 + 0x150));
      if (iVar7 == 2) {
        FUN_001c6c60(param_2,2);
        if ((*(byte *)(param_1 + 0xf47) >> 2 & 1) != 0) {
          *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) & 0xfffe;
          if (*param_3 == 0) {
            *(undefined4 *)(param_1 + 0x140) = 2;
            *param_3 = sVar16;
            *(char **)(param_1 + 0x158) = pcVar18;
            return 0;
          }
          *(undefined4 *)(param_1 + 0x140) = 1;
          return 0;
        }
        goto LAB_001d5f70;
      }
      pcVar12 = (char *)*plVar2;
    }
    pcVar13 = pcVar12;
    if (*pcVar12 == '\n') {
LAB_001d53b8:
      *plVar2 = (long)(pcVar13 + 1);
LAB_001d53c0:
      iVar7 = *param5;
      if (iVar7 - 100U < 100) {
        if (iVar7 == 0x65) {
          if (*(int *)(param_1 + 0x19c) == 1) {
            FUN_001db818(param_1,"Received 101\n");
            *(undefined4 *)(param_1 + 0x19c) = 2;
            *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 1;
            *(undefined4 *)(param_1 + 0x144) = 0;
            iVar7 = FUN_001d7c34(param_2,*(undefined8 *)(param_1 + 0x158),*param_3);
            if (iVar7 != 0) {
              return iVar7;
            }
            *param_3 = 0;
          }
          else {
            *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) & 0xfffe;
          }
        }
        else if (iVar7 == 100) {
          *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 1;
          *(undefined4 *)(param_1 + 0x144) = 0;
          if (*(int *)(param_1 + 0x198) != 0) {
            *(undefined4 *)(param_1 + 0x198) = 0;
            *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) | 2;
            thunk_FUN_001d1464(param_1,0);
          }
        }
        else {
          *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 1;
          *(undefined4 *)(param_1 + 0x144) = 0;
        }
      }
      else {
        uVar5 = *(ushort *)(param_1 + 0x660);
        *(ushort *)(param_1 + 0x660) = uVar5 & 0xfffe;
        if ((((((uVar5 >> 5 & 1) == 0) && (*(long *)(param_1 + 0xf0) == -1)) &&
             ((*(byte *)(param_2 + 0x3fc) & 1) == 0)) &&
            ((*param3_00 == 0xb && ((*(byte *)(*(long *)(param_2 + 0x420) + 0x82) >> 2 & 1) == 0))))
           && (*(int *)(param_1 + 0xa38) != 6)) {
          FUN_001db818(param_1,"no chunk, no close, no size. Assume close to signal end\n");
          FUN_001c6c60(param_2,2);
        }
      }
      iVar7 = FUN_001d4100(param_2);
      if (iVar7 != 0) {
        iVar7 = *(int *)(param_1 + 0x180);
LAB_001d5f34:
        FUN_001db9c8(param_1,"The requested URL returned error: %d",iVar7);
        return 0x16;
      }
      uVar15 = 2;
      if ((*(ulong *)(param_1 + 0xf40) & 0x200000) != 0) {
        uVar15 = 3;
      }
      lVar19 = *(long *)(param_1 + 0x170) - *(long *)(param_1 + 0x1120);
      iVar7 = FUN_001dbce0(param_2,uVar15,*(long *)(param_1 + 0x1120),lVar19);
      if (iVar7 != 0) {
        return iVar7;
      }
      *(long *)(param_1 + 0x1610) = *(long *)(param_1 + 0x1610) + lVar19;
      lVar3 = *(long *)(param_1 + 0x110) + lVar19;
      *(long *)(param_1 + 0x110) = lVar3;
      if (99 < *(int *)(param_1 + 0x180) - 100U) {
        lVar3 = 0;
      }
      *(long *)(param_1 + 0x118) = lVar3;
      iVar7 = FUN_001d3d9c(param_2);
      if (iVar7 != 0) {
        return iVar7;
      }
      if (299 < *param5) {
        if ((((*(uint *)(param_2 + 0x3fc) & 0x18001) == 0) && (*(int *)(param_1 + 0xa38) - 2U < 4))
           && (thunk_FUN_001d1464(param_1,0), (*(byte *)(param_1 + 0x660) >> 2 & 1) == 0)) {
          if ((*(byte *)(param_1 + 0xf42) >> 1 & 1) == 0) {
            FUN_001db818(param_1,"HTTP error before end of send, stop sending\n");
            FUN_001c6c60(param_2,2);
            *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 4;
            *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) & 0xfffffffd;
            if ((*(byte *)(param_1 + 0x15a5) & 1) != 0) {
              *(undefined4 *)(param_1 + 0x198) = 3;
            }
          }
          else {
            FUN_001db818(param_1,"HTTP error before end of send, keep sending\n");
            if (*(int *)(param_1 + 0x198) != 0) {
              *(undefined4 *)(param_1 + 0x198) = 0;
              *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) | 2;
            }
          }
        }
        if ((*(byte *)(param_2 + 0x3fe) & 1) != 0) {
          FUN_001db818(param_1,"Keep sending data to get tossed away!\n");
          *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) | 2;
        }
      }
      if ((*(ushort *)(param_1 + 0x660) & 1) != 0) goto LAB_001d5bf4;
      if ((*(byte *)(param_1 + 0xf43) & 1) == 0) {
        if ((*(ushort *)(param_1 + 0x660) >> 5 & 1) != 0) {
          *plVar1 = -1;
          *(undefined8 *)(param_1 + 0xf8) = 0xffffffffffffffff;
        }
      }
      else {
        *param_4 = '\x01';
      }
      if (*plVar1 == -1) {
        if (*(long *)(param_1 + 0xf8) == 0) goto LAB_001d5fb4;
LAB_001d5fd0:
        if (*param_4 == '\0') goto LAB_001d6030;
      }
      else {
        FUN_001dac48(param_1);
        *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf0);
        if (*(long *)(param_1 + 0xf0) != 0) goto LAB_001d5fd0;
LAB_001d5fb4:
        if (((*(byte *)(*(long *)(param_2 + 0x420) + 0x80) & 3) != 0) && (*param3_00 == 0x14))
        goto LAB_001d5fd0;
        *param_4 = '\x01';
      }
      *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) & 0xfffffffe;
LAB_001d6030:
      if ((*(byte *)(param_1 + 0xf43) >> 2 & 1) == 0) {
        return 0;
      }
      FUN_001db920(param_1,1,*(undefined8 *)(param_1 + 0x160),lVar19);
      return 0;
    }
    if (*pcVar12 == '\r') {
      pcVar13 = pcVar12 + 1;
      *plVar2 = (long)pcVar13;
      if (pcVar12[1] == '\n') goto LAB_001d53b8;
      goto LAB_001d53c0;
    }
    iVar7 = *(int *)(param_1 + 0x144);
    *(int *)(param_1 + 0x144) = iVar7 + 1;
    if (iVar7 == 0) {
      uVar4 = *(uint *)(*(long *)(param_2 + 0x420) + 0x80);
      if ((uVar4 & 3) == 0) {
        if ((uVar4 >> 0x12 & 1) == 0) goto LAB_001d6008;
        iVar8 = sscanf(pcVar12," RTSP/%1d.%1d%c%3d",&local_64,param3,local_68,param5);
        iVar7 = 0;
        if ((iVar8 == 4) && (local_68[0] == ' ')) {
          *param3 = *param3 + local_64 * 10;
          *param3_00 = 0xb;
          goto LAB_001d5724;
        }
      }
      else {
        iVar7 = sscanf(pcVar12," HTTP/%1d.%1d%c%3d",(int *)&local_70,param3_00,local_68,param5);
        if ((iVar7 == 1) && ((int)local_70 == 2)) {
          iVar7 = sscanf((char *)*plVar2," HTTP/2 %d",param5);
          if (iVar7 != 1) goto LAB_001d60c4;
          *param3_00 = 0;
          local_68[0] = ' ';
        }
        else if ((iVar7 != 4) || (local_68[0] != ' ')) {
          if (iVar7 == 0) {
            iVar7 = sscanf((char *)*plVar2," HTTP %3d",param5);
            *param3_00 = 10;
            if (iVar7 == 0) {
              iVar7 = FUN_001d6264(param_1,*(undefined8 *)(param_1 + 0x170),
                                   *(undefined8 *)(param_1 + 0x150));
              if (iVar7 == 1) {
                *param5 = 200;
                *param3_00 = 10;
                iVar7 = 1;
              }
              else {
                iVar7 = 0;
              }
            }
            goto LAB_001d5728;
          }
LAB_001d60c4:
          pcVar12 = "Unsupported HTTP version in response\n";
LAB_001d60cc:
          FUN_001db9c8(param_1,pcVar12);
          return 1;
        }
        iVar7 = 4;
        iVar8 = *param3_00 + (int)local_70 * 10;
        *param3_00 = iVar8;
        if ((iVar8 != 0x14) && (*(int *)(param_1 + 0x19c) == 2)) {
          FUN_001db818(param_1,"Lying server, not serving HTTP/2\n");
LAB_001d5724:
          iVar7 = 4;
        }
      }
LAB_001d5728:
      if (iVar7 == 0) {
LAB_001d6008:
        *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) & 0xfffe;
        return 0;
      }
      iVar7 = *(int *)(param_1 + 0x180);
      *(int *)(param_1 + 0x15f8) = iVar7;
      *(int *)(param_1 + 0x1600) = *param3_00;
      if ((*(int *)(param_1 + 0x14e0) == 0) || (*param3_00 < *(int *)(param_1 + 0x14e0))) {
        *(int *)(param_1 + 0x14e0) = *param3_00;
      }
      if (((*(long *)(param_1 + 0x14f8) == 0) || (iVar7 != 0x1a0)) ||
         (*(int *)(param_1 + 0xa38) != 1)) {
        if ((399 < iVar7) && (((uint)*(undefined8 *)(param_1 + 0xf40) >> 0x10 & 1) != 0)) {
          if (iVar7 == 0x197) {
            if ((*(byte *)(param_2 + 0x3fd) & 1) == 0) goto LAB_001d6074;
          }
          else if ((iVar7 != 0x191) || (-1 < *(char *)(param_2 + 0x3fc))) {
LAB_001d6074:
            pcVar12 = (char *)*plVar2;
            iVar8 = strncmp(pcVar12,"HTTP",4);
            if ((iVar8 == 0) &&
               ((pcVar12 = strchr(pcVar12,0x20), pcVar12 != (char *)0x0 &&
                (pcVar12 = pcVar12 + 1, *pcVar12 != '\0')))) {
              cVar6 = '\r';
              pcVar18 = strchr(pcVar12,0xd);
              if (pcVar18 == (char *)0x0) {
                cVar6 = '\n';
                pcVar18 = strchr(pcVar12,10);
                if (pcVar18 == (char *)0x0) goto LAB_001d5f34;
              }
              *pcVar18 = '\0';
              FUN_001db9c8(param_1,"The requested URL returned error: %s",pcVar12);
              *pcVar18 = cVar6;
              return 0x16;
            }
            goto LAB_001d5f34;
          }
        }
      }
      else {
        *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 8;
      }
      iVar8 = *param3_00;
      if (iVar8 == 0x14) {
LAB_001d57fc:
        puVar17 = *(undefined4 **)(param_2 + 0x660);
        uVar15 = 2;
LAB_001d5804:
        *puVar17 = uVar15;
      }
      else {
        if (iVar8 != 10) {
          if ((iVar7 == 0x65) && (*(int *)(param_1 + 0x19c) == 1)) goto LAB_001d57fc;
          if ((((iVar8 < 0xb) || ((*(byte *)(param_2 + 0x3fc) & 1) != 0)) ||
              (*(long *)(param_2 + 0x660) == 0)) ||
             (uVar10 = FUN_001da2e0(param_1,param_2), (uVar10 & 1) != 0)) goto LAB_001d5808;
          puVar17 = *(undefined4 **)(param_2 + 0x660);
          uVar15 = 1;
          goto LAB_001d5804;
        }
        FUN_001db818(param_1,"HTTP 1.0, assume close after body\n");
        FUN_001c6c60(param_2,1);
      }
LAB_001d5808:
      if (*param5 != 0xcc) {
        if (*param5 != 0x130) goto LAB_001d5844;
        if (*(int *)(param_1 + 0xa28) != 0) {
          *(byte *)(param_1 + 0x16d8) = *(byte *)(param_1 + 0x16d8) | 1;
        }
      }
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 0x10;
    }
LAB_001d5844:
    if ((((*(byte *)(param_1 + 0x660) >> 4 & 1) == 0) &&
        ((*(byte *)(param_1 + 0xf44) >> 4 & 1) == 0)) &&
       (iVar7 = thunk_FUN_001e0a34("Content-Length:",*plVar2,0xf), iVar7 != 0)) {
      iVar7 = FUN_001e0d2c(*plVar2 + 0xf,0,10,&local_70);
      if (iVar7 == 1) {
        if (*(long *)(param_1 + 0xc38) == 0) {
          FUN_001c6c60(param_2,2);
          pcVar12 = "Overflow Content-Length: value!\n";
LAB_001d5b34:
          FUN_001db818(param_1,pcVar12);
          goto LAB_001d5b98;
        }
      }
      else {
        if (iVar7 != 0) {
          iVar7 = 8;
          pcVar12 = "Invalid Content-Length: value";
          goto LAB_001d60f8;
        }
        if ((*(long *)(param_1 + 0xc38) == 0) || (local_70 <= *(long *)(param_1 + 0xc38))) {
          *(long *)(param_1 + 0xf0) = local_70;
          *(long *)(param_1 + 0xf8) = local_70;
          FUN_001dac48(param_1);
          goto LAB_001d5b98;
        }
      }
      iVar7 = 0x3f;
      pcVar12 = "Maximum file size exceeded";
LAB_001d60f8:
      FUN_001db9c8(param_1,pcVar12);
      return iVar7;
    }
    iVar7 = thunk_FUN_001e0a34("Content-Type:",*plVar2,0xd);
    if (iVar7 == 0) {
      iVar8 = thunk_FUN_001e0a34("Server:",*plVar2,7);
      iVar7 = *param3_00;
      if (iVar8 == 0) {
        if (iVar7 == 10) {
          if ((*(byte *)(param_2 + 0x3fc) >> 5 & 1) != 0) {
            uVar10 = FUN_001d4bd8(*plVar2,"Proxy-Connection:","keep-alive");
            if ((uVar10 & 1) != 0) {
              FUN_001c6c60(param_2,0);
              pcVar12 = "HTTP/1.0 proxy connection set to keep alive!\n";
              goto LAB_001d5b34;
            }
            iVar7 = *param3_00;
            goto LAB_001d5aa4;
          }
LAB_001d5b00:
          uVar10 = FUN_001d4bd8(*plVar2,"Connection:","keep-alive");
          if ((uVar10 & 1) != 0) {
            FUN_001c6c60(param_2,0);
            pcVar12 = "HTTP/1.0 connection set to keep alive!\n";
            goto LAB_001d5b34;
          }
        }
        else {
LAB_001d5aa4:
          if (iVar7 == 0xb) {
            if ((*(byte *)(param_2 + 0x3fc) >> 5 & 1) != 0) {
              uVar10 = FUN_001d4bd8(*plVar2,"Proxy-Connection:","close");
              if ((uVar10 & 1) != 0) {
                FUN_001c6c60(param_2,1);
                pcVar12 = "HTTP/1.1 proxy connection set close!\n";
                goto LAB_001d5b34;
              }
              iVar7 = *param3_00;
              goto LAB_001d5af8;
            }
          }
          else {
LAB_001d5af8:
            if (iVar7 == 10) goto LAB_001d5b00;
          }
        }
        uVar10 = FUN_001d4bd8(*plVar2,"Connection:","close");
        if ((uVar10 & 1) == 0) {
          iVar7 = thunk_FUN_001e0a34("Transfer-Encoding:",*plVar2,0x12);
          if (iVar7 == 0) {
            iVar7 = thunk_FUN_001e0a34("Content-Encoding:",*plVar2,0x11);
            if ((iVar7 != 0) && (*(long *)(param_1 + 0xcc8) != 0)) {
              lVar19 = *plVar2 + 0x11;
              uVar14 = 0;
              goto LAB_001d5b90;
            }
            iVar7 = thunk_FUN_001e0a34("Content-Range:",*plVar2,0xe);
            if (iVar7 != 0) {
              pcVar12 = (char *)(*plVar2 + 0xe);
              cVar6 = *pcVar12;
              while (cVar6 != '\0') {
                iVar7 = FUN_001cb28c(cVar6);
                cVar6 = *pcVar12;
                if ((iVar7 != 0) || (cVar6 == '*')) goto LAB_001d5c88;
                pcVar12 = pcVar12 + 1;
                cVar6 = *pcVar12;
              }
              cVar6 = '\0';
LAB_001d5c88:
              iVar7 = FUN_001cb28c(cVar6);
              if (iVar7 == 0) {
                *(undefined8 *)(param_1 + 0x14f8) = 0;
              }
              else {
                iVar7 = FUN_001e0d2c(pcVar12,0,10,param_1 + 0x178);
                if ((iVar7 == 0) && (*(long *)(param_1 + 0x14f8) == *(long *)(param_1 + 0x178))) {
                  *(ushort *)(param_1 + 0x660) = *(ushort *)(param_1 + 0x660) | 2;
                }
              }
              goto LAB_001d5b98;
            }
            if ((*(long *)(param_1 + 0xf70) != 0) &&
               (iVar7 = thunk_FUN_001e0a34("Set-Cookie:",*plVar2,0xb), iVar7 != 0)) {
              FUN_001dc298(param_1,2,2);
              lVar19 = *(long *)(param_2 + 0x490);
              if (lVar19 == 0) {
                lVar19 = *(long *)(param_2 + 0xd0);
              }
              FUN_001c4060(param_1,*(undefined8 *)(param_1 + 0xf70),1,0,
                           *(long *)(param_1 + 0x170) + 0xb,lVar19,*(undefined8 *)(param_1 + 0x1580)
                           ,*(uint *)(*(long *)(param_2 + 0x420) + 0x80) >> 1 & 1);
              FUN_001dc2d8(param_1,2);
              goto LAB_001d5b98;
            }
            iVar7 = thunk_FUN_001e0a34("Last-Modified:",*plVar2,0xe);
            if ((iVar7 != 0) &&
               ((*(int *)(param_1 + 0xa28) != 0 || ((*(byte *)(param_1 + 0xf41) >> 1 & 1) != 0)))) {
              local_70 = FUN_001ed1e0(0);
              uVar14 = FUN_001d9af8(*(long *)(param_1 + 0x170) + 0xe,&local_70);
              *(undefined8 *)(param_1 + 0x1a8) = uVar14;
              if ((*(byte *)(param_1 + 0xf41) >> 1 & 1) != 0) {
                *(undefined8 *)(param_1 + 0x1608) = uVar14;
              }
              goto LAB_001d5b98;
            }
            iVar7 = thunk_FUN_001e0a34("WWW-Authenticate:",*plVar2,0x11);
            if ((iVar7 != 0) && (*param5 == 0x191)) {
              uVar14 = 0;
LAB_001d5df4:
              pcVar12 = (char *)FUN_001d3cc0(*plVar2);
              if (pcVar12 == (char *)0x0) {
                return 0x1b;
              }
              FUN_001d455c(param_2,uVar14,pcVar12);
              goto LAB_001d5958;
            }
            iVar7 = thunk_FUN_001e0a34("Proxy-authenticate:",*plVar2,0x13);
            if ((iVar7 != 0) && (*param5 == 0x197)) {
              uVar14 = 1;
              goto LAB_001d5df4;
            }
            if (((99 < *param5 - 300U) ||
                (iVar7 = thunk_FUN_001e0a34("Location:",*plVar2,9), iVar7 == 0)) ||
               (*(long *)(param_1 + 0x1c8) != 0)) {
              if ((*(byte *)(*(long *)(param_2 + 0x420) + 0x82) >> 2 & 1) != 0) {
                return 4;
              }
              goto LAB_001d5b98;
            }
            pcVar12 = (char *)FUN_001d3cc0(*plVar2);
            if (pcVar12 == (char *)0x0) {
              return 0x1b;
            }
            if (*pcVar12 == '\0') goto LAB_001d5958;
            *(char **)(param_1 + 0x1c8) = pcVar12;
            if ((*(byte *)(param_1 + 0xf42) >> 2 & 1) == 0) goto LAB_001d5b98;
            if (*(char *)(param_1 + 0x6c1) == '\0') {
              uVar14 = FUN_001ece94();
              uVar11 = FUN_001ec328();
              *(undefined8 *)(param_1 + 0x1d0) = uVar11;
              FUN_001ec308(uVar14);
              lVar19 = *(long *)(param_1 + 0x1d0);
            }
            else {
              lVar19 = FUN_001ec328();
              *(long *)(param_1 + 0x1d0) = lVar19;
            }
            if (lVar19 == 0) {
              return 0x1b;
            }
            iVar7 = FUN_001d401c(param_2);
          }
          else {
            lVar19 = *plVar2 + 0x12;
            uVar14 = 1;
LAB_001d5b90:
            iVar7 = FUN_001d6470(param_2,lVar19,uVar14);
          }
          if (iVar7 != 0) {
            return iVar7;
          }
        }
        else {
          FUN_001c6c60(param_2,2);
        }
      }
      else if (iVar7 < 0x14) {
        pcVar12 = (char *)FUN_001d3cc0(*plVar2);
        if (((*(int **)(param_2 + 0x660) != (int *)0x0) && (**(int **)(param_2 + 0x660) == 1)) &&
           (uVar10 = FUN_001da464(param_1,pcVar12), (uVar10 & 1) != 0)) {
          **(undefined4 **)(param_2 + 0x660) = 0xffffffff;
        }
        goto LAB_001d5958;
      }
    }
    else {
      pcVar12 = (char *)FUN_001d3cc0(*plVar2);
      if (pcVar12 == (char *)0x0) {
        return 0x1b;
      }
      if (*pcVar12 != '\0') {
        FUN_001ec308(*(undefined8 *)(param_1 + 0x1638));
        *(char **)(param_1 + 0x1638) = pcVar12;
        goto LAB_001d5b98;
      }
LAB_001d5958:
      FUN_001ec308(pcVar12);
    }
LAB_001d5b98:
    uVar15 = 2;
    if ((*(ulong *)(param_1 + 0xf40) & 0x200000) != 0) {
      uVar15 = 3;
    }
    if (((uint)*(ulong *)(param_1 + 0xf40) >> 0x1a & 1) != 0) {
      FUN_001db920(param_1,1,*(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0x150));
    }
    iVar7 = FUN_001dbce0(param_2,uVar15,*(undefined8 *)(param_1 + 0x170),
                         *(undefined8 *)(param_1 + 0x150));
    if (iVar7 != 0) {
      return iVar7;
    }
    *(long *)(param_1 + 0x1610) = *(long *)(param_1 + 0x1610) + *(long *)(param_1 + 0x150);
    *(long *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) + *(long *)(param_1 + 0x150);
LAB_001d5bf4:
    *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x1120);
    *(undefined8 *)(param_1 + 0x150) = 0;
    pcVar12 = *(char **)(param_1 + 0x158);
    if (*pcVar12 == '\0') {
      return 0;
    }
  } while( true );
}


