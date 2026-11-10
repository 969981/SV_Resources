/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a9b018; name: FUN_01a9b018
 */


void FUN_01a9b018(long param_1,int *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long local_28;
  
  uVar5 = *(long *)(param_2 + 2) + 0xfU & 0xfffffffffffffff0;
  *(ulong *)(param_2 + 2) = uVar5;
  *(int *)(param_1 + 0xe8) = (int)uVar5 - *param_2;
  uVar5 = *(long *)(param_2 + 2) + 0x17U & 0xfffffffffffffff8;
  *(ulong *)(param_2 + 2) = uVar5;
  *(int *)(param_1 + 0xec) = (int)uVar5 - *param_2;
  uVar5 = *(long *)(param_2 + 2) + 0x23U & 0xfffffffffffffffc;
  *(ulong *)(param_2 + 2) = uVar5;
  *(int *)(param_1 + 0xf0) = (int)uVar5 - *param_2;
  lVar2 = *(long *)(param_2 + 4);
  *(long *)(param_2 + 2) = *(long *)(param_2 + 2) + 4;
  puVar1 = *(undefined8 **)(lVar2 + 8);
  local_28 = param_1;
  if (puVar1 < *(undefined8 **)(lVar2 + 0x10)) {
    uVar6 = *(undefined8 *)(lVar2 + 0x18);
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 != 0) {
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar6;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      param_1 = local_28;
    }
    *puVar1 = &LAB_02a8be04;
    puVar1[1] = &LAB_02a8be38;
    puVar1[2] = &LAB_02a8be3c;
    puVar1[3] = &LAB_02a8be48;
    puVar1[4] = param_1;
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    *(undefined8 **)(lVar2 + 8) = puVar1 + 0x10;
  }
  else {
    FUN_01a9b1a0(lVar2,&local_28);
  }
  return;
}


