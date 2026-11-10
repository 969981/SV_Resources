/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0321b3d0; name: FUN_0321b3d0
 */


undefined4 FUN_0321b3d0(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  ulong local_48;
  
  lVar4 = tpidr_el0;
  lVar3 = *(long *)(lVar4 + 0x1000b8);
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar4 + 0x1000b8) = lVar3;
  }
  lVar4 = *(long *)(*(long *)(lVar3 + 0x3d0) + 0x10);
  if (*(long *)(lVar4 + 8) == 0) {
    uVar5 = (((long)param_3 - (long)param_2) * 0x20000000 >> 0x20) * 8;
    local_48 = uVar5;
    if (lVar4 != 0) {
      local_68 = uVar5 + 0x3f & 0xffffffffffffffc0;
      if (local_68 <= *(ulong *)(lVar4 + 0x28)) {
        lVar3 = *(long *)(lVar4 + 0x38);
        if (local_68 + lVar3 <= *(ulong *)(lVar4 + 0x40)) {
          *(ulong *)(lVar4 + 0x38) = local_68 + lVar3;
          goto LAB_0321b4c8;
        }
      }
      lVar3 = FUN_031cf3b4(lVar4,&local_68);
      goto LAB_0321b4c8;
    }
  }
  else {
    local_48 = (((long)param_3 - (long)param_2) * 0x20000000 >> 0x20) << 3;
  }
  uVar5 = local_48;
  lVar3 = (**(code **)PTR_DAT_047d1a08)(1,&local_48,0x40);
  lVar4 = 0;
LAB_0321b4c8:
  if (param_2 == param_3) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    do {
      if (*param_2 != 0) {
        *(long *)(lVar3 + (long)iVar2 * 8) = *param_2;
        iVar2 = iVar2 + 1;
      }
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  lStack_50 = lVar3 + (long)iVar2 * 8;
  local_68 = param_1 + 0x20;
  if (*(long *)(param_1 + 0x30) == 1) {
    *(code **)(param_1 + 0x30) = FUN_0321e894;
    *(ulong **)(param_1 + 0x38) = &local_68;
  }
  lStack_60 = param_1;
  local_58 = lVar3;
  local_48 = local_68;
  uVar1 = FUN_0321b640(&local_48,lVar3,lStack_50,param_1);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  if (*(code **)(local_68 + 0x10) == FUN_0321e894) {
    *(undefined8 *)(local_68 + 0x10) = 1;
    *(undefined8 *)(local_68 + 0x18) = 0;
  }
  if (lVar4 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar3,uVar5);
    return uVar1;
  }
  uVar5 = uVar5 + 0x3f & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar4 + 0x28) < uVar5) || (*(long *)(lVar4 + 0x38) != uVar5 + lVar3)) {
    if (lVar3 == 0) {
      return uVar1;
    }
    if (*(ulong *)(lVar4 + 0x28) < uVar5 + 0x40) {
      *(int *)(*(long *)(lVar4 + 0x30) + 0x20) = *(int *)(*(long *)(lVar4 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar4 + 0x10) + 0x18))
                (*(long **)(lVar4 + 0x10),lVar3 - *(int *)(lVar3 + -4),uVar5 + 0x44);
      return uVar1;
    }
    if (*(long *)(lVar4 + 0x38) != uVar5 + lVar3) {
      FUN_031cf778(lVar4,lVar3);
      return uVar1;
    }
    *(long *)(lVar4 + 0x38) = lVar3;
  }
  else {
    *(long *)(lVar4 + 0x38) = lVar3;
    if (*(long *)(lVar4 + 0x48) != lVar3) {
      return uVar1;
    }
  }
  FUN_031cf578(lVar4);
  return uVar1;
}


