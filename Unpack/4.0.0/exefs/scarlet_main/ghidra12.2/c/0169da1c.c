/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0169da1c; name: FUN_0169da1c
 */


undefined8 FUN_0169da1c(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  puVar4 = PTR_DAT_047d90c8;
  lVar7 = 0;
  while( true ) {
    lVar6 = *(long *)puVar4;
    uVar1 = 0;
    if (((uint)lVar7 & 0xff) < 0xb) {
      uVar1 = (uint)lVar7;
    }
    plVar5 = *(long **)(lVar6 + ((ulong)uVar1 & 0xff) * 0x30 + 0x28);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    lVar6 = lVar6 + ((ulong)uVar1 & 0xff) * 0x30;
    lVar2 = *(long *)(lVar6 + 0x40);
    plVar3 = *(long **)(lVar6 + 0x48);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if ((lVar2 != 0) && (*(long *)(param_1 + 0x2e8 + lVar7 * 8) == 0)) break;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3);
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
    lVar7 = lVar7 + 1;
    if (lVar7 == 0xb) {
      return 1;
    }
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  return 0;
}


