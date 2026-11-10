/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 035376b8; name: FUN_035376b8
 */


void FUN_035376b8(long *param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  long local_70;
  undefined1 local_68;
  
  *(int *)(param_1 + 9) = (int)param_1[9] + 1;
  if ((*(byte *)((long)param_1 + 0x5a) >> 1 & 1) != 0) {
    if (*(int *)((long)param_1 + 0x54) != -1) {
      param_3 = *(int *)((long)param_1 + 0x54);
    }
  }
  FUN_03537854(param_1,param_2,param_3);
  plVar5 = (long *)param_1[0xf];
  if (plVar5 != (long *)0x0) {
    do {
      lVar1 = *plVar5;
      lVar2 = plVar5[1];
      uVar3 = *(uint *)(lVar1 + 4);
      local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(lVar1 + 0x18));
      fVar6 = (float)FUN_03447dcc((float)((param_3 + param_2) - (int)plVar5[2]),lVar1 + 8,&local_70)
      ;
      *(undefined4 *)(lVar1 + 0x18) = (undefined4)local_70;
      switch((ulong)uVar3) {
      case 0:
        fVar6 = fVar6 + 1.0;
        local_70 = lVar2;
        goto LAB_0353778c;
      case 1:
        fVar7 = *(float *)(lVar2 + 0x340);
        *(float *)(lVar2 + 0x340) = fVar6;
        *(float *)(lVar2 + 0x80) = (fVar6 - fVar7) + *(float *)(lVar2 + 0x80);
        break;
      case 2:
        fVar7 = *(float *)(lVar2 + 0x344);
        *(float *)(lVar2 + 0x344) = fVar6;
        *(float *)(lVar2 + 0x84) = (fVar6 - fVar7) + *(float *)(lVar2 + 0x84);
        break;
      case 3:
      case 4:
        local_70 = lVar2 + (ulong)uVar3;
LAB_0353778c:
        local_68 = 0x66;
        FUN_034a4694(fVar6,lVar2,&local_70);
      }
      plVar5 = (long *)plVar5[3];
    } while (plVar5 != (long *)0x0);
  }
  iVar4 = (int)param_1[9] + -1;
  *(int *)(param_1 + 9) = iVar4;
  if (iVar4 == 0) {
    if (param_1[2] == 0) {
      FUN_03518540(param_1);
    }
    else {
      FUN_0351c44c(param_1[2],param_1);
      param_1[2] = 0;
    }
    (**(code **)(*param_1 + 0x50))(param_1);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,param_1);
  }
  return;
}


