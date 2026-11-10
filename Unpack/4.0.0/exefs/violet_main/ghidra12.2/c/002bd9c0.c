/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002bd9c0; name: FUN_002bd9c0
 */


void FUN_002bd9c0(long param_1,void *param_2,ulong param_3,undefined8 *param_4)

{
  long *plVar1;
  size_t __n;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  char *__s;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  ulong local_a8;
  size_t local_a0;
  void *local_98;
  byte local_90 [16];
  undefined8 local_80;
  char local_78;
  byte local_70;
  undefined8 local_60;
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
      pvVar6 = (void *)((ulong)&local_58 | 1);
      if (param_3 != 0) goto LAB_002bda44;
    }
    else {
      uVar7 = param_3 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
      local_58 = uVar7 | 1;
      local_50 = param_3;
      local_48 = pvVar6;
LAB_002bda44:
      memcpy(pvVar6,param_2,param_3);
    }
    *(undefined1 *)((long)pvVar6 + param_3) = 0;
  }
                    /* try { // try from 002bda5c to 002bda63 has its CatchHandler @ 002bdd18 */
  plVar1 = (long *)FUN_002b8b98(param_1 + 0x108,&local_58);
  plVar5 = (long *)*param_4;
  plVar9 = plVar1 + 1;
  plVar10 = (long *)*plVar9;
  if (plVar10 == (long *)0x0) {
    plVar11 = plVar9;
LAB_002bdab8:
    lVar8 = *plVar9;
    plVar10 = plVar9;
  }
  else {
    plVar9 = plVar1 + 1;
    while( true ) {
      while (plVar11 = plVar10, (long *)plVar10[4] <= plVar5) {
        if (plVar5 <= (long *)plVar10[4]) goto LAB_002bdab8;
        plVar9 = plVar10 + 1;
        if ((long *)*plVar9 == (long *)0x0) goto LAB_002bdab8;
        plVar10 = (long *)*plVar9;
      }
      if ((long *)*plVar10 == (long *)0x0) break;
      plVar9 = plVar10;
      plVar10 = (long *)*plVar10;
    }
    lVar8 = *plVar10;
  }
  if (lVar8 == 0) {
    puVar2 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x30);
    puVar2[4] = plVar5;
    puVar2[5] = 0;
    puVar2[2] = plVar11;
    *puVar2 = 0;
    puVar2[1] = 0;
    *plVar10 = (long)puVar2;
    if (*(long *)*plVar1 == 0) {
      puVar4 = puVar2;
    }
    else {
      *plVar1 = *(long *)*plVar1;
      puVar4 = (undefined8 *)*plVar10;
    }
    FUN_010108e0(plVar1[1],puVar4);
    plVar1[2] = plVar1[2] + 1;
    uVar3 = *param_4;
    *param_4 = 0;
    puVar4 = (undefined8 *)puVar2[5];
    puVar2[5] = uVar3;
  }
  else {
    *param_4 = 0;
    puVar4 = *(undefined8 **)(lVar8 + 0x28);
    *(long **)(lVar8 + 0x28) = plVar5;
  }
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4);
    FUN_0049e790(PTR_LAB_047cba48,puVar4);
  }
  if ((char)plVar1[3] != '\0') {
                    /* try { // try from 002bdb00 to 002bdb07 has its CatchHandler @ 002bdcf4 */
    FUN_002b8a08(local_90,plVar1 + 4);
                    /* try { // try from 002bdb10 to 002bdb1b has its CatchHandler @ 002bdcbc */
    (**(code **)(*plVar5 + 0x10))(plVar5,local_90);
    if (local_78 != '\0') {
      if ((local_70 & 1) != 0) {
        FUN_0049e790(PTR_LAB_047cba48,local_60);
      }
      local_78 = '\0';
    }
    if ((local_90[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_80);
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  __s = *(char **)PTR_PTR_047cc700;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 002bdca8 to 002bdcaf has its CatchHandler @ 002bdcb8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_a8 = CONCAT71(local_a8._1_7_,(char)((int)__n << 1));
    pvVar6 = (void *)((ulong)&local_a8 | 1);
    if (__n == 0) goto LAB_002bdbd4;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar6 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
    local_a8 = uVar7 | 1;
    local_a0 = __n;
    local_98 = pvVar6;
  }
  memcpy(pvVar6,__s,__n);
LAB_002bdbd4:
  *(undefined1 *)((long)pvVar6 + __n) = 0;
                    /* try { // try from 002bdbd8 to 002bdbe7 has its CatchHandler @ 002bdcf8 */
  FUN_002b3ea8(uVar3,&local_a8,&local_58);
  if ((local_a8 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_98);
  }
  if ((local_58 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_48);
  }
  return;
}


