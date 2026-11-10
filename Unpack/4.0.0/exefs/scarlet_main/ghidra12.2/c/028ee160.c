/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028ee160; name: FUN_028ee160
 */


bool FUN_028ee160(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  undefined1 auStack_108 [168];
  
  switch(((long)param_2 - (long)param_1 >> 6) * -0x5555555555555555) {
  case 0:
  case 1:
    break;
  case 2:
    if (*(int *)(param_2 + -0x14) < *(int *)(param_1 + 4)) {
      FUN_011f9ce0(param_1,param_2 + -0x18);
    }
    break;
  case 3:
    FUN_0146d870(param_1,param_1 + 0x18,param_2 + -0x18);
    break;
  case 4:
    FUN_0146d7c0(param_1,param_1 + 0x18,param_1 + 0x30,param_2 + -0x18);
    break;
  case 5:
    FUN_0146d930(param_1,param_1 + 0x18,param_1 + 0x30,param_1 + 0x48,param_2 + -0x18);
    break;
  default:
    FUN_0146d870(param_1,param_1 + 0x18,param_1 + 0x30);
    if (param_1 + 0x48 != param_2) {
      lVar14 = 0;
      iVar13 = 0;
      puVar12 = param_1 + 0x48;
      puVar10 = param_1 + 0x30;
      do {
        puVar6 = puVar12;
        iVar3 = *(int *)(puVar6 + 4);
        if (iVar3 < *(int *)(puVar10 + 4)) {
          uVar1 = puVar6[1];
          uVar2 = puVar6[2];
          uVar7 = puVar6[3];
          puVar6[3] = 0;
          uVar9 = *puVar6;
          memcpy(auStack_108,(void *)((long)puVar6 + 0x24),0x8d);
          lVar4 = lVar14;
          do {
            lVar11 = lVar4;
            *(undefined8 *)((long)param_1 + lVar11 + 0x240) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x180);
            plVar5 = *(long **)((long)param_1 + lVar11 + 600);
            *(undefined8 *)((long)param_1 + lVar11 + 0x248) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x188);
            *(undefined8 *)((long)param_1 + lVar11 + 0x250) =
                 *(undefined8 *)((long)param_1 + lVar11 + 400);
            *(undefined8 *)((long)param_1 + lVar11 + 600) = 0;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x20))();
            }
            uVar8 = *(undefined8 *)((long)param_1 + lVar11 + 0x198);
            *(undefined8 *)((long)param_1 + lVar11 + 0x198) = 0;
            *(undefined8 *)((long)param_1 + lVar11 + 600) = uVar8;
            memcpy((void *)((long)param_1 + lVar11 + 0x260),(void *)((long)param_1 + lVar11 + 0x1a0)
                   ,0x91);
            if (lVar11 == -0x180) {
              puVar12 = param_1;
              goto LAB_028ee2cc;
            }
            lVar4 = lVar11 + -0xc0;
          } while (iVar3 < *(int *)((long)param_1 + lVar11 + 0xe0));
          puVar12 = (undefined8 *)((long)param_1 + lVar11 + 0x180);
LAB_028ee2cc:
          *puVar12 = uVar9;
          *(undefined8 *)((long)param_1 + lVar11 + 0x188) = uVar1;
          puVar12[2] = uVar2;
          plVar5 = *(long **)((long)param_1 + lVar11 + 0x198);
          *(undefined8 *)((long)param_1 + lVar11 + 0x198) = 0;
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x20))();
          }
          *(undefined8 *)((long)param_1 + lVar11 + 0x198) = uVar7;
          *(int *)((long)param_1 + lVar11 + 0x1a0) = iVar3;
          memcpy((void *)((long)puVar12 + 0x24),auStack_108,0x8d);
          iVar13 = iVar13 + 1;
          if (iVar13 == 8) {
            return puVar6 + 0x18 == param_2;
          }
        }
        lVar14 = lVar14 + 0xc0;
        puVar12 = puVar6 + 0x18;
        puVar10 = puVar6;
      } while (puVar6 + 0x18 != param_2);
    }
  }
  return true;
}


