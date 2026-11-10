/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02958380; name: FUN_02958380
 */


undefined4 FUN_02958380(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  plVar3 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x28))((undefined8 *)(param_1 + 0x28));
  if (((*PTR_DAT_047d3f00 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar2 != 0))
  {
    uVar4 = FUN_01b07aa4();
    *(undefined8 *)PTR_DAT_047d3f08 = uVar4;
    __cxa_guard_release(PTR_DAT_047d3f00);
  }
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    if (plVar3 == (long *)PTR_DAT_047d3f08) break;
    plVar3 = (long *)*plVar3;
  }
  uVar5 = 0;
  if (*(short *)(param_1 + 0x718) == 2) {
    uVar5 = 2;
  }
  uVar1 = 2;
  if (*(short *)(param_1 + 0x718) != 3) {
    uVar1 = uVar5;
  }
  return uVar1;
}


