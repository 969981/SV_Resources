/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bfde44; name: FUN_00bfde44
 */


undefined8 FUN_00bfde44(long *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long local_58;
  long local_50;
  undefined8 uStack_48;
  
  lVar2 = (**(code **)(*param_1 + 0xb8))();
  plVar3 = (long *)(**(code **)(*param_1 + 0xb0))(param_1);
  iVar1 = *(int *)(lVar2 + 0x2c);
  if (0 < iVar1) {
    lVar8 = 0;
    lVar10 = 0;
    do {
      if (*(int *)(*(long *)(lVar2 + 0x30) + lVar8 + 0x40) == 2) {
        uVar4 = (**(code **)(*plVar3 + 0x28))(plVar3,param_1);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        iVar1 = *(int *)(lVar2 + 0x2c);
      }
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + 0x90;
    } while (lVar10 < iVar1);
  }
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  (**(code **)(*plVar3 + 0x80))(plVar3,param_1,&local_58);
  if (local_50 != local_58) {
    uVar4 = 0;
    do {
      lVar2 = *(long *)(local_58 + uVar4 * 8);
      if ((*(uint *)(lVar2 + 0x3c) & 0xfffffffe) == 10) {
        if (*(int *)(lVar2 + 0x40) == 3) {
          iVar1 = (**(code **)(*plVar3 + 0x30))(plVar3,param_1,lVar2);
          if (0 < iVar1) {
            iVar9 = 0;
            do {
              plVar5 = (long *)(**(code **)(*plVar3 + 0x1a0))(plVar3,param_1,lVar2,iVar9);
              uVar6 = (**(code **)(*plVar5 + 0x40))();
              if ((uVar6 & 1) == 0) goto LAB_00bfdfd8;
              iVar9 = iVar9 + 1;
            } while (iVar1 != iVar9);
          }
        }
        else {
          plVar5 = (long *)(**(code **)(*plVar3 + 0xd8))(plVar3,param_1,lVar2,0);
          uVar6 = (**(code **)(*plVar5 + 0x40))();
          if ((uVar6 & 1) == 0) {
LAB_00bfdfd8:
            uVar7 = 0;
            goto LAB_00bfdfdc;
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)(local_50 - local_58 >> 3));
  }
  uVar7 = 1;
LAB_00bfdfdc:
  lVar2 = local_58;
  if (local_58 != 0) {
    local_50 = local_58;
    lVar10 = tpidr_el0;
    plVar3 = *(long **)(lVar10 + 0x30);
    if (plVar3 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar3 = DAT_04859430;
      *(long **)(lVar10 + 0x30) = DAT_04859430;
    }
    uVar4 = (**(code **)(*plVar3 + 0xf8))(plVar3);
    if (((uVar4 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar3 + 0x18))(plVar3,lVar2,0,8);
    }
    else {
      FUN_00c48fe8(plVar3,lVar2,0,8);
    }
  }
  return uVar7;
}


