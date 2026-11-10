/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d28b2c; name: FUN_00d28b2c
 */


void FUN_00d28b2c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  
  if (param_3 != param_1) {
    plVar3 = param_2;
    do {
      param_2 = param_3;
      if ((plVar3 != (long *)0x0) && ((int)plVar3[3] != 1)) goto LAB_00d28d34;
      plVar4 = (long *)param_2[1];
      if (plVar4 != plVar3) {
        if ((int)plVar4[3] == 0) {
          *(undefined4 *)(plVar4 + 3) = 1;
          plVar6 = (long *)*param_2;
          *(undefined4 *)(param_2 + 3) = 0;
          plVar8 = (long *)plVar6[1];
          puVar5 = (undefined8 *)plVar4[2];
          param_2[1] = (long)puVar5;
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = param_2;
          }
          plVar4[2] = (long)param_2;
          plVar1 = plVar6 + 1;
          if (plVar8 != param_2) {
            plVar1 = plVar6 + 2;
          }
          *param_2 = (long)plVar4;
          *plVar4 = (long)plVar6;
          plVar8 = param_1;
          if (plVar6 != param_1) {
            plVar8 = plVar1;
          }
          *plVar8 = (long)plVar4;
          plVar4 = (long *)param_2[1];
        }
        lVar2 = plVar4[1];
        puVar5 = (undefined8 *)plVar4[2];
        if ((puVar5 == (undefined8 *)0x0) || (*(int *)(puVar5 + 3) == 1)) {
          if ((lVar2 == 0) || (*(int *)(lVar2 + 0x18) == 1)) goto LAB_00d28ba4;
        }
        else if ((lVar2 == 0) || (*(int *)(lVar2 + 0x18) == 1)) {
          *(undefined4 *)(puVar5 + 3) = 1;
          plVar6 = (long *)*plVar4;
          *(undefined4 *)(plVar4 + 3) = 0;
          plVar8 = (long *)plVar6[1];
          puVar7 = (undefined8 *)puVar5[1];
          plVar4[2] = (long)puVar7;
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = plVar4;
          }
          puVar5[1] = plVar4;
          *plVar4 = (long)puVar5;
          plVar1 = plVar6 + 1;
          if (plVar8 != plVar4) {
            plVar1 = plVar6 + 2;
          }
          plVar4 = param_1;
          if (plVar6 != param_1) {
            plVar4 = plVar1;
          }
          *puVar5 = plVar6;
          *plVar4 = (long)puVar5;
          plVar4 = (long *)param_2[1];
        }
        *(int *)(plVar4 + 3) = (int)param_2[3];
        *(undefined4 *)(param_2 + 3) = 1;
        if (plVar4[1] != 0) {
          *(undefined4 *)(plVar4[1] + 0x18) = 1;
        }
        plVar4 = (long *)*param_2;
        puVar5 = (undefined8 *)param_2[1];
        plVar6 = (long *)plVar4[1];
        puVar7 = (undefined8 *)puVar5[2];
        param_2[1] = (long)puVar7;
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = param_2;
        }
        puVar5[2] = param_2;
LAB_00d28d08:
        *param_2 = (long)puVar5;
        *puVar5 = plVar4;
        if (plVar4 == param_1) {
          *param_1 = (long)puVar5;
        }
        else if (plVar6 == param_2) {
          plVar4[1] = (long)puVar5;
        }
        else {
          plVar4[2] = (long)puVar5;
        }
        param_2 = plVar3;
        break;
      }
      plVar4 = (long *)param_2[2];
      if ((int)plVar4[3] == 0) {
        *(undefined4 *)(plVar4 + 3) = 1;
        plVar6 = (long *)*param_2;
        *(undefined4 *)(param_2 + 3) = 0;
        plVar8 = (long *)plVar6[1];
        puVar5 = (undefined8 *)plVar4[1];
        param_2[2] = (long)puVar5;
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = param_2;
        }
        plVar4[1] = (long)param_2;
        plVar1 = plVar6 + 1;
        if (plVar8 != param_2) {
          plVar1 = plVar6 + 2;
        }
        *param_2 = (long)plVar4;
        *plVar4 = (long)plVar6;
        plVar8 = param_1;
        if (plVar6 != param_1) {
          plVar8 = plVar1;
        }
        *plVar8 = (long)plVar4;
        plVar4 = (long *)param_2[2];
      }
      puVar5 = (undefined8 *)plVar4[1];
      lVar2 = plVar4[2];
      if ((puVar5 != (undefined8 *)0x0) && (*(int *)(puVar5 + 3) != 1)) {
        if ((lVar2 == 0) || (*(int *)(lVar2 + 0x18) == 1)) {
          *(undefined4 *)(puVar5 + 3) = 1;
          plVar6 = (long *)*plVar4;
          *(undefined4 *)(plVar4 + 3) = 0;
          plVar8 = (long *)plVar6[1];
          puVar7 = (undefined8 *)puVar5[2];
          plVar4[1] = (long)puVar7;
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = plVar4;
          }
          puVar5[2] = plVar4;
          *plVar4 = (long)puVar5;
          plVar1 = plVar6 + 1;
          if (plVar8 != plVar4) {
            plVar1 = plVar6 + 2;
          }
          plVar4 = param_1;
          if (plVar6 != param_1) {
            plVar4 = plVar1;
          }
          *puVar5 = plVar6;
          *plVar4 = (long)puVar5;
          plVar4 = (long *)param_2[2];
        }
LAB_00d28ccc:
        *(int *)(plVar4 + 3) = (int)param_2[3];
        *(undefined4 *)(param_2 + 3) = 1;
        if (plVar4[2] != 0) {
          *(undefined4 *)(plVar4[2] + 0x18) = 1;
        }
        puVar5 = (undefined8 *)param_2[2];
        plVar4 = (long *)*param_2;
        plVar6 = (long *)plVar4[1];
        puVar7 = (undefined8 *)puVar5[1];
        param_2[2] = (long)puVar7;
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = param_2;
        }
        puVar5[1] = param_2;
        goto LAB_00d28d08;
      }
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0x18) != 1)) goto LAB_00d28ccc;
LAB_00d28ba4:
      *(undefined4 *)(plVar4 + 3) = 0;
      param_3 = (long *)*param_2;
      plVar3 = param_2;
    } while ((long *)*param_2 != param_1);
  }
  plVar3 = param_2;
  if (param_2 == (long *)0x0) {
    return;
  }
LAB_00d28d34:
  *(undefined4 *)(plVar3 + 3) = 1;
  return;
}


