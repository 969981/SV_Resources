/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004eae10; name: FUN_004eae10
 */


long * FUN_004eae10(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t sVar2;
  byte *__s2;
  int iVar3;
  byte bVar4;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  plVar8 = (long *)(param_1 + 8);
  if ((long *)*plVar8 != (long *)0x0) {
    uVar7 = (ulong)(*param_2 >> 1);
    iVar3 = *(int *)(param_2 + 0x18);
    __s2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    else {
      uVar7 = *(ulong *)(param_2 + 8);
    }
    plVar9 = plVar8;
    plVar10 = (long *)*plVar8;
    do {
      while( true ) {
        bVar4 = *(byte *)(plVar10 + 4);
        uVar1 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          uVar1 = plVar10[5];
        }
        sVar2 = uVar7;
        if (uVar1 <= uVar7) {
          sVar2 = uVar1;
        }
        if (sVar2 == 0) {
          if (uVar7 == uVar1) goto LAB_004eaee8;
          if (uVar1 < uVar7) goto LAB_004eae54;
          goto LAB_004eaef4;
        }
        pvVar6 = (void *)plVar10[6];
        if ((bVar4 & 1) == 0) {
          pvVar6 = (void *)((long)plVar10 + 0x21);
        }
        iVar5 = memcmp(pvVar6,__s2,sVar2);
        if (iVar5 == 0) break;
        if (-1 < iVar5) goto LAB_004eaec4;
LAB_004eae54:
        plVar10 = (long *)plVar10[1];
        if (plVar10 == (long *)0x0) goto LAB_004eaf00;
      }
      if (uVar1 < uVar7) goto LAB_004eae54;
LAB_004eaec4:
      iVar5 = memcmp(__s2,pvVar6,sVar2);
      if (iVar5 == 0) {
        if (uVar1 <= uVar7) goto LAB_004eaee8;
      }
      else if (-1 < iVar5) {
LAB_004eaee8:
        if ((int)plVar10[7] < iVar3) goto LAB_004eae54;
      }
LAB_004eaef4:
      plVar11 = (long *)*plVar10;
      plVar9 = plVar10;
      plVar10 = plVar11;
    } while (plVar11 != (long *)0x0);
LAB_004eaf00:
    if (plVar9 != plVar8) {
      bVar4 = *(byte *)(plVar9 + 4);
      uVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        uVar1 = plVar9[5];
      }
      sVar2 = uVar1;
      if (uVar7 <= uVar1) {
        sVar2 = uVar7;
      }
      if (sVar2 == 0) {
        if (uVar1 != uVar7) {
          if (uVar7 < uVar1) {
            return plVar8;
          }
          return plVar9;
        }
      }
      else {
        pvVar6 = (void *)plVar9[6];
        if ((bVar4 & 1) == 0) {
          pvVar6 = (void *)((long)plVar9 + 0x21);
        }
        iVar5 = memcmp(__s2,pvVar6,sVar2);
        if (iVar5 == 0) {
          if (uVar7 < uVar1) {
            return plVar8;
          }
        }
        else if (iVar5 < 0) {
          return plVar8;
        }
        iVar5 = memcmp(pvVar6,__s2,sVar2);
        if (iVar5 == 0) {
          if (uVar1 < uVar7) {
            return plVar9;
          }
        }
        else if (iVar5 < 0) {
          return plVar9;
        }
      }
      if ((int)plVar9[7] <= iVar3) {
        return plVar9;
      }
    }
  }
  return plVar8;
}


