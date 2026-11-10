/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005179dc; name: FUN_005179dc
 */


undefined8 FUN_005179dc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  size_t __n;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *local_78;
  long *local_70;
  long *local_68;
  
  lVar4 = (**(code **)(*param_1 + 0x98))();
  (**(code **)(*param_1 + 0x98))(param_1);
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  if (*(char *)(*(long *)(lVar4 + 0x20) + 0x4b) == '\0') {
                    /* try { // try from 00517b54 to 00517b63 has its CatchHandler @ 00517c34 */
    FUN_004f4acc(extraout_x1,param_1,&local_78);
    plVar11 = local_78;
    plVar12 = local_70;
    if (local_78 != local_70) {
LAB_00517b70:
      do {
                    /* try { // try from 00517b74 to 00517b83 has its CatchHandler @ 00517c38 */
        param_2 = FUN_00517c5c(*plVar11,param_1,param_2,param_3);
        plVar11 = plVar11 + 1;
      } while (plVar12 != plVar11);
    }
  }
  else if (0 < *(int *)(lVar4 + 0x68)) {
    lVar13 = 0;
    plVar12 = (long *)0x0;
    lVar9 = 1;
    lVar7 = *(long *)(lVar4 + 0x28);
    do {
      lVar10 = (long)plVar12 - (long)local_78 >> 3;
      uVar1 = lVar10 + 1;
      if (uVar1 >> 0x3d != 0) {
                    /* try { // try from 00517c28 to 00517c2f has its CatchHandler @ 00517c30 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      uVar8 = (long)local_68 - (long)local_78 >> 2;
      if (uVar1 <= uVar8) {
        uVar1 = uVar8;
      }
      if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
        uVar1 = 0x1fffffffffffffff;
      }
      if (uVar1 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 3);
      }
      plVar3 = local_78;
      plVar11 = (long *)(lVar5 + lVar10 * 8);
      plVar2 = (long *)(lVar5 + uVar1 * 8);
      plVar12 = plVar11 + 1;
      *plVar11 = lVar7;
      __n = (long)local_70 - (long)local_78;
      plVar11 = (long *)((long)plVar11 - __n);
      if (0 < (long)__n) {
        memcpy(plVar11,local_78,__n);
      }
      local_78 = plVar11;
      local_70 = plVar12;
      local_68 = plVar2;
      if (plVar3 != (long *)0x0) {
        FUN_0049e790(PTR_LAB_047cba48,plVar3);
      }
      while( true ) {
        if (*(int *)(lVar4 + 0x68) <= lVar9) {
          plVar11 = local_78;
          if (local_78 == plVar12) goto LAB_00517b94;
          goto LAB_00517b70;
        }
        lVar13 = lVar13 + 0x98;
        lVar9 = lVar9 + 1;
        lVar7 = *(long *)(lVar4 + 0x28) + lVar13;
        if (local_68 <= plVar12) break;
        local_70 = plVar12 + 1;
        *plVar12 = lVar7;
        plVar12 = local_70;
      }
    } while( true );
  }
LAB_00517b94:
  if (*(char *)(*(long *)(lVar4 + 0x20) + 0x48) == '\0') {
    uVar6 = FUN_004efc18(extraout_x1,param_1);
    uVar6 = FUN_005161f8(uVar6,param_2,param_3);
  }
  else {
                    /* try { // try from 00517ba0 to 00517bd3 has its CatchHandler @ 00517c34 */
    uVar6 = FUN_004efc18(extraout_x1,param_1);
    uVar6 = FUN_00516690(uVar6,param_2,param_3);
  }
  if (local_78 != (long *)0x0) {
    local_70 = local_78;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return uVar6;
}


