/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00badb04; name: FUN_00badb04
 */


long * FUN_00badb04(long *param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  byte bVar5;
  byte *__s2;
  ulong uVar6;
  byte *pbVar7;
  long *plVar8;
  void *pvVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  bVar2 = *param_2;
  __s2 = *(byte **)(param_2 + 0x10);
  if ((bVar2 & 1) == 0) {
    __s2 = param_2 + 1;
  }
  bVar5 = *__s2;
  if (bVar5 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    pbVar7 = __s2;
    do {
      pbVar7 = pbVar7 + 1;
      uVar10 = uVar10 * 5 + (ulong)bVar5;
      bVar5 = *pbVar7;
    } while (bVar5 != 0);
  }
  uVar12 = param_1[1];
  if (uVar12 != 0) {
    uVar6 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar11 = uVar12 - 1 & uVar10;
    }
    else {
      uVar11 = uVar10;
      if (uVar12 <= uVar10) {
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = uVar10 / uVar12;
        }
        uVar11 = uVar10 - uVar11 * uVar12;
      }
    }
    plVar8 = *(long **)(*param_1 + uVar11 * 8);
    if (plVar8 != (long *)0x0) {
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        return (long *)0x0;
      }
      __n = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        __n = *(size_t *)(param_2 + 8);
      }
      if (1 < uVar6) {
        do {
          uVar6 = plVar8[1];
          if (uVar10 == uVar6) {
            bVar2 = *(byte *)(plVar8 + 2);
            sVar1 = (ulong)(bVar2 >> 1);
            if ((bVar2 & 1) != 0) {
              sVar1 = plVar8[3];
            }
            if (sVar1 == __n) {
              pvVar9 = (void *)plVar8[4];
              if ((bVar2 & 1) == 0) {
                pvVar9 = (void *)((long)plVar8 + 0x11);
              }
              if ((bVar2 & 1) == 0) {
                if (__n == 0) {
                  return plVar8;
                }
                uVar6 = 0;
                while (*(byte *)((long)plVar8 + uVar6 + 0x11) == __s2[uVar6]) {
                  uVar6 = uVar6 + 1;
                  if (bVar2 >> 1 == uVar6) {
                    return plVar8;
                  }
                }
              }
              else {
                if (__n == 0) {
                  return plVar8;
                }
                iVar4 = memcmp(pvVar9,__s2,__n);
                if (iVar4 == 0) {
                  return plVar8;
                }
              }
            }
          }
          else {
            if (uVar12 <= uVar6) {
              uVar3 = 0;
              if (uVar12 != 0) {
                uVar3 = uVar6 / uVar12;
              }
              uVar6 = uVar6 - uVar3 * uVar12;
            }
            if (uVar6 != uVar11) {
              return (long *)0x0;
            }
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) {
            return (long *)0x0;
          }
        } while( true );
      }
      do {
        if (uVar10 == plVar8[1]) {
          bVar2 = *(byte *)(plVar8 + 2);
          sVar1 = (ulong)(bVar2 >> 1);
          if ((bVar2 & 1) != 0) {
            sVar1 = plVar8[3];
          }
          if (sVar1 == __n) {
            pvVar9 = (void *)plVar8[4];
            if ((bVar2 & 1) == 0) {
              pvVar9 = (void *)((long)plVar8 + 0x11);
            }
            if ((bVar2 & 1) == 0) {
              if (__n == 0) {
                return plVar8;
              }
              uVar6 = 0;
              while (*(byte *)((long)plVar8 + uVar6 + 0x11) == __s2[uVar6]) {
                uVar6 = uVar6 + 1;
                if (bVar2 >> 1 == uVar6) {
                  return plVar8;
                }
              }
            }
            else {
              if (__n == 0) {
                return plVar8;
              }
              iVar4 = memcmp(pvVar9,__s2,__n);
              if (iVar4 == 0) {
                return plVar8;
              }
            }
          }
        }
        else if ((plVar8[1] & uVar12 - 1) != uVar11) {
          return (long *)0x0;
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) {
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}


