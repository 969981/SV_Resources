/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028edbe0; name: FUN_028edbe0
 */


void FUN_028edbe0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 auStack_108 [168];
  
  FUN_011fab20(param_1,param_1 + 0x18,param_1 + 0x30);
  if (param_1 + 0x48 != param_2) {
    lVar13 = 0;
    puVar12 = param_1 + 0x48;
    puVar10 = param_1 + 0x30;
    do {
      puVar8 = puVar12;
      iVar5 = *(int *)(puVar8 + 4);
      if (iVar5 < *(int *)(puVar10 + 4)) {
        uVar1 = puVar8[2];
        uVar3 = puVar8[3];
        uVar2 = *puVar8;
        uVar4 = puVar8[1];
        puVar8[3] = 0;
        memcpy(auStack_108,(void *)((long)puVar8 + 0x24),0x8d);
        lVar6 = lVar13;
        do {
          lVar11 = lVar6;
          *(undefined8 *)((long)param_1 + lVar11 + 0x240) =
               *(undefined8 *)((long)param_1 + lVar11 + 0x180);
          plVar7 = *(long **)((long)param_1 + lVar11 + 600);
          *(undefined8 *)((long)param_1 + lVar11 + 0x248) =
               *(undefined8 *)((long)param_1 + lVar11 + 0x188);
          *(undefined8 *)((long)param_1 + lVar11 + 0x250) =
               *(undefined8 *)((long)param_1 + lVar11 + 400);
          *(undefined8 *)((long)param_1 + lVar11 + 600) = 0;
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x20))();
          }
          uVar9 = *(undefined8 *)((long)param_1 + lVar11 + 0x198);
          *(undefined8 *)((long)param_1 + lVar11 + 0x198) = 0;
          *(undefined8 *)((long)param_1 + lVar11 + 600) = uVar9;
          memcpy((void *)((long)param_1 + lVar11 + 0x260),(void *)((long)param_1 + lVar11 + 0x1a0),
                 0x91);
          if (lVar11 == -0x180) {
            puVar12 = param_1;
            goto LAB_028edce8;
          }
          lVar6 = lVar11 + -0xc0;
        } while (iVar5 < *(int *)((long)param_1 + lVar11 + 0xe0));
        puVar12 = (undefined8 *)((long)param_1 + lVar11 + 0x180);
LAB_028edce8:
        *puVar12 = uVar2;
        *(undefined8 *)((long)param_1 + lVar11 + 0x188) = uVar4;
        puVar12[2] = uVar1;
        plVar7 = *(long **)((long)param_1 + lVar11 + 0x198);
        *(undefined8 *)((long)param_1 + lVar11 + 0x198) = 0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x20))();
        }
        *(undefined8 *)((long)param_1 + lVar11 + 0x198) = uVar3;
        *(int *)((long)param_1 + lVar11 + 0x1a0) = iVar5;
        memcpy((void *)((long)puVar12 + 0x24),auStack_108,0x8d);
      }
      lVar13 = lVar13 + 0xc0;
      puVar12 = puVar8 + 0x18;
      puVar10 = puVar8;
    } while (puVar8 + 0x18 != param_2);
  }
  return;
}


