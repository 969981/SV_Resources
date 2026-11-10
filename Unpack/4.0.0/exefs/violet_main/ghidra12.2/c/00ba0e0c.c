/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ba0e0c; name: FUN_00ba0e0c
 */


undefined1  [16] FUN_00ba0e0c(long param_1,string *param_2,string *param_3,int param_4)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  string *psVar7;
  string *this;
  long *plVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  string local_90;
  undefined7 uStack_8f;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  
  this = (string *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (((byte)*this & 1) == 0) {
    *(undefined2 *)this = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  if (((byte)*param_2 & 1) != 0) {
    if (*(long *)(param_2 + 8) != 0) {
      psVar7 = *(string **)(param_2 + 0x10);
      goto LAB_00ba0e84;
    }
LAB_00ba0f04:
    uVar4 = std::string::find((char)param_2,0x2e);
    local_70 = 0;
    local_68 = 0;
    local_78 = 0;
    if (uVar4 == 0xffffffffffffffff) {
      std::string::operator=((string *)&local_78,param_2);
    }
    else {
      std::string::string(&local_90,param_2,0,uVar4,(allocator *)param_2);
      uVar4 = local_68;
      if (((local_78 & 1) != 0) && (local_68 != 0)) {
        lVar6 = tpidr_el0;
        plVar8 = *(long **)(lVar6 + 0x30);
        if (plVar8 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar8 = DAT_04859430;
          *(long **)(lVar6 + 0x30) = DAT_04859430;
        }
        uVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8);
        if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
          (**(code **)(*plVar8 + 0x18))(plVar8,uVar4,0,8);
        }
        else {
          FUN_00c48fe8(plVar8,uVar4,0,8);
        }
      }
      local_78 = CONCAT71(uStack_8f,local_90);
      local_70 = local_88;
      local_68 = local_80;
    }
    std::string::string(&local_90,param_3);
    cVar2 = (char)&local_90;
    uVar4 = std::string::rfind(cVar2,0x2e);
    if (uVar4 != 0xffffffffffffffff) {
      if (param_4 == 1) {
        do {
          std::string::erase((ulong)&local_90,uVar4);
          uVar4 = (ulong)((byte)local_90 >> 1);
          if (((byte)local_90 & 1) != 0) {
            uVar4 = local_88;
          }
          std::string::append((ulong)&local_90,'\x01');
          uVar5 = (ulong)&local_78 | 1;
          if ((local_78 & 1) != 0) {
            uVar5 = local_68;
          }
          std::string::append((char *)&local_90,uVar5);
          auVar10 = FUN_00ba09a8(param_1,&local_90);
          uVar9 = auVar10._0_4_;
          if (uVar9 != 0) {
            uVar5 = local_78 >> 1 & 0x7f;
            if ((local_78 & 1) != 0) {
              uVar5 = local_70;
            }
            uVar1 = (ulong)((byte)*param_2 >> 1);
            if (((byte)*param_2 & 1) != 0) {
              uVar1 = *(ulong *)(param_2 + 8);
            }
            if (uVar5 < uVar1) {
              if ((uVar9 < 9) && ((1 << (ulong)(uVar9 & 0x1f) & 0x152U) != 0)) goto LAB_00ba1214;
            }
            else if ((uVar9 == 1) || (uVar9 == 4)) goto LAB_00ba11dc;
          }
          std::string::erase((ulong)&local_90,uVar4);
          uVar4 = std::string::rfind(cVar2,0x2e);
        } while (uVar4 != 0xffffffffffffffff);
      }
      else {
        do {
          std::string::erase((ulong)&local_90,uVar4);
          uVar4 = (ulong)((byte)local_90 >> 1);
          if (((byte)local_90 & 1) != 0) {
            uVar4 = local_88;
          }
          std::string::append((ulong)&local_90,'\x01');
          uVar5 = (ulong)&local_78 | 1;
          if ((local_78 & 1) != 0) {
            uVar5 = local_68;
          }
          std::string::append((char *)&local_90,uVar5);
          auVar10 = FUN_00ba09a8(param_1,&local_90);
          uVar9 = auVar10._0_4_;
          if (uVar9 != 0) {
            uVar5 = local_78 >> 1 & 0x7f;
            if ((local_78 & 1) != 0) {
              uVar5 = local_70;
            }
            uVar1 = (ulong)((byte)*param_2 >> 1);
            if (((byte)*param_2 & 1) != 0) {
              uVar1 = *(ulong *)(param_2 + 8);
            }
            if (uVar1 <= uVar5) goto LAB_00ba11dc;
            if ((uVar9 < 9) && ((1 << (ulong)(uVar9 & 0x1f) & 0x152U) != 0)) goto LAB_00ba1214;
          }
          std::string::erase((ulong)&local_90,uVar4);
          uVar4 = std::string::rfind(cVar2,0x2e);
        } while (uVar4 != 0xffffffffffffffff);
      }
    }
    auVar10 = FUN_00ba09a8(param_1,param_2);
    goto LAB_00ba11dc;
  }
  if ((byte)*param_2 < 2) goto LAB_00ba0f04;
  psVar7 = param_2 + 1;
LAB_00ba0e84:
  if (*psVar7 != (string)0x2e) goto LAB_00ba0f04;
  std::string::string((string *)&local_78,param_2,1,0xffffffffffffffff,(allocator *)param_2);
  auVar10 = FUN_00ba09a8(param_1,&local_78);
  uVar4 = local_68;
  if ((local_78 & 1) == 0) {
    return auVar10;
  }
  if (local_68 == 0) {
    return auVar10;
  }
  lVar6 = tpidr_el0;
  plVar8 = *(long **)(lVar6 + 0x30);
  if (plVar8 != (long *)0x0) goto LAB_00ba12c8;
  if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
    DAT_04859430 = DAT_04859418;
    __cxa_guard_release(&DAT_04859438);
  }
LAB_00ba13ec:
  plVar8 = DAT_04859430;
  *(long **)(lVar6 + 0x30) = DAT_04859430;
LAB_00ba12c8:
  uVar5 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
    (**(code **)(*plVar8 + 0x18))(plVar8,uVar4,0,8);
  }
  else {
    FUN_00c48fe8(plVar8,uVar4,0,8);
  }
  return auVar10;
LAB_00ba1214:
  std::string::append(&local_90,(ulong)param_2,uVar5);
  auVar10 = FUN_00ba09a8(param_1,&local_90);
  if (auVar10._0_4_ == 0) {
    std::string::operator=(this,&local_90);
  }
LAB_00ba11dc:
  if ((((byte)local_90 & 1) != 0) && (local_80 != 0)) {
    lVar6 = tpidr_el0;
    plVar8 = *(long **)(lVar6 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar6 + 0x30) = DAT_04859430;
    }
    uVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8);
    if (((uVar4 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar8 + 0x18))(plVar8,local_80,0,8);
    }
    else {
      FUN_00c48fe8(plVar8,local_80,0,8);
    }
  }
  uVar4 = local_68;
  if ((local_78 & 1) == 0) {
    return auVar10;
  }
  if (local_68 == 0) {
    return auVar10;
  }
  lVar6 = tpidr_el0;
  plVar8 = *(long **)(lVar6 + 0x30);
  if (plVar8 != (long *)0x0) goto LAB_00ba12c8;
  if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
    DAT_04859430 = DAT_04859418;
    __cxa_guard_release(&DAT_04859438);
  }
  goto LAB_00ba13ec;
}


