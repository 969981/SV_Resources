/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002ccab0; name: FUN_002ccab0
 */


void FUN_002ccab0(ulong *param_1,undefined8 *param_2)

{
  ulong *puVar1;
  void *__dest;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  ulong local_48;
  ulong local_40;
  void *local_38;
  
  uVar2 = param_2[1];
  if (uVar2 < 100) {
    pvVar3 = (void *)*param_2;
    if (pvVar3 == (void *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    if (uVar2 < 0x17) {
      __dest = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar2 << 1);
      if (uVar2 == 0) goto LAB_002ccb84;
    }
    else {
      uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
      param_1[1] = uVar2;
      param_1[2] = (ulong)__dest;
      *param_1 = uVar4 | 1;
    }
    memcpy(__dest,pvVar3,uVar2);
LAB_002ccb84:
    *(undefined1 *)((long)__dest + uVar2) = 0;
    return;
  }
  auVar5 = FUN_002e9de4(param_2,0,100);
  uVar2 = auVar5._8_8_;
  if (auVar5._0_8_ == (void *)0x0) {
    local_48 = 0;
    local_40 = 0;
    local_38 = (void *)0x0;
    goto LAB_002ccbc8;
  }
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar2 < 0x17) {
    local_48 = CONCAT71(local_48._1_7_,(char)(auVar5._8_4_ << 1));
    pvVar3 = (void *)((ulong)&local_48 | 1);
    if (uVar2 != 0) goto LAB_002ccbb4;
  }
  else {
    uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
    local_48 = uVar4 | 1;
    local_40 = uVar2;
    local_38 = pvVar3;
LAB_002ccbb4:
    memcpy(pvVar3,auVar5._0_8_,uVar2);
  }
  *(undefined1 *)((long)pvVar3 + uVar2) = 0;
LAB_002ccbc8:
                    /* try { // try from 002ccbc8 to 002ccbdb has its CatchHandler @ 002ccc28 */
  puVar1 = (ulong *)FUN_0021d540(&local_48,&DAT_03c5a86f,3);
  uVar4 = puVar1[1];
  uVar2 = *puVar1;
  param_1[2] = puVar1[2];
  param_1[1] = uVar4;
  *param_1 = uVar2;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  if ((local_48 & 1) == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,local_38);
  return;
}


