/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351e400; name: FUN_0351e400
 */


void FUN_0351e400(long param_1,long param_2,uint param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong local_70;
  uint local_68;
  
  puVar2 = PTR_DAT_047e2fd0;
  plVar5 = (long *)(param_1 + 0x40);
  plVar6 = (long *)*plVar5;
  if (plVar6 != (long *)0x0) {
    plVar7 = (long *)0x0;
    do {
      plVar10 = plVar6 + 1;
      lVar3 = plVar6[3];
      plVar8 = plVar6;
      if (*plVar10 == 0) {
        plVar9 = (long *)*plVar6;
        if ((long)(lVar3 + (ulong)*(uint *)(plVar6 + 4)) < param_2) {
          plVar8 = plVar5;
          if ((long *)*plVar5 != plVar6) {
            plVar8 = plVar7;
          }
          *plVar8 = (long)plVar9;
          plVar8 = (long *)plVar6[1];
          plVar6[1] = 0;
          if (plVar8 != (long *)0x0) {
            iVar1 = (int)plVar8[9] + -1;
            *(int *)(plVar8 + 9) = iVar1;
            if (iVar1 == 0) {
              if (plVar8[2] == 0) {
                FUN_03518540(plVar8);
              }
              else {
                FUN_0351c44c(plVar8[2],plVar8);
                plVar8[2] = 0;
              }
              (**(code **)(*plVar8 + 0x50))(plVar8);
              (**(code **)(puVar2 + 0x30))(0,plVar8);
            }
            plVar8 = (long *)*plVar10;
            if (plVar8 != (long *)0x0) {
              iVar1 = (int)plVar8[9] + -1;
              *(int *)(plVar8 + 9) = iVar1;
              if (iVar1 == 0) {
                if (plVar8[2] == 0) {
                  FUN_03518540(plVar8);
                }
                else {
                  FUN_0351c44c(plVar8[2],plVar8);
                  plVar8[2] = 0;
                }
                (**(code **)(*plVar8 + 0x50))(plVar8);
                (**(code **)(puVar2 + 0x30))(0,plVar8);
              }
              *plVar10 = 0;
            }
          }
          (**(code **)(puVar2 + 0x30))(0,plVar6);
          plVar8 = plVar7;
        }
      }
      else {
        lVar4 = lVar3 - *(int *)((long)plVar6 + 0x24);
        if (lVar4 < (long)(param_2 + (ulong)param_3)) {
          if (param_2 <= lVar4) {
            local_68 = 0;
            local_70 = local_70 & 0xffffffff00000000;
            FUN_0351ca80(plVar6[1],&local_70);
            lVar3 = plVar6[3];
          }
          lVar3 = lVar3 + (int)plVar6[5];
          if (param_2 <= lVar3 && lVar3 < (long)(param_2 + (ulong)param_3)) {
            local_70 = 0x400000000;
            local_68 = local_68 & 0xffffff00;
            FUN_0351cba8(*plVar10,&local_70,(int)lVar3 - (int)param_2);
          }
          if ((*(byte *)(*plVar10 + 0x5a) & 3) != 0 && (*(byte *)(*plVar10 + 0x5a) & 0x10) == 0) {
            local_70 = plVar6[3] + 1;
            local_68 = CONCAT31(local_68._1_3_,1);
            (**(code **)(*(long *)plVar6[1] + 0xa8))((long *)plVar6[1],param_2,param_3,&local_70);
            plVar7 = (long *)plVar6[1];
            if ((((*(byte *)((long)plVar7 + 0x5a) & 0xe) != 0) &&
                (*plVar10 = 0, plVar7 != (long *)0x0)) &&
               (iVar1 = (int)plVar7[9] + -1, *(int *)(plVar7 + 9) = iVar1, iVar1 == 0)) {
              if (plVar7[2] == 0) {
                FUN_03518540(plVar7);
              }
              else {
                FUN_0351c44c(plVar7[2],plVar7);
                plVar7[2] = 0;
              }
              (**(code **)(*plVar7 + 0x50))(plVar7);
              (**(code **)(puVar2 + 0x30))(0,plVar7);
            }
          }
        }
        plVar9 = (long *)*plVar6;
      }
      plVar6 = plVar9;
      plVar7 = plVar8;
    } while (plVar6 != (long *)0x0);
  }
  return;
}


