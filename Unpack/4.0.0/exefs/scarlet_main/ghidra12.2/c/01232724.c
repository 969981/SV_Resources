/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01232724; name: FUN_01232724
 */


undefined8 FUN_01232724(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  uint local_58;
  int iStack_54;
  char cStack_50;
  undefined4 local_4f;
  undefined1 local_4b;
  long local_48;
  
  if (*(long *)(param_1 + 0x78) == 0) {
    return 0;
  }
  if (((DAT_0483e678 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0483e678), iVar2 != 0)) {
    local_4f = 0x6d6f646e;
    local_4b = 0;
    local_58 = CONCAT31(s__dev_urandom_03c1765b._0_3_,0x18);
    iStack_54 = s__dev_urandom_03c1765b._3_4_;
    cStack_50 = s__dev_urandom_03c1765b[7];
    std::random_device::random_device((random_device *)&DAT_0483dcb0,(string *)&local_58);
    if (((local_58 & 1) != 0) && (local_48 != 0)) {
      lVar5 = tpidr_el0;
      plVar6 = *(long **)(lVar5 + 0x30);
      if (plVar6 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar6 = DAT_04859430;
        *(long **)(lVar5 + 0x30) = DAT_04859430;
      }
      uVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,local_48,0,8);
      }
      else {
        FUN_00c48fe8(plVar6,local_48,0,8);
      }
    }
    FUN_00100190(PTR__random_device_047dcb28,&DAT_0483dcb0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_0483e678);
  }
  if (((DAT_0483e688 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0483e688), iVar2 != 0)) {
    uVar3 = std::random_device::operator()((random_device *)&DAT_0483dcb0);
    iVar2 = (int)((ulong)uVar3 * 2 + (ulong)uVar3 >> 0x20);
    DAT_0483e680 = uVar3 + (iVar2 + (uVar3 - iVar2 >> 1) >> 0x1e) * -0x7fffffff;
    if (DAT_0483e680 == 0) {
      DAT_0483e680 = 1;
    }
    __cxa_guard_release(&DAT_0483e688);
  }
  iStack_54 = *(int *)(param_1 + 0x78) + -1;
  local_58 = 0;
  iVar2 = FUN_010d96e0(&local_58,&DAT_0483e680,&local_58);
  uVar4 = *(long *)(param_1 + 0x70) + (long)iVar2;
  puVar1 = (undefined8 *)
           (*(long *)(*(long *)(param_1 + 0x38) + (uVar4 >> 4 & 0xffffffffffffff8)) +
           (uVar4 & 0x7f) * 0x20);
  param_2[1] = puVar1[1];
  *param_2 = *puVar1;
  *(undefined2 *)(param_2 + 2) = *(undefined2 *)(puVar1 + 2);
  *(undefined2 *)((long)param_2 + 0x12) = *(undefined2 *)((long)puVar1 + 0x12);
  *(undefined4 *)((long)param_2 + 0x14) = *(undefined4 *)((long)puVar1 + 0x14);
  return 1;
}


