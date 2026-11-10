/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fa4a38; name: FUN_01fa4a38
 */


void FUN_01fa4a38(long *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    plVar2 = (long *)(*(code *)**(undefined8 **)(lVar5 + 8))((undefined8 *)(lVar5 + 8));
    if (((*PTR_DAT_047daff0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047daff0), iVar1 != 0)) {
      uVar4 = FUN_0168ea04();
      *(undefined8 *)PTR_DAT_047daff8 = uVar4;
      __cxa_guard_release(PTR_DAT_047daff0);
    }
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)PTR_DAT_047daff8) {
        uVar3 = (**(code **)(*(long *)*param_1 + 0xc0))();
        if ((uVar3 & 1) == 0) {
          FUN_01704ebc(lVar5 + -0x20);
          return;
        }
        return;
      }
    }
  }
  return;
}


