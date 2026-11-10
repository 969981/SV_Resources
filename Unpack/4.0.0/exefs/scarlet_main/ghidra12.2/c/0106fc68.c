/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0106fc68; name: FUN_0106fc68
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_0106fc68(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 0x499) >> 2 & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      uVar4 = FUN_015b5634(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),1);
      plVar3 = (long *)FUN_0124c614(uVar4,0);
      if (plVar3 == (long *)0x0) {
        iVar1 = *(int *)(param_1 + 0x18);
      }
      else {
        iVar1 = (**(code **)(*plVar3 + 0x98))();
        *(int *)(param_1 + 0x18) = iVar1;
      }
    }
    lVar2 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),iVar1);
    if (lVar2 != 0) {
      plVar3 = (long *)(*(code *)**(undefined8 **)(lVar2 + 0x28))((undefined8 *)(lVar2 + 0x28));
      if (((*PTR_DAT_047d3f00 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar1 != 0)) {
        uVar4 = FUN_01b07aa4();
        *(undefined8 *)PTR_DAT_047d3f08 = uVar4;
        __cxa_guard_release(PTR_DAT_047d3f00);
      }
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)PTR_DAT_047d3f08) {
          return lVar2;
        }
      }
    }
  }
  return 0;
}


