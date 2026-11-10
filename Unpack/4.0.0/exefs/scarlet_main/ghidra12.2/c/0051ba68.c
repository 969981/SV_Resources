/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0051ba68; name: FUN_0051ba68
 */


void FUN_0051ba68(long *param_1,long *param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  void *pvVar11;
  undefined8 extraout_x1;
  size_t sVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 *local_68;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != 0) {
    lVar3 = FUN_0049e770(PTR_FUN_047cba38,(long)param_3 * 8);
    pvVar11 = (void *)*param_1;
    sVar12 = param_1[1] - (long)pvVar11;
    if (0 < (long)sVar12) {
      memcpy((void *)(lVar3 - sVar12),pvVar11,sVar12);
      pvVar11 = (void *)*param_1;
    }
    *param_1 = (long)(lVar3 - sVar12);
    param_1[1] = lVar3;
    param_1[2] = lVar3 + (long)param_3 * 8;
    if (pvVar11 != (void *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
  }
                    /* try { // try from 0051bafc to 0051bb5b has its CatchHandler @ 0051be28 */
  (**(code **)(*param_2 + 0x98))(param_2);
  uVar4 = FUN_004f906c(extraout_x1,param_2,param_5,10,0);
  plVar5 = (long *)FUN_00502318(extraout_x1,param_5);
  plVar6 = (long *)FUN_004f9064(extraout_x1);
  uVar7 = FUN_004a5124(param_5);
  plVar6 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar7);
                    /* try { // try from 0051bb64 to 0051bb83 has its CatchHandler @ 0051be24 */
  puVar8 = (undefined8 *)(**(code **)(*plVar6 + 0x18))();
  local_80 = uVar4;
  plStack_78 = plVar5;
  uVar7 = (**(code **)(*plVar5 + 0x48))(plVar5,uVar4);
  puVar2 = PTR_FUN_047cba38;
  local_70 = uVar7;
  local_68 = puVar8;
  while( true ) {
                    /* try { // try from 0051bbe4 to 0051bbef has its CatchHandler @ 0051be38 */
    uVar9 = (**(code **)(*plVar5 + 0x50))(plVar5,uVar4);
                    /* try { // try from 0051bc00 to 0051bc13 has its CatchHandler @ 0051be44 */
    uVar10 = (**(code **)(*plVar5 + 0x68))(plVar5,uVar4,uVar7,uVar9);
                    /* try { // try from 0051bc20 to 0051bc2f has its CatchHandler @ 0051bed0 */
    (**(code **)(*plVar5 + 0x70))(plVar5,uVar4,uVar9);
    if ((uVar10 & 1) != 0) break;
                    /* try { // try from 0051bc3c to 0051bc4f has its CatchHandler @ 0051be30 */
    uVar9 = (**(code **)(*plVar5 + 0x78))(plVar5,uVar4,uVar7,puVar8);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 < (undefined8 *)param_1[2]) {
      *puVar1 = uVar9;
      param_1[1] = (long)(puVar1 + 1);
    }
    else {
      lVar3 = (long)puVar1 - *param_1 >> 3;
      uVar10 = lVar3 + 1;
      if (uVar10 >> 0x3d != 0) {
        local_70 = uVar7;
                    /* try { // try from 0051bdf0 to 0051bdf7 has its CatchHandler @ 0051bdf8 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar13 = param_1[2] - *param_1;
      uVar15 = lVar13 >> 2;
      if (uVar10 <= uVar15) {
        uVar10 = uVar15;
      }
      if (0xffffffffffffffe < (ulong)(lVar13 >> 3)) {
        uVar10 = 0x1fffffffffffffff;
      }
      if (uVar10 == 0) {
        lVar13 = 0;
      }
      else {
        lVar13 = FUN_0049e770(puVar2,uVar10 << 3);
      }
      puVar1 = (undefined8 *)(lVar13 + lVar3 * 8);
      *puVar1 = uVar9;
      pvVar11 = (void *)*param_1;
      sVar12 = param_1[1] - (long)pvVar11;
      if (0 < (long)sVar12) {
        memcpy((void *)((long)puVar1 - sVar12),pvVar11,sVar12);
        pvVar11 = (void *)*param_1;
      }
      *param_1 = (long)((long)puVar1 - sVar12);
      param_1[1] = (long)(puVar1 + 1);
      param_1[2] = lVar13 + uVar10 * 8;
      if (pvVar11 != (void *)0x0) {
        FUN_0049e790(PTR_LAB_047cba48);
      }
    }
                    /* try { // try from 0051bbc4 to 0051bbd3 has its CatchHandler @ 0051be34 */
    uVar7 = (**(code **)(*plVar5 + 0x60))(plVar5,uVar4,uVar7);
  }
  local_70 = uVar7;
                    /* try { // try from 0051bd00 to 0051bd0f has its CatchHandler @ 0051be18 */
  (**(code **)(*plVar5 + 0x70))(plVar5,uVar4,uVar7);
  local_68 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8);
    FUN_0049e790(PTR_LAB_047cba48,puVar8);
  }
                    /* try { // try from 0051bd3c to 0051bd43 has its CatchHandler @ 0051be14 */
  lVar3 = FUN_004a5124(param_5);
  puVar2 = PTR_nothrow_047cdb88;
  local_80 = *(undefined8 *)(lVar3 + 0x28);
  lVar3 = *param_1;
  lVar13 = param_1[1];
  lVar14 = lVar13 - lVar3;
  uVar10 = lVar14 >> 3;
  if (lVar14 < 0x401) {
    pvVar11 = (void *)0x0;
    uVar15 = 0;
  }
  else {
    uVar15 = uVar10;
    if (0xffffffffffffffe < (long)uVar10) {
      uVar15 = 0xfffffffffffffff;
    }
    do {
      pvVar11 = operator_new(uVar15 << 3,(nothrow_t *)puVar2);
      if (pvVar11 != (void *)0x0) goto LAB_0051bda4;
      uVar15 = uVar15 >> 1;
    } while (uVar15 != 0);
    pvVar11 = (void *)0x0;
  }
LAB_0051bda4:
                    /* try { // try from 0051bda4 to 0051bdbf has its CatchHandler @ 0051be00 */
  FUN_0051eba0(lVar3,lVar13,&local_80,uVar10,pvVar11,uVar15);
  if (pvVar11 != (void *)0x0) {
    operator_delete(pvVar11);
  }
  return;
}


