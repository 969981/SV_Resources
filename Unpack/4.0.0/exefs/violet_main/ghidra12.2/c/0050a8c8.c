/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0050a8c8; name: FUN_0050a8c8
 */


undefined8
FUN_0050a8c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,long *param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  size_t sVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_e0 [8];
  long *local_d8;
  byte local_d0;
  undefined8 local_c0;
  int local_b8;
  undefined8 local_a0;
  long *local_98;
  byte local_90 [16];
  undefined8 local_80;
  int local_78;
  undefined1 auStack_70 [16];
  
  FUN_004f92d8(param_2,param_1);
  uVar4 = FUN_004fddf0();
  if ((uVar4 & 1) == 0) {
    lVar5 = FUN_004a5124(param_3);
    plVar6 = (long *)(**(code **)(*param_4 + 0x10))(param_4,lVar5);
    FUN_004f89ac(&local_a0,param_2,param_1,param_3);
    while( true ) {
                    /* try { // try from 0050aa88 to 0050aa9b has its CatchHandler @ 0050ad08 */
      FUN_004f8d50(auStack_e0,param_2,param_1,param_3);
                    /* try { // try from 0050aaa8 to 0050aab3 has its CatchHandler @ 0050ad0c */
      uVar4 = (**(code **)(*local_98 + 0x28))(local_98,&local_a0,auStack_e0);
                    /* try { // try from 0050aac4 to 0050aacb has its CatchHandler @ 0050ad50 */
      (**(code **)(*local_d8 + 0x80))(local_d8,auStack_e0);
      if ((local_b8 == 9) && ((local_d0 & 1) != 0)) {
        FUN_0049e790(PTR_LAB_047cba48,local_c0);
      }
      if ((uVar4 & 1) != 0) break;
                    /* try { // try from 0050aafc to 0050ab2b has its CatchHandler @ 0050ad64 */
      uVar11 = (**(code **)(*plVar6 + 0x18))(plVar6);
      FUN_0050adb4(local_90,uVar11,*(undefined8 *)(lVar5 + 0x28));
      FUN_0050afbc(auStack_70,uVar11,*(long *)(lVar5 + 0x28) + 0x98);
      puVar1 = (undefined8 *)param_5[1];
      if (puVar1 == (undefined8 *)param_5[2]) {
        lVar12 = (long)puVar1 - *param_5 >> 3;
        uVar4 = lVar12 + 1;
        if (uVar4 >> 0x3d != 0) {
                    /* try { // try from 0050acd0 to 0050acd7 has its CatchHandler @ 0050ace0 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar13 = param_5[2] - *param_5;
        uVar10 = lVar13 >> 2;
        if (uVar4 <= uVar10) {
          uVar4 = uVar10;
        }
        if (0xffffffffffffffe < (ulong)(lVar13 >> 3)) {
          uVar4 = 0x1fffffffffffffff;
        }
        if (uVar4 == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = FUN_0049e770(PTR_FUN_047cba38,uVar4 << 3);
        }
        puVar1 = (undefined8 *)(lVar13 + lVar12 * 8);
        *puVar1 = uVar11;
        pvVar7 = (void *)*param_5;
        sVar8 = param_5[1] - (long)pvVar7;
        if (0 < (long)sVar8) {
          memcpy((void *)((long)puVar1 - sVar8),pvVar7,sVar8);
          pvVar7 = (void *)*param_5;
        }
        *param_5 = (long)((long)puVar1 - sVar8);
        param_5[1] = (long)(puVar1 + 1);
        param_5[2] = lVar13 + uVar4 * 8;
        if (pvVar7 != (void *)0x0) {
          FUN_0049e790(PTR_LAB_047cba48);
        }
      }
      else {
        *puVar1 = uVar11;
        param_5[1] = (long)(puVar1 + 1);
      }
                    /* try { // try from 0050aa80 to 0050aa87 has its CatchHandler @ 0050ad04 */
      (**(code **)(*local_98 + 0x90))(local_98,&local_a0);
    }
                    /* try { // try from 0050abec to 0050abf3 has its CatchHandler @ 0050ace4 */
    (**(code **)(*local_98 + 0x80))(local_98,&local_a0);
    if ((local_78 == 9) && ((local_90[0] & 1) != 0)) {
      FUN_0049e790(PTR_LAB_047cba48,local_80);
    }
    uVar11 = 1;
  }
  else {
    lVar5 = FUN_004f8484(param_2,param_1,param_3,10,0xffffffff,0);
    puVar3 = PTR_LAB_047cba48;
    puVar2 = PTR_FUN_047cba38;
    if (0 < *(int *)(lVar5 + 8)) {
      lVar12 = 0;
      do {
        uVar11 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + lVar12 * 8 + 8);
        puVar1 = (undefined8 *)param_5[1];
        if (puVar1 < (undefined8 *)param_5[2]) {
          *puVar1 = uVar11;
          param_5[1] = (long)(puVar1 + 1);
        }
        else {
          lVar13 = (long)puVar1 - *param_5 >> 3;
          uVar4 = lVar13 + 1;
          if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar9 = param_5[2] - *param_5;
          uVar10 = lVar9 >> 2;
          if (uVar4 <= uVar10) {
            uVar4 = uVar10;
          }
          if (0xffffffffffffffe < (ulong)(lVar9 >> 3)) {
            uVar4 = 0x1fffffffffffffff;
          }
          if (uVar4 == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = FUN_0049e770(puVar2,uVar4 << 3);
          }
          puVar1 = (undefined8 *)(lVar9 + lVar13 * 8);
          *puVar1 = uVar11;
          pvVar7 = (void *)*param_5;
          sVar8 = param_5[1] - (long)pvVar7;
          if (0 < (long)sVar8) {
            memcpy((void *)((long)puVar1 - sVar8),pvVar7,sVar8);
            pvVar7 = (void *)*param_5;
          }
          *param_5 = (long)((long)puVar1 - sVar8);
          param_5[1] = (long)(puVar1 + 1);
          param_5[2] = lVar9 + uVar4 * 8;
          if (pvVar7 != (void *)0x0) {
            FUN_0049e790(puVar3);
          }
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)(lVar5 + 8));
    }
    uVar11 = 0;
  }
  lVar5 = FUN_004a5124(param_3);
  puVar2 = PTR_nothrow_047cdb88;
  local_a0 = *(undefined8 *)(lVar5 + 0x28);
  lVar5 = *param_5;
  lVar12 = param_5[1];
  lVar13 = lVar12 - lVar5;
  uVar4 = lVar13 >> 3;
  if (lVar13 < 0x401) {
    pvVar7 = (void *)0x0;
    uVar10 = 0;
  }
  else {
    uVar10 = uVar4;
    if (0xffffffffffffffe < (long)uVar4) {
      uVar10 = 0xfffffffffffffff;
    }
    do {
      pvVar7 = operator_new(uVar10 << 3,(nothrow_t *)puVar2);
      if (pvVar7 != (void *)0x0) goto LAB_0050ac84;
      uVar10 = uVar10 >> 1;
    } while (uVar10 != 0);
    pvVar7 = (void *)0x0;
  }
LAB_0050ac84:
                    /* try { // try from 0050ac84 to 0050ac9f has its CatchHandler @ 0050acf0 */
  FUN_00512a70(lVar5,lVar12,&local_a0,uVar4,pvVar7,uVar10);
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  return uVar11;
}


