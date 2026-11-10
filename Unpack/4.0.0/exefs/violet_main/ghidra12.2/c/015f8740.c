/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015f8740; name: FUN_015f8740
 */


void FUN_015f8740(long param_1,void *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  void *__dest;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  uVar1 = 0;
  if (lVar4 - lVar3 != 0) {
    uVar1 = (lVar4 - lVar3 >> 3) * 0x5d - 1;
  }
  uVar5 = *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40);
  if (uVar1 == uVar5) {
    FUN_015f92a8(param_1);
    uVar5 = *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x48);
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  if (lVar4 == lVar3) {
    __dest = (void *)0x0;
  }
  else {
    __dest = (void *)(*(long *)(lVar3 + (uVar5 / 0x5d) * 8) + (uVar5 % 0x5d) * 0x2c);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    memcpy(__dest,param_2,0x2c);
  }
  else {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar6;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    memcpy(__dest,param_2,0x2c);
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
  return;
}


