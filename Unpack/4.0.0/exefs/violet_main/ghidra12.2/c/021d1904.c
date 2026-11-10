/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021d1904; name: FUN_021d1904
 */


void FUN_021d1904(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long local_140;
  long local_138;
  long lStack_130;
  long local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  long *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  if ((*(char *)(param_1 + 0x170) == '\0') ||
     (uVar1 = thunk_FUN_026f7bf0(*param_2,param_1 + 0x180), (uVar1 & 1) == 0)) {
    for (plVar7 = *(long **)(param_1 + 0x270); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      FUN_021d1e5c(param_1,plVar7[2]);
    }
    if (*(long *)(param_1 + 0x298) != 0) {
      plVar7 = (long *)(param_1 + 0x240);
      FUN_00e8b220(plVar7,*(undefined8 *)(param_1 + 0x270));
      uVar1 = *(ulong *)(param_1 + 0x248);
      *(undefined8 *)(param_1 + 0x270) = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1 & 3;
        if (uVar1 - 1 < 3) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
          do {
            *(undefined8 *)(*plVar7 + uVar4 * 8) = 0;
            *(undefined8 *)(*plVar7 + uVar4 * 8 + 8) = 0;
            *(undefined8 *)(*plVar7 + uVar4 * 8 + 0x10) = 0;
            lVar6 = uVar4 * 8;
            uVar4 = uVar4 + 4;
            *(undefined8 *)(*plVar7 + lVar6 + 0x18) = 0;
          } while ((uVar1 & 0xfffffffffffffffc) != uVar4);
        }
        if (uVar2 != 0) {
          lVar6 = uVar4 << 3;
          do {
            *(undefined8 *)(*plVar7 + lVar6) = 0;
            uVar2 = uVar2 - 1;
            lVar6 = lVar6 + 8;
          } while (uVar2 != 0);
        }
      }
      *(undefined8 *)(param_1 + 0x298) = 0;
    }
    if (*(long *)(param_1 + 0x230) == 0) {
      return;
    }
    plVar7 = (long *)(param_1 + 0x1d8);
    FUN_00e8b220(plVar7,*(undefined8 *)(param_1 + 0x208));
    uVar1 = *(ulong *)(param_1 + 0x1e0);
    *(undefined8 *)(param_1 + 0x208) = 0;
    if (uVar1 != 0) {
      uVar2 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined8 *)(*plVar7 + uVar4 * 8) = 0;
          *(undefined8 *)(*plVar7 + uVar4 * 8 + 8) = 0;
          *(undefined8 *)(*plVar7 + uVar4 * 8 + 0x10) = 0;
          lVar6 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*plVar7 + lVar6 + 0x18) = 0;
        } while ((uVar1 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar2 != 0) {
        lVar6 = uVar4 << 3;
        do {
          *(undefined8 *)(*plVar7 + lVar6) = 0;
          uVar2 = uVar2 - 1;
          lVar6 = lVar6 + 8;
        } while (uVar2 != 0);
      }
    }
  }
  else {
    puVar8 = *(undefined8 **)(param_1 + 0x100);
    puVar9 = *(undefined8 **)(param_1 + 0x108);
    if (puVar8 != puVar9) {
      puVar11 = puVar8;
      do {
        uVar1 = (*(code *)puVar11[0x10])(puVar11 + 0x14,param_2);
        if ((uVar1 & 1) != 0) {
          while (uVar1 = (*(code *)*puVar8)(puVar8 + 4,param_2), (uVar1 & 1) == 0) {
            puVar8 = puVar8 + 0x30;
            if (puVar8 == puVar9) {
              return;
            }
          }
          local_110 = *(undefined8 *)(param_1 + 8);
          local_b8 = 0;
          uStack_b0 = 0;
          local_a0 = 0x1fffffffffffffff;
          uStack_98 = 0;
          local_90 = 0;
          local_68 = 0;
          local_60 = 0;
          local_100 = 0;
          local_58 = 0x3f800000;
          local_f8 = 0;
          local_d0 = 0;
          local_c8 = 0;
          local_c0 = 0x3f800000;
          local_88 = (long *)0x0;
          local_78 = 0x1fffffffffffffff;
          uStack_70 = 0;
          local_120 = 0;
          uStack_118 = 0;
          uStack_108 = 0x1fffffffffffffff;
          local_f0 = 0;
          local_e0 = 0x1fffffffffffffff;
          uStack_d8 = 0;
          plVar7 = *(long **)(param_1 + 0x1a0);
          uStack_e8 = local_110;
          local_a8 = local_110;
          uStack_80 = local_110;
          if (*(long **)(param_1 + 0x1a0) != (long *)(param_1 + 0x1a8)) {
            do {
              local_128 = plVar7[7];
              local_138 = plVar7[5];
              puVar9 = *(undefined8 **)(param_1 + 0x138);
              puVar11 = *(undefined8 **)(param_1 + 0x140);
              local_140 = plVar7[4];
              lStack_130 = plVar7[6];
              puVar8 = puVar9;
              if (puVar9 == puVar11) {
                FUN_021d20d8(&local_120,plVar7 + 8);
              }
              else {
                do {
                  uVar1 = (*(code *)puVar8[0x10])(puVar8 + 0x14,param_2,&local_140);
                  if ((uVar1 & 1) == 0) goto LAB_021d1af8;
                  puVar8 = puVar8 + 0x30;
                } while (puVar11 != puVar8);
                FUN_021d20d8(&local_120,plVar7 + 8);
                do {
                  uVar1 = (*(code *)*puVar9)(puVar9 + 4,param_2,&local_140);
                  if ((uVar1 & 1) == 0) goto LAB_021d1af8;
                  puVar9 = puVar9 + 0x30;
                } while (puVar9 != puVar11);
              }
              FUN_021d20d8(&local_b8,plVar7 + 8);
LAB_021d1af8:
              plVar3 = (long *)plVar7[1];
              if ((long *)plVar7[1] == (long *)0x0) {
                plVar3 = plVar7 + 2;
                plVar5 = (long *)*plVar3;
                if ((long *)*plVar5 != plVar7) {
                  do {
                    lVar6 = *plVar3;
                    plVar3 = (long *)(lVar6 + 0x10);
                    plVar5 = (long *)*plVar3;
                  } while (*plVar5 != lVar6);
                }
              }
              else {
                do {
                  plVar5 = plVar3;
                  plVar3 = (long *)*plVar5;
                } while ((long *)*plVar5 != (long *)0x0);
              }
              plVar7 = plVar5;
            } while (plVar5 != (long *)(param_1 + 0x1a8));
            if (local_88 != (long *)0x0) {
              plVar7 = local_88;
              do {
                lVar10 = plVar7[2];
                local_140 = lVar10;
                lVar6 = FUN_021d22dc(param_1 + 0x1d8,&local_140);
                if (lVar6 == 0) {
                  FUN_00f503a0(param_1,lVar10);
                }
                plVar7 = (long *)*plVar7;
              } while (plVar7 != (long *)0x0);
            }
          }
          for (plVar7 = *(long **)(param_1 + 0x270); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7
              ) {
            lVar10 = plVar7[2];
            local_140 = lVar10;
            lVar6 = FUN_021d22dc(&local_120,&local_140);
            if (lVar6 == 0) {
              FUN_021d1e5c(param_1,lVar10);
            }
          }
          FUN_021d23ec(param_1 + 0x1d8,&local_b8);
          FUN_021d23ec(param_1 + 0x240,&local_120);
          FUN_021d2550(&local_120);
          FUN_021d2550(&local_b8);
          return;
        }
        puVar11 = puVar11 + 0x30;
      } while (puVar9 != puVar11);
    }
    for (plVar7 = *(long **)(param_1 + 0x270); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      FUN_021d1e5c(param_1,plVar7[2]);
    }
    if (*(long *)(param_1 + 0x298) != 0) {
      plVar7 = (long *)(param_1 + 0x240);
      FUN_00e8b220(plVar7,*(undefined8 *)(param_1 + 0x270));
      uVar1 = *(ulong *)(param_1 + 0x248);
      *(undefined8 *)(param_1 + 0x270) = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1 & 3;
        if (uVar1 - 1 < 3) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
          do {
            *(undefined8 *)(*plVar7 + uVar4 * 8) = 0;
            *(undefined8 *)(*plVar7 + uVar4 * 8 + 8) = 0;
            *(undefined8 *)(*plVar7 + uVar4 * 8 + 0x10) = 0;
            lVar6 = uVar4 * 8;
            uVar4 = uVar4 + 4;
            *(undefined8 *)(*plVar7 + lVar6 + 0x18) = 0;
          } while ((uVar1 & 0xfffffffffffffffc) != uVar4);
        }
        if (uVar2 != 0) {
          lVar6 = uVar4 << 3;
          do {
            *(undefined8 *)(*plVar7 + lVar6) = 0;
            uVar2 = uVar2 - 1;
            lVar6 = lVar6 + 8;
          } while (uVar2 != 0);
        }
      }
      *(undefined8 *)(param_1 + 0x298) = 0;
    }
    if (*(long *)(param_1 + 0x230) == 0) {
      return;
    }
    plVar7 = (long *)(param_1 + 0x1d8);
    FUN_00e8b220(plVar7,*(undefined8 *)(param_1 + 0x208));
    uVar1 = *(ulong *)(param_1 + 0x1e0);
    *(undefined8 *)(param_1 + 0x208) = 0;
    if (uVar1 != 0) {
      uVar2 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined8 *)(*plVar7 + uVar4 * 8) = 0;
          *(undefined8 *)(*plVar7 + uVar4 * 8 + 8) = 0;
          *(undefined8 *)(*plVar7 + uVar4 * 8 + 0x10) = 0;
          lVar6 = uVar4 * 8;
          uVar4 = uVar4 + 4;
          *(undefined8 *)(*plVar7 + lVar6 + 0x18) = 0;
        } while ((uVar1 & 0xfffffffffffffffc) != uVar4);
      }
      if (uVar2 != 0) {
        lVar6 = uVar4 << 3;
        do {
          *(undefined8 *)(*plVar7 + lVar6) = 0;
          uVar2 = uVar2 - 1;
          lVar6 = lVar6 + 8;
        } while (uVar2 != 0);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x230) = 0;
  return;
}


