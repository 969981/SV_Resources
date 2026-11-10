/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ed42dc; name: FUN_02ed42dc
 */


undefined8 FUN_02ed42dc(long *param_1,int param_2)

{
  uint uVar1;
  void *__src;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  void *__dest;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  long local_28;
  
  puVar4 = PTR_DAT_047d1a08;
  if (param_2 == 0) {
    return 0;
  }
  uVar5 = *(uint *)(param_1 + 1);
  uVar6 = *(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar3 = uVar5;
  if ((int)uVar5 < 2) {
    uVar3 = 1;
  }
  uVar7 = uVar5 + param_2;
  uVar1 = uVar6;
  if ((int)uVar6 <= (int)uVar5) {
    uVar1 = uVar5;
  }
  if ((int)uVar7 < (int)uVar1) {
    if ((int)uVar6 <= (int)uVar5) {
      uVar7 = uVar5;
      goto LAB_02ed4404;
    }
    if (*(uint *)((long)param_1 + 0xc) == 0) {
      uVar6 = 0;
      *(uint *)((long)param_1 + 0xc) = uVar5;
    }
  }
  else {
    uVar6 = uVar7 | (int)uVar7 >> 0x10;
    uVar6 = uVar6 | (int)uVar6 >> 8;
    uVar6 = uVar6 | (int)uVar6 >> 4;
    uVar6 = uVar6 | (int)uVar6 >> 2;
    uVar6 = uVar6 | (int)uVar6 >> 1;
    if ((int)uVar6 < (int)uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow");
    }
    uVar6 = uVar6 + 1;
    local_28 = (long)(int)uVar6 * 0x30;
    __dest = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_28,0);
    __src = (void *)0x0;
    if (*param_1 != 0) {
      __src = (void *)(*param_1 + (long)param_1);
    }
    memcpy(__dest,__src,(long)(int)param_1[1] * 0x30);
    if (*(int *)((long)param_1 + 0xc) < 0) {
      lVar2 = 0;
      if (*param_1 != 0) {
        lVar2 = *param_1 + (long)param_1;
      }
      (**(code **)(puVar4 + 8))(0,lVar2,0);
    }
    lVar2 = 0;
    if (__dest != (void *)0x0) {
      lVar2 = (long)__dest - (long)param_1;
    }
    *param_1 = lVar2;
    *(uint *)((long)param_1 + 0xc) = uVar6 | 0x80000000;
    uVar5 = *(uint *)(param_1 + 1);
    uVar6 = uVar6 & 0x7fffffff;
    uVar7 = uVar5;
    if ((int)uVar6 <= (int)uVar5) goto LAB_02ed4404;
  }
  *(uint *)(param_1 + 1) = uVar6;
  uVar7 = uVar6;
LAB_02ed4404:
  lVar2 = 0;
  if (*param_1 != 0) {
    lVar2 = *param_1 + (long)param_1;
  }
  memset((void *)(lVar2 + (long)(int)uVar5 * 0x30),0,(long)(int)(uVar7 - uVar5) * 0x30);
  uVar6 = *(uint *)(param_1 + 1);
  if ((int)uVar3 < (int)uVar6) {
    uVar8 = (ulong)uVar3;
    do {
      if ((long)uVar8 < (long)(int)uVar6 + -1) {
        iVar10 = (int)uVar8 + 1;
      }
      else {
        iVar10 = (int)param_1[2];
      }
      uVar9 = uVar8 + 1;
      *(int *)((long)param_1 + uVar8 * 0x30 + *param_1) = iVar10;
      uVar8 = uVar9;
    } while (uVar9 != uVar6);
  }
  *(uint *)(param_1 + 2) = uVar3;
  return 0;
}


