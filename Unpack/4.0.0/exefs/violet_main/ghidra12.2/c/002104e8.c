/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002104e8; name: FUN_002104e8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002104e8(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_180 [8];
  undefined8 local_178;
  ulong local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  long *plStack_148;
  ulong local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  long *plStack_128;
  ulong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long *plStack_108;
  undefined8 local_100;
  undefined1 auStack_f8 [184];
  long local_40;
  long lStack_38;
  
  if (param_2[1] == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = (long *)std::__shared_weak_count::lock();
    if ((plVar4 != (long *)0x0) && (*param_2 != 0)) {
      FUN_0025e068(param_1);
      goto LAB_0021064c;
    }
  }
  uVar6 = *(undefined8 *)(_DAT_00000010 + 0x238);
  plStack_148 = (long *)FUN_01cf7e20();
  local_150 = 0;
  local_160 = 0;
  uStack_158 = 0;
  plStack_128 = (long *)FUN_01cf7e20();
  local_130 = 0;
  local_140 = 0;
  uStack_138 = 0;
  plStack_108 = (long *)FUN_01cf7e20();
  local_110 = 0;
  local_100 = 0;
  local_120 = 0;
  uStack_118 = 0;
  FUN_00210170(auStack_180,0x290541);
  FUN_00210394(auStack_f8,&local_160,0xe,"UserContext already disposed.",auStack_180);
  FUN_00211fc0(&local_40,uVar6,auStack_f8);
  *param_1 = local_40;
  param_1[1] = lStack_38;
  if (local_40 != 0) {
    *(undefined1 *)(local_40 + 8) = 1;
  }
  FUN_001fc7e8(auStack_f8);
  FUN_01cfa44c(auStack_180,local_178);
  if ((local_120 & 1) != 0) {
    (**(code **)(*plStack_108 + 0x18))(plStack_108,local_110,local_120 & 0xfffffffffffffffe,1);
  }
  if ((local_140 & 1) != 0) {
    (**(code **)(*plStack_128 + 0x18))(plStack_128,local_130,local_140 & 0xfffffffffffffffe,1);
  }
  if ((local_160 & 1) != 0) {
    (**(code **)(*plStack_148 + 0x18))(plStack_148,local_150,local_160 & 0xfffffffffffffffe,1);
  }
  if (plVar4 == (long *)0x0) {
    return;
  }
LAB_0021064c:
  plVar1 = plVar4 + 1;
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    std::__shared_weak_count::__release_weak();
  }
  return;
}


