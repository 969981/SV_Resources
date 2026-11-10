/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002be4c8; name: FUN_002be4c8
 */


void FUN_002be4c8(long param_1,void *param_2,ulong param_3,ulong param_4,uint param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  size_t __n;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  char *__s;
  undefined8 *puVar8;
  void *pvVar9;
  long *plVar10;
  ulong uVar11;
  ulong local_70;
  size_t local_68;
  void *local_60;
  ulong local_58;
  ulong local_50;
  void *local_48;
  
  if (*(char *)(param_1 + 0x168) != '\0') {
    return;
  }
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
      pvVar9 = (void *)((ulong)&local_58 | 1);
      if (param_3 != 0) goto LAB_002be558;
    }
    else {
      uVar11 = param_3 + 0x10 & 0xfffffffffffffff0;
      pvVar9 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar11);
      local_58 = uVar11 | 1;
      local_50 = param_3;
      local_48 = pvVar9;
LAB_002be558:
      memcpy(pvVar9,param_2,param_3);
    }
    *(undefined1 *)((long)pvVar9 + param_3) = 0;
  }
  lVar1 = param_1 + 0x120;
                    /* try { // try from 002be570 to 002be57b has its CatchHandler @ 002be7bc */
  puVar2 = (undefined8 *)FUN_002b8c40(lVar1,&local_58);
  plVar6 = puVar2 + 1;
  plVar3 = (long *)*plVar6;
  if (plVar3 == (long *)0x0) goto LAB_002be73c;
  plVar5 = plVar3;
  plVar10 = plVar6;
  do {
    if ((ulong)plVar5[4] >= param_4) {
      plVar10 = plVar5;
    }
    plVar5 = (long *)plVar5[(ulong)plVar5[4] < param_4];
  } while (plVar5 != (long *)0x0);
  if ((plVar10 == plVar6) || (param_4 < (ulong)plVar10[4])) goto LAB_002be73c;
  plVar6 = (long *)plVar10[1];
  if ((long *)plVar10[1] == (long *)0x0) {
    plVar6 = plVar10 + 2;
    plVar5 = (long *)*plVar6;
    if ((long *)*plVar5 != plVar10) {
      do {
        lVar4 = *plVar6;
        plVar6 = (long *)(lVar4 + 0x10);
        plVar5 = (long *)*plVar6;
      } while (*plVar5 != lVar4);
    }
  }
  else {
    do {
      plVar5 = plVar6;
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  }
  if ((long *)*puVar2 == plVar10) {
    *puVar2 = plVar5;
  }
  puVar2[2] = puVar2[2] + -1;
  FUN_01336080(plVar3,plVar10);
  puVar8 = (undefined8 *)plVar10[5];
  plVar10[5] = 0;
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8);
    FUN_0049e790(PTR_LAB_047cba48,puVar8);
  }
  FUN_0049e790(PTR_LAB_047cba48,plVar10);
  if (puVar2[2] != 0) goto LAB_002be73c;
                    /* try { // try from 002be66c to 002be68f has its CatchHandler @ 002be7b8 */
  lVar4 = FUN_002c62b4(lVar1,&local_58);
  if (param_1 + 0x128 != lVar4) {
    FUN_002c63c4(lVar1);
  }
  uVar7 = *(undefined8 *)(param_1 + 0xa0);
  __s = *(char **)PTR_PTR_047cc710;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 002be774 to 002be77b has its CatchHandler @ 002be77c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_70 = CONCAT71(local_70._1_7_,(char)((int)__n << 1));
    pvVar9 = (void *)((ulong)&local_70 | 1);
    if (__n != 0) goto LAB_002be6fc;
  }
  else {
    uVar11 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar9 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar11);
    local_70 = uVar11 | 1;
    local_68 = __n;
    local_60 = pvVar9;
LAB_002be6fc:
    memcpy(pvVar9,__s,__n);
  }
  *(undefined1 *)((long)pvVar9 + __n) = 0;
                    /* try { // try from 002be710 to 002be723 has its CatchHandler @ 002be780 */
  FUN_002b407c(uVar7,&local_70,&local_58,param_5 & 1);
  if ((local_70 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_60);
  }
LAB_002be73c:
  if ((local_58 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_48);
  }
  return;
}


