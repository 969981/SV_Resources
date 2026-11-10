/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028abcb0; name: FUN_028abcb0
 */


void FUN_028abcb0(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_1[2] - param_1[1];
  if (lVar4 != 0) {
    param_1[2] = param_1[2] + (lVar4 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
  }
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar3 = tpidr_el0;
  plVar5 = *(long **)(lVar3 + 0x30);
  if (plVar5 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar5 = DAT_04859430;
    *(long **)(lVar3 + 0x30) = DAT_04859430;
  }
  uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00c4e600();
    if (0 < *(int *)(lVar3 + 0x12c8)) {
      FUN_00c48fe8(plVar5,lVar4,0,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x028abd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,0,8);
  return;
}


