/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fb70bc; name: FUN_00fb70bc
 */


void FUN_00fb70bc(long *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = param_1[1];
  lVar4 = lVar7 - *param_1 >> 3;
  uVar5 = lVar4 * -0x1111111111111111;
  if (uVar5 < param_2) {
    FUN_00fcb0c4(param_1,param_2 + lVar4 * 0x1111111111111111);
    return;
  }
  if (param_2 < uVar5) {
    lVar4 = *param_1 + param_2 * 0x78;
    if (lVar4 != lVar7) {
      lVar1 = tpidr_el0;
      do {
        if (*(char *)(lVar7 + -0x20) != '\0') {
          std::locale::~locale((locale *)(lVar7 + -0x18));
          *(undefined1 *)(lVar7 + -0x20) = 0;
        }
        if (((*(byte *)(lVar7 + -0x58) & 1) != 0) && (lVar8 = *(long *)(lVar7 + -0x48), lVar8 != 0))
        {
          plVar6 = *(long **)(lVar1 + 0x30);
          if (plVar6 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar6 = DAT_04859430;
            *(long **)(lVar1 + 0x30) = DAT_04859430;
          }
          uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
          if ((uVar5 & 1) != 0) {
            lVar3 = FUN_00c4e600();
            if (0 < *(int *)(lVar3 + 0x12c8)) {
              FUN_00c48fe8(plVar6,lVar8,0,8);
              goto LAB_00fb7174;
            }
          }
          (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,0,8);
        }
LAB_00fb7174:
        lVar8 = lVar7 + -0x78;
        if (((*(byte *)(lVar7 + -0x70) & 1) != 0) && (lVar7 = *(long *)(lVar7 + -0x60), lVar7 != 0))
        {
          plVar6 = *(long **)(lVar1 + 0x30);
          if (plVar6 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar6 = DAT_04859430;
            *(long **)(lVar1 + 0x30) = DAT_04859430;
          }
          uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
          if ((uVar5 & 1) != 0) {
            lVar3 = FUN_00c4e600();
            if (0 < *(int *)(lVar3 + 0x12c8)) {
              FUN_00c48fe8(plVar6,lVar7,0,8);
              goto LAB_00fb7184;
            }
          }
          (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,0,8);
        }
LAB_00fb7184:
        lVar7 = lVar8;
      } while (lVar4 != lVar8);
    }
    param_1[1] = lVar4;
  }
  return;
}


