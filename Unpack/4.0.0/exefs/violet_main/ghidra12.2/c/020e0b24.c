/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020e0b24; name: FUN_020e0b24
 */


bool FUN_020e0b24(int param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  string local_48;
  undefined7 uStack_47;
  char cStack_40;
  undefined4 local_3f;
  undefined1 local_3b;
  long local_38;
  
  if (param_1 < 1) {
    return false;
  }
  if (((DAT_0483f0c0 & 1) != 0) || (iVar1 = __cxa_guard_acquire(&DAT_0483f0c0), iVar1 == 0))
  goto LAB_020e0b54;
  local_48 = (string)0x18;
  local_3f = 0x6d6f646e;
  local_3b = 0;
  uStack_47 = s__dev_urandom_03c1765b._0_7_;
  cStack_40 = s__dev_urandom_03c1765b[7];
  std::random_device::random_device((random_device *)&DAT_0483e6f8,&local_48);
  if ((((byte)local_48 & 1) != 0) && (local_38 != 0)) {
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
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar5,local_38,0,8);
        goto LAB_020e0bf8;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,local_38,0,8);
  }
LAB_020e0bf8:
  FUN_00100190(PTR__random_device_047dcb28,&DAT_0483e6f8,&PTR_LOOP_04483000);
  __cxa_guard_release(&DAT_0483f0c0);
LAB_020e0b54:
  if (((DAT_0483f0d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0483f0d0), iVar1 != 0)) {
    uVar2 = std::random_device::operator()((random_device *)&DAT_0483e6f8);
    iVar1 = (int)((ulong)uVar2 * 2 + (ulong)uVar2 >> 0x20);
    DAT_0483f0c8 = uVar2 + (iVar1 + (uVar2 - iVar1 >> 1) >> 0x1e) * -0x7fffffff;
    if (DAT_0483f0c8 == 0) {
      DAT_0483f0c8 = 1;
    }
    __cxa_guard_release(&DAT_0483f0d0);
  }
  local_48 = (string)0x1;
  uStack_47 = 0x64000000;
  iVar1 = FUN_010d96e0(&local_48,&DAT_0483f0c8,&local_48);
  return iVar1 <= param_1;
}


