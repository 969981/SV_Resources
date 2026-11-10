/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bd8fa4; name: FUN_00bd8fa4
 */


void FUN_00bd8fa4(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_0455b530;
  pbVar5 = (byte *)param_1[3];
  if (pbVar5 != *(byte **)PTR_DAT_047dabb0 && pbVar5 != (byte *)0x0) {
    lVar3 = tpidr_el0;
    if (((*pbVar5 & 1) != 0) && (lVar8 = *(long *)(pbVar5 + 0x10), lVar8 != 0)) {
      plVar6 = *(long **)(lVar3 + 0x30);
      if (plVar6 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar6 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,0,8);
      }
      else {
        FUN_00c48fe8(plVar6,lVar8,0,8);
      }
    }
    plVar6 = *(long **)(lVar3 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,pbVar5,0,8);
    }
    else {
      FUN_00c48fe8(plVar6,pbVar5,0,8);
    }
  }
  param_1[3] = 0;
  if ((((param_1[1] & 1) != 0) &&
      (plVar6 = (long *)(param_1[1] & 0xfffffffffffffffe), plVar6 != (long *)0x0)) &&
     (plVar6[1] == 0)) {
    if (*plVar6 != 0) {
      FUN_00bfee44(plVar6);
    }
    lVar3 = tpidr_el0;
    plVar7 = *(long **)(lVar3 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar3 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,plVar6,0,8);
    }
    else {
      FUN_00c48fe8(plVar7,plVar6,0,8);
    }
  }
  param_1[1] = 0;
  return;
}


