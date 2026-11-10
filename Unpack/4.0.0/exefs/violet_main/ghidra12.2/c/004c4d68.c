/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004c4d68; name: FUN_004c4d68
 */


long * FUN_004c4d68(long *param_1,byte *param_2)

{
  size_t sVar1;
  byte *pbVar2;
  byte bVar3;
  ulong uVar4;
  size_t __n;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  undefined2 uVar12;
  undefined8 uVar13;
  undefined1 auStack_38 [8];
  
  uVar6 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar6 = (ulong)(*param_2 >> 1);
  }
                    /* try { // try from 004c4d98 to 004c4d9f has its CatchHandler @ 004c4f78 */
  uVar6 = FUN_0039a45c(auStack_38,pbVar2,uVar6);
  uVar11 = param_1[1];
  if (uVar11 != 0) {
    uVar13 = CONCAT17(POPCOUNT((char)(uVar11 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar11 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar11 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar11 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar11 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar11 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar11 
                                                  >> 8)),POPCOUNT((char)uVar11))))))));
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar8 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar8 < 2) {
      uVar10 = uVar11 - 1 & uVar6;
    }
    else {
      uVar10 = uVar6;
      if (uVar11 <= uVar6) {
        uVar10 = 0;
        if (uVar11 != 0) {
          uVar10 = uVar6 / uVar11;
        }
        uVar10 = uVar6 - uVar10 * uVar11;
      }
    }
    plVar7 = *(long **)(*param_1 + uVar10 * 8);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        return (long *)0x0;
      }
      pbVar2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
      if ((*param_2 & 1) != 0) {
        pbVar2 = *(byte **)(param_2 + 0x10);
        __n = *(size_t *)(param_2 + 8);
      }
      if (1 < uVar8) {
        do {
          uVar8 = plVar7[1];
          if (uVar8 == uVar6) {
            bVar3 = *(byte *)(plVar7 + 2);
            sVar1 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              sVar1 = plVar7[3];
            }
            if (sVar1 == __n) {
              pvVar9 = (void *)plVar7[4];
              if ((bVar3 & 1) == 0) {
                pvVar9 = (void *)((long)plVar7 + 0x11);
              }
              if ((bVar3 & 1) == 0) {
                if (__n == 0) {
                  return plVar7;
                }
                uVar8 = 0;
                while (*(byte *)((long)plVar7 + uVar8 + 0x11) == pbVar2[uVar8]) {
                  uVar8 = uVar8 + 1;
                  if (bVar3 >> 1 == uVar8) {
                    return plVar7;
                  }
                }
              }
              else {
                if (__n == 0) {
                  return plVar7;
                }
                iVar5 = memcmp(pvVar9,pbVar2,__n);
                if (iVar5 == 0) {
                  return plVar7;
                }
              }
            }
          }
          else {
            if (uVar11 <= uVar8) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar8 / uVar11;
              }
              uVar8 = uVar8 - uVar4 * uVar11;
            }
            if (uVar8 != uVar10) {
              return (long *)0x0;
            }
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) {
            return (long *)0x0;
          }
        } while( true );
      }
      do {
        if (plVar7[1] == uVar6) {
          bVar3 = *(byte *)(plVar7 + 2);
          sVar1 = (ulong)(bVar3 >> 1);
          if ((bVar3 & 1) != 0) {
            sVar1 = plVar7[3];
          }
          if (sVar1 == __n) {
            pvVar9 = (void *)plVar7[4];
            if ((bVar3 & 1) == 0) {
              pvVar9 = (void *)((long)plVar7 + 0x11);
            }
            if ((bVar3 & 1) == 0) {
              if (__n == 0) {
                return plVar7;
              }
              uVar8 = 0;
              while (*(byte *)((long)plVar7 + uVar8 + 0x11) == pbVar2[uVar8]) {
                uVar8 = uVar8 + 1;
                if (bVar3 >> 1 == uVar8) {
                  return plVar7;
                }
              }
            }
            else {
              if (__n == 0) {
                return plVar7;
              }
              iVar5 = memcmp(pvVar9,pbVar2,__n);
              if (iVar5 == 0) {
                return plVar7;
              }
            }
          }
        }
        else if ((plVar7[1] & uVar11 - 1) != uVar10) {
          return (long *)0x0;
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}


