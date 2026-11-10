/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027896dc; name: FUN_027896dc
 */


void FUN_027896dc(char *param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  puVar4 = PTR_DAT_047d1170;
  puVar3 = PTR_DAT_047d0860;
  lVar6 = *(long *)PTR_DAT_047d0860;
  if (*param_1 != '\0' && lVar6 != 0) {
    if (param_1[0x1e] == '\0') {
      if (*(short *)(param_1 + 0x1a) != 0) {
        uVar7 = 0;
        lVar9 = *(long *)(param_1 + 0x10);
        if (lVar9 == 0 || lVar6 == 0) goto LAB_027898d4;
        do {
          iVar2 = *(int *)(lVar9 + uVar7 * 4);
          if ((iVar2 != 0) &&
             (plVar5 = (long *)FUN_00f21488(lVar6 + 0x10,iVar2,0xb4), plVar5 != (long *)0x0)) {
            (**(code **)(*plVar5 + 0x68))();
          }
LAB_027898d4:
          do {
            if ((lVar9 != 0) && (*(long *)puVar3 != 0)) {
              FUN_01913dc4(*(long *)puVar3 + 0x10,*(undefined4 *)(lVar9 + uVar7 * 4));
            }
            if (lVar9 != 0) {
              *(undefined4 *)(lVar9 + uVar7 * 4) = 0;
            }
            uVar7 = uVar7 + 1;
            if (*(ushort *)(param_1 + 0x1a) <= uVar7) goto LAB_0278991c;
            lVar6 = *(long *)puVar3;
            lVar9 = *(long *)(param_1 + 0x10);
          } while (lVar9 == 0 || lVar6 == 0);
        } while( true );
      }
LAB_0278991c:
      uVar7 = (ulong)*(ushort *)(param_1 + 0x18);
      if (*(ushort *)(param_1 + 0x18) != 0) {
        uVar10 = 0;
        do {
          lVar6 = *(long *)(param_1 + 8);
          if ((((*(long *)puVar3 != 0 && lVar6 != 0) && uVar10 < uVar7) &&
              (iVar2 = *(int *)(lVar6 + uVar10 * 4), iVar2 != 0)) &&
             (plVar5 = (long *)FUN_00f21488(*(long *)puVar3 + 0x10,iVar2,0xb0),
             plVar5 != (long *)0x0)) {
            (**(code **)(*plVar5 + 0x68))();
          }
          if ((lVar6 != 0) && (*(long *)puVar3 != 0)) {
            FUN_01913dc4(*(long *)puVar3 + 0x10,*(undefined4 *)(lVar6 + uVar10 * 4));
          }
          if (lVar6 != 0) {
            *(undefined4 *)(lVar6 + uVar10 * 4) = 0;
          }
          uVar7 = (ulong)*(ushort *)(param_1 + 0x18);
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar7);
      }
    }
    else {
      uVar8 = 0;
      do {
        uVar1 = (byte)*puVar4 + uVar8;
        uVar7 = (ulong)*(ushort *)(param_1 + 0x1a);
        if (*(ushort *)(param_1 + 0x1a) != 0) {
          uVar10 = 0;
          do {
            uVar11 = (ulong)((int)uVar10 + uVar8 * (int)uVar7);
            lVar6 = *(long *)(param_1 + 0x10);
            if (((*(long *)puVar3 != 0) && (lVar6 != 0)) &&
               (((uint)(byte)*puVar4 <= (uVar1 & 0xff) &&
                ((iVar2 = *(int *)(lVar6 + (uVar10 + uVar7 * ((ulong)(uVar1 - (byte)*puVar4) & 0xff)
                                           ) * 4), iVar2 != 0 &&
                 (plVar5 = (long *)FUN_00f21488(*(long *)puVar3 + 0x10,iVar2,0xb4),
                 plVar5 != (long *)0x0)))))) {
              (**(code **)(*plVar5 + 0x68))();
            }
            if ((lVar6 != 0) && (*(long *)puVar3 != 0)) {
              FUN_01913dc4(*(long *)puVar3 + 0x10,*(undefined4 *)(lVar6 + uVar11 * 4));
            }
            if (lVar6 != 0) {
              *(undefined4 *)(lVar6 + uVar11 * 4) = 0;
            }
            uVar7 = (ulong)*(ushort *)(param_1 + 0x1a);
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar7);
        }
        uVar7 = (ulong)*(ushort *)(param_1 + 0x18);
        if (*(ushort *)(param_1 + 0x18) != 0) {
          uVar10 = 0;
          do {
            uVar11 = (ulong)((int)uVar10 + uVar8 * (int)uVar7);
            lVar6 = *(long *)(param_1 + 8);
            if ((((*(long *)puVar3 != 0 && uVar10 < uVar7) && (lVar6 != 0)) &&
                ((uint)(byte)*puVar4 <= (uVar1 & 0xff))) &&
               ((iVar2 = *(int *)(lVar6 + (uVar10 + uVar7 * ((ulong)(uVar1 - (byte)*puVar4) & 0xff))
                                          * 4), iVar2 != 0 &&
                (plVar5 = (long *)FUN_00f21488(*(long *)puVar3 + 0x10,iVar2,0xb0),
                plVar5 != (long *)0x0)))) {
              (**(code **)(*plVar5 + 0x68))();
            }
            if ((lVar6 != 0) && (*(long *)puVar3 != 0)) {
              FUN_01913dc4(*(long *)puVar3 + 0x10,*(undefined4 *)(lVar6 + uVar11 * 4));
            }
            if (lVar6 != 0) {
              *(undefined4 *)(lVar6 + uVar11 * 4) = 0;
            }
            uVar7 = (ulong)*(ushort *)(param_1 + 0x18);
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar7);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < (byte)param_1[0x1e]);
    }
    thunk_FUN_007bfaa0(*(undefined8 *)(param_1 + 0x10));
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    thunk_FUN_007bfaa0(*(undefined8 *)(param_1 + 8));
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    FUN_007cb1f0();
    *param_1 = '\0';
  }
  return;
}


