/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c0ee8; name: FUN_014c0ee8
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_014c0ee8(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  plVar3 = (long *)FUN_01079790();
  if (plVar3 != (long *)0x0) {
    uVar1 = (**(code **)(*plVar3 + 0x1f0))();
    lVar4 = FUN_01079790(param_1,uVar1);
    if (lVar4 != 0) {
      plVar3 = (long *)(*(code *)**(undefined8 **)(lVar4 + 0x28))((undefined8 *)(lVar4 + 0x28));
      if (((*PTR_DAT_047d3f00 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar2 != 0)) {
        uVar5 = FUN_01b07aa4();
        *(undefined8 *)PTR_DAT_047d3f08 = uVar5;
        __cxa_guard_release(PTR_DAT_047d3f00);
      }
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)PTR_DAT_047d3f08) {
          return lVar4;
        }
      }
    }
  }
  return 0;
}


