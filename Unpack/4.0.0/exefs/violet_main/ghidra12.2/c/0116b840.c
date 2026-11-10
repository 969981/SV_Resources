/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0116b840; name: FUN_0116b840
 */


void FUN_0116b840(undefined8 *param_1,uint param_2)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  string local_38;
  undefined7 uStack_37;
  char cStack_30;
  undefined4 local_2f;
  undefined1 local_2b;
  void *local_28;
  
  if (((DAT_0483fac0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0483fac0), iVar3 != 0)) {
    local_38 = (string)0x18;
    local_2f = 0x6d6f646e;
    local_2b = 0;
    uStack_37 = s__dev_urandom_03c1765b._0_7_;
    cStack_30 = s__dev_urandom_03c1765b[7];
    std::random_device::random_device((random_device *)&DAT_0483f0f8,&local_38);
    if (((byte)local_38 & 1) != 0) {
      operator_delete(local_28);
    }
    FUN_00100190(PTR__random_device_047dcb28,&DAT_0483f0f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483fac0);
  }
  if (((DAT_0483fad0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0483fad0), iVar3 != 0)) {
    uVar4 = std::random_device::operator()((random_device *)&DAT_0483f0f8);
    iVar3 = (int)((ulong)uVar4 * 2 + (ulong)uVar4 >> 0x20);
    DAT_0483fac8 = uVar4 + (iVar3 + (uVar4 - iVar3 >> 1) >> 0x1e) * -0x7fffffff;
    if (DAT_0483fac8 == 0) {
      DAT_0483fac8 = 1;
    }
    __cxa_guard_release(&DAT_0483fad0);
  }
  switch(param_2) {
  case 0xd:
    uVar5 = 0xc00000000;
    break;
  case 0xe:
    uVar5 = 0x700000000;
    break;
  case 0xf:
    uVar5 = 0x700000005;
    break;
  case 0x10:
    uVar5 = 0x400000002;
    break;
  case 0x11:
    uVar5 = 0xb00000008;
    break;
  default:
    if (0xc < param_2) {
      *param_1 = 0x29510046018cf6cb;
      param_1[1] = "INDEX";
      uVar5 = 5;
      goto LAB_0116b8a4;
    }
    uVar2 = (ulong)param_2;
    goto LAB_0116b898;
  }
  local_38 = SUB81(uVar5,0);
  uStack_37 = (undefined7)((ulong)uVar5 >> 8);
  iVar3 = FUN_010d96e0(&local_38,&DAT_0483fac8,&local_38);
  uVar2 = (ulong)iVar3;
LAB_0116b898:
  puVar1 = (&PTR_s_INDEX_04580098)[uVar2 * 3];
  uVar5 = *(undefined8 *)(&DAT_045800a0 + uVar2 * 0x18);
  *param_1 = *(undefined8 *)(&DAT_04580090 + uVar2 * 0x18);
  param_1[1] = puVar1;
LAB_0116b8a4:
  param_1[2] = uVar5;
  param_1[3] = 0;
  return;
}


