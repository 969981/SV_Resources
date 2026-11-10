/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002b7720; name: FUN_002b7720
 */


void FUN_002b7720(long param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  size_t __n;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  char *__s;
  void *__dest;
  undefined8 *local_68;
  undefined8 *local_60;
  size_t sStack_58;
  void *local_50;
  undefined8 local_48;
  
  if (*param_2 == '\0') {
    lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10);
    lVar6 = lVar10;
    if (*(char *)(lVar10 + 0xe8) != '\0') {
      plVar8 = (long *)(lVar10 + 0xf0);
      if (*plVar8 != 0) {
        FUN_002c14bc(plVar8);
        FUN_0049e790(PTR_LAB_047cba48,*plVar8);
        lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10);
      }
      *(undefined1 *)(lVar10 + 0xe8) = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x002b77f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar6 + 0x98) + 0x20))();
    return;
  }
  __s = *(char **)PTR_PTR_047cc6f8;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  plVar8 = (long *)(param_1 + 0x108);
  if (__n < 0x17) {
    local_60 = (undefined8 *)CONCAT71(local_60._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_60 | 1);
    if (__n == 0) goto LAB_002b7834;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
    local_60 = (undefined8 *)(uVar7 | 1);
    sStack_58 = __n;
    local_50 = __dest;
  }
  memcpy(__dest,__s,__n);
LAB_002b7834:
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 002b7838 to 002b7847 has its CatchHandler @ 002b7b84 */
  puVar5 = (undefined8 *)FUN_002c3c14(plVar8,&local_48,&local_60);
  puVar11 = (undefined8 *)*puVar5;
  if (puVar11 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x88);
    puVar11[6] = local_50;
    puVar11[5] = sStack_58;
    puVar11[4] = local_60;
    sStack_58 = 0;
    local_50 = (void *)0x0;
    local_60 = (undefined8 *)0x0;
    puVar11[0xe] = 0;
    puVar11[0xd] = 0;
    puVar11[0x10] = 0;
    puVar11[0xf] = 0;
    puVar11[0xe] = puVar11 + 0xf;
    puVar11[0xc] = 0;
    puVar11[0xb] = 0;
    puVar11[10] = 0;
    puVar11[9] = 0;
    puVar11[8] = 0;
    puVar11[7] = 0;
    puVar11[2] = local_48;
    *puVar11 = 0;
    puVar11[1] = 0;
    *puVar5 = puVar11;
    if (*(long *)*plVar8 == 0) {
      puVar5 = puVar11;
    }
    else {
      *plVar8 = *(long *)*plVar8;
      puVar5 = (undefined8 *)*puVar5;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 0x110),puVar5);
    *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + 1;
  }
  if (((ulong)local_60 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  local_60 = (undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10) + 0xb0);
  lVar6 = FUN_002c3f38(puVar11 + 0xe,local_60,&DAT_03cc9966,&local_60,&local_48);
  lVar6 = *(long *)(lVar6 + 0x38);
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x49) != '\0')) {
    FUN_00360570(lVar6 + 0x50);
    *(undefined1 *)(lVar6 + 0x49) = 0;
  }
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10);
  bVar4 = (*(char *)(lVar6 + 0xe8) != '\0') != (*param_2 != '\0');
  if ((bVar4) || (*(char *)(lVar6 + 0xe8) == '\0')) {
    if (!bVar4) {
      return;
    }
  }
  else {
    lVar10 = *(long *)(lVar6 + 0xf0);
    lVar2 = *(long *)(lVar6 + 0xf8);
    lVar1 = *(long *)(param_2 + 8);
    if (lVar2 - lVar10 == *(long *)(param_2 + 0x10) - lVar1) {
      while( true ) {
        if (lVar10 == lVar2) {
          return;
        }
        uVar7 = FUN_002c0ea4(lVar10,lVar1);
        if ((uVar7 & 1) == 0) break;
        lVar10 = lVar10 + 0x78;
        lVar1 = lVar1 + 0x78;
      }
      lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10);
    }
  }
  FUN_002b7ba8(lVar6 + 0xe8,param_2);
  local_60 = (undefined8 *)0x0;
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10);
  if (*(char *)(lVar6 + 0xe8) == '\0') {
                    /* try { // try from 002b7af4 to 002b7af7 has its CatchHandler @ 002b7b40 */
    uVar9 = FUN_003855e0();
                    /* catch() { ... } // from try @ 002b7a3c with catch @ 002b7af8 */
    if (local_68 != (undefined8 *)0x0) {
      plVar8 = local_68 + 1;
      do {
        lVar6 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)*local_68)(local_68);
        FUN_0049e790(PTR_LAB_047cba48,local_68);
      }
    }
    puVar11 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      plVar8 = local_60 + 1;
      do {
        lVar6 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)*local_60)(local_60);
        FUN_0049e790(PTR_LAB_047cba48,puVar11);
      }
    }
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar9);
  }
                    /* try { // try from 002b79fc to 002b7a27 has its CatchHandler @ 002b7b40 */
  lVar6 = FUN_002b5ef0(lVar6,lVar6 + 0xf0,&local_60);
  plVar8 = *(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x18) + 0x10) + 0x98);
  if (lVar6 == 0) {
    local_68 = local_60;
    local_60 = (undefined8 *)0x0;
                    /* try { // try from 002b7a3c to 002b7a43 has its CatchHandler @ 002b7af8 */
    (**(code **)(*plVar8 + 0x10))(plVar8,&local_68);
    puVar5 = local_68;
    puVar11 = local_60;
    if (local_68 != (undefined8 *)0x0) {
      plVar8 = local_68 + 1;
      do {
        lVar6 = *plVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *plVar8 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 + -1 == 0) {
        (**(code **)*local_68)(local_68);
        FUN_0049e790(PTR_LAB_047cba48,puVar5);
        puVar11 = local_60;
      }
    }
  }
  else {
    (**(code **)(*plVar8 + 0x18))();
    puVar11 = local_60;
  }
  if (puVar11 != (undefined8 *)0x0) {
    plVar8 = puVar11 + 1;
    do {
      lVar6 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 + -1 == 0) {
      local_60 = puVar11;
      (**(code **)*puVar11)(puVar11);
      FUN_0049e790(PTR_LAB_047cba48,puVar11);
    }
  }
  return;
}


