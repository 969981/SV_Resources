/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014a41b8; name: FUN_014a41b8
 */


void FUN_014a41b8(long param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long local_60;
  long lStack_58;
  long local_50;
  long *local_48;
  
  plVar4 = *(long **)(param_1 + 0x6cd0);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x58))(plVar4);
  }
  plVar5 = *(long **)(param_1 + (param_2 & 0xffffffff) * 0x98 + 0x30);
  plVar1 = (long *)PTR_DAT_047d8b70;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 6;
  }
  local_60 = *plVar1;
  plVar1 = (long *)PTR_PTR_047d4508;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 7;
  }
  lStack_58 = *plVar1;
  if (plVar5 == (long *)0x0) {
    local_50 = 0;
  }
  else {
    local_50 = plVar5[8];
  }
  local_48 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  local_48 = plVar5;
  if (plVar4 == (long *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_00c8c7b4(plVar4[0x2e],&local_60);
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x60))(plVar4);
  }
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x18) != 0) {
      FUN_014a4334(*(long *)(lVar2 + 0x18),lVar2);
    }
    plVar4 = *(long **)(param_1 + 0x6cd0);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x58))(plVar4);
      lVar3 = FUN_00c8c7b4(plVar4[0x2e],param_3);
      (**(code **)(*plVar4 + 0x60))(plVar4);
      if (lVar3 != 0) {
        FUN_010ec1c4(lVar3,lVar2);
      }
    }
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(undefined4 *)(lVar2 + 0x38) = 0;
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 0x10;
  }
  return;
}


