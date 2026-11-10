/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c4060; name: FUN_001c4060
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_001c4060(undefined8 param_1,long param_2,ulong param_3,uint param_4,char *param_5,char *param_6,
            char *param_7,uint param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  char *__s;
  char cVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  size_t sVar11;
  char *pcVar12;
  size_t sVar13;
  undefined8 uVar14;
  char *pcVar15;
  ulong uVar16;
  void *__dest;
  char *pcVar17;
  byte bVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *__dest_00;
  undefined4 local_2074;
  char local_2070 [4096];
  undefined8 local_1070;
  undefined1 auStack_70 [16];
  
  lVar9 = FUN_001ed1e0(0);
  puVar10 = (undefined8 *)FUN_001ec338(1,0x68);
  if (puVar10 == (void *)0x0) {
    return (undefined8 *)0x0;
  }
  if ((param_3 & 1) == 0) {
    local_1070 = 0;
    iVar7 = strncmp(param_5,"#HttpOnly_",10);
    if (iVar7 == 0) {
      param_5 = param_5 + 10;
      *(undefined1 *)((long)puVar10 + 0x5a) = 1;
    }
    if (*param_5 == '#') goto LAB_001c4150;
    pcVar12 = strchr(param_5,0xd);
    if (pcVar12 != (char *)0x0) {
      *pcVar12 = '\0';
    }
    pcVar12 = strchr(param_5,10);
    if (pcVar12 != (char *)0x0) {
      *pcVar12 = '\0';
    }
    pcVar12 = (char *)FUN_001e0c9c(param_5,&DAT_03ca35d8,&local_1070);
    if (pcVar12 == (char *)0x0) goto LAB_001c4954;
    iVar7 = 0;
    bVar6 = false;
    do {
      switch(iVar7) {
      case 0:
        pcVar17 = pcVar12 + 1;
        if (*pcVar12 != '.') {
          pcVar17 = pcVar12;
        }
        lVar9 = FUN_001ec328(pcVar17);
        iVar7 = 0;
        puVar10[5] = lVar9;
LAB_001c4674:
        bVar6 = (bool)(bVar6 | lVar9 == 0);
        break;
      case 1:
        iVar7 = FUN_001e0990(pcVar12,&DAT_03c1d220);
        *(bool *)(puVar10 + 8) = iVar7 != 0;
        iVar7 = 1;
        break;
      case 2:
        iVar7 = strcmp("TRUE",pcVar12);
        if ((iVar7 == 0) || (iVar7 = strcmp("FALSE",pcVar12), iVar7 == 0)) {
          lVar9 = FUN_001ec328(&DAT_03bdfb3b);
          puVar10[3] = lVar9;
          lVar19 = FUN_001ec328(&DAT_03bdfb3b);
          bVar6 = (bool)(bVar6 | lVar9 == 0 | lVar19 == 0);
          puVar10[4] = lVar19;
          goto switchD_001c464c_caseD_3;
        }
        lVar9 = FUN_001ec328(pcVar12);
        puVar10[3] = lVar9;
        if (lVar9 != 0) {
          lVar9 = FUN_001c4ce8();
          puVar10[4] = lVar9;
          iVar7 = 2;
          goto LAB_001c4674;
        }
        iVar7 = 2;
LAB_001c480c:
        bVar6 = true;
        break;
      case 3:
switchD_001c464c_caseD_3:
        *(undefined1 *)(puVar10 + 0xb) = 0;
        iVar7 = FUN_001e0990(pcVar12,&DAT_03c1d220);
        if (iVar7 != 0) {
          if (((param_8 & 1) == 0) && (*(char *)(param_2 + 0x808) == '\0')) {
            iVar7 = 3;
            goto LAB_001c480c;
          }
          *(undefined1 *)(puVar10 + 0xb) = 1;
        }
        iVar7 = 3;
        break;
      case 4:
        iVar7 = FUN_001e0d2c(pcVar12,0,10,puVar10 + 6);
        bVar6 = (bool)(bVar6 | iVar7 != 0);
        iVar7 = 4;
        break;
      case 5:
        lVar9 = FUN_001ec328(pcVar12);
        puVar10[1] = lVar9;
        bVar6 = (bool)(bVar6 | lVar9 == 0);
        iVar7 = FUN_001e0a34("__Secure-",lVar9,9);
        if (iVar7 == 0) {
          iVar7 = FUN_001e0a34("__Host-",puVar10[1],7);
          if (iVar7 != 0) {
            bVar18 = *(byte *)(puVar10 + 0xc) | 2;
            goto LAB_001c47f4;
          }
        }
        else {
          bVar18 = *(byte *)(puVar10 + 0xc) | 1;
LAB_001c47f4:
          *(byte *)(puVar10 + 0xc) = bVar18;
        }
        iVar7 = 5;
        break;
      case 6:
        lVar9 = FUN_001ec328(pcVar12);
        bVar6 = (bool)(bVar6 | lVar9 == 0);
        iVar7 = 6;
        puVar10[2] = lVar9;
      }
      pcVar12 = (char *)FUN_001e0c9c(0,&DAT_03ca35d8,&local_1070);
      iVar7 = iVar7 + 1;
    } while ((pcVar12 != (char *)0x0) && (!bVar6));
    if (iVar7 == 6) {
      lVar9 = FUN_001ec328(&DAT_03c886bc);
      bVar6 = (bool)(bVar6 | lVar9 == 0);
      iVar7 = 6;
      if (lVar9 != 0) {
        iVar7 = 7;
      }
      puVar10[2] = lVar9;
    }
    if ((bVar6) || (iVar7 != 7)) goto LAB_001c4954;
  }
  else {
    sVar11 = strlen(param_5);
    if (5000 < sVar11) {
LAB_001c4150:
      FUN_001ec308(puVar10);
      return (undefined8 *)0x0;
    }
    pcVar12 = strchr(param_5,0x3b);
    for (; (*param_5 == '\t' || (*param_5 == ' ')); param_5 = param_5 + 1) {
    }
    bVar6 = false;
    local_2074 = param_8;
LAB_001c4174:
    local_2070[0] = '\0';
    local_1070 = local_1070 & 0xffffffffffffff00;
    iVar7 = sscanf(param_5,"%4095[^;\r\n=] =%4095[^;\r\n]",&local_1070,local_2070);
    if (iVar7 < 1) {
LAB_001c43d8:
      bVar5 = bVar6;
      if ((pcVar12 == (char *)0x0) || (param_5 = pcVar12, *pcVar12 == '\0')) goto LAB_001c4874;
      do {
        param_5 = param_5 + 1;
        cVar3 = *param_5;
      } while (cVar3 == ' ' || cVar3 == '\t');
      pcVar12 = strchr(param_5,0x3b);
      if (pcVar12 == (char *)0x0) {
        if (cVar3 == '\0') goto LAB_001c4874;
        sVar11 = strlen(param_5);
        pcVar12 = param_5 + sVar11;
      }
      bVar6 = bVar5;
      if (pcVar12 == (char *)0x0) goto LAB_001c4874;
      goto LAB_001c4174;
    }
    sVar11 = strlen(local_2070);
    sVar13 = strlen((char *)&local_1070);
    if (((0xffe < sVar11) || (0xffe < sVar13)) || (0x1000 < sVar13 + sVar11)) {
      FUN_001c4c88(puVar10);
      FUN_001db818(param_1,"oversized cookie dropped, name/val %zu + %zu bytes\n",sVar13,sVar11);
      return (undefined8 *)0x0;
    }
    cVar3 = param_5[sVar13];
    if ((sVar13 != 0) && ((cVar4 = (param_5 + sVar13)[-1], cVar4 == ' ' || (cVar4 == '\t')))) {
      for (; ((cVar4 == ' ' || (cVar4 == '\t')) && (sVar13 != 0)); sVar13 = sVar13 - 1) {
        cVar4 = param_5[sVar13 - 2];
      }
      local_2070[sVar13 + 0x1000] = '\0';
    }
    for (; sVar11 != 0; sVar11 = sVar11 - 1) {
      if (local_2070[sVar11 - 1] != ' ' && local_2070[sVar11 - 1] != '\t') {
        bVar5 = false;
        goto LAB_001c425c;
      }
      local_2070[sVar11 - 1] = '\0';
    }
    bVar5 = true;
LAB_001c425c:
    for (pcVar17 = local_2070; *pcVar17 == ' ' || *pcVar17 == '\t'; pcVar17 = pcVar17 + 1) {
    }
    if (((3 < sVar13) && ((char)local_1070 == '_')) && (local_1070._1_1_ == '_')) {
      iVar7 = FUN_001e0a34("__Secure-",&local_1070,9);
      if (iVar7 == 0) {
        iVar7 = FUN_001e0a34("__Host-",&local_1070,7);
        if (iVar7 == 0) goto LAB_001c42e8;
        bVar18 = *(byte *)(puVar10 + 0xc) | 2;
      }
      else {
        bVar18 = *(byte *)(puVar10 + 0xc) | 1;
      }
      *(byte *)(puVar10 + 0xc) = bVar18;
    }
LAB_001c42e8:
    if (puVar10[1] == 0) {
      if (cVar3 != '=') goto LAB_001c45b0;
      uVar14 = FUN_001ec328(&local_1070);
      puVar10[1] = uVar14;
      lVar19 = FUN_001ec328(pcVar17);
      bVar5 = true;
      puVar10[2] = lVar19;
      if ((lVar19 == 0) || (puVar10[1] == 0)) goto LAB_001c4874;
      goto LAB_001c43d8;
    }
    if (bVar5) {
      iVar7 = FUN_001e0990("secure",&local_1070);
      if (iVar7 == 0) {
        iVar7 = FUN_001e0990("httponly",&local_1070);
        if (iVar7 == 0) {
          if (cVar3 == '=') goto LAB_001c4390;
        }
        else {
          *(undefined1 *)((long)puVar10 + 0x5a) = 1;
        }
      }
      else {
        if (((local_2074 & 1) == 0) && (*(char *)(param_2 + 0x808) != '\0')) goto LAB_001c45b0;
        *(undefined1 *)(puVar10 + 0xb) = 1;
      }
      goto LAB_001c43d8;
    }
LAB_001c4390:
    iVar7 = FUN_001e0990(&DAT_03c8f575,&local_1070);
    if (iVar7 == 0) {
      iVar7 = FUN_001e0990("domain",&local_1070);
      if (iVar7 == 0) {
        iVar7 = FUN_001e0990("version",&local_1070);
        if (iVar7 == 0) {
          iVar7 = FUN_001e0990("max-age",&local_1070);
          if (iVar7 == 0) {
            iVar7 = FUN_001e0990("expires",&local_1070);
            if (iVar7 != 0) {
              FUN_001ec308(puVar10[7]);
              lVar19 = FUN_001ec328(pcVar17);
              puVar10[7] = lVar19;
              goto joined_r0x001c45ac;
            }
          }
          else {
            FUN_001ec308(puVar10[10]);
            lVar19 = FUN_001ec328(pcVar17);
            puVar10[10] = lVar19;
            if (lVar19 == 0) {
              bVar5 = true;
              goto LAB_001c491c;
            }
          }
        }
        else {
          FUN_001ec308(puVar10[9]);
          lVar19 = FUN_001ec328(pcVar17);
          puVar10[9] = lVar19;
joined_r0x001c45ac:
          if (lVar19 == 0) goto LAB_001c45b0;
        }
      }
      else {
        __s = pcVar17 + 1;
        if (*pcVar17 != '.') {
          __s = pcVar17;
        }
        pcVar15 = strchr(__s,0x2e);
        pcVar17 = param_6;
        if (pcVar15 == (char *)0x0) {
          iVar7 = FUN_001e0990(__s,"localhost");
          pcVar17 = ":";
          if (iVar7 != 0) {
            pcVar17 = param_6;
          }
        }
        pcVar15 = __s;
        if (pcVar17 != (char *)0x0) {
          pcVar15 = pcVar17;
        }
        iVar7 = FUN_001cb444(2,pcVar15,auStack_70);
        param_6 = pcVar17;
        if (pcVar17 == (char *)0x0) {
LAB_001c4510:
          FUN_001ec308(puVar10[5]);
          lVar19 = FUN_001ec328(__s);
          puVar10[5] = lVar19;
          if ((iVar7 == 0) && (lVar19 != 0)) {
            *(undefined1 *)(puVar10 + 8) = 1;
          }
          else {
            if (lVar19 == 0) goto LAB_001c45b0;
            bVar6 = (bool)(bVar6 | lVar19 == 0);
          }
        }
        else {
          if (iVar7 == 0) {
            uVar16 = FUN_001c4da8();
            if ((uVar16 & 1) != 0) goto LAB_001c4510;
          }
          else {
            iVar8 = strcmp(__s,pcVar17);
            if (iVar8 == 0) goto LAB_001c4510;
          }
          FUN_001db818(param_1,"skipped cookie with bad tailmatch domain: %s\n",__s);
          bVar6 = true;
        }
      }
      goto LAB_001c43d8;
    }
    FUN_001ec308(puVar10[3]);
    lVar19 = FUN_001ec328(pcVar17);
    puVar10[3] = lVar19;
    if (lVar19 != 0) {
      FUN_001ec308(puVar10[4]);
      lVar19 = FUN_001c4ce8(puVar10[3]);
      puVar10[4] = lVar19;
      if (lVar19 != 0) goto LAB_001c43d8;
    }
LAB_001c45b0:
    bVar5 = true;
LAB_001c4874:
    pcVar12 = (char *)puVar10[10];
    if (pcVar12 == (char *)0x0) {
LAB_001c491c:
      param_8 = local_2074;
      if (puVar10[7] != 0) {
        lVar9 = FUN_001d9af8(puVar10[7],0);
        puVar10[6] = lVar9;
        if (lVar9 == 0) {
          puVar10[6] = 1;
        }
        else if (lVar9 < 0) {
          puVar10[6] = 0;
        }
      }
    }
    else {
      plVar1 = puVar10 + 6;
      pcVar17 = pcVar12 + 1;
      if (*pcVar12 != '\"') {
        pcVar17 = pcVar12;
      }
      iVar7 = FUN_001e0d2c(pcVar17,0,10,plVar1);
      param_8 = local_2074;
      if (iVar7 == 0) {
        lVar19 = *plVar1;
        if (lVar19 == 0) {
          lVar19 = 1;
        }
        else {
          if (0x7fffffffffffffff - lVar9 < lVar19) {
            *plVar1 = 0x7fffffffffffffff;
            goto LAB_001c4950;
          }
          lVar19 = lVar19 + lVar9;
        }
      }
      else {
        if (iVar7 != 1) goto LAB_001c4950;
        lVar19 = 0x7fffffffffffffff;
      }
      *plVar1 = lVar19;
    }
LAB_001c4950:
    if (bVar5) goto LAB_001c4954;
    if ((param_6 != (char *)0x0) && (puVar10[5] == 0)) {
      lVar9 = FUN_001ec328(param_6);
      puVar10[5] = lVar9;
      if (lVar9 == 0) goto LAB_001c4954;
    }
    if ((param_7 != (char *)0x0) && (puVar10[3] == 0)) {
      pcVar12 = strchr(param_7,0x3f);
      if (pcVar12 == (char *)0x0) {
        pcVar12 = strrchr(param_7,0x2f);
      }
      else {
        pcVar12 = (char *)FUN_001c59f4(param_7,0x2f,(long)pcVar12 - (long)param_7);
      }
      if (pcVar12 != (char *)0x0) {
        __dest = (void *)FUN_001ec2f8(pcVar12 + (2 - (long)param_7));
        puVar10[3] = __dest;
        if (__dest == (void *)0x0) goto LAB_001c4954;
        memcpy(__dest,param_7,(size_t)(pcVar12 + (1 - (long)param_7)));
        (pcVar12 + (1 - (long)param_7))[puVar10[3]] = '\0';
        lVar9 = FUN_001c4ce8(puVar10[3]);
        puVar10[4] = lVar9;
        if (lVar9 == 0) goto LAB_001c4954;
      }
    }
    if (puVar10[1] == 0) goto LAB_001c4954;
  }
  if (((((*(byte *)(puVar10 + 0xc) & 1) == 0) || (*(char *)(puVar10 + 0xb) != '\0')) &&
      (((*(byte *)(puVar10 + 0xc) >> 1 & 1) == 0 ||
       ((((*(char *)(puVar10 + 0xb) != '\0' && ((char *)puVar10[3] != (char *)0x0)) &&
         (iVar7 = strcmp((char *)puVar10[3],"/"), iVar7 == 0)) && (*(char *)(puVar10 + 8) == '\0')))
       ))) && (((*(char *)(param_2 + 0x808) != '\0' || (*(char *)(param_2 + 0x818) == '\0')) ||
               (puVar10[6] != 0)))) {
    *(char *)((long)puVar10 + 0x59) = *(char *)(param_2 + 0x808);
    iVar7 = *(int *)(param_2 + 0x81c) + 1;
    *(int *)(param_2 + 0x81c) = iVar7;
    *(int *)((long)puVar10 + 0x5c) = iVar7;
    if ((param_4 & 1) == 0) {
      FUN_001c4e28(param_2);
    }
    lVar9 = FUN_001c4ec0(puVar10[5]);
    puVar2 = (undefined8 *)(param_2 + lVar9 * 8);
    puVar20 = (undefined8 *)*puVar2;
    if (puVar20 == (undefined8 *)0x0) {
      puVar20 = (undefined8 *)0x0;
    }
    else {
      do {
        __dest_00 = puVar20;
        iVar7 = FUN_001e0990(__dest_00[1],puVar10[1]);
        if (iVar7 != 0) {
          if (__dest_00[5] == 0) {
            if (puVar10[5] == 0) goto LAB_001c4ac8;
          }
          else if (((puVar10[5] != 0) && (iVar7 = FUN_001e0990(), iVar7 != 0)) &&
                  (*(char *)(__dest_00 + 8) == *(char *)(puVar10 + 8))) {
LAB_001c4ac8:
            pcVar12 = (char *)__dest_00[4];
            lVar9 = puVar10[4];
            if (pcVar12 == (char *)0x0) {
              if (lVar9 == 0) goto LAB_001c4bf4;
            }
            else if (lVar9 != 0) {
              if (((*(char *)(__dest_00 + 0xb) == '\0') || (*(char *)(puVar10 + 0xb) != '\0')) ||
                 ((param_8 & 1) != 0)) {
                iVar7 = FUN_001e0990(pcVar12,lVar9);
                if (iVar7 == 0) goto LAB_001c4b04;
              }
              else {
                pcVar17 = strchr(pcVar12 + 1,0x2f);
                if (pcVar17 == (char *)0x0) {
                  sVar11 = strlen(pcVar12);
                }
                else {
                  sVar11 = (long)pcVar17 - (long)pcVar12;
                }
                iVar7 = FUN_001e0a34(pcVar12,lVar9,sVar11);
                if (iVar7 != 0) goto LAB_001c4954;
              }
LAB_001c4bf4:
              if ((*(char *)((long)puVar10 + 0x59) != '\0') ||
                 (*(char *)((long)__dest_00 + 0x59) == '\0')) {
                *puVar10 = *__dest_00;
                *(undefined4 *)((long)puVar10 + 0x5c) = *(undefined4 *)((long)__dest_00 + 0x5c);
                FUN_001ec308(__dest_00[1]);
                FUN_001ec308(__dest_00[2]);
                FUN_001ec308(__dest_00[5]);
                FUN_001ec308(__dest_00[3]);
                FUN_001ec308(__dest_00[4]);
                FUN_001ec308(__dest_00[7]);
                FUN_001ec308(__dest_00[9]);
                FUN_001ec308(__dest_00[10]);
                memcpy(__dest_00,puVar10,0x68);
                FUN_001ec308(puVar10);
                puVar10 = __dest_00;
                do {
                  puVar20 = puVar10;
                  puVar10 = (undefined8 *)*puVar20;
                } while ((undefined8 *)*puVar20 != (undefined8 *)0x0);
                bVar6 = true;
                goto LAB_001c4b64;
              }
              goto LAB_001c4954;
            }
          }
        }
LAB_001c4b04:
        puVar20 = (undefined8 *)*__dest_00;
      } while ((undefined8 *)*__dest_00 != (undefined8 *)0x0);
      puVar20 = __dest_00;
    }
    bVar6 = false;
    __dest_00 = puVar10;
LAB_001c4b64:
    if (*(char *)(param_2 + 0x808) != '\0') {
      pcVar12 = "Replaced";
      if (!bVar6) {
        pcVar12 = "Added";
      }
      FUN_001db818(param_1,"%s cookie %s=\"%s\" for domain %s, path %s, expire %ld\n",pcVar12,
                   __dest_00[1],__dest_00[2],__dest_00[5],__dest_00[3],__dest_00[6]);
    }
    if (!bVar6) {
      if (puVar20 != (undefined8 *)0x0) {
        puVar2 = puVar20;
      }
      *puVar2 = __dest_00;
      *(long *)(param_2 + 0x810) = *(long *)(param_2 + 0x810) + 1;
      return __dest_00;
    }
    return __dest_00;
  }
LAB_001c4954:
  FUN_001c4c88(puVar10);
  return (undefined8 *)0x0;
}


