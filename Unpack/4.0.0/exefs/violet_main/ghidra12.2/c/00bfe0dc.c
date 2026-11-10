/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bfe0dc; name: FUN_00bfe0dc
 */


void FUN_00bfe0dc(long *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long local_58;
  long local_50;
  undefined8 uStack_48;
  
  plVar2 = (long *)(**(code **)(*param_1 + 0xb0))();
  plVar3 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,param_1);
  if (*plVar3 != 0) {
    FUN_00bfee44();
  }
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  (**(code **)(*plVar2 + 0x80))(plVar2,param_1,&local_58);
  lVar5 = local_50;
  if (local_50 != local_58) {
    uVar7 = 0;
    do {
      lVar5 = *(long *)(local_58 + uVar7 * 8);
      if ((*(uint *)(lVar5 + 0x3c) & 0xfffffffe) == 10) {
        if (*(int *)(lVar5 + 0x40) == 3) {
          iVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,param_1,lVar5);
          if (0 < iVar1) {
            iVar6 = 0;
            do {
              plVar3 = (long *)(**(code **)(*plVar2 + 0x200))(plVar2,param_1,lVar5,iVar6);
              (**(code **)(*plVar3 + 0x98))();
              iVar6 = iVar6 + 1;
            } while (iVar1 != iVar6);
          }
        }
        else {
          plVar3 = (long *)(**(code **)(*plVar2 + 0x138))(plVar2,param_1,lVar5,0);
          (**(code **)(*plVar3 + 0x98))();
        }
      }
      uVar7 = uVar7 + 1;
      lVar5 = local_58;
    } while (uVar7 < (ulong)(local_50 - local_58 >> 3));
  }
  if (lVar5 != 0) {
    lVar4 = tpidr_el0;
    plVar2 = *(long **)(lVar4 + 0x30);
    local_50 = lVar5;
    if (plVar2 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar2 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar7 = (**(code **)(*plVar2 + 0xf8))(plVar2);
    if (((uVar7 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,0,8);
    }
    else {
      FUN_00c48fe8(plVar2,lVar5,0,8);
    }
  }
  return;
}


