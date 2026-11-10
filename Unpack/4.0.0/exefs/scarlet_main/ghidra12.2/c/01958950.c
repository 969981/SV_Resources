/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01958950; name: FUN_01958950
 */


long FUN_01958950(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  uVar2 = FUN_01958a08();
  lVar3 = FUN_01021c94(uVar2,param_2);
  if (lVar3 != 0) {
    plVar4 = (long *)(*(code *)**(undefined8 **)(lVar3 + 0x28))((undefined8 *)(lVar3 + 0x28));
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar1 != 0)) {
      uVar2 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar2;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)PTR_DAT_047d3f08) {
        return lVar3;
      }
    }
  }
  return 0;
}


