/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004bdcac; name: FUN_004bdcac
 */


undefined8
FUN_004bdcac(long *param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,long *param_6
            )

{
  uint uVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined *puVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  undefined ***local_a8 [2];
  undefined **local_98;
  undefined **local_90;
  undefined **ppuStack_88;
  undefined8 local_80;
  undefined *local_70;
  undefined *puStack_68;
  
  piVar11 = (int *)*param_6;
  iVar7 = (int)((ulong)(param_6[1] - (long)piVar11) >> 4);
  if (param_2 == param_3) {
    if (0 < iVar7) {
      uVar4 = (ulong)(param_6[1] - (long)piVar11) >> 4 & 0xffffffff;
      do {
        if (*piVar11 == *(int *)(param_4 + 0x44)) {
          FUN_004a8ec0(local_a8,"Option \"",param_5);
                    /* try { // try from 004bdea4 to 004bdeb7 has its CatchHandler @ 004bdfa0 */
          puVar5 = (undefined8 *)FUN_0021d540(local_a8,"\" was already set.",0x12);
          ppuStack_88 = (undefined **)puVar5[1];
          local_90 = (undefined **)*puVar5;
          local_80 = puVar5[2];
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = 0;
          lVar13 = *param_1;
          plVar6 = *(long **)(lVar13 + 0x10);
          if (plVar6 != (long *)0x0) {
                    /* try { // try from 004bdef0 to 004bdefb has its CatchHandler @ 004bdf80 */
            (**(code **)(*plVar6 + 0x10))
                      (plVar6,lVar13 + 0x38,param_1[1] + 0x18,param_1[2],7,&local_90);
          }
          *(undefined1 *)(lVar13 + 0x30) = 1;
          if (((ulong)local_90 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_80);
          }
          if (((ulong)local_a8[0] & 1) == 0) {
            return 0;
          }
          goto LAB_004bdf28;
        }
        piVar11 = piVar11 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else if (0 < iVar7) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      puVar10 = (undefined *)*param_2;
      if (*(int *)((long)piVar11 + lVar12) == *(int *)(puVar10 + 0x44)) {
        puVar3 = *(ulong **)(puVar10 + 0x30);
        if ((puVar3 != (ulong *)0x0) &&
           (puStack_68 = PTR_LAB_047cd728, local_70 = puVar10, *puVar3 != 0xffffffffffffffff)) {
          local_90 = &puStack_68;
          ppuStack_88 = &local_70;
          local_a8[0] = &local_90;
          std::__call_once(puVar3,local_a8,(_func_void_void_ptr *)&LAB_004c0750);
        }
        if (*(int *)(puVar10 + 0x38) == 10) {
          if ((*(int *)((long)piVar11 + lVar12 + 4) == 4) &&
             (uVar4 = FUN_004bdcac(param_1,param_2 + 1,param_3,param_4,param_5,
                                   *(undefined8 *)((long)piVar11 + lVar12 + 8)), (uVar4 & 1) == 0))
          {
            return 0;
          }
        }
        else {
          if (*(int *)(puVar10 + 0x38) != 0xb) {
            return 0;
          }
          if (*(int *)((long)piVar11 + lVar12 + 4) == 3) {
            local_90 = (undefined **)0x0;
            ppuStack_88 = (undefined **)0x0;
            local_80 = 0;
            pbVar8 = *(byte **)((long)piVar11 + lVar12 + 8);
            pbVar9 = *(byte **)(pbVar8 + 0x10);
            bVar2 = (*pbVar8 & 1) == 0;
            if (bVar2) {
              pbVar9 = pbVar8 + 1;
            }
            uVar1 = (uint)(*pbVar8 >> 1);
            if (!bVar2) {
              uVar1 = *(uint *)(pbVar8 + 8);
            }
                    /* try { // try from 004bddd0 to 004bddf7 has its CatchHandler @ 004bdfc8 */
            uVar4 = FUN_005156cc(&local_90,pbVar9,uVar1);
            if (((uVar4 & 1) != 0) &&
               (uVar4 = FUN_004bdcac(param_1,param_2 + 1,param_3,param_4,param_5,&local_90),
               (uVar4 & 1) == 0)) {
              if (local_90 != ppuStack_88) {
                    /* try { // try from 004bdf64 to 004bdf6b has its CatchHandler @ 004bdf7c */
                FUN_00514600(&local_90);
              }
              if (local_90 != (undefined **)0x0) {
                local_98 = local_90;
                ppuStack_88 = local_90;
LAB_004bdf28:
                FUN_0049e790(PTR_LAB_047cba48,local_98);
              }
              return 0;
            }
            if (local_90 != ppuStack_88) {
                    /* try { // try from 004bde08 to 004bde0f has its CatchHandler @ 004bdfb4 */
              FUN_00514600(&local_90);
            }
            if (local_90 != (undefined **)0x0) {
              ppuStack_88 = local_90;
              FUN_0049e790(PTR_LAB_047cba48);
            }
          }
        }
      }
      piVar11 = (int *)*param_6;
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x10;
    } while (lVar13 < (int)((ulong)(param_6[1] - (long)piVar11) >> 4));
  }
  return 1;
}


