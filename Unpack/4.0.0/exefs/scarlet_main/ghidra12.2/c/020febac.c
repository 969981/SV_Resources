/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020febac; name: FUN_020febac
 */


bool FUN_020febac(long param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  puVar3 = (uint *)FUN_011e2dd4(*(undefined8 *)(*(long *)(param_1 + 8) + 0x50),uVar1);
  if (puVar3 == (uint *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar3;
    if (4 < (int)uVar9) {
      uVar9 = 0;
    }
  }
  uVar6 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x498);
  if ((((uVar6 >> 0x21 & 1) == 0) ||
      (((int)uVar9 < 5 &&
       (1 < *(ulong *)(*(long *)(*(long *)(param_1 + 8) + 0x210) + (ulong)uVar9 * 8 + 0x80))))) &&
     ((((uint)uVar6 >> 10 & 1) == 0 ||
      (((int)uVar9 < 5 &&
       (2 < *(ulong *)(*(long *)(*(long *)(param_1 + 8) + 0x210) + (ulong)uVar9 * 8 + 0x80))))))) {
    plVar8 = param_2 + 5;
    plVar4 = (long *)(**(code **)*plVar8)(plVar8);
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar2 != 0)) {
      uVar5 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar5;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)PTR_DAT_047d3f08) {
        uVar6 = (**(code **)(*param_2 + 0x5b0))(param_2);
        if ((uVar6 & 1) != 0) {
          uVar6 = (**(code **)(*param_2 + 0x5b0))(param_2);
          lVar7 = 0x6ee;
          if ((uVar6 & 1) == 0) {
            lVar7 = 0x6e8;
          }
          if (*(short *)((long)plVar8 + lVar7) == 0x3f3) {
            return false;
          }
        }
        uVar6 = (**(code **)(*param_2 + 0x5b0))(param_2);
        if ((uVar6 & 1) != 0) {
          uVar6 = (**(code **)(*param_2 + 0x5b0))(param_2);
          lVar7 = 0x6ee;
          if ((uVar6 & 1) == 0) {
            lVar7 = 0x6e8;
          }
          if (*(short *)((long)plVar8 + lVar7) == 0x3fd) {
            return false;
          }
        }
        break;
      }
    }
    uVar6 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x498);
    if (((uVar9 == 1) && (((uint)uVar6 >> 0x1b & 1) != 0)) ||
       ((uVar9 == 1 && ((uVar6 >> 0x21 & 1) != 0)))) {
      return true;
    }
    lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
    if (*(char *)(lVar7 + (long)(int)uVar9 * 4 + 9) != '\0') {
      return *(char *)(lVar7 + (long)(int)uVar9 * 4 + 8) == '\0';
    }
  }
  return false;
}


