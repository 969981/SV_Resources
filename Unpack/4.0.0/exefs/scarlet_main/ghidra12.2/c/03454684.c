/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03454684; name: FUN_03454684
 */


void FUN_03454684(long param_1,long *param_2,long param_3,ulong param_4,int param_5)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  puVar1 = PTR_DAT_047e6f28;
  plVar8 = *(long **)(param_1 + 0x50);
  if (plVar8 != (long *)0x0) {
    if (param_2 == (long *)0x0) {
      do {
        lVar7 = plVar8[2];
        lVar9 = *(long *)(lVar7 + 8);
        plVar2 = (long *)FUN_0344ec90(*(undefined8 *)puVar1,*(undefined4 *)(lVar9 + 0x30),
                                      *(byte *)(lVar9 + 0x36) >> 6 & 1);
        if ((((*(ushort *)(lVar9 + 0x34) & 0xff00) != 0x300) || ((param_4 & 1) != 0)) &&
           ((param_3 == 0 || (*(long *)(lVar7 + 0x40) == param_3)))) {
          if ((*(ushort *)(lVar9 + 0x34) != 0x1820) &&
             (param_5 == 0 || *(int *)(lVar7 + 0x30) == param_5)) {
            *(int *)(lVar7 + 0x34) = *(int *)(lVar7 + 0x34) + 1;
          }
        }
        plVar8 = (long *)*plVar8;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x30))();
        }
      } while (plVar8 != (long *)0x0);
    }
    else {
      do {
        while( true ) {
          lVar9 = plVar8[2];
          lVar7 = *(long *)(lVar9 + 8);
          plVar2 = (long *)FUN_0344ec90(*(undefined8 *)puVar1,*(undefined4 *)(lVar7 + 0x30),
                                        *(byte *)(lVar7 + 0x36) >> 6 & 1);
          if (plVar2 == (long *)0x0) break;
          if (plVar2 == param_2) {
LAB_0345472c:
            if ((((*(ushort *)(lVar7 + 0x34) & 0xff00) != 0x300) || ((param_4 & 1) != 0)) &&
               ((param_3 == 0 || (*(long *)(lVar9 + 0x40) == param_3)))) {
              if ((*(ushort *)(lVar7 + 0x34) != 0x1820) &&
                 (param_5 == 0 || *(int *)(lVar9 + 0x30) == param_5)) {
                *(int *)(lVar9 + 0x34) = *(int *)(lVar9 + 0x34) + 1;
              }
            }
          }
          else {
            plVar3 = (long *)plVar2[0x14];
            for (plVar5 = (long *)plVar2[0x13]; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[0x13]
                ) {
              if (plVar5 == param_2) goto LAB_0345472c;
              if (plVar3 == (long *)0x0) {
                plVar3 = (long *)plVar5[0x14];
              }
            }
            for (; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[0x14]) {
              if (plVar3 == param_2) goto LAB_0345472c;
            }
          }
          plVar8 = (long *)*plVar8;
          (**(code **)(*plVar2 + 0x30))();
          if (plVar8 == (long *)0x0) goto LAB_03454838;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
LAB_03454838:
  puVar1 = PTR_DAT_047e6f28;
  plVar2 = (long *)(param_1 + 0x28);
  plVar8 = (long *)*plVar2;
  if (plVar8 != (long *)0x0) {
    if (param_2 == (long *)0x0) {
      plVar5 = (long *)0x0;
      do {
        lVar9 = plVar8[2];
        lVar7 = *(long *)(lVar9 + 8);
        plVar3 = (long *)FUN_0344ec90(*(undefined8 *)puVar1,*(undefined4 *)(lVar7 + 0x30),
                                      *(byte *)(lVar7 + 0x36) >> 6 & 1);
        if ((((*(ushort *)(lVar7 + 0x34) & 0xff00) == 0x300) && ((param_4 & 1) == 0)) ||
           ((param_3 != 0 && (*(long *)(lVar9 + 0x40) != param_3)))) {
LAB_03454a80:
          plVar6 = (long *)*plVar8;
          plVar5 = plVar8;
        }
        else {
          if ((*(ushort *)(lVar7 + 0x34) == 0x1820) ||
             (param_5 != 0 && *(int *)(lVar9 + 0x30) != param_5)) goto LAB_03454a80;
          FUN_0345541c(param_1,*(undefined4 *)(lVar7 + 0x30),lVar9,0);
          plVar6 = (long *)*plVar8;
          plVar4 = plVar2;
          if (*(long **)(param_1 + 0x28) != plVar8) {
            plVar4 = plVar5;
          }
          *plVar4 = (long)plVar6;
          if (*(long **)(param_1 + 0x30) == plVar8) {
            *(long **)(param_1 + 0x30) = plVar5;
          }
          *plVar8 = *(long *)(param_1 + 0x38);
          *(long **)(param_1 + 0x38) = plVar8;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        }
        plVar8 = plVar6;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x30))(plVar3);
        }
      } while (plVar8 != (long *)0x0);
    }
    else {
      plVar5 = (long *)0x0;
      do {
        lVar9 = plVar8[2];
        lVar7 = *(long *)(lVar9 + 8);
        plVar3 = (long *)FUN_0344ec90(*(undefined8 *)puVar1,*(undefined4 *)(lVar7 + 0x30),
                                      *(byte *)(lVar7 + 0x36) >> 6 & 1);
        if (plVar3 == (long *)0x0) {
LAB_034548e4:
          plVar6 = (long *)*plVar8;
          plVar5 = plVar8;
        }
        else {
          if (plVar3 != param_2) {
            plVar4 = (long *)plVar3[0x14];
            for (plVar6 = (long *)plVar3[0x13]; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[0x13]
                ) {
              if (plVar6 == param_2) goto LAB_034548c0;
              if (plVar4 == (long *)0x0) {
                plVar4 = (long *)plVar6[0x14];
              }
            }
            for (; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[0x14]) {
              if (plVar4 == param_2) goto LAB_034548c0;
            }
            goto LAB_034548e4;
          }
LAB_034548c0:
          if ((((*(ushort *)(lVar7 + 0x34) & 0xff00) == 0x300) && ((param_4 & 1) == 0)) ||
             ((param_3 != 0 && (*(long *)(lVar9 + 0x40) != param_3)))) goto LAB_034548e4;
          if ((*(ushort *)(lVar7 + 0x34) == 0x1820) ||
             (param_5 != 0 && *(int *)(lVar9 + 0x30) != param_5)) goto LAB_034548e4;
          FUN_0345541c(param_1,*(undefined4 *)(lVar7 + 0x30),lVar9,0);
          plVar6 = (long *)*plVar8;
          plVar4 = plVar2;
          if (*(long **)(param_1 + 0x28) != plVar8) {
            plVar4 = plVar5;
          }
          *plVar4 = (long)plVar6;
          if (*(long **)(param_1 + 0x30) == plVar8) {
            *(long **)(param_1 + 0x30) = plVar5;
          }
          *plVar8 = *(long *)(param_1 + 0x38);
          *(long **)(param_1 + 0x38) = plVar8;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        }
        plVar8 = plVar6;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x30))(plVar3);
        }
      } while (plVar8 != (long *)0x0);
    }
  }
  return;
}


