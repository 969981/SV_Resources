/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03455d98; name: FUN_03455d98
 */


void FUN_03455d98(long param_1,long param_2,undefined8 param_3,ulong param_4,int param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  plVar4 = *(long **)(param_1 + 0x50);
  if (plVar4 != (long *)0x0) {
    if ((param_4 & 1) == 0) {
      if (param_2 == 0) {
        do {
          lVar3 = plVar4[2];
          lVar7 = *(long *)(lVar3 + 8);
          if ((*(char *)(lVar7 + 0x35) != '\x03') &&
             ((((param_5 == 0 || (*(int *)(lVar3 + 0x30) == param_5)) &&
               (uVar2 = FUN_034560f0(lVar7,param_3), (uVar2 & 1) == 0)) &&
              (*(short *)(lVar7 + 0x34) != 0x1820)))) {
            *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      else {
        do {
          lVar3 = plVar4[2];
          lVar7 = *(long *)(lVar3 + 8);
          if ((((*(char *)(lVar7 + 0x35) != '\x03') && (*(long *)(lVar3 + 0x40) == param_2)) &&
              ((param_5 == 0 || (*(int *)(lVar3 + 0x30) == param_5)))) &&
             ((uVar2 = FUN_034560f0(lVar7,param_3), (uVar2 & 1) == 0 &&
              (*(short *)(lVar7 + 0x34) != 0x1820)))) {
            *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
          }
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
    else if (param_2 == 0) {
      do {
        lVar3 = plVar4[2];
        lVar7 = *(long *)(lVar3 + 8);
        if ((((param_5 == 0) || (*(int *)(lVar3 + 0x30) == param_5)) &&
            (uVar2 = FUN_034560f0(lVar7,param_3), (uVar2 & 1) == 0)) &&
           (*(short *)(lVar7 + 0x34) != 0x1820)) {
          *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + 1;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
    else {
      do {
        lVar7 = plVar4[2];
        if (((*(long *)(lVar7 + 0x40) == param_2) &&
            ((lVar3 = *(long *)(lVar7 + 8), param_5 == 0 || (*(int *)(lVar7 + 0x30) == param_5))))
           && ((uVar2 = FUN_034560f0(lVar3,param_3), (uVar2 & 1) == 0 &&
               (*(short *)(lVar3 + 0x34) != 0x1820)))) {
          *(int *)(lVar7 + 0x34) = *(int *)(lVar7 + 0x34) + 1;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  puVar5 = (undefined8 *)(param_1 + 0x28);
  puVar6 = (undefined8 *)*puVar5;
  if (puVar6 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
    if ((param_4 & 1) == 0) {
      do {
        lVar7 = puVar6[2];
        lVar3 = *(long *)(lVar7 + 8);
        if (((*(char *)(lVar3 + 0x35) == '\x03') ||
            ((param_2 != 0 && (*(long *)(lVar7 + 0x40) != param_2)))) ||
           (((param_5 != 0 && (*(int *)(lVar7 + 0x30) != param_5)) ||
            ((uVar2 = FUN_034560f0(lVar3,param_3), (uVar2 & 1) != 0 ||
             (*(short *)(lVar3 + 0x34) == 0x1820)))))) {
          puVar9 = (undefined8 *)*puVar6;
          puVar8 = puVar6;
        }
        else {
          FUN_0345541c(param_1,*(undefined4 *)(lVar3 + 0x30),lVar7,0);
          puVar9 = (undefined8 *)*puVar6;
          puVar1 = puVar5;
          if (*(undefined8 **)(param_1 + 0x28) != puVar6) {
            puVar1 = puVar8;
          }
          *puVar1 = puVar9;
          if (*(undefined8 **)(param_1 + 0x30) == puVar6) {
            *(undefined8 **)(param_1 + 0x30) = puVar8;
          }
          *puVar6 = *(undefined8 *)(param_1 + 0x38);
          *(undefined8 **)(param_1 + 0x38) = puVar6;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        }
        puVar6 = puVar9;
      } while (puVar9 != (undefined8 *)0x0);
    }
    else {
      do {
        lVar7 = puVar6[2];
        lVar3 = *(long *)(lVar7 + 8);
        if ((((param_2 == 0) || (*(long *)(lVar7 + 0x40) == param_2)) &&
            ((param_5 == 0 || (*(int *)(lVar7 + 0x30) == param_5)))) &&
           ((uVar2 = FUN_034560f0(lVar3,param_3), (uVar2 & 1) == 0 &&
            (*(short *)(lVar3 + 0x34) != 0x1820)))) {
          FUN_0345541c(param_1,*(undefined4 *)(lVar3 + 0x30),lVar7,0);
          puVar9 = (undefined8 *)*puVar6;
          puVar1 = puVar5;
          if (*(undefined8 **)(param_1 + 0x28) != puVar6) {
            puVar1 = puVar8;
          }
          *puVar1 = puVar9;
          if (*(undefined8 **)(param_1 + 0x30) == puVar6) {
            *(undefined8 **)(param_1 + 0x30) = puVar8;
          }
          *puVar6 = *(undefined8 *)(param_1 + 0x38);
          *(undefined8 **)(param_1 + 0x38) = puVar6;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        }
        else {
          puVar9 = (undefined8 *)*puVar6;
          puVar8 = puVar6;
        }
        puVar6 = puVar9;
      } while (puVar9 != (undefined8 *)0x0);
    }
  }
  return;
}


