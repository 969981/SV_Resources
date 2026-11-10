/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c9794; name: FUN_001c9794
 */


undefined8 FUN_001c9794(long param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  long *plVar9;
  char *pcVar10;
  char *__s;
  long lVar11;
  char *local_2c0;
  char acStack_2b4 [64];
  char acStack_274 [264];
  undefined4 local_16c;
  char local_168 [264];
  
  local_16c = 0;
  plVar9 = *(long **)(param_1 + 0xf60);
  *(byte *)(param_1 + 0xf68) = *(byte *)(param_1 + 0xf68) & 0xfb;
  do {
    if (plVar9 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0xf60) = 0;
      return 0;
    }
    pcVar10 = (char *)*plVar9;
    if (pcVar10 != (char *)0x0) {
      if (*pcVar10 == '-') {
        iVar1 = sscanf(pcVar10 + 1,"%255[^:]:%d",local_168,&local_16c);
        if (iVar1 == 2) {
          FUN_001c9414(local_168,local_16c,acStack_274);
          sVar2 = strlen(acStack_274);
          if (*(long *)(param_1 + 0xe8) != 0) {
            FUN_001dc298(param_1,3,2);
          }
          FUN_001c8a64(*(undefined8 *)(param_1 + 200),acStack_274,sVar2 + 1);
          if (*(long *)(param_1 + 0xe8) != 0) {
            FUN_001dc2d8(param_1,3);
          }
        }
        else {
          FUN_001db818(param_1,"Couldn\'t parse CURLOPT_RESOLVE removal entry \'%s\'!\n",*plVar9);
        }
      }
      else {
        pcVar3 = strchr(pcVar10,0x3a);
        if ((pcVar3 == (char *)0x0) || (0xff < (long)pcVar3 - (long)pcVar10)) {
LAB_001c9ae4:
          lVar11 = 0;
        }
        else {
          memcpy(local_168,pcVar10,(long)pcVar3 - (long)pcVar10);
          pcVar3[(long)(local_168 + -*plVar9)] = '\0';
          uVar4 = strtoul(pcVar3 + 1,&local_2c0,10);
          if ((uVar4 >> 0x10 != 0) || ((local_2c0 == pcVar3 + 1 || (*local_2c0 != ':'))))
          goto LAB_001c9ae4;
          local_16c = (undefined4)uVar4;
          pcVar10 = local_2c0 + 1;
          if (*local_2c0 == '\0') goto LAB_001c9ae4;
          lVar11 = 0;
          pcVar3 = local_2c0;
          lVar7 = 0;
          do {
            __s = pcVar3 + 1;
            pcVar5 = strchr(__s,0x2c);
            if (pcVar5 == (char *)0x0) {
              sVar2 = strlen(__s);
              pcVar5 = __s + sVar2;
            }
            pcVar8 = pcVar5;
            local_2c0 = pcVar5;
            if (*__s == '[') {
              if ((pcVar5 == __s) || (pcVar8 = pcVar5 + -1, *pcVar8 != ']')) goto LAB_001c9ae8;
              __s = pcVar3 + 2;
            }
            uVar4 = (long)pcVar8 - (long)__s;
            lVar6 = lVar7;
            if (uVar4 != 0) {
              if (0x3f < uVar4) goto LAB_001c9ae8;
              memcpy(acStack_2b4,__s,uVar4);
              acStack_2b4[uVar4] = '\0';
              pcVar3 = strchr(acStack_2b4,0x3a);
              if (pcVar3 == (char *)0x0) {
                lVar6 = FUN_001c8024(acStack_2b4,local_16c);
                if (lVar6 == 0) {
                  FUN_001db818(param_1,"Resolve address \'%s\' found illegal!\n",acStack_2b4);
                  goto LAB_001c9ae8;
                }
                if (lVar7 == 0) {
                  lVar11 = lVar6;
                }
                else {
                  *(long *)(lVar7 + 0x28) = lVar6;
                }
              }
              else {
                FUN_001db818(param_1,"Ignoring resolve address \'%s\', missing IPv6 support.\n",
                             acStack_2b4);
              }
            }
            pcVar3 = pcVar5;
            lVar7 = lVar6;
          } while (*pcVar5 != '\0');
          if (lVar11 != 0) {
            FUN_001c9414(local_168,local_16c,acStack_274);
            sVar2 = strlen(acStack_274);
            if (*(long *)(param_1 + 0xe8) != 0) {
              FUN_001dc298(param_1,3,2);
            }
            lVar7 = FUN_001c8b08(*(undefined8 *)(param_1 + 200),acStack_274,sVar2 + 1);
            if (lVar7 != 0) {
              FUN_001db818(param_1,"RESOLVE %s:%d is - old addresses discarded!\n",local_168,
                           local_16c);
              FUN_001c8a64(*(undefined8 *)(param_1 + 200),acStack_274,sVar2 + 1);
            }
            lVar7 = FUN_001c9228(param_1,lVar11,local_168,local_16c);
            if (lVar7 != 0) {
              *(undefined8 *)(lVar7 + 8) = 0;
              *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + -1;
            }
            if (*(long *)(param_1 + 0xe8) != 0) {
              FUN_001dc2d8(param_1,3);
            }
            if (lVar7 == 0) {
              FUN_001c7e00(lVar11);
              return 0x1b;
            }
            FUN_001db818(param_1,"Added %s:%d:%s to DNS cache\n",local_168,local_16c,pcVar10);
            if ((local_168[0] == '*') && (local_168[1] == '\0')) {
              FUN_001db818(param_1,"RESOLVE %s:%d is wildcard, enabling wildcard checks\n",local_168
                           ,local_16c);
              *(byte *)(param_1 + 0xf68) = *(byte *)(param_1 + 0xf68) | 4;
            }
            goto LAB_001c9b18;
          }
        }
LAB_001c9ae8:
        FUN_001db818(param_1,"Couldn\'t parse CURLOPT_RESOLVE entry \'%s\'!\n",*plVar9);
        FUN_001c7e00(lVar11);
      }
    }
LAB_001c9b18:
    plVar9 = (long *)plVar9[1];
  } while( true );
}


