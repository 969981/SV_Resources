/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0050dc38; name: FUN_0050dc38
 */


undefined8 FUN_0050dc38(long *param_1,long param_2,undefined8 param_3)

{
  void *__src;
  long *plVar1;
  ulong uVar2;
  void *__dest;
  ulong uVar3;
  ulong *puVar4;
  long *plVar5;
  undefined8 uVar6;
  byte local_e8 [16];
  undefined8 local_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  undefined1 auStack_80 [64];
  
  FUN_004ecde8(auStack_80);
                    /* try { // try from 0050dc60 to 0050dc6b has its CatchHandler @ 0050df4c */
  plVar1 = (long *)FUN_004ed0e4(auStack_80,param_2);
  if (plVar1 == (long *)0x0) {
    uVar6 = 0;
    goto LAB_0050de60;
  }
                    /* try { // try from 0050dc78 to 0050dc7b has its CatchHandler @ 0050dee4 */
  plVar1 = (long *)(**(code **)(*plVar1 + 0x18))();
  local_98 = 0;
  uStack_90 = 0;
  local_88 = (void *)0x0;
                    /* try { // try from 0050dc88 to 0050dc93 has its CatchHandler @ 0050dee8 */
  uVar2 = FUN_00510334(param_1,&local_98);
  __src = local_88;
  uVar3 = uStack_90;
  if ((uVar2 & 1) == 0) {
LAB_0050de20:
    uVar6 = 0;
  }
  else {
    if ((local_98 & 1) == 0) {
      local_a0 = local_88;
      uStack_a8 = uStack_90;
      local_b0 = local_98;
    }
    else {
      if (uStack_90 < 0x17) {
        __dest = (void *)((ulong)&local_b0 | 1);
        local_b0 = CONCAT71(local_b0._1_7_,(char)((int)uStack_90 << 1));
      }
      else {
        if (0xffffffffffffffef < uStack_90) {
                    /* try { // try from 0050de84 to 0050de8b has its CatchHandler @ 0050dee8 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar2 = uStack_90 + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar2);
        local_b0 = uVar2 | 1;
        uStack_a8 = uVar3;
        local_a0 = __dest;
      }
      memcpy(__dest,__src,uVar3 + 1);
    }
                    /* try { // try from 0050dd14 to 0050dd23 has its CatchHandler @ 0050dec4 */
    uVar3 = FUN_005104ac(param_1,plVar1,&local_b0);
    if ((local_b0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_a0);
    }
    if ((uVar3 & 1) == 0) goto LAB_0050de20;
    if (*(char *)((long)param_1 + 0xe9) == '\0') {
      uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1);
      if ((uVar3 & 1) == 0) {
                    /* try { // try from 0050dd90 to 0050dd9f has its CatchHandler @ 0050dec0 */
        FUN_004a8ec0(local_e8,"Value of type \"",*(undefined8 *)(param_2 + 8));
                    /* try { // try from 0050dda0 to 0050ddb3 has its CatchHandler @ 0050deac */
        puVar4 = (ulong *)FUN_0021d540(local_e8,
                                       "\" stored in google.protobuf.Any has missing required fields"
                                       ,0x3b);
        uStack_c8 = puVar4[1];
        local_d0 = *puVar4;
        local_c0 = puVar4[2];
        puVar4[1] = 0;
        puVar4[2] = 0;
        *puVar4 = 0;
        plVar5 = (long *)*param_1;
        *(undefined1 *)(param_1 + 0x1e) = 1;
        if (plVar5 != (long *)0x0) {
                    /* try { // try from 0050dde8 to 0050ddef has its CatchHandler @ 0050de8c */
          (**(code **)(*plVar5 + 0x10))
                    (plVar5,(int)param_1[9],*(undefined4 *)((long)param_1 + 0x4c),&local_d0);
        }
        if ((local_d0 & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_c0);
        }
        if ((local_e8[0] & 1) != 0) {
          FUN_0049e790(PTR_LAB_047cba48,local_d8);
        }
        goto LAB_0050de20;
      }
      thunk_FUN_0052d660(plVar1,param_3);
    }
    else {
                    /* try { // try from 0050dd4c to 0050dd7b has its CatchHandler @ 0050dee8 */
      FUN_0052d660(plVar1,param_3);
    }
    uVar6 = 1;
  }
  if ((local_98 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_88);
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)*plVar1)(plVar1);
    FUN_0049e790(PTR_LAB_047cba48,plVar1);
  }
LAB_0050de60:
  FUN_004ece4c(auStack_80);
  return uVar6;
}


