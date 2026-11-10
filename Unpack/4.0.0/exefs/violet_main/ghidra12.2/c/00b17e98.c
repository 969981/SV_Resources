/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b17e98; name: FUN_00b17e98
 */


void FUN_00b17e98(long *param_1,int *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if ((*param_4 != 0) && (lVar7 = *(long *)(*param_4 + 0x10), lVar7 != 0)) {
    iVar5 = *param_2;
    lVar9 = *param_1;
    cVar3 = FUN_01f6491c(lVar7 + -0x28);
    if ((cVar3 == '\f') &&
       (((*param_4 != 0 && (lVar7 = *(long *)(*param_4 + 0x10), lVar7 != 0)) &&
        (uVar6 = FUN_014bfb64(lVar7 + -0x28), (uVar6 & 1) != 0)))) {
      FUN_00d8e6c4(lVar9 + 0x48,param_4);
      FUN_01c45238(lVar9 + 0x58,param_4[2]);
      if (iVar5 == 1) {
        uVar4 = 0;
        if (*param_4 != 0) {
          lVar7 = *(long *)(*param_4 + 0x10);
          uVar4 = 0;
          if (lVar7 != 0) {
            uVar4 = FUN_01419488(lVar7 + -0x28);
            uVar4 = uVar4 & 0xffff;
          }
        }
        *(uint *)(lVar9 + 200) = uVar4;
        if (((*param_4 != 0) && (lVar7 = *(long *)(*param_4 + 0x10), lVar7 != 0)) &&
           (uVar6 = FUN_00ea2b08(lVar7 + -0x28), (uVar6 & 1) != 0)) {
          if (((*PTR_DAT_047d4c98 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0)) {
            FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4c98);
          }
          lVar7 = *(long *)PTR_DAT_047d4ca0;
          *(long *)PTR_DAT_047d4ca8 = lVar7;
          plVar1 = *(long **)(lVar7 + 0x1c8);
          plVar2 = *(long **)(lVar7 + 0x1c0);
          do {
            if (plVar2 == plVar1) {
              return;
            }
            lVar7 = *plVar2;
            uVar6 = FUN_00a371b8(lVar7 + 0x28);
            plVar2 = plVar2 + 1;
          } while ((uVar6 & 1) == 0);
          lVar8 = *param_3;
          if (*(long *)(lVar9 + 0x98) != lVar8) {
            if (*(long *)(lVar9 + 0xa0) == lVar8) {
              lVar9 = 0;
            }
            else if (*(long *)(lVar9 + 0xa8) == lVar8) {
              lVar9 = 1;
            }
            else {
              if (*(long *)(lVar9 + 0xb0) != lVar8) {
                return;
              }
              lVar9 = 2;
            }
            lVar9 = lVar7 + lVar9 * 0x210;
            *(char *)(lVar7 + 0x1c5) = *(char *)(lVar7 + 0x1c5) + *(char *)(lVar9 + 0x4d1);
            *(undefined1 *)(lVar9 + 0x4d1) = 0;
          }
        }
      }
      else if (iVar5 == 0) {
        FUN_00b0f08c(lVar9);
        FUN_00b0ddac(lVar9);
        return;
      }
    }
  }
  return;
}


