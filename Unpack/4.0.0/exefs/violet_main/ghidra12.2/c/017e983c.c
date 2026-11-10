/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017e983c; name: FUN_017e983c
 */


uint FUN_017e983c(long *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  uint uVar5;
  float fVar6;
  long *local_28;
  
  if ((((*param_1 != 0) && (*(short *)(*param_1 + 0x1a) != 0)) &&
      (*(char *)((long)param_1 + 0x14) != '\0')) &&
     (FUN_00c90ab8(&local_28,param_1), local_28 != (long *)0x0)) {
    if (((*param_1 == 0) || (*(short *)(*param_1 + 0x1a) == 0)) ||
       (*(char *)((long)param_1 + 0x14) == '\0')) {
LAB_017e9920:
      iVar2 = (**(code **)(*local_28 + 0x68))(local_28,(long)param_1 + 0x14);
      bVar1 = iVar2 == 0;
LAB_017e9938:
      param_1 = (long *)(ulong)!bVar1;
LAB_017e993c:
      uVar5 = (uint)param_1;
      if (local_28 == (long *)0x0) goto LAB_017e995c;
      bVar1 = false;
    }
    else {
      iVar2 = (int)param_1[2];
      if (iVar2 == 2) {
        pcVar4 = *(code **)(*local_28 + 0xc0);
LAB_017e98c0:
        uVar3 = (*pcVar4)(local_28,(long)param_1 + 0x14);
        param_1 = (long *)(uVar3 & 0xffffffff);
        goto LAB_017e993c;
      }
      if (iVar2 == 1) {
        fVar6 = (float)(**(code **)(*local_28 + 0x90))(local_28,(long)param_1 + 0x14);
        bVar1 = fVar6 == 0.0;
        goto LAB_017e9938;
      }
      if (iVar2 == 3) {
        pcVar4 = *(code **)(*local_28 + 0xe8);
        goto LAB_017e98c0;
      }
      if (iVar2 == 0) goto LAB_017e9920;
      if (local_28 == (long *)0x0) goto LAB_017e9958;
      bVar1 = true;
    }
    uVar5 = (uint)param_1;
    (**(code **)(*local_28 + 0x18))();
    if (!bVar1) goto LAB_017e995c;
  }
LAB_017e9958:
  uVar5 = 0;
LAB_017e995c:
  return uVar5 & 1;
}


