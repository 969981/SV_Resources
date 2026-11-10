/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030a0f74; name: FUN_030a0f74
 */


void FUN_030a0f74(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  void *__dest;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  void *__src;
  long *plVar11;
  long lVar12;
  int iVar13;
  ulong local_68;
  
  plVar11 = (long *)PTR_PTR_047d1a50;
  uVar10 = (ulong)*(uint *)((long)param_1 + 0xc) & 0x7fffffff;
  uVar6 = uVar10 * 2;
  if (uVar6 <= param_2) {
    uVar6 = param_2;
  }
  if (0x7ffffffe < uVar6) {
    if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x90,
                   "Invalid requestedCapacity");
    }
    uVar6 = 0x7ffffffe;
  }
  lVar5 = (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x10))(PTR_PTR_047d1a50,uVar6 * 0x30,&local_68);
  iVar9 = (int)param_1[1];
  if (0 < iVar9) {
    lVar8 = *param_1;
    lVar12 = 0;
    iVar13 = iVar9;
    do {
      uVar4 = *(undefined4 *)(lVar8 + lVar12);
      puVar2 = (undefined4 *)(lVar5 + lVar12);
      *(undefined8 *)(puVar2 + 2) = 0;
      *(undefined8 *)(puVar2 + 4) = 0x8000000000000000;
      *puVar2 = uVar4;
      if (lVar8 != lVar5) {
        iVar3 = *(int *)(lVar8 + lVar12 + 0x10);
        __src = *(void **)(lVar8 + lVar12 + 8);
        if (iVar3 < 1) {
          __dest = (void *)0x0;
        }
        else {
          FUN_030a1194(puVar2 + 2,PTR_PTR_047d1a50,(long)iVar3);
          __dest = *(void **)(puVar2 + 2);
        }
        memcpy(__dest,__src,(long)iVar3 * 0x14);
        puVar2[4] = iVar3;
      }
      plVar11 = (long *)PTR_PTR_047d1a50;
      iVar13 = iVar13 + -1;
      lVar12 = lVar12 + 0x30;
    } while (iVar13 != 0);
    puVar7 = (uint *)(lVar8 + 0x14);
    do {
      puVar7[-1] = 0;
      if ((-1 < (int)*puVar7) && (*(long *)(puVar7 + -3) != 0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                  (PTR_PTR_047d1a50,*(long *)(puVar7 + -3),(ulong)*puVar7 * 0x14);
      }
      puVar7[-3] = 0;
      puVar7[-2] = 0;
      iVar9 = iVar9 + -1;
      *puVar7 = 0x80000000;
      puVar7 = puVar7 + 0xc;
    } while (iVar9 != 0);
  }
  iVar9 = (int)uVar6;
  uVar1 = uVar6 * 0x30 + 0x30;
  if (uVar1 <= local_68) {
    local_68 = local_68 - 0x30;
    iVar9 = iVar9 + 1;
    if (uVar1 <= local_68) {
      iVar9 = iVar9 + (int)((local_68 + uVar6 * -0x30) / 0x30);
    }
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(*plVar11 + 0x20))(plVar11,*param_1,uVar10 * 0x30);
  }
  *(int *)((long)param_1 + 0xc) = iVar9;
  *param_1 = lVar5;
  return;
}


