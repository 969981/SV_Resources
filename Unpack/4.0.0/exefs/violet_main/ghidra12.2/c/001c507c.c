/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c507c; name: FUN_001c507c
 */


undefined8 * FUN_001c507c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  size_t __n;
  undefined8 *puVar6;
  char *__s;
  char *pcVar7;
  size_t sVar8;
  char cVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  size_t __nmemb;
  long *plVar13;
  char *__s_00;
  undefined1 auStack_68 [8];
  
  lVar4 = FUN_001c4ec0(param_2);
  if ((param_1 != 0) && (*(long *)(param_1 + lVar4 * 8) != 0)) {
    FUN_001c4e28(param_1);
    iVar2 = FUN_001cb444(2,param_2,auStack_68);
    plVar13 = *(long **)(param_1 + lVar4 * 8);
    if (plVar13 != (long *)0x0) {
      puVar12 = (undefined8 *)0x0;
      __nmemb = 0;
      do {
        if (((char)plVar13[0xb] == '\0') || ((param_4 & 1) != 0)) {
          if (plVar13[5] == 0) {
LAB_001c5140:
            __s_00 = (char *)plVar13[4];
            if ((__s_00 == (char *)0x0) || (__n = strlen(__s_00), __n == 1)) goto LAB_001c5158;
            __s = (char *)FUN_001ec328(param_3);
            if (__s != (char *)0x0) {
              pcVar7 = strchr(__s,0x3f);
              if (pcVar7 != (char *)0x0) {
                *pcVar7 = '\0';
              }
              if (*__s != '/') {
                FUN_001ec308(__s);
                __s = (char *)FUN_001ec328(&DAT_03bdfb3b);
                if (__s == (char *)0x0) goto LAB_001c52e4;
              }
              sVar8 = strlen(__s);
              if ((sVar8 < __n) || (iVar3 = strncmp(__s_00,__s,__n), iVar3 != 0)) {
                FUN_001ec308(__s);
              }
              else {
                if (__n == sVar8) {
                  FUN_001ec308(__s);
                }
                else {
                  cVar9 = __s[__n];
                  FUN_001ec308(__s);
                  if (cVar9 != '/') goto LAB_001c52e4;
                }
LAB_001c5158:
                puVar6 = (undefined8 *)FUN_001ec338(0x68,1);
                if (puVar6 == (undefined8 *)0x0) goto LAB_001c534c;
                if (plVar13[7] != 0) {
                  lVar4 = FUN_001ec328();
                  puVar6[7] = lVar4;
                  if (lVar4 != 0) goto LAB_001c5180;
LAB_001c5344:
                  FUN_001c4c88(puVar6);
                  goto LAB_001c534c;
                }
LAB_001c5180:
                if (plVar13[5] != 0) {
                  lVar4 = FUN_001ec328();
                  puVar6[5] = lVar4;
                  if (lVar4 == 0) goto LAB_001c5344;
                }
                if (plVar13[3] != 0) {
                  lVar4 = FUN_001ec328();
                  puVar6[3] = lVar4;
                  if (lVar4 == 0) goto LAB_001c5344;
                }
                if (plVar13[4] != 0) {
                  lVar4 = FUN_001ec328();
                  puVar6[4] = lVar4;
                  if (lVar4 == 0) goto LAB_001c5344;
                }
                if (plVar13[1] != 0) {
                  lVar4 = FUN_001ec328();
                  puVar6[1] = lVar4;
                  if (lVar4 == 0) goto LAB_001c5344;
                }
                if (plVar13[2] != 0) {
                  lVar4 = FUN_001ec328();
                  puVar6[2] = lVar4;
                  if (lVar4 == 0) goto LAB_001c5344;
                }
                if (plVar13[10] != 0) {
                  lVar4 = FUN_001ec328();
                  puVar6[10] = lVar4;
                  if (lVar4 == 0) goto LAB_001c5344;
                }
                if (plVar13[9] != 0) {
                  lVar4 = FUN_001ec328();
                  puVar6[9] = lVar4;
                  if (lVar4 == 0) goto LAB_001c5344;
                }
                puVar6[6] = plVar13[6];
                *(char *)(puVar6 + 8) = (char)plVar13[8];
                *(char *)(puVar6 + 0xb) = (char)plVar13[0xb];
                *(undefined1 *)((long)puVar6 + 0x59) = *(undefined1 *)((long)plVar13 + 0x59);
                *(undefined1 *)((long)puVar6 + 0x5a) = *(undefined1 *)((long)plVar13 + 0x5a);
                uVar1 = *(undefined4 *)((long)plVar13 + 0x5c);
                *puVar6 = puVar12;
                __nmemb = __nmemb + 1;
                *(undefined4 *)((long)puVar6 + 0x5c) = uVar1;
                puVar12 = puVar6;
              }
            }
          }
          else {
            cVar9 = (char)plVar13[8];
            if ((iVar2 == 0) && (cVar9 != '\0')) {
              uVar5 = FUN_001c4da8(plVar13[5],param_2);
              if ((uVar5 & 1) != 0) goto LAB_001c5140;
              cVar9 = (char)plVar13[8];
            }
            if ((iVar2 != 0) || (cVar9 == '\0')) {
              iVar3 = FUN_001e0990(param_2,plVar13[5]);
              if (iVar3 != 0) goto LAB_001c5140;
            }
          }
        }
LAB_001c52e4:
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) {
          if (__nmemb == 0) {
            return puVar12;
          }
          puVar6 = (undefined8 *)FUN_001ec2f8(__nmemb << 3);
          if (puVar6 != (undefined8 *)0x0) {
            if (puVar12 != (undefined8 *)0x0) {
              puVar10 = puVar6;
              do {
                *puVar10 = puVar12;
                puVar12 = (undefined8 *)*puVar12;
                puVar10 = puVar10 + 1;
              } while (puVar12 != (undefined8 *)0x0);
            }
            qsort(puVar6,__nmemb,8,FUN_001c5404);
            puVar12 = (undefined8 *)*puVar6;
            lVar4 = __nmemb - 1;
            if (lVar4 != 0) {
              lVar11 = lVar4;
              puVar10 = puVar6;
              do {
                lVar11 = lVar11 + -1;
                *(undefined8 *)*puVar10 = puVar10[1];
                puVar10 = puVar10 + 1;
              } while (lVar11 != 0);
            }
            *(undefined8 *)puVar6[lVar4] = 0;
            FUN_001ec308(puVar6);
            return puVar12;
          }
LAB_001c534c:
          if (puVar12 == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          do {
            puVar6 = (undefined8 *)*puVar12;
            FUN_001c4c88(puVar12);
            puVar12 = puVar6;
          } while (puVar6 != (undefined8 *)0x0);
          return (undefined8 *)0x0;
        }
      } while( true );
    }
  }
  return (undefined8 *)0x0;
}


