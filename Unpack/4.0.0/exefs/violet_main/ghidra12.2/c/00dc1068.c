/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dc1068; name: thunk_FUN_00dc106c
 */


ulong thunk_FUN_00dc106c(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  long *plStack_28;
  
  if ((((*param_1 != 0) && (*(short *)(*param_1 + 0x1a) != 0)) &&
      (*(char *)((long)param_1 + 0x14) != '\0')) &&
     (FUN_00c90ab8(&plStack_28,param_1), plStack_28 != (long *)0x0)) {
    if (((*param_1 == 0) || (*(short *)(*param_1 + 0x1a) == 0)) ||
       (*(char *)((long)param_1 + 0x14) == '\0')) {
switchD_00dc10f4_caseD_0:
      uVar2 = (**(code **)(*plStack_28 + 0x68))(plStack_28,(long)param_1 + 0x14);
      param_1 = (long *)(uVar2 & 0xffffffff);
    }
    else {
      switch((int)param_1[2]) {
      case 0:
        goto switchD_00dc10f4_caseD_0;
      case 1:
        fVar5 = (float)(**(code **)(*plStack_28 + 0x90))(plStack_28,(long)param_1 + 0x14);
        param_1 = (long *)(ulong)(uint)(int)fVar5;
        goto LAB_00dc112c;
      case 2:
        pcVar3 = *(code **)(*plStack_28 + 0xc0);
        break;
      case 3:
        pcVar3 = *(code **)(*plStack_28 + 0xe8);
        break;
      default:
        if (plStack_28 == (long *)0x0) goto LAB_00dc1148;
        bVar4 = true;
        goto LAB_00dc1138;
      }
      uVar1 = (*pcVar3)(plStack_28,(long)param_1 + 0x14);
      param_1 = (long *)(ulong)(uVar1 & 1);
    }
LAB_00dc112c:
    if (plStack_28 == (long *)0x0) goto LAB_00dc114c;
    bVar4 = false;
LAB_00dc1138:
    (**(code **)(*plStack_28 + 0x18))();
    if (!bVar4) goto LAB_00dc114c;
  }
LAB_00dc1148:
  param_1 = (long *)0x0;
LAB_00dc114c:
  return (ulong)param_1 & 0xffffffff;
}


