/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004eab38; name: FUN_004eab38
 */


long * FUN_004eab38(long param_1,undefined8 *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  byte *__s1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  void *__s2;
  long *plVar8;
  long *plVar9;
  
  plVar8 = (long *)(param_1 + 8);
  plVar9 = (long *)*plVar8;
  if (plVar9 == (long *)0x0) {
    *param_2 = plVar8;
    return plVar8;
  }
  uVar7 = (ulong)(*param_3 >> 1);
  __s1 = *(byte **)(param_3 + 0x10);
  iVar2 = *(int *)(param_3 + 0x18);
  plVar8 = (long *)(param_1 + 8);
  if ((*param_3 & 1) == 0) {
    __s1 = param_3 + 1;
  }
  else {
    uVar7 = *(ulong *)(param_3 + 8);
  }
  do {
    bVar3 = *(byte *)(plVar9 + 4);
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = plVar9[5];
    }
    __n = uVar1;
    if (uVar7 <= uVar1) {
      __n = uVar7;
    }
    if (__n == 0) {
      if (uVar1 == uVar7) {
        if ((int)plVar9[7] <= iVar2) {
LAB_004eac30:
          if (uVar7 == uVar1) goto LAB_004eab88;
          if (uVar1 < uVar7) goto LAB_004eab94;
          goto LAB_004eacc8;
        }
      }
      else if (uVar1 <= uVar7) goto LAB_004eac30;
LAB_004eac74:
      plVar6 = (long *)*plVar9;
      if (plVar6 == (long *)0x0) {
        *param_2 = plVar9;
        return plVar9;
      }
      plVar8 = plVar9;
    }
    else {
      __s2 = (void *)plVar9[6];
      if ((bVar3 & 1) == 0) {
        __s2 = (void *)((long)plVar9 + 0x21);
      }
      iVar5 = memcmp(__s1,__s2,__n);
      if (iVar5 == 0) {
        if (uVar1 <= uVar7) goto LAB_004eac0c;
        goto LAB_004eac74;
      }
      if (iVar5 < 0) goto LAB_004eac74;
LAB_004eac0c:
      iVar5 = memcmp(__s2,__s1,__n);
      if (iVar5 == 0) {
        if (uVar7 <= uVar1) goto LAB_004eac68;
        iVar5 = memcmp(__s2,__s1,__n);
        if (iVar5 == 0) goto LAB_004eab94;
        bVar4 = false;
LAB_004eaca0:
        if (iVar5 < 0) goto LAB_004eab94;
      }
      else {
        if (-1 < iVar5) {
LAB_004eac68:
          if (iVar2 < (int)plVar9[7]) goto LAB_004eac74;
        }
        bVar4 = uVar7 < uVar1;
        iVar5 = memcmp(__s2,__s1,__n);
        if (iVar5 != 0) goto LAB_004eaca0;
        if (uVar1 < uVar7) goto LAB_004eab94;
      }
      iVar5 = memcmp(__s1,__s2,__n);
      if (iVar5 == 0) {
        if (bVar4) {
LAB_004eacc8:
          *param_2 = plVar9;
          return plVar8;
        }
      }
      else if (iVar5 < 0) goto LAB_004eacc8;
LAB_004eab88:
      if (iVar2 <= (int)plVar9[7]) goto LAB_004eacc8;
LAB_004eab94:
      plVar8 = plVar9 + 1;
      plVar6 = (long *)*plVar8;
      if (plVar6 == (long *)0x0) goto LAB_004eacc8;
    }
    plVar9 = plVar6;
  } while( true );
}


