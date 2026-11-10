/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b81e5c; name: FUN_00b81e5c
 */


void FUN_00b81e5c(char *param_1,char *param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  byte local_78 [16];
  ulong local_68;
  
  if (*param_1 != '\0') {
    lVar6 = *(long *)(param_1 + 0x48);
    if (*(long *)(param_1 + 0x50) != lVar6) {
      lVar1 = tpidr_el0;
      lVar8 = 0;
      uVar5 = 0;
      do {
        FUN_00ba926c(local_78,param_1,lVar6 + lVar8);
        uVar2 = (ulong)local_78 | 1;
        if ((local_78[0] & 1) != 0) {
          uVar2 = local_68;
        }
        std::string::append(param_2,uVar2);
        uVar2 = local_68;
        if (((local_78[0] & 1) != 0) && (local_68 != 0)) {
          plVar7 = *(long **)(lVar1 + 0x30);
          if (plVar7 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar7 = DAT_04859430;
            *(long **)(lVar1 + 0x30) = DAT_04859430;
          }
          uVar4 = (**(code **)(*plVar7 + 0xf8))(plVar7);
          if (((uVar4 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
            (**(code **)(*plVar7 + 0x18))(plVar7,uVar2,0,8);
          }
          else {
            FUN_00c48fe8(plVar7,uVar2,0,8);
          }
        }
        std::string::append(param_2);
        lVar6 = *(long *)(param_1 + 0x48);
        uVar5 = uVar5 + 1;
        lVar8 = lVar8 + 0x18;
      } while (uVar5 < (ulong)((*(long *)(param_1 + 0x50) - lVar6 >> 3) * -0x5555555555555555));
    }
    if ((param_1[0x18] & 1U) == 0) {
      if ((byte)param_1[0x18] >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(param_1 + 0x20) == 0) {
      return;
    }
    FUN_00ba926c(local_78,param_1);
    uVar5 = (ulong)local_78 | 1;
    if ((local_78[0] & 1) != 0) {
      uVar5 = local_68;
    }
    std::string::append(param_2,uVar5);
    if (((local_78[0] & 1) != 0) && (local_68 != 0)) {
      lVar6 = tpidr_el0;
      plVar7 = *(long **)(lVar6 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar6 + 0x30) = DAT_04859430;
      }
      uVar5 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,local_68,0,8);
      }
      else {
        FUN_00c48fe8(plVar7,local_68,0,8);
      }
    }
  }
  return;
}


