/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03531ec4; name: FUN_03531ec4
 */


void FUN_03531ec4(long *param_1,long param_2,int param_3,long *param_4)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  param_2 = param_2 - param_1[0xd];
  *param_4 = *param_4 - param_1[0xd];
  *(int *)(param_1 + 9) = (int)param_1[9] + 1;
  if ((*(byte *)((long)param_1 + 0x5a) >> 1 & 1) != 0) {
    if (*(int *)((long)param_1 + 0x54) != -1) {
      param_3 = *(int *)((long)param_1 + 0x54);
    }
  }
  uVar2 = *(uint *)(param_1 + 0x11);
  lVar1 = param_2 + (ulong)uVar2;
  lVar8 = *param_4;
  (**(code **)(*param_1 + 0x118))(param_1,lVar1);
  plVar5 = (long *)param_1[0x10];
  if (plVar5 != (long *)0x0) {
    bVar7 = true;
    plVar10 = (long *)0x0;
    do {
      while( true ) {
        plVar6 = plVar5;
        bVar3 = *(byte *)((long)plVar6 + 0x44);
        FUN_0351d240(*(undefined4 *)(param_1[0xc] + 0x4c),plVar6,lVar1,param_3,
                     (long)(lVar8 + (ulong)uVar2) <= plVar6[1] && (char)param_4[1] != '\0');
        if (((bVar3 & 1) != 0) && ((*(byte *)((long)plVar6 + 0x44) & 1) == 0)) {
          (**(code **)(*param_1 + 0x130))(param_1,plVar6);
        }
        plVar5 = (long *)*plVar6;
        if ((((bVar7) && (plVar6[3] == 0)) && ((*(byte *)((long)plVar6 + 0x44) >> 1 & 1) == 0)) &&
           (((plVar5 != (long *)0x0 && (plVar6[2] == 0)) && (plVar5[1] < lVar1)))) break;
        bVar7 = false;
        plVar10 = plVar6;
        if (plVar5 == (long *)0x0) goto LAB_035320a8;
      }
      plVar9 = param_1 + 0x10;
      if ((long *)param_1[0x10] != plVar6) {
        plVar9 = plVar10;
      }
      *plVar9 = (long)plVar5;
      if ((long *)param_1[0xf] == plVar6) {
        param_1[0xf] = (long)plVar10;
      }
      plVar9 = (long *)plVar6[3];
      plVar6[2] = 0;
      if (plVar9 != (long *)0x0) {
        iVar4 = (int)plVar9[9] + -1;
        *(int *)(plVar9 + 9) = iVar4;
        if (iVar4 == 0) {
          if (plVar9[2] == 0) {
            FUN_03518540(plVar9);
          }
          else {
            FUN_0351c44c(plVar9[2],plVar9);
            plVar9[2] = 0;
          }
          (**(code **)(*plVar9 + 0x50))(plVar9);
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar9);
        }
        plVar6[3] = 0;
      }
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar6);
      bVar7 = true;
    } while (plVar5 != (long *)0x0);
  }
LAB_035320a8:
  FUN_0351d16c(param_1,param_2,param_3);
  return;
}


