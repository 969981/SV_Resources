/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004e8c94; name: FUN_004e8c94
 */


undefined1  [16] FUN_004e8c94(long param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  void *__s2;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  
  plVar8 = (long *)(param_1 + 0x20);
  plVar11 = (long *)*plVar8;
  if (plVar11 == (long *)0x0) {
    plVar10 = plVar8;
  }
  else {
    uVar7 = (ulong)(*param_2 >> 1);
    __s1 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s1 = param_2 + 1;
    }
    else {
      uVar7 = *(ulong *)(param_2 + 8);
    }
    plVar9 = plVar8;
    do {
      bVar2 = *(byte *)(plVar11 + 4);
      uVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = plVar11[5];
      }
      __n = uVar1;
      if (uVar7 <= uVar1) {
        __n = uVar7;
      }
      if (__n == 0) {
LAB_004e8cdc:
        uVar4 = (uint)(uVar1 < uVar7);
        if (uVar7 < uVar1) {
          uVar4 = 0xffffffff;
        }
      }
      else {
        __s2 = (void *)plVar11[6];
        if ((bVar2 & 1) == 0) {
          __s2 = (void *)((long)plVar11 + 0x21);
        }
        uVar4 = memcmp(__s1,__s2,__n);
        if (uVar4 == 0) goto LAB_004e8cdc;
      }
      plVar10 = plVar11;
      if (-1 < (int)uVar4) {
        plVar10 = plVar9;
      }
      plVar11 = (long *)plVar11[-1 < (int)uVar4];
      plVar9 = plVar10;
    } while (plVar11 != (long *)0x0);
  }
  if (plVar10 != *(long **)(param_1 + 0x18)) {
    plVar11 = (long *)*plVar10;
    plVar9 = plVar10;
    if ((long *)*plVar10 == (long *)0x0) {
      do {
        plVar10 = (long *)plVar9[2];
        bVar3 = (long *)*plVar10 == plVar9;
        plVar9 = plVar10;
      } while (bVar3);
    }
    else {
      do {
        plVar10 = plVar11;
        plVar11 = (long *)plVar10[1];
      } while ((long *)plVar10[1] != (long *)0x0);
    }
  }
  if ((plVar10 == plVar8) || (uVar7 = FUN_004ea20c(param_1,plVar10 + 4,param_2), (uVar7 & 1) == 0))
  {
    lVar5 = 0;
    lVar6 = 0;
  }
  else {
    lVar5 = plVar10[7];
    lVar6 = plVar10[8];
  }
  auVar12._8_8_ = lVar6;
  auVar12._0_8_ = lVar5;
  return auVar12;
}


