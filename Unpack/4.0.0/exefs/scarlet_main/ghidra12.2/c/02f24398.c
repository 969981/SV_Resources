/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f24398; name: FUN_02f24398
 */


void FUN_02f24398(long param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  
  FUN_02f245d0(param_1 + 0x768);
  if (*(long *)(param_1 + 0x630) != 0) {
    uVar1 = *(uint *)(param_1 + 0x648);
    if (*(char *)(param_1 + 0x63c) != '\0') {
      plVar2 = *(long **)(param_1 + 0x640);
      if ((int)uVar1 < 1) {
        plVar4 = plVar2;
      }
      else {
        plVar4 = plVar2;
        if (uVar1 != 1) {
          iVar5 = -(uVar1 & 0xfffffffe);
          do {
            plVar3 = plVar2;
            if (*plVar4 != 0) {
              plVar3 = plVar2 + 1;
              *plVar2 = *plVar4;
            }
            plVar2 = plVar3;
            if (plVar4[1] != 0) {
              plVar2 = plVar3 + 1;
              *plVar3 = plVar4[1];
            }
            plVar4 = plVar4 + 2;
            iVar5 = iVar5 + 2;
          } while (iVar5 != 0);
        }
        plVar3 = plVar2;
        if (((uVar1 & 1) != 0) && (*plVar4 != 0)) {
          plVar3 = plVar2 + 1;
          *plVar2 = *plVar4;
        }
        plVar2 = plVar3;
        plVar4 = *(long **)(param_1 + 0x640);
      }
      uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar4) >> 3);
      *(undefined1 *)(param_1 + 0x63c) = 0;
    }
    if (uVar1 != 0) {
      (**(code **)(**(long **)(param_1 + 0x630) + 0x28))
                (*(long **)(param_1 + 0x630),*(undefined8 *)(param_1 + 0x640));
    }
    *(undefined4 *)(param_1 + 0x648) = 0;
    *(undefined4 *)(param_1 + 0x638) = 0;
  }
  *(undefined4 *)(param_1 + 0x648) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x64c)) && (*(long *)(param_1 + 0x640) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x640),(ulong)*(uint *)(param_1 + 0x64c) << 3);
  }
  *(undefined4 *)(param_1 + 0x64c) = 0x80000000;
  *(undefined8 *)(param_1 + 0x640) = 0;
  if (*(long *)(param_1 + 0x530) != 0) {
    uVar1 = *(uint *)(param_1 + 0x548);
    if (*(char *)(param_1 + 0x53c) != '\0') {
      plVar2 = *(long **)(param_1 + 0x540);
      if ((int)uVar1 < 1) {
        plVar4 = plVar2;
      }
      else {
        plVar4 = plVar2;
        if (uVar1 != 1) {
          iVar5 = -(uVar1 & 0xfffffffe);
          do {
            plVar3 = plVar2;
            if (*plVar4 != 0) {
              plVar3 = plVar2 + 1;
              *plVar2 = *plVar4;
            }
            plVar2 = plVar3;
            if (plVar4[1] != 0) {
              plVar2 = plVar3 + 1;
              *plVar3 = plVar4[1];
            }
            plVar4 = plVar4 + 2;
            iVar5 = iVar5 + 2;
          } while (iVar5 != 0);
        }
        plVar3 = plVar2;
        if (((uVar1 & 1) != 0) && (*plVar4 != 0)) {
          plVar3 = plVar2 + 1;
          *plVar2 = *plVar4;
        }
        plVar2 = plVar3;
        plVar4 = *(long **)(param_1 + 0x540);
      }
      uVar1 = (uint)((ulong)((long)plVar2 - (long)plVar4) >> 3);
      *(undefined1 *)(param_1 + 0x53c) = 0;
    }
    if (uVar1 != 0) {
      (**(code **)(**(long **)(param_1 + 0x530) + 0x28))
                (*(long **)(param_1 + 0x530),*(undefined8 *)(param_1 + 0x540));
    }
    *(undefined4 *)(param_1 + 0x548) = 0;
    *(undefined4 *)(param_1 + 0x538) = 0;
  }
  *(undefined4 *)(param_1 + 0x548) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x54c)) && (*(long *)(param_1 + 0x540) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x540),(ulong)*(uint *)(param_1 + 0x54c) << 3);
  }
  *(undefined8 *)(param_1 + 0x540) = 0;
  *(undefined4 *)(param_1 + 0x54c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x518) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x51c)) && (*(long *)(param_1 + 0x510) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x510),(ulong)*(uint *)(param_1 + 0x51c) << 2);
  }
  *(undefined8 *)(param_1 + 0x510) = 0;
  *(undefined4 *)(param_1 + 0x51c) = 0x80000000;
  if (*(long *)(param_1 + 0x4b0) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02f245c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(long *)(param_1 + 0x4b0),0);
  return;
}


