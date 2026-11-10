/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02eac5d8; name: FUN_02eac5d8
 */


void FUN_02eac5d8(long *param_1,int param_2)

{
  uint uVar1;
  void *__src;
  uint uVar2;
  undefined *puVar3;
  void *__dest;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  short sVar9;
  ulong local_28;
  
  puVar3 = PTR_DAT_047d1a08;
  if (param_2 == 0) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 1);
  uVar5 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar2 = uVar4;
  if ((int)uVar4 < 2) {
    uVar2 = 1;
  }
  uVar7 = uVar4 + param_2;
  uVar1 = uVar5;
  if ((int)uVar5 <= (int)uVar4) {
    uVar1 = uVar4;
  }
  if ((int)uVar7 < (int)uVar1) {
    if ((int)uVar5 <= (int)uVar4) {
      uVar7 = uVar4;
      goto LAB_02eac6f8;
    }
    if (*(uint *)((long)param_1 + 0xc) == 0) {
      uVar5 = 0;
      *(uint *)((long)param_1 + 0xc) = uVar4;
    }
  }
  else {
    uVar5 = uVar7 | (int)uVar7 >> 0x10;
    uVar5 = uVar5 | (int)uVar5 >> 8;
    uVar5 = uVar5 | (int)uVar5 >> 4;
    uVar5 = uVar5 | (int)uVar5 >> 2;
    uVar5 = uVar5 | (int)uVar5 >> 1;
    if ((int)uVar5 < (int)uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow");
    }
    uVar5 = uVar5 + 1;
    local_28 = -(ulong)(uVar5 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar5 << 5;
    __dest = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
    __src = (void *)0x0;
    if (*param_1 != 0) {
      __src = (void *)(*param_1 + (long)param_1);
    }
    memcpy(__dest,__src,(long)(int)param_1[1] << 5);
    if (*(int *)((long)param_1 + 0xc) < 0) {
      lVar8 = 0;
      if (*param_1 != 0) {
        lVar8 = *param_1 + (long)param_1;
      }
      (**(code **)(puVar3 + 8))(0,lVar8,0);
    }
    lVar8 = 0;
    if (__dest != (void *)0x0) {
      lVar8 = (long)__dest - (long)param_1;
    }
    *param_1 = lVar8;
    *(uint *)((long)param_1 + 0xc) = uVar5 | 0x80000000;
    uVar4 = *(uint *)(param_1 + 1);
    uVar5 = uVar5 & 0x7fffffff;
    uVar7 = uVar4;
    if ((int)uVar5 <= (int)uVar4) goto LAB_02eac6f8;
  }
  *(uint *)(param_1 + 1) = uVar5;
  uVar7 = uVar5;
LAB_02eac6f8:
  lVar8 = 0;
  if (*param_1 != 0) {
    lVar8 = *param_1 + (long)param_1;
  }
  memset((void *)(lVar8 + (long)(int)uVar4 * 0x20),0,
         -(ulong)(uVar7 - uVar4 >> 0x1f) & 0xffffffe000000000 | (ulong)(uVar7 - uVar4) << 5);
  uVar5 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < (int)uVar5) {
    uVar6 = (ulong)uVar2;
    lVar8 = uVar6 << 5;
    do {
      if ((long)uVar6 < (long)(int)uVar5 + -1) {
        sVar9 = (short)uVar6 + 1;
      }
      else {
        sVar9 = (short)param_1[2];
      }
      uVar6 = uVar6 + 1;
      *(short *)((long)param_1 + lVar8 + *param_1) = sVar9;
      lVar8 = lVar8 + 0x20;
    } while (uVar5 != uVar6);
  }
  *(short *)(param_1 + 2) = (short)uVar2;
  return;
}


