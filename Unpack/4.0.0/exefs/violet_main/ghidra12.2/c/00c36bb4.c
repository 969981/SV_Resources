/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c36bb4; name: FUN_00c36bb4
 */


void FUN_00c36bb4(int *param_1,long *param_2,undefined8 param_3,undefined4 param_4,byte *param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined **local_78;
  undefined8 uStack_70;
  int local_68;
  undefined2 local_64;
  ushort local_60 [8];
  long local_50;
  int local_48;
  undefined *local_40;
  byte *pbStack_38;
  
  if ((*param_5 & 1) == 0) {
    param_5[0] = 0;
    param_5[1] = 0;
  }
  else {
    **(undefined1 **)(param_5 + 0x10) = 0;
    param_5[8] = 0;
    param_5[9] = 0;
    param_5[10] = 0;
    param_5[0xb] = 0;
    param_5[0xc] = 0;
    param_5[0xd] = 0;
    param_5[0xe] = 0;
    param_5[0xf] = 0;
  }
  local_40 = PTR_DAT_047dac90 + 0x10;
  local_48 = *param_1;
  local_78 = &local_40;
  uStack_70 = 0;
  local_64 = 1;
  local_60[0] = 0;
  local_68 = 0;
  pbStack_38 = param_5;
  std::string::resize((ulong)local_60,(char)((long)local_48 << 1));
  uVar2 = (**(code **)(*param_2 + 0xb0))(param_2);
  FUN_00c36d80(param_1,param_2,uVar2,param_3,param_4,&local_78);
  if ((local_64._1_1_ == '\0') && (0 < local_68)) {
    (**(code **)(*local_78 + 0x18))();
  }
  if (((local_60[0] & 1) != 0) && (local_50 != 0)) {
    lVar4 = tpidr_el0;
    plVar5 = *(long **)(lVar4 + 0x30);
    if (plVar5 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar5 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar3 & 1) != 0) && (lVar4 = FUN_00c4e600(), 0 < *(int *)(lVar4 + 0x12c8))) {
      FUN_00c48fe8(plVar5,local_50,0,8);
      return;
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,local_50,0,8);
  }
  return;
}


