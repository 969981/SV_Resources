/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c5a744; name: FUN_00c5a744
 */


void FUN_00c5a744(long param_1,int param_2)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  undefined4 *puVar10;
  
  lVar7 = *(long *)(param_1 + 0x280);
  lVar8 = *(long *)(param_1 + 0x248);
  plVar1 = (long *)(*(long *)(lVar8 + ((ulong)(lVar7 + param_2) >> 2 & 0x3ffffffffffffff8)) +
                   (lVar7 + param_2 & 0x1fU) * 0x80);
  piVar2 = (int *)*plVar1;
  piVar3 = (int *)plVar1[1];
  if (piVar2 == piVar3) {
    if (((*PTR_DAT_047e2410 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047e2410), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047e2508,PTR_DAT_047e2418,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047e2410);
    }
    DAT_04866020 = *(long *)PTR_DAT_047e2418;
    iVar6 = *(int *)(*(long *)(DAT_04866020 + 0x60) + (ulong)*(byte *)(plVar1[0xe] + 0x4f0) * 4);
  }
  else {
    iVar6 = *(int *)(*(long *)(lVar8 + ((ulong)(lVar7 + *piVar2) >> 2 & 0x3ffffffffffffff8)) +
                     (lVar7 + *piVar2 & 0x1fU) * 0x80 + 0x78);
    if (iVar6 < 0) {
      iVar6 = -1;
    }
    if (piVar2 + 1 != piVar3) {
      iVar5 = *(int *)(*(long *)(lVar8 + ((ulong)(lVar7 + piVar2[1]) >> 2 & 0x3ffffffffffffff8)) +
                       (lVar7 + piVar2[1] & 0x1fU) * 0x80 + 0x78);
      if (iVar5 <= iVar6) {
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      if (piVar2 + 2 != piVar3) {
        iVar6 = *(int *)(*(long *)(lVar8 + ((ulong)(lVar7 + piVar2[2]) >> 2 & 0x3ffffffffffffff8)) +
                         (lVar7 + piVar2[2] & 0x1fU) * 0x80 + 0x78);
        if (iVar6 <= iVar5) {
          iVar6 = iVar5;
        }
        if (piVar2 + 3 != piVar3) {
          iVar5 = *(int *)(*(long *)(lVar8 + ((ulong)(lVar7 + piVar2[3]) >> 2 & 0x3ffffffffffffff8))
                           + (lVar7 + piVar2[3] & 0x1fU) * 0x80 + 0x78);
          piVar2 = piVar2 + 4;
          if (iVar5 <= iVar6) {
            iVar5 = iVar6;
          }
          while (iVar6 = iVar5, piVar2 != piVar3) {
            piVar9 = piVar2 + 1;
            iVar5 = *(int *)(*(long *)(lVar8 + ((ulong)(lVar7 + *piVar2) >> 2 & 0x3ffffffffffffff8))
                             + (lVar7 + *piVar2 & 0x1fU) * 0x80 + 0x78);
            piVar2 = piVar9;
            if (iVar5 <= iVar6) {
              iVar5 = iVar6;
            }
          }
        }
      }
    }
    iVar6 = iVar6 + 1;
  }
  puVar10 = (undefined4 *)plVar1[7];
  puVar4 = (undefined4 *)plVar1[8];
  *(int *)(plVar1 + 0xf) = iVar6;
  if ((puVar10 != puVar4) && (FUN_00c5a744(param_1,*puVar10), puVar10 + 1 != puVar4)) {
    FUN_00c5a744(param_1,puVar10[1]);
    for (puVar10 = puVar10 + 2; puVar10 != puVar4; puVar10 = puVar10 + 1) {
      FUN_00c5a744(param_1,*puVar10);
    }
  }
  return;
}


