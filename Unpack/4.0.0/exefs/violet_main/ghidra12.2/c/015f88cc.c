/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015f88cc; name: FUN_015f88cc
 */


long FUN_015f88cc(long param_1)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *__s;
  undefined8 uVar7;
  
  lVar4 = *(long *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  uVar1 = 0;
  if (lVar6 - lVar4 != 0) {
    uVar1 = (lVar6 - lVar4 >> 3) * 0x1e - 1;
  }
  uVar5 = *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40);
  if (uVar1 == uVar5) {
    FUN_015f8cdc(param_1);
    uVar5 = *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x48);
    lVar4 = *(long *)(param_1 + 8);
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == lVar4) {
    __s = (void *)0x0;
  }
  else {
    __s = (void *)(*(long *)(lVar4 + (uVar5 / 0x1e) * 8) + (uVar5 % 0x1e) * 0x88);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 == 0) {
    memset(__s,0,0x88);
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar7;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    memset(__s,0,0x88);
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  lVar4 = *(long *)(param_1 + 0x48) + 1;
  *(long *)(param_1 + 0x48) = lVar4;
  uVar1 = *(long *)(param_1 + 0x40) + lVar4;
  plVar2 = (long *)(*(long *)(param_1 + 8) + (uVar1 / 0x1e) * 8);
  lVar6 = *plVar2;
  lVar4 = 0;
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    lVar4 = lVar6 + (uVar1 % 0x1e) * 0x88;
  }
  if (lVar4 == lVar6) {
    lVar4 = plVar2[-1] + 0xff0;
  }
  return lVar4 + -0x88;
}


