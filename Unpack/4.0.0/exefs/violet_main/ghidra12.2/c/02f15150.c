/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f15150; name: FUN_02f15150
 */


void FUN_02f15150(long param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  void *__src;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined *puVar8;
  void *__dest;
  uint uVar9;
  long lVar10;
  long local_48;
  
  uVar7 = *(uint *)(param_1 + 0x3f8);
  plVar2 = (long *)(param_1 + 0x3f0);
  iVar1 = uVar7 + 0x90;
  *(uint *)(param_1 + 0x3ec) = uVar7;
  uVar9 = *(uint *)(param_1 + 0x3fc);
  if (*(uint *)(param_1 + 0x3fc) == 0) {
    *(uint *)(param_1 + 0x3fc) = uVar7;
    uVar9 = uVar7;
  }
  puVar8 = PTR_DAT_047d1a08;
  uVar4 = uVar9 & 0x7fffffff;
  if ((int)(uVar9 & 0x7fffffff) <= (int)uVar7) {
    uVar4 = uVar7;
  }
  if ((int)uVar4 < iVar1) {
    uVar9 = uVar7 + 0x8f | (int)(uVar7 + 0x8f) >> 0x10;
    uVar9 = uVar9 | (int)uVar9 >> 8;
    uVar9 = uVar9 | (int)uVar9 >> 4;
    uVar9 = uVar9 | (int)uVar9 >> 2;
    uVar9 = (uVar9 | (int)uVar9 >> 1) + 1;
    if ((int)uVar9 < iVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x5d9e6698,"../..\\Common/Base/Container/RelArray/hkRelArray.inl",0x1e8,
                   "Capacity reservation overflow");
    }
    local_48 = (long)(int)uVar9;
    __dest = (void *)(**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
    __src = (void *)0x0;
    if (*(long *)(param_1 + 0x3f0) != 0) {
      __src = (void *)(*(long *)(param_1 + 0x3f0) + (long)plVar2);
    }
    memcpy(__dest,__src,(long)*(int *)(param_1 + 0x3f8));
    if (*(int *)(param_1 + 0x3fc) < 0) {
      lVar10 = 0;
      if (*plVar2 != 0) {
        lVar10 = *plVar2 + (long)plVar2;
      }
      (**(code **)(puVar8 + 8))(0,lVar10,0);
    }
    lVar10 = 0;
    if (__dest != (void *)0x0) {
      lVar10 = (long)__dest - (long)plVar2;
    }
    *(uint *)(param_1 + 0x3fc) = uVar9 | 0x80000000;
    *(long *)(param_1 + 0x3f0) = lVar10;
  }
  else {
    lVar10 = *plVar2;
  }
  *(int *)(param_1 + 0x3f8) = iVar1;
  puVar3 = (undefined8 *)((long)plVar2 + (int)uVar7 + lVar10);
  if (param_3 != 0x13) {
    *(uint *)(param_1 + (ulong)param_3 * 4 + 0x308) = uVar7;
  }
  uVar5 = *(undefined4 *)(param_2 + 1);
  uVar6 = *(undefined4 *)((long)param_2 + 0xc);
  *puVar3 = *param_2;
  *(undefined4 *)(puVar3 + 1) = uVar5;
  *(undefined4 *)((long)puVar3 + 0xc) = uVar6;
  uVar5 = *(undefined4 *)(param_2 + 3);
  uVar6 = *(undefined4 *)((long)param_2 + 0x1c);
  puVar3[2] = param_2[2];
  *(undefined4 *)(puVar3 + 3) = uVar5;
  *(undefined4 *)((long)puVar3 + 0x1c) = uVar6;
  uVar5 = *(undefined4 *)(param_2 + 5);
  uVar6 = *(undefined4 *)((long)param_2 + 0x2c);
  puVar3[4] = param_2[4];
  *(undefined4 *)(puVar3 + 5) = uVar5;
  *(undefined4 *)((long)puVar3 + 0x2c) = uVar6;
  uVar5 = *(undefined4 *)(param_2 + 7);
  uVar6 = *(undefined4 *)((long)param_2 + 0x3c);
  puVar3[6] = param_2[6];
  *(undefined4 *)(puVar3 + 7) = uVar5;
  *(undefined4 *)((long)puVar3 + 0x3c) = uVar6;
  uVar5 = *(undefined4 *)(param_2 + 9);
  uVar6 = *(undefined4 *)((long)param_2 + 0x4c);
  puVar3[8] = param_2[8];
  *(undefined4 *)(puVar3 + 9) = uVar5;
  *(undefined4 *)((long)puVar3 + 0x4c) = uVar6;
  uVar5 = *(undefined4 *)(param_2 + 0xb);
  uVar6 = *(undefined4 *)((long)param_2 + 0x5c);
  puVar3[10] = param_2[10];
  *(undefined4 *)(puVar3 + 0xb) = uVar5;
  *(undefined4 *)((long)puVar3 + 0x5c) = uVar6;
  uVar5 = *(undefined4 *)(param_2 + 0xd);
  uVar6 = *(undefined4 *)((long)param_2 + 0x6c);
  puVar3[0xc] = param_2[0xc];
  *(undefined4 *)(puVar3 + 0xd) = uVar5;
  *(undefined4 *)((long)puVar3 + 0x6c) = uVar6;
  uVar5 = *(undefined4 *)(param_2 + 0xf);
  uVar6 = *(undefined4 *)((long)param_2 + 0x7c);
  puVar3[0xe] = param_2[0xe];
  *(undefined4 *)(puVar3 + 0xf) = uVar5;
  *(undefined4 *)((long)puVar3 + 0x7c) = uVar6;
  uVar5 = *(undefined4 *)(param_2 + 0x11);
  uVar6 = *(undefined4 *)((long)param_2 + 0x8c);
  puVar3[0x10] = param_2[0x10];
  *(undefined4 *)(puVar3 + 0x11) = uVar5;
  *(undefined4 *)((long)puVar3 + 0x8c) = uVar6;
  return;
}


