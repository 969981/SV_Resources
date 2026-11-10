/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002be054; name: FUN_002be054
 */


void FUN_002be054(long param_1,void *param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 *****pppppuVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  size_t __n;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  char *__s;
  void *pvVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong local_b0;
  size_t local_a8;
  void *local_a0;
  ulong local_98;
  undefined8 *****local_90 [6];
  undefined8 *local_60;
  ulong local_58;
  ulong local_50;
  void *local_48;
  
  if (param_2 == (void *)0x0) {
    local_58 = 0;
    local_50 = 0;
    local_48 = (void *)0x0;
  }
  else {
    if (0xffffffffffffffef < param_3) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (param_3 < 0x17) {
      local_58 = CONCAT71(local_58._1_7_,(char)((int)param_3 << 1));
      pvVar11 = (void *)((ulong)&local_58 | 1);
      if (param_3 != 0) goto LAB_002be0d8;
    }
    else {
      uVar6 = param_3 + 0x10 & 0xfffffffffffffff0;
      pvVar11 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
      local_58 = uVar6 | 1;
      local_50 = param_3;
      local_48 = pvVar11;
LAB_002be0d8:
      memcpy(pvVar11,param_2,param_3);
    }
    *(undefined1 *)((long)pvVar11 + param_3) = 0;
  }
                    /* try { // try from 002be0f0 to 002be0f7 has its CatchHandler @ 002be4a4 */
  plVar4 = (long *)FUN_002b8c40(param_1 + 0x120,&local_58);
  plVar9 = (long *)*param_4;
  plVar13 = plVar4 + 1;
  plVar14 = (long *)*plVar13;
  if (plVar14 == (long *)0x0) {
    plVar15 = plVar13;
LAB_002be14c:
    lVar12 = *plVar13;
    plVar14 = plVar13;
  }
  else {
    plVar13 = plVar4 + 1;
    while( true ) {
      while (plVar15 = plVar14, (long *)plVar14[4] <= plVar9) {
        if (plVar9 <= (long *)plVar14[4]) goto LAB_002be14c;
        plVar13 = plVar14 + 1;
        if ((long *)*plVar13 == (long *)0x0) goto LAB_002be14c;
        plVar14 = (long *)*plVar13;
      }
      if ((long *)*plVar14 == (long *)0x0) break;
      plVar13 = plVar14;
      plVar14 = (long *)*plVar14;
    }
    lVar12 = *plVar14;
  }
  if (lVar12 == 0) {
    puVar5 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x30);
    puVar5[4] = plVar9;
    puVar5[5] = 0;
    puVar5[2] = plVar15;
    *puVar5 = 0;
    puVar5[1] = 0;
    *plVar14 = (long)puVar5;
    if (*(long *)*plVar4 == 0) {
      puVar8 = puVar5;
    }
    else {
      *plVar4 = *(long *)*plVar4;
      puVar8 = (undefined8 *)*plVar14;
    }
    FUN_010108e0(plVar4[1],puVar8);
    plVar4[2] = plVar4[2] + 1;
    uVar7 = *param_4;
    *param_4 = 0;
    puVar8 = (undefined8 *)puVar5[5];
    puVar5[5] = uVar7;
  }
  else {
    *param_4 = 0;
    puVar8 = *(undefined8 **)(lVar12 + 0x28);
    *(long **)(lVar12 + 0x28) = plVar9;
  }
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8);
    FUN_0049e790(PTR_LAB_047cba48,puVar8);
  }
  if ((char)plVar4[3] != '\0') {
                    /* try { // try from 002be194 to 002be19f has its CatchHandler @ 002be480 */
    FUN_002c1588(&local_98,plVar4 + 4,plVar4 + 4);
    local_60 = (undefined8 *)0x0;
    if (plVar4[0xb] != 0) {
      plVar14 = (long *)(plVar4[0xb] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = *plVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_60 = (undefined8 *)plVar4[0xb];
    }
                    /* try { // try from 002be1d0 to 002be1db has its CatchHandler @ 002be3e4 */
    (**(code **)(*plVar9 + 0x10))(plVar9,&local_98);
    puVar5 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      plVar14 = local_60 + 1;
      do {
        lVar12 = *plVar14;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = lVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)*local_60)(local_60);
        FUN_0049e790(PTR_LAB_047cba48,puVar5);
      }
    }
    uVar6 = local_98 & 1;
    pppppuVar1 = local_90;
    if (uVar6 != 0) {
      pppppuVar1 = local_90[0];
    }
    uVar10 = local_98 >> 1;
    if ((uVar10 != 0) && (pppppuVar1 != (undefined8 *****)0x0)) {
      pppppuVar1 = pppppuVar1 + uVar10 * 3;
      do {
        uVar10 = uVar10 - 1;
        FUN_0028bf34(pppppuVar1 + -3,pppppuVar1[-2]);
        pppppuVar1 = pppppuVar1 + -3;
      } while (uVar10 != 0);
      uVar6 = local_98 & 1;
    }
    if (uVar6 != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_90[0]);
    }
  }
  uVar7 = *(undefined8 *)(param_1 + 0xa0);
  __s = *(char **)PTR_PTR_047cc710;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 002be3d0 to 002be3d7 has its CatchHandler @ 002be3e0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_b0 = CONCAT71(local_b0._1_7_,(char)((int)__n << 1));
    pvVar11 = (void *)((ulong)&local_b0 | 1);
    if (__n == 0) goto LAB_002be2d8;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar11 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar6);
    local_b0 = uVar6 | 1;
    local_a8 = __n;
    local_a0 = pvVar11;
  }
  memcpy(pvVar11,__s,__n);
LAB_002be2d8:
  *(undefined1 *)((long)pvVar11 + __n) = 0;
                    /* try { // try from 002be2dc to 002be2eb has its CatchHandler @ 002be484 */
  FUN_002b3ea8(uVar7,&local_b0,&local_58);
  if ((local_b0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_a0);
  }
  if ((local_58 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_48);
  }
  return;
}


