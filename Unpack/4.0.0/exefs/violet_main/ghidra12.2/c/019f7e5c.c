/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019f7e5c; name: FUN_019f7e5c
 */


void FUN_019f7e5c(long param_1)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar4 = FUN_017350a8();
  if ((uVar4 & 1) == 0) {
    if (((*PTR_DAT_047d88d0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d88d0), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047dbdd8,PTR_DAT_047d88d8,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d88d0);
    }
    lVar5 = *(long *)PTR_DAT_047d88d8;
    *(long *)PTR_DAT_047d88e0 = lVar5;
    if ((lVar5 != 0) && (uVar4 = *(ulong *)(param_1 + 0x160), uVar4 != 0)) {
      uVar6 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
      uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
      uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar6 < 2) {
        uVar9 = uVar4 - 1 & 0x9ba105a5fece6484;
      }
      else {
        uVar9 = 0x9ba105a5fece6484;
        if (uVar4 < 0x9ba105a5fece6485) {
          uVar9 = 0;
          if (uVar4 != 0) {
            uVar9 = 0x9ba105a5fece6484 / uVar4;
          }
          uVar9 = 0x9ba105a5fece6484 - uVar9 * uVar4;
        }
      }
      plVar7 = *(long **)(*(long *)(param_1 + 0x158) + uVar9 * 8);
      if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
        uVar8 = uVar4 - 1;
        if (uVar6 < 2) {
          do {
            if (plVar7[1] == 0x9ba105a5fece6484) {
              if (plVar7[2] == -0x645efa5a01319b7c) goto LAB_019f7fe0;
            }
            else if ((plVar7[1] & uVar8) != uVar9) {
              return;
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
        else {
          do {
            uVar10 = plVar7[1];
            if (uVar10 == 0x9ba105a5fece6484) {
              if (plVar7[2] == -0x645efa5a01319b7c) goto LAB_019f7fe0;
            }
            else {
              if (uVar4 <= uVar10) {
                uVar1 = 0;
                if (uVar4 != 0) {
                  uVar1 = uVar10 / uVar4;
                }
                uVar10 = uVar10 - uVar1 * uVar4;
              }
              if (uVar10 != uVar9) {
                return;
              }
            }
            plVar7 = (long *)*plVar7;
          } while (plVar7 != (long *)0x0);
        }
      }
    }
  }
  return;
LAB_019f80a4:
  bVar2 = (char)plVar7[6] != '\0';
  goto LAB_019f80b0;
LAB_019f7fe0:
  if (uVar6 < 2) {
    uVar9 = uVar8 & 0x9ba105a5fece6484;
  }
  else {
    uVar9 = 0x9ba105a5fece6484;
    if (uVar4 < 0x9ba105a5fece6485) {
      uVar9 = 0;
      if (uVar4 != 0) {
        uVar9 = 0x9ba105a5fece6484 / uVar4;
      }
      uVar9 = 0x9ba105a5fece6484 - uVar9 * uVar4;
    }
  }
  plVar7 = *(long **)(*(long *)(param_1 + 0x158) + uVar9 * 8);
  if ((plVar7 == (long *)0x0) || (plVar7 = (long *)*plVar7, plVar7 == (long *)0x0)) {
LAB_019f8060:
    bVar2 = false;
  }
  else if (uVar6 < 2) {
    do {
      if (plVar7[1] == 0x9ba105a5fece6484) {
        if (plVar7[2] == -0x645efa5a01319b7c) goto LAB_019f80a4;
      }
      else if ((plVar7[1] & uVar8) != uVar9) goto LAB_019f8060;
      plVar7 = (long *)*plVar7;
      bVar2 = false;
    } while (plVar7 != (long *)0x0);
  }
  else {
    do {
      uVar6 = plVar7[1];
      if (uVar6 == 0x9ba105a5fece6484) {
        if (plVar7[2] == -0x645efa5a01319b7c) goto LAB_019f80a4;
      }
      else {
        if (uVar4 <= uVar6) {
          uVar8 = 0;
          if (uVar4 != 0) {
            uVar8 = uVar6 / uVar4;
          }
          uVar6 = uVar6 - uVar8 * uVar4;
        }
        if (uVar6 != uVar9) goto LAB_019f8060;
      }
      plVar7 = (long *)*plVar7;
      bVar2 = false;
    } while (plVar7 != (long *)0x0);
  }
LAB_019f80b0:
  FUN_0188bef4(lVar5,bVar2);
  return;
}


