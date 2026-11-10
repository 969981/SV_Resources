/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f15350; name: FUN_02f15350
 */


void FUN_02f15350(long param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  void *__src;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  byte bVar8;
  undefined *puVar9;
  void *__dest;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long local_48;
  
  uVar7 = *(uint *)(param_1 + 0x3f8);
  plVar2 = (long *)(param_1 + 0x3f0);
  iVar1 = uVar7 + 0x10;
  *(uint *)(param_1 + 0x3ec) = uVar7;
  uVar10 = *(uint *)(param_1 + 0x3fc);
  if (*(uint *)(param_1 + 0x3fc) == 0) {
    *(uint *)(param_1 + 0x3fc) = uVar7;
    uVar10 = uVar7;
  }
  puVar9 = PTR_DAT_047d1a08;
  uVar4 = uVar10 & 0x7fffffff;
  if ((int)(uVar10 & 0x7fffffff) <= (int)uVar7) {
    uVar4 = uVar7;
  }
  if ((int)uVar4 < iVar1) {
    uVar10 = uVar7 + 0xf | (int)(uVar7 + 0xf) >> 0x10;
    uVar10 = uVar10 | (int)uVar10 >> 8;
    uVar10 = uVar10 | (int)uVar10 >> 4;
    uVar10 = uVar10 | (int)uVar10 >> 2;
    uVar10 = (uVar10 | (int)uVar10 >> 1) + 1;
    if ((int)uVar10 < iVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow");
    }
    local_48 = (long)(int)uVar10;
    __dest = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
    __src = (void *)0x0;
    if (*(long *)(param_1 + 0x3f0) != 0) {
      __src = (void *)(*(long *)(param_1 + 0x3f0) + (long)plVar2);
    }
    memcpy(__dest,__src,(long)*(int *)(param_1 + 0x3f8));
    if (*(int *)(param_1 + 0x3fc) < 0) {
      lVar11 = 0;
      if (*plVar2 != 0) {
        lVar11 = *plVar2 + (long)plVar2;
      }
      (**(code **)(puVar9 + 8))(0,lVar11,0);
    }
    lVar11 = 0;
    if (__dest != (void *)0x0) {
      lVar11 = (long)__dest - (long)plVar2;
    }
    *(uint *)(param_1 + 0x3fc) = uVar10 | 0x80000000;
    *(long *)(param_1 + 0x3f0) = lVar11;
  }
  else {
    lVar11 = *plVar2;
  }
  *(int *)(param_1 + 0x3f8) = iVar1;
  uVar5 = *(undefined4 *)(param_2 + 1);
  uVar6 = *(undefined4 *)((long)param_2 + 0xc);
  puVar3 = (undefined8 *)((long)plVar2 + (int)uVar7 + lVar11);
  *puVar3 = *param_2;
  *(undefined4 *)(puVar3 + 1) = uVar5;
  *(undefined4 *)((long)puVar3 + 0xc) = uVar6;
  if (param_3 != 0x13) {
    bVar8 = *(byte *)((long)param_2 + 5);
    if ((ulong)bVar8 != 0) {
      *(undefined4 *)(param_1 + (long)param_3 * 4 + 0x354) = *(undefined4 *)(param_1 + 0x3ec);
      if (bVar8 == 1) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        do {
          iVar1 = *(int *)(param_1 + 0x304);
          lVar11 = param_1 + (long)param_3 * 4 + uVar12 * 4;
          uVar12 = uVar12 + 2;
          *(int *)(param_1 + 0x304) = iVar1 + 1;
          *(int *)(lVar11 + 0x3a0) = iVar1;
          iVar1 = *(int *)(param_1 + 0x304);
          *(int *)(param_1 + 0x304) = iVar1 + 1;
          *(int *)(lVar11 + 0x3a4) = iVar1;
        } while (((ulong)bVar8 & 0xfe) != uVar12);
      }
      if ((bVar8 & 1) != 0) {
        iVar1 = *(int *)(param_1 + 0x304);
        *(int *)(param_1 + 0x304) = iVar1 + 1;
        *(int *)(param_1 + (uVar12 + (long)param_3) * 4 + 0x3a0) = iVar1;
      }
    }
  }
  return;
}


