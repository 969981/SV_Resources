/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e3f274; name: FUN_01e3f274
 */


void FUN_01e3f274(long *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long local_58;
  uint local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  long local_30;
  long local_28;
  
  if ((ulong)(param_1[2] * 0x40) < param_2) {
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    FUN_01e3f4c0(&local_38);
    local_48 = *param_1;
    local_58 = local_48 + ((ulong)param_1[1] >> 3 & 0x1ffffffffffffff8);
    local_50 = (uint)param_1[1] & 0x3f;
    local_40 = 0;
    FUN_01e3f59c(&local_38,&local_48,&local_58);
    lVar4 = *param_1;
    lVar6 = param_1[1];
    lVar5 = param_1[2];
    *param_1 = local_38;
    param_1[1] = local_30;
    param_1[2] = local_28;
    if (lVar4 != 0) {
      lVar1 = tpidr_el0;
      plVar7 = *(long **)(lVar1 + 0x30);
      local_38 = lVar4;
      local_30 = lVar6;
      local_28 = lVar5;
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar1 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar3 & 1) != 0) && (lVar5 = FUN_00c4e600(), 0 < *(int *)(lVar5 + 0x12c8))) {
        FUN_00c48fe8(plVar7,lVar4,0,8);
        return;
      }
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar4,0,8);
    }
  }
  return;
}


