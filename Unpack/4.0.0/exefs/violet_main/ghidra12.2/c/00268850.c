/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00268850; name: FUN_00268850
 */


long FUN_00268850(long *param_1,undefined8 param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined1 auVar4 [12];
  
  if (*param_3 < '\0') {
    auVar4 = FUN_0052e5f0(param_3);
    if (auVar4._0_8_ == 0) {
      return 0;
    }
  }
  else {
    auVar4[8] = *param_3;
    auVar4._0_8_ = param_3 + 1;
    auVar4._9_3_ = 0;
  }
  uVar1 = auVar4._8_4_ + (auVar4._0_4_ - (int)param_1[1]);
  *param_1 = param_1[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f);
  lVar3 = param_1[0xb];
  iVar2 = *(int *)((long)param_1 + 0x1c);
  *(uint *)((long)param_1 + 0x1c) = uVar1;
  *(int *)(param_1 + 0xb) = (int)lVar3 + -1;
  if ((int)lVar3 < 1) {
    return 0;
  }
  lVar3 = FUN_0026a308(param_2,auVar4._0_8_,param_1);
  if (lVar3 != 0) {
    *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
    if ((int)param_1[10] != 0) {
      return 0;
    }
    uVar1 = *(int *)((long)param_1 + 0x1c) + (iVar2 - uVar1);
    *(uint *)((long)param_1 + 0x1c) = uVar1;
    *param_1 = param_1[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f);
  }
  return lVar3;
}


