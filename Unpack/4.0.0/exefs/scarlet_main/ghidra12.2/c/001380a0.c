/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001380a0; name: FUN_001380a0
 */


void FUN_001380a0(long *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long local_68;
  long local_60;
  byte local_58;
  
  FUN_00133b50();
  switch(*param_2) {
  case 1:
    FUN_00133110(param_1,param_3,1);
    break;
  case 2:
    uVar8 = param_3 << 7 | 7;
    goto LAB_001382c4;
  case 3:
    uVar8 = param_3 << 7 | 5;
    goto LAB_001382c4;
  case 4:
    iVar2 = param_2[2];
    if (iVar2 < 0x20000) goto LAB_00138270;
LAB_00138134:
    lVar5 = *param_1;
    lVar3 = FUN_0012d3b0(*(undefined8 *)(param_1[2] + 0x38),*(undefined8 *)(lVar5 + 0x40),
                         (int)param_1[4],lVar5 + 0x18,4,0x7fffffff,"opcodes");
    *(long *)(lVar5 + 0x40) = lVar3;
    lVar7 = param_1[4];
    *(int *)(param_1 + 4) = (int)lVar7 + 1;
    *(uint *)(lVar3 + (long)(int)lVar7 * 4) = param_3 << 7 | 4;
    FUN_00133660(param_1,lVar5,*(undefined4 *)(param_1[2] + 8));
    uVar8 = iVar2 << 7 | 0x52;
    lVar7 = *param_1;
    uVar4 = *(undefined8 *)(param_1[2] + 0x38);
    uVar6 = *(undefined8 *)(lVar7 + 0x40);
    uVar1 = (undefined4)param_1[4];
    goto LAB_001382ec;
  case 5:
    lVar7 = *(long *)(param_2 + 2);
    iVar2 = FUN_0013fed0(lVar7,&local_68,0);
    if ((iVar2 == 0) || (local_68 + 0xffffU >> 0x11 != 0)) {
      local_58 = 0x13;
      local_60 = lVar7;
      iVar2 = FUN_00137f00(param_1,&local_60,&local_60);
      goto joined_r0x0013826c;
    }
    uVar8 = (int)local_68 * 0x8000 + 0x7fff8000U | param_3 << 7 | 2;
    goto LAB_001382c4;
  case 6:
    FUN_00133880(param_1,param_3,*(undefined8 *)(param_2 + 2));
    break;
  case 7:
    local_60 = *(long *)(param_2 + 2);
    local_58 = *(byte *)(local_60 + 8) | 0x40;
    iVar2 = FUN_00137f00(param_1,&local_60,&local_60);
    param_2[2] = iVar2;
    *param_2 = 4;
joined_r0x0013826c:
    if (0x1ffff < iVar2) goto LAB_00138134;
LAB_00138270:
    uVar8 = param_3 << 7 | iVar2 << 0xf | 3;
LAB_001382c4:
    lVar7 = *param_1;
    uVar4 = *(undefined8 *)(param_1[2] + 0x38);
    uVar6 = *(undefined8 *)(lVar7 + 0x40);
    uVar1 = (undefined4)param_1[4];
LAB_001382ec:
    lVar5 = FUN_0012d3b0(uVar4,uVar6,uVar1,lVar7 + 0x18,4,0x7fffffff,"opcodes");
    *(long *)(lVar7 + 0x40) = lVar5;
    lVar3 = param_1[4];
    *(int *)(param_1 + 4) = (int)lVar3 + 1;
    *(uint *)(lVar5 + (long)(int)lVar3 * 4) = uVar8;
    FUN_00133660(param_1,lVar7,*(undefined4 *)(param_1[2] + 8));
    break;
  case 8:
    if (param_2[2] != param_3) {
      uVar8 = param_2[2] << 0x10 | param_3 << 7;
      goto LAB_001382c4;
    }
    break;
  default:
    goto switchD_001380f4_caseD_9;
  case 0x11:
    uVar8 = *(uint *)(*(long *)(*param_1 + 0x40) + (long)(int)param_2[2] * 4);
    *(uint *)(*(long *)(*param_1 + 0x40) + (long)(int)param_2[2] * 4) =
         uVar8 & 0xffff8000 | uVar8 & 0x7f | (param_3 & 0xff) << 7;
  }
  param_2[2] = param_3;
  *param_2 = 8;
switchD_001380f4_caseD_9:
  return;
}


