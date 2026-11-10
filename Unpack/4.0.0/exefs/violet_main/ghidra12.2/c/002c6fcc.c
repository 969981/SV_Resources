/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c6fcc; name: FUN_002c6fcc
 */


long * FUN_002c6fcc(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t sVar2;
  byte *__s2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  void *pvVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar8 = (long *)(param_1 + 8);
  plVar10 = (long *)*plVar8;
  if (plVar10 != (long *)0x0) {
    uVar6 = (ulong)(*param_2 >> 1);
    __s2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    else {
      uVar6 = *(ulong *)(param_2 + 8);
    }
    plVar9 = plVar8;
    do {
      bVar3 = *(byte *)(plVar10 + 4);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = plVar10[5];
      }
      sVar2 = uVar6;
      if (uVar1 <= uVar6) {
        sVar2 = uVar1;
      }
      if (sVar2 == 0) {
LAB_002c7008:
        uVar4 = (uint)(uVar6 < uVar1);
        if (uVar1 < uVar6) {
          uVar4 = 0xffffffff;
        }
      }
      else {
        pvVar7 = (void *)plVar10[6];
        if ((bVar3 & 1) == 0) {
          pvVar7 = (void *)((long)plVar10 + 0x21);
        }
        uVar4 = memcmp(pvVar7,__s2,sVar2);
        if (uVar4 == 0) goto LAB_002c7008;
      }
      if ((int)uVar4 >= 0) {
        plVar9 = plVar10;
      }
      plVar10 = (long *)plVar10[(int)uVar4 < 0];
    } while (plVar10 != (long *)0x0);
    if (plVar9 != plVar8) {
      bVar3 = *(byte *)(plVar9 + 4);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = plVar9[5];
      }
      sVar2 = uVar1;
      if (uVar6 <= uVar1) {
        sVar2 = uVar6;
      }
      if (sVar2 != 0) {
        pvVar7 = (void *)plVar9[6];
        if ((bVar3 & 1) == 0) {
          pvVar7 = (void *)((long)plVar9 + 0x21);
        }
        iVar5 = memcmp(__s2,pvVar7,sVar2);
        if (iVar5 != 0) {
          if (iVar5 < 0) {
            return plVar8;
          }
          return plVar9;
        }
      }
      if (uVar1 <= uVar6) {
        return plVar9;
      }
    }
  }
  return plVar8;
}


