/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079c310; name: FUN_0079c310
 */


void FUN_0079c310(long *param_1)

{
  long *plVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  code *pcVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  ushort uVar16;
  ushort uVar17;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [32];
  
  uVar7 = (**(code **)(*(long *)param_1[0x24] + 0x98))((long *)param_1[0x24],param_1[0x25]);
  if ((uVar7 & 1) == 0) {
    uVar7 = (**(code **)(*(long *)param_1[0x24] + 0x28))();
    if ((uVar7 & 1) == 0) {
      uVar7 = (**(code **)(*(long *)param_1[0x24] + 0x30))();
      if ((uVar7 & 1) == 0) {
        uVar7 = (**(code **)(*(long *)param_1[0x24] + 0x38))();
        if ((uVar7 & 1) != 0) {
          FUN_007ab98c(param_1[0x31]);
          FUN_007ab98c(param_1[0x32]);
          if (*(char *)((long)param_1 + 0x249) != '\0') {
            *(undefined1 *)((long)param_1 + 0x249) = 0;
          }
          plVar13 = param_1 + 0x17;
          uVar7 = FUN_00796784(plVar13);
          if ((uVar7 & 1) != 0) {
            uVar7 = FUN_00796784(param_1 + 0x13);
            if (((((uVar7 & 1) != 0) &&
                 (uVar7 = FUN_007967e8(param_1 + 0x13,plVar13), (uVar7 & 1) == 0)) &&
                ((int)param_1[0x38] == 0)) &&
               (uVar7 = (**(code **)(*(long *)param_1[0x24] + 0x80))(), (uVar7 & 1) != 0)) {
              FUN_0079c98c(auStack_60,param_1);
            }
          }
          FUN_007965fc(plVar13);
          FUN_007965fc(param_1 + 0x13);
          uVar17 = *(ushort *)((long)param_1 + 0x114e);
          if (uVar17 != 0) {
            lVar8 = param_1[0x11];
            uVar11 = (uint)uVar17;
            if (uVar17 < 2) {
              uVar11 = 1;
            }
            uVar15 = (ulong)uVar11;
            uVar7 = uVar15 & 3;
            if (uVar15 - 1 < 3) {
              uVar14 = 0;
            }
            else {
              uVar14 = 0;
              plVar13 = (long *)(lVar8 + 0x10);
              do {
                *(undefined1 *)(plVar13[-2] + 10) = 0;
                *(undefined1 *)(plVar13[-1] + 10) = 0;
                *(undefined1 *)(*plVar13 + 10) = 0;
                plVar1 = plVar13 + 1;
                uVar14 = uVar14 + 4;
                plVar13 = plVar13 + 4;
                *(undefined1 *)(*plVar1 + 10) = 0;
              } while ((uVar15 & 0xfffc) != uVar14);
            }
            if ((uVar11 & 3) != 0) {
              plVar13 = (long *)(lVar8 + uVar14 * 8);
              do {
                uVar7 = uVar7 - 1;
                *(undefined1 *)(*plVar13 + 10) = 0;
                plVar13 = plVar13 + 1;
              } while (uVar7 != 0);
            }
          }
        }
      }
      else {
        FUN_00796584(auStack_60);
        (**(code **)(*(long *)param_1[0x24] + 0x58))((long *)param_1[0x24],auStack_60);
        plVar13 = param_1 + 0x13;
        uVar7 = FUN_007967e8(auStack_60,plVar13);
        if (((uVar7 & 1) == 0) && (uVar7 = FUN_007967e8(plVar13,auStack_60), (uVar7 & 1) == 0)) {
          FUN_00796828(plVar13,auStack_60);
        }
        uVar7 = (**(code **)(*(long *)param_1[0x24] + 0x88))();
        if ((uVar7 & 1) != 0) {
          plVar1 = param_1 + 0x17;
          uVar7 = FUN_007967e8(plVar1,plVar13);
          if (((uVar7 & 1) == 0) && (uVar7 = FUN_007967e8(plVar1,plVar13), (uVar7 & 1) == 0)) {
            FUN_00796828(plVar1,plVar13);
          }
          sVar2 = FUN_007ec514(param_1);
          sVar3 = FUN_007ec4c0(param_1);
          if (sVar2 != sVar3) {
            uVar4 = FUN_007ec4c0(param_1);
            FUN_007ec530(param_1,uVar4);
          }
          lVar8 = FUN_007ec50c(param_1);
          lVar9 = FUN_007ec4a8(param_1);
          if (lVar8 != lVar9) {
            uVar10 = FUN_007ec4a8(param_1);
            FUN_007ec51c(param_1,uVar10);
          }
        }
        if (*(short *)((long)param_1 + 0x114e) == 0) {
          uVar11 = 0;
        }
        else {
          uVar16 = 0;
          uVar11 = 0;
          uVar17 = 0;
          do {
            uVar7 = (**(code **)(*(long *)param_1[0x25] + 0x60))((long *)param_1[0x25],uVar16);
            if (((uVar7 & 1) == 0) &&
               (uVar7 = (**(code **)(*(long *)param_1[0x24] + 0x60))((long *)param_1[0x24],uVar16),
               (uVar7 & 1) != 0)) {
              pcVar12 = *(code **)(*param_1 + 0x208);
LAB_0079c4bc:
              uVar5 = (*pcVar12)(param_1,uVar16);
              uVar11 = uVar11 | uVar5;
            }
            else {
              uVar7 = (**(code **)(*(long *)param_1[0x25] + 0x60))((long *)param_1[0x25],uVar16);
              if (((uVar7 & 1) != 0) &&
                 (uVar7 = (**(code **)(*(long *)param_1[0x24] + 0x60))((long *)param_1[0x24],uVar16)
                 , (uVar7 & 1) == 0)) {
                pcVar12 = *(code **)(*param_1 + 0x210);
                goto LAB_0079c4bc;
              }
              uVar7 = (**(code **)(*(long *)param_1[0x25] + 0x60))((long *)param_1[0x25],uVar16);
              if (((uVar7 & 1) != 0) &&
                 (uVar7 = (**(code **)(*(long *)param_1[0x24] + 0x60))((long *)param_1[0x24],uVar16)
                 , (uVar7 & 1) != 0)) {
                lVar8 = param_1[0x22e];
                (**(code **)(*(long *)param_1[0x25] + 0x48))((long *)param_1[0x25],uVar16,lVar8);
                lVar9 = param_1[0x22f];
                (**(code **)(*(long *)param_1[0x24] + 0x48))((long *)param_1[0x24],uVar16,lVar9);
                uVar7 = FUN_007967e8(lVar8,lVar9);
                if ((uVar7 & 1) == 0) {
                  uVar5 = (**(code **)(*param_1 + 0x210))(param_1,uVar16);
                  uVar6 = (**(code **)(*param_1 + 0x208))(param_1,uVar16);
                  uVar11 = uVar11 | uVar5 | uVar6;
                }
              }
            }
            uVar17 = uVar17 + 1;
            uVar16 = uVar17 & 0xff;
          } while (uVar16 < *(ushort *)((long)param_1 + 0x114e));
        }
        uVar7 = (**(code **)(*(long *)param_1[0x24] + 0x88))();
        if ((((uVar11 & 1) != 0) && ((uVar7 & 1) != 0)) &&
           (((int)param_1[0x38] != 1 || (*(char *)((long)param_1 + 0x249) != '\0')))) {
          FUN_0079c79c(param_1);
        }
        uVar7 = FUN_00796784(param_1 + 0x17);
        if (((((uVar7 & 1) != 0) && (uVar7 = FUN_00796784(plVar13), (uVar7 & 1) != 0)) &&
            (uVar7 = FUN_007967e8(plVar13,param_1 + 0x17), (uVar7 & 1) == 0)) &&
           (((int)param_1[0x38] == 0 && (uVar7 = FUN_007a82d8(param_1[0x24]), (uVar7 & 1) == 0)))) {
          FUN_0079c98c(auStack_70,param_1);
        }
      }
    }
    else {
      FUN_007965fc(param_1 + 0x13);
      FUN_007965fc(param_1 + 0x17);
    }
    (**(code **)(*(long *)param_1[0x25] + 0x18))((long *)param_1[0x25],param_1[0x24]);
    if (*(char *)((long)param_1 + 0x24d) != '\0') {
      *(undefined1 *)((long)param_1 + 0x24d) = 0;
    }
  }
  return;
}


