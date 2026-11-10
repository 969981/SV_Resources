/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029429bc; name: FUN_029429bc
 */


long FUN_029429bc(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_01079790();
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(*(code *)**(undefined8 **)(lVar2 + 0x28))((undefined8 *)(lVar2 + 0x28));
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar1 != 0)) {
      uVar4 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar4;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    if (puVar3 != (undefined8 *)0x0) {
      do {
        if (puVar3 == (undefined8 *)PTR_DAT_047d3f08) {
          return lVar2;
        }
        puVar3 = (undefined8 *)*puVar3;
      } while (puVar3 != (undefined8 *)0x0);
      return 0;
    }
  }
  return 0;
}


