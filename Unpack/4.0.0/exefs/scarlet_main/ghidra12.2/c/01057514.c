/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01057514; name: FUN_01057514
 */


void FUN_01057514(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  
  FUN_010575d4();
  plVar2 = (long *)(*(code *)**(undefined8 **)(param_2 + 0x28))((undefined8 *)(param_2 + 0x28));
  if (((*PTR_DAT_047d3f00 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar1 != 0))
  {
    uVar3 = FUN_01b07aa4();
    *(undefined8 *)PTR_DAT_047d3f08 = uVar3;
    __cxa_guard_release(PTR_DAT_047d3f00);
  }
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return;
    }
    if (plVar2 == (long *)PTR_DAT_047d3f08) break;
    plVar2 = (long *)*plVar2;
  }
  *(undefined2 *)(param_1 + 0x716) = *(undefined2 *)(param_2 + 0x716);
  *(undefined2 *)(param_1 + 0x718) = *(undefined2 *)(param_2 + 0x718);
  return;
}


