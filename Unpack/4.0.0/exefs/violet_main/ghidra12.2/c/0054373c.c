/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0054373c; name: FUN_0054373c
 */


void FUN_0054373c(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  void *__src;
  char cVar2;
  bool bVar3;
  long *plVar4;
  void *__dest;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  *param_1 = *param_2;
  plVar4 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 8) = plVar4;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    uVar8 = *(undefined8 *)(param_2 + 4);
    uVar7 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar8;
    *(undefined8 *)(param_1 + 2) = uVar7;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 4);
    __src = *(void **)(param_2 + 6);
    if (uVar1 < 0x17) {
      __dest = (void *)((long)param_1 + 9);
      *(char *)(param_1 + 2) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 005438bc to 005438c3 has its CatchHandler @ 005438c4 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar6 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar6,1);
      *(ulong *)(param_1 + 4) = uVar1;
      *(void **)(param_1 + 6) = __dest;
      *(ulong *)(param_1 + 2) = uVar6 | 1;
    }
    memcpy(__dest,__src,uVar1 + 1);
  }
  local_58 = 0;
  local_50 = FUN_01cf7e20();
  uStack_48 = 0;
                    /* try { // try from 00543804 to 00543813 has its CatchHandler @ 005438c8 */
  local_60 = &local_58;
  FUN_00543620(&local_80,param_2 + 10,&local_60);
  FUN_01cfa44c(&local_60,local_58);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 **)(param_1 + 0xc) = local_80;
  *(undefined8 *)(param_1 + 0x10) = uStack_70;
  *(undefined8 *)(param_1 + 0xe) = local_78;
  plVar4 = (long *)(param_1 + 0xe);
  *(long *)(param_1 + 0x12) = local_68;
  if (local_68 == 0) {
    *(long **)(param_1 + 0xc) = plVar4;
  }
  else {
    *(long **)(*plVar4 + 0x10) = plVar4;
    local_68 = 0;
    local_80 = &local_78;
    local_78 = 0;
  }
  *(undefined1 *)(param_1 + 10) = 1;
  FUN_01cfa44c(&local_80,local_78);
  *(undefined8 *)(param_1 + 0x14) = *param_3;
  lVar5 = param_3[1];
  *(long *)(param_1 + 0x16) = lVar5;
  if (lVar5 != 0) {
    plVar4 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


