/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03512ac8; name: FUN_03512ac8
 */


void FUN_03512ac8(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  float *pfVar11;
  long lVar12;
  uint *puVar13;
  float *pfVar14;
  float local_40 [2];
  undefined8 local_38;
  
  if (((DAT_048b0ab8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_048b0ab8), iVar3 != 0)) {
    DAT_048b0ab0 = 0x81;
    __cxa_guard_release(&DAT_048b0ab8);
  }
  lVar7 = *(long *)(param_1 + 0x10);
  plVar4 = *(long **)(lVar7 + 0x68);
  if (plVar4 != (long *)0x0) {
    local_38 = 0;
    plVar9 = (long *)*plVar4;
    if (plVar9 != (long *)0x0) {
      uVar6 = 0;
      uVar5 = 0;
      do {
        lVar10 = plVar9[1];
        if ((lVar10 != 0) && (*(uint *)(plVar9 + 3) != 0)) {
          lVar12 = (ulong)*(uint *)(plVar9 + 3) * 0xc;
          puVar13 = (uint *)(plVar9[2] + 8);
          do {
            if ((DAT_048b0ab0 >> ((ulong)*puVar13 & 0x3f) & 1) != 0) {
              if (((*(long **)(lVar10 + 0x60) == (long *)0x0) || (*(int *)(lVar10 + 0x88) == 0)) ||
                 (**(long **)(lVar10 + 0x60) == 0)) {
                uVar1 = (int)uVar6 + 1;
                uVar6 = (ulong)uVar1;
                local_38 = CONCAT44(local_38._4_4_,uVar1);
              }
              else {
                uVar1 = (int)uVar5 + 1;
                uVar5 = (ulong)uVar1;
                local_38 = CONCAT44(uVar1,(undefined4)local_38);
              }
            }
            lVar12 = lVar12 + -0xc;
            puVar13 = puVar13 + 3;
          } while (lVar12 != 0);
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
      goto LAB_03512b98;
    }
  }
  local_38 = 0;
  uVar6 = 0;
  uVar5 = 0;
LAB_03512b98:
  if ((int)uVar5 != 0 || (int)uVar6 != 0) {
    if (((*(byte *)(lVar7 + 700) >> 4 & 1) == 0) || (*(int *)(lVar7 + 0x318) != -1)) {
      uVar8 = uVar5 * 8 + 0xf & 0xffffffff0;
      lVar7 = (long)local_40 - uVar8;
      pfVar14 = (float *)(lVar7 - (uVar6 * 8 + 0xf & 0xffffffff0));
      lVar10 = (long)pfVar14 - uVar8;
      if (plVar4 != (long *)0x0) {
        FUN_034996f4(plVar4,&DAT_048b0ab0,lVar7,pfVar14,lVar10,(long)&local_38 + 4,&local_38);
        uVar6 = local_38 & 0xffffffff;
        uVar5 = local_38 >> 0x20;
      }
    }
    else {
      local_40[0] = 1.0;
      if ((plVar4 != (long *)0x0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
        local_40[0] = 1.0;
        do {
          uVar1 = *(uint *)(plVar4 + 3);
          if (uVar1 != 0) {
            uVar6 = (ulong)uVar1 * 0xc - 0xc;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar6;
            pfVar14 = (float *)plVar4[2];
            if ((SUB164(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 3 & 1) == 0) {
              if ((DAT_048b0ab0 >> ((ulong)(uint)pfVar14[2] & 0x3f) & 1) != 0) {
                local_40[0] = (*pfVar14 + *(float *)(plVar4[1] + 0x80) * pfVar14[1]) * local_40[0];
              }
              pfVar11 = pfVar14 + 3;
            }
            else {
              pfVar11 = pfVar14;
            }
            if (0xb < uVar6) {
              do {
                if ((DAT_048b0ab0 >> ((ulong)(uint)pfVar11[2] & 0x3f) & 1) != 0) {
                  local_40[0] = (*pfVar11 + *(float *)(plVar4[1] + 0x80) * pfVar11[1]) * local_40[0]
                  ;
                }
                if ((DAT_048b0ab0 >> ((ulong)(uint)pfVar11[5] & 0x3f) & 1) != 0) {
                  local_40[0] = (pfVar11[3] + *(float *)(plVar4[1] + 0x80) * pfVar11[4]) *
                                local_40[0];
                }
                pfVar11 = pfVar11 + 6;
              } while (pfVar14 + (ulong)uVar1 * 3 != pfVar11);
            }
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      pfVar14 = local_40;
      lVar7 = 0;
      lVar10 = 0;
      uVar5 = 0;
      uVar6 = 1;
      local_40[1] = local_40[0];
    }
    FUN_03512da8(param_2,lVar7,pfVar14,lVar10,uVar5,uVar6);
  }
  return;
}


