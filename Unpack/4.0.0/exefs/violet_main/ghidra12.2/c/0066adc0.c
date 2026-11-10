/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0066adc0; name: FUN_0066adc0
 */


void FUN_0066adc0(long param_1,undefined8 *param_2,ulong *param_3)

{
  long *plVar1;
  void *__src;
  char cVar2;
  bool bVar3;
  void *__dest;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long *local_48;
  undefined8 local_40;
  long *plStack_38;
  
  plStack_38 = (long *)param_2[1];
  local_40 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  local_48 = (long *)FUN_01cf7e20();
  if ((*param_3 & 1) == 0) {
    uStack_58 = param_3[1];
    local_60 = *param_3;
    local_50 = (void *)param_3[2];
  }
  else {
    uVar6 = param_3[1];
    __src = (void *)param_3[2];
    if (uVar6 < 0x17) {
      __dest = (void *)((ulong)&local_60 | 1);
      local_60 = CONCAT71(local_60._1_7_,(char)((int)uVar6 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar6) {
                    /* try { // try from 0066aef8 to 0066aeff has its CatchHandler @ 0066af00 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar6 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)(**(code **)(*local_48 + 0x10))(local_48,uVar5,1);
      local_60 = uVar5 | 1;
      uStack_58 = uVar6;
      local_50 = __dest;
    }
    memcpy(__dest,__src,uVar6 + 1);
  }
  FUN_00671bf0(param_1,&local_40,&local_60);
  if ((local_60 & 1) != 0) {
    (**(code **)(*local_48 + 0x18))(local_48,local_50,local_60 & 0xfffffffffffffffe,1);
  }
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      std::__shared_weak_count::__release_weak();
    }
  }
  uVar5 = param_3[1];
  uVar6 = *param_3;
  uVar7 = param_3[2];
  *(ulong *)(param_1 + 0x30) = param_3[3];
  *(ulong *)(param_1 + 0x28) = uVar7;
  *(ulong *)(param_1 + 0x20) = uVar5;
  *(ulong *)(param_1 + 0x18) = uVar6;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}


