/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dc106c; name: FUN_00dc106c
 */


ulong FUN_00dc106c(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  long *local_28;
  
  if ((((*param_1 != 0) && (*(short *)(*param_1 + 0x1a) != 0)) &&
      (*(char *)((long)param_1 + 0x14) != '\0')) &&
     (FUN_00c90ab8(&local_28,param_1), local_28 != (long *)0x0)) {
    if (((*param_1 == 0) || (*(short *)(*param_1 + 0x1a) == 0)) ||
       (*(char *)((long)param_1 + 0x14) == '\0')) {
switchD_00dc10f4_caseD_0:
      uVar2 = (**(code **)(*local_28 + 0x68))(local_28,(long)param_1 + 0x14);
      param_1 = (long *)(uVar2 & 0xffffffff);
    }
    else {
      switch((int)param_1[2]) {
      case 0:
        goto switchD_00dc10f4_caseD_0;
      case 1:
        fVar5 = (float)(**(code **)(*local_28 + 0x90))(local_28,(long)param_1 + 0x14);
        param_1 = (long *)(ulong)(uint)(int)fVar5;
        goto LAB_00dc112c;
      case 2:
        pcVar3 = *(code **)(*local_28 + 0xc0);
        break;
      case 3:
        pcVar3 = *(code **)(*local_28 + 0xe8);
        break;
      default:
        if (local_28 == (long *)0x0) goto LAB_00dc1148;
        bVar4 = true;
        goto LAB_00dc1138;
      }
      uVar1 = (*pcVar3)(local_28,(long)param_1 + 0x14);
      param_1 = (long *)(ulong)(uVar1 & 1);
    }
LAB_00dc112c:
    if (local_28 == (long *)0x0) goto LAB_00dc114c;
    bVar4 = false;
LAB_00dc1138:
    (**(code **)(*local_28 + 0x18))();
    if (!bVar4) goto LAB_00dc114c;
  }
LAB_00dc1148:
  param_1 = (long *)0x0;
LAB_00dc114c:
  return (ulong)param_1 & 0xffffffff;
}


