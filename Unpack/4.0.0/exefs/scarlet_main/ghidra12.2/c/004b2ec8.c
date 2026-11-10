/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004b2ec8; name: FUN_004b2ec8
 */


void FUN_004b2ec8(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined **local_a8 [2];
  undefined8 local_98;
  undefined *local_90;
  undefined **ppuStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined *local_70;
  undefined **ppuStack_68;
  undefined **local_58;
  
  if (0 < *(int *)(param_2 + 0x2c)) {
    lVar8 = 0;
    lVar10 = 0;
    do {
      FUN_004ba408(param_1,*(long *)(param_2 + 0x68) + lVar8,
                   *(undefined8 *)(*(long *)(param_3 + 0x40) + lVar10 * 8 + 8));
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + 0x90;
    } while (lVar10 < *(int *)(param_2 + 0x2c));
  }
  if (0 < *(int *)(param_2 + 0x30)) {
    lVar8 = 0;
    lVar10 = 0;
    do {
      FUN_004ba6f0(param_1,*(long *)(param_2 + 0x70) + lVar8,
                   *(undefined8 *)(*(long *)(param_3 + 0x58) + lVar10 * 8 + 8));
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + 0x50;
    } while (lVar10 < *(int *)(param_2 + 0x30));
  }
  if (0 < *(int *)(param_2 + 0x34)) {
    lVar8 = 0;
    lVar10 = 0;
    do {
      lVar4 = *(long *)(param_2 + 0x78) + lVar8;
      lVar12 = *(long *)(lVar4 + 0x10);
      if (lVar12 != 0) {
        uVar11 = *(undefined8 *)(*(long *)(param_3 + 0x70) + lVar10 * 8 + 8);
        lVar13 = *(long *)(lVar12 + 0x88);
        lVar2 = FUN_004db400();
        if (((lVar13 != lVar2) && (*(int *)(*(long *)(lVar12 + 0x88) + 0xa0) == 3)) &&
           ((lVar12 = *(long *)(*(long *)(lVar4 + 0x10) + 0x88), *(char *)(lVar12 + 0x9b) != '\0' ||
            (*(char *)(lVar12 + 0x9c) != '\0')))) {
          FUN_004aa7f4(param_1,*(undefined8 *)(lVar4 + 8),uVar11,0,
                       "Files with optimize_for = LITE_RUNTIME cannot define services unless you set both options cc_generic_services and java_generic_services to false."
                      );
        }
      }
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + 0x30;
    } while (lVar10 < *(int *)(param_2 + 0x34));
  }
  if (0 < *(int *)(param_2 + 0x38)) {
    lVar8 = 0;
    lVar10 = 0;
    do {
      FUN_004baba8(param_1,*(long *)(param_2 + 0x80) + lVar8,
                   *(undefined8 *)(*(long *)(param_3 + 0x88) + lVar10 * 8 + 8));
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + 0x98;
    } while (lVar10 < *(int *)(param_2 + 0x38));
  }
  lVar8 = *(long *)(param_2 + 0x88);
  lVar10 = FUN_004db400();
  puVar1 = PTR_FUN_047cd758;
  if (((lVar8 == lVar10) || (*(int *)(*(long *)(param_2 + 0x88) + 0xa0) != 3)) &&
     (0 < *(int *)(param_2 + 0x20))) {
    lVar10 = 0;
    do {
      puVar3 = *(ulong **)(param_2 + 0x18);
      if ((puVar3 != (ulong *)0x0) && (local_70 = param_2, *puVar3 != 0xffffffffffffffff)) {
        local_90 = puVar1;
        local_a8[0] = &local_90;
        ppuStack_88 = &local_70;
        std::__call_once(puVar3,local_a8,(_func_void_void_ptr *)&LAB_004c9510);
      }
      lVar8 = *(long *)(*(long *)(param_2 + 0x48) + lVar10 * 8);
      if (((lVar8 != 0) &&
          (lVar12 = *(long *)(lVar8 + 0x88), lVar4 = FUN_004db400(), lVar12 != lVar4)) &&
         (*(int *)(*(long *)(lVar8 + 0x88) + 0xa0) == 3)) {
        puVar5 = *(ulong **)(param_2 + 0x18);
        puVar3 = (ulong *)0x0;
        if (puVar5 != (ulong *)0x0) {
          local_70 = param_2;
          if (*puVar5 != 0xffffffffffffffff) {
            ppuStack_88 = &local_70;
            local_90 = puVar1;
            local_a8[0] = &local_90;
            std::__call_once(puVar5,local_a8,(_func_void_void_ptr *)&LAB_004c9510);
          }
          puVar3 = *(ulong **)(param_2 + 0x18);
        }
        uVar9 = **(undefined8 **)(*(long *)(param_2 + 0x48) + lVar10 * 8);
        uVar11 = uVar9;
        if (puVar3 != (ulong *)0x0) {
          local_78 = param_2;
          if (*puVar3 != 0xffffffffffffffff) {
            ppuStack_68 = &local_78;
            local_70 = puVar1;
            local_58 = &local_70;
            std::__call_once(puVar3,&local_58,(_func_void_void_ptr *)&LAB_004c9510);
          }
          uVar11 = **(undefined8 **)(*(long *)(param_2 + 0x48) + lVar10 * 8);
        }
        FUN_004a8ec0(local_a8,
                     "Files that do not use optimize_for = LITE_RUNTIME cannot import files which do use this option.  This file is not lite, but it imports \""
                     ,uVar11);
                    /* try { // try from 004b31b0 to 004b31c3 has its CatchHandler @ 004b32b0 */
        puVar6 = (undefined8 *)FUN_0021d540(local_a8,"\" which is.",0xb);
        ppuStack_88 = (undefined **)puVar6[1];
        local_90 = (undefined *)*puVar6;
        local_80 = puVar6[2];
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        plVar7 = *(long **)(param_1 + 0x10);
        if (plVar7 != (long *)0x0) {
                    /* try { // try from 004b31f0 to 004b3203 has its CatchHandler @ 004b3278 */
          (**(code **)(*plVar7 + 0x10))(plVar7,param_1 + 0x38,uVar9,param_3,9,&local_90);
        }
        *(undefined1 *)(param_1 + 0x30) = 1;
        if (((ulong)local_90 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_80);
        }
        if (((ulong)local_a8[0] & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_98);
        }
        break;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_2 + 0x20));
  }
  if (*(int *)(param_2 + 0x3c) == 3) {
    FUN_004bb00c(param_1,param_2,param_3);
  }
  return;
}


