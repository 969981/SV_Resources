/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bc8138; name: FUN_00bc8138
 */


void FUN_00bc8138(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  *param_1 = &PTR_FUN_0455ab70;
  pbVar6 = (byte *)param_1[3];
  if (pbVar6 != *(byte **)PTR_DAT_047dabb0 && pbVar6 != (byte *)0x0) {
    lVar4 = tpidr_el0;
    if (((*pbVar6 & 1) != 0) && (lVar9 = *(long *)(pbVar6 + 0x10), lVar9 != 0)) {
      plVar7 = *(long **)(lVar4 + 0x30);
      if (plVar7 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar7 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,0,8);
      }
      else {
        FUN_00c48fe8(plVar7,lVar9,0,8);
      }
    }
    plVar7 = *(long **)(lVar4 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,pbVar6,0,8);
    }
    else {
      FUN_00c48fe8(plVar7,pbVar6,0,8);
    }
  }
  param_1[3] = 0;
  if ((DAT_0483a7f8 != param_1) && ((long *)param_1[7] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[7] + 8))();
  }
  puVar3 = (uint *)param_1[6];
  if ((puVar3 != (uint *)0x0) && (param_1[4] == 0)) {
    uVar2 = (ulong)*puVar3;
    if (0 < (int)*puVar3) {
      do {
        puVar3 = puVar3 + 2;
        if (*(long **)puVar3 != (long *)0x0) {
          (**(code **)(**(long **)puVar3 + 8))();
        }
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      puVar3 = (uint *)param_1[6];
      if (puVar3 == (uint *)0x0) goto LAB_00bc8240;
    }
    operator_delete__(puVar3);
  }
LAB_00bc8240:
  param_1[6] = 0;
  if ((((param_1[1] & 1) != 0) &&
      (plVar7 = (long *)(param_1[1] & 0xfffffffffffffffe), plVar7 != (long *)0x0)) &&
     (plVar7[1] == 0)) {
    if (*plVar7 != 0) {
      FUN_00bfee44(plVar7);
    }
    lVar4 = tpidr_el0;
    plVar8 = *(long **)(lVar4 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0,8);
    }
    else {
      FUN_00c48fe8(plVar8,plVar7,0,8);
    }
  }
  param_1[1] = 0;
  return;
}


