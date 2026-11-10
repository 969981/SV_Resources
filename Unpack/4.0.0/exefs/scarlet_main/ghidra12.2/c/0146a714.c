/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0146a714; name: FUN_0146a714
 */


undefined8 FUN_0146a714(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  
  lVar1 = tpidr_el0;
  plVar4 = *(long **)(lVar1 + 0x30);
  if (plVar4 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar4 = DAT_04859430;
    *(long **)(lVar1 + 0x30) = DAT_04859430;
  }
  uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,0xa8,8);
  FUN_0146a800(uVar3,param_1,*(undefined8 *)(*(long *)(param_1 + 0x38) + 8),param_2 & 1,
               *(uint *)(param_1 + 0x18) & 1,*(uint *)(param_1 + 0x18) >> 3 & 1);
  *(undefined8 *)(*(long *)(param_1 + 0x38) + 8) = uVar3;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  return uVar3;
}


