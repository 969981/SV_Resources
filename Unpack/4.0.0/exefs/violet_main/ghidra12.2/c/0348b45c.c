/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0348b45c; name: FUN_0348b45c
 */


undefined8 FUN_0348b45c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined8 uStack_50;
  long *local_48;
  
  local_48 = param_3 + 7;
  param_1 = (undefined8 *)*param_1;
  local_58 = &PTR_LAB_047c3288;
  uStack_50 = param_2;
  if (*(uint *)(param_3 + 0xd) != 0) {
    puVar6 = (undefined8 *)param_3[0xc];
    lVar7 = (ulong)*(uint *)(param_3 + 0xd) << 3;
    do {
      plVar5 = (long *)*puVar6;
      iVar3 = (int)plVar5[9];
      if (iVar3 == 1) {
LAB_0348b4fc:
        if (*(char *)(param_1 + 0x12) == '\0') {
          lVar4 = param_1[0xc];
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined4 *)(param_1 + 0x10);
          lVar4 = param_1[0xc];
        }
        uVar9 = uVar8;
        if (lVar4 != 0) {
          uVar9 = *(undefined4 *)(lVar4 + 0xc);
        }
        local_88 = param_1[8];
        local_80 = *(undefined4 *)(param_1 + 0xb);
        local_78 = *(undefined4 *)((long)param_1 + 0x54);
        local_70 = *(undefined1 *)((long)param_1 + 0x51);
        local_68 = *(undefined1 *)(param_1 + 10);
        local_60 = param_1[3];
        FUN_034b77f8(uVar8,uVar9,plVar5,(int)param_3[2],&local_88,&local_58,0);
      }
      else if ((int)plVar5[1] == 7 || (int)plVar5[1] == 0) {
        uVar1 = (**(code **)(*param_3 + 0x38))(param_3);
        if ((uVar1 & 1) == 0) {
          iVar3 = (int)plVar5[9];
          goto LAB_0348b4e0;
        }
      }
      else {
LAB_0348b4e0:
        if ((iVar3 != 2) ||
           ((*(long *)(*plVar5 + 8) != 0 && (*(int *)(*(long *)(*plVar5 + 8) + 0x18) != 0))))
        goto LAB_0348b4fc;
      }
      puVar6 = puVar6 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  if (((param_1[2] == 0) || (*(int *)(param_1 + 0xf) == 3)) ||
     ((*(int *)((long)param_1 + 0x7c) < 2 && (*(int *)((long)param_1 + 0x84) == 0)))) {
    iVar3 = *(int *)((long)param_1 + 0x74) + -1;
    *(int *)((long)param_1 + 0x74) = iVar3;
    if (iVar3 == 0) {
      (**(code **)*param_1)(param_1);
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,param_1);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


