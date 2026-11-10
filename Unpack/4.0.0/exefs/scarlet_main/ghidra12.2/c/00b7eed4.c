/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b7eed4; name: FUN_00b7eed4
 */


uint FUN_00b7eed4(long param_1,string *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong local_90;
  undefined8 uStack_88;
  long local_80;
  ulong local_78;
  undefined8 uStack_70;
  long local_68;
  
  std::string::string((string *)&local_78,param_2);
  uVar4 = std::string::rfind((char)&local_78,0x2e);
  if (uVar4 != 0xffffffffffffffff) {
    lVar1 = tpidr_el0;
    do {
      std::string::string((string *)&local_90,(string *)&local_78,0,uVar4,(allocator *)&local_78);
      lVar6 = local_68;
      if (((local_78 & 1) != 0) && (local_68 != 0)) {
        plVar7 = *(long **)(lVar1 + 0x30);
        if (plVar7 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar7 = DAT_04859430;
          *(long **)(lVar1 + 0x30) = DAT_04859430;
        }
        uVar4 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,0,8);
        }
        else {
          FUN_00c48fe8(plVar7,lVar6,0,8);
        }
      }
      local_78 = local_90;
      uStack_70 = uStack_88;
      local_68 = local_80;
      uVar2 = FUN_00b7b9c4(*(undefined8 *)(param_1 + 0x20),&local_78);
      if ((uVar2 | 8) != 8) {
        uVar2 = 1;
        goto LAB_00b7f080;
      }
      uVar4 = std::string::rfind((char)&local_78,0x2e);
    } while (uVar4 != 0xffffffffffffffff);
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00b7eed4(*(long *)(param_1 + 0x18),param_2);
  }
LAB_00b7f080:
  lVar1 = local_68;
  if (((local_78 & 1) != 0) && (local_68 != 0)) {
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
    uVar4 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar4 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar1,0,8);
    }
    else {
      FUN_00c48fe8(plVar7,lVar1,0,8);
    }
  }
  return uVar2 & 1;
}


