/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0025d400; name: FUN_0025d400
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0025d400(undefined8 *param_1,long param_2)

{
  byte bVar1;
  void *__dest;
  long *plVar2;
  size_t __n;
  undefined8 uVar3;
  char *__s;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  long *local_88;
  ulong local_80;
  size_t local_78;
  void *local_70;
  long *local_68;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long *plStack_48;
  
  puVar7 = (ulong *)(param_2 + 0x20);
  bVar1 = *(byte *)puVar7;
  if ((bVar1 & 1) == 0) {
    uStack_b8 = *(ulong *)(param_2 + 0x28);
    local_c0 = *puVar7;
    local_b0 = *(void **)(param_2 + 0x30);
  }
  else {
    uVar9 = *(ulong *)(param_2 + 0x28);
    pvVar6 = *(void **)(param_2 + 0x30);
    if (uVar9 < 0x17) {
      pvVar5 = (void *)((ulong)&local_c0 | 1);
      local_c0 = CONCAT71(local_c0._1_7_,(char)((int)uVar9 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar9) {
                    /* try { // try from 0025d754 to 0025d75b has its CatchHandler @ 0025d774 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar8 = uVar9 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar8);
      local_c0 = uVar8 | 1;
      uStack_b8 = uVar9;
      local_b0 = pvVar5;
    }
    memcpy(pvVar5,pvVar6,uVar9 + 1);
    bVar1 = *(byte *)puVar7;
  }
  pvVar6 = (void *)((ulong)&local_c0 | 1);
  if ((local_c0 & 1) != 0) {
    pvVar6 = local_b0;
  }
  if ((bVar1 & 1) == 0) {
    uStack_d8 = *(ulong *)(param_2 + 0x28);
    local_e0 = *puVar7;
    local_d0 = *(void **)(param_2 + 0x30);
  }
  else {
    uVar9 = *(ulong *)(param_2 + 0x28);
    pvVar5 = *(void **)(param_2 + 0x30);
    if (uVar9 < 0x17) {
      __dest = (void *)((ulong)&local_e0 | 1);
      local_e0 = CONCAT71(local_e0._1_7_,(char)((int)uVar9 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar9) {
                    /* try { // try from 0025d75c to 0025d763 has its CatchHandler @ 0025d764 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar8 = uVar9 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar8);
      local_e0 = uVar8 | 1;
      uStack_d8 = uVar9;
      local_d0 = __dest;
    }
    memcpy(__dest,pvVar5,uVar9 + 1);
  }
  uVar9 = local_e0 >> 1 & 0x7f;
  if ((local_e0 & 1) != 0) {
    uVar9 = uStack_d8;
  }
  local_88 = (long *)FUN_01cf7e20();
  if (0xffffffffffffffef < uVar9) {
                    /* try { // try from 0025d744 to 0025d74b has its CatchHandler @ 0025d788 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar9 < 0x17) {
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)uVar9 << 1));
    pvVar5 = (void *)((ulong)&local_a0 | 1);
    if (uVar9 != 0) goto LAB_0025d590;
  }
  else {
    uVar8 = uVar9 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)(**(code **)(*local_88 + 0x10))(local_88,uVar8,1);
    local_a0 = uVar8 | 1;
    uStack_98 = uVar9;
    local_90 = pvVar5;
LAB_0025d590:
    memcpy(pvVar5,pvVar6,uVar9);
  }
  *(undefined1 *)((long)pvVar5 + uVar9) = 0;
  __s = *(char **)PTR_PTR_047cc208;
  plVar2 = (long *)FUN_01cf7e20();
  local_68 = plVar2;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0025d74c to 0025d753 has its CatchHandler @ 0025d778 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
    pvVar6 = (void *)((ulong)&local_80 | 1);
    if (__n == 0) goto LAB_0025d630;
  }
  else {
    uVar9 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar6 = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar9,1);
    local_80 = uVar9 | 1;
    local_78 = __n;
    local_70 = pvVar6;
  }
  memcpy(pvVar6,__s,__n);
LAB_0025d630:
  local_50 = local_90;
  uStack_58 = uStack_98;
  local_60 = local_a0;
  *(undefined1 *)((long)pvVar6 + __n) = 0;
  uStack_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = 0;
  puVar4 = param_1 + 1;
  *puVar4 = 0;
  plStack_48 = local_88;
  uVar3 = FUN_01cf7e20();
  param_1[2] = uVar3;
  param_1[3] = 0;
  *param_1 = puVar4;
                    /* try { // try from 0025d658 to 0025d66b has its CatchHandler @ 0025d798 */
  FUN_01d0202c(param_1,puVar4,&local_80,&local_80);
  if ((local_60 & 1) != 0) {
    (**(code **)(*plStack_48 + 0x18))(plStack_48,local_50,local_60 & 0xfffffffffffffffe,1);
  }
  if ((local_80 & 1) != 0) {
    (**(code **)(*local_68 + 0x18))(local_68,local_70,local_80 & 0xfffffffffffffffe,1);
  }
  if ((local_a0 & 1) != 0) {
    (**(code **)(*local_88 + 0x18))(local_88,local_90,local_a0 & 0xfffffffffffffffe,1);
  }
  if ((local_e0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_d0);
  }
  if ((local_c0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_b0);
  }
  return;
}


