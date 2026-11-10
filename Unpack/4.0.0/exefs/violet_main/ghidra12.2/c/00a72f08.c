/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a72f08; name: FUN_00a72f08
 */


void FUN_00a72f08(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  char local_80 [4];
  int local_7c;
  int local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_01195854();
  if (param_2 == 2) {
    plVar7 = *(long **)(param_1 + 0x38);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x58))(plVar7);
    }
    local_70 = 0x6ebf13dcc590798;
    pcStack_68 = "P_lock_00";
    local_60 = 9;
    uStack_58 = 0;
    bVar4 = FUN_01b43280(*(int *)(param_1 + 0x58) + -1);
    lVar6 = FUN_00c8c7b4(plVar7[0x2e],&local_70);
    if (lVar6 != 0) {
      *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe | bVar4 & 1;
    }
    lVar6 = *plVar7;
  }
  else {
    if (param_2 != 1) {
      iVar1 = *(int *)(param_1 + 0x58);
      iVar2 = *(int *)(param_1 + 0x5c);
      bVar4 = FUN_02ad554c(iVar1,iVar2);
      if (((*PTR_DAT_047d5ff8 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_047d5ff8), iVar5 != 0)) {
        FUN_00100190(&LAB_00b1a5bc,PTR_DAT_047d6000,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d5ff8);
      }
      lVar6 = *(long *)PTR_DAT_047d6000;
      *(long *)PTR_DAT_047d6008 = lVar6;
      if (lVar6 == 0) {
        bVar3 = false;
        local_80[0] = '\0';
      }
      else {
        FUN_01a2fe88(local_80);
        if ((local_80[0] == '\0') || (local_7c != iVar1)) {
          bVar3 = false;
        }
        else {
          bVar3 = local_78 == iVar2;
        }
      }
      plVar7 = *(long **)(param_1 + 0x38);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x58))(plVar7);
      }
      local_a0 = 0x6ebf13dcc590798;
      pcStack_98 = "P_lock_00";
      local_90 = 9;
      uStack_88 = 0;
      lVar6 = FUN_00c8c7b4(plVar7[0x2e],&local_a0);
      if (lVar6 != 0) {
        *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe | bVar4 & 1 | bVar3;
      }
      (**(code **)(*plVar7 + 0x60))(plVar7);
      return;
    }
    plVar7 = *(long **)(param_1 + 0x38);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x58))(plVar7);
    }
    local_50 = 0x6ebf13dcc590798;
    pcStack_48 = "P_lock_00";
    local_40 = 9;
    uStack_38 = 0;
    lVar6 = FUN_00c8c7b4(plVar7[0x2e],&local_50);
    if (lVar6 != 0) {
      *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
    }
    lVar6 = *plVar7;
  }
                    /* WARNING: Could not recover jumptable at 0x00a73020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x60))(plVar7);
  return;
}


