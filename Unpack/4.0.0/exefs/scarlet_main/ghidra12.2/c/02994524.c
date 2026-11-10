/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02994524; name: FUN_02994524
 */


void FUN_02994524(undefined8 *param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_01079790(*(undefined8 *)(param_2 + 0x30),param_3);
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
        uVar4 = FUN_01480644(lVar2);
        FUN_01792b48(uVar4,*(undefined2 *)*param_1);
        return;
      }
    }
  }
  return;
}


