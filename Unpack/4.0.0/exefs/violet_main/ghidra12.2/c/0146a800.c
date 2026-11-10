/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0146a800; name: FUN_0146a800
 */


void FUN_0146a800(undefined8 *param_1,locale *param_2,undefined8 param_3,byte param_4,byte param_5,
                 byte param_6)

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  locale alStack_60 [8];
  byte local_58 [16];
  long local_48;
  
  *param_1 = &PTR_LAB_045e6490;
  param_1[1] = param_3;
  std::locale::locale((locale *)(param_1 + 2),param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 8);
  param_1[4] = uVar1;
  memset(param_1 + 5,0,0x7c);
  *(byte *)((long)param_1 + 0xa4) = param_4 & 1;
  *(byte *)((long)param_1 + 0xa5) = param_5 & 1;
  *(byte *)((long)param_1 + 0xa6) = param_6 & 1;
  std::locale::locale(alStack_60,(locale *)(param_1 + 2));
  std::locale::name();
  bVar2 = FUN_0146a9b0(local_58);
  if (((local_58[0] & 1) != 0) && (local_48 != 0)) {
    lVar5 = tpidr_el0;
    plVar6 = *(long **)(lVar5 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    uVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if ((uVar4 & 1) != 0) {
      lVar5 = FUN_00c4e600();
      if (0 < *(int *)(lVar5 + 0x12c8)) {
        FUN_00c48fe8(plVar6,local_48,0,8);
        goto LAB_0146a894;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,local_48,0,8);
  }
LAB_0146a894:
  std::locale::~locale(alStack_60);
  *(byte *)((long)param_1 + 0xa7) = ~bVar2 & 1;
  return;
}


