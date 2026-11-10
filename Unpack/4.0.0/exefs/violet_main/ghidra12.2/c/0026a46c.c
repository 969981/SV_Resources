/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0026a46c; name: FUN_0026a46c
 */


long FUN_0026a46c(long *param_1,undefined8 param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong *puVar5;
  undefined1 auVar6 [12];
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 *local_38;
  
  if (*param_3 < '\0') {
    auVar6 = FUN_0052e5f0(param_3);
    if (auVar6._0_8_ == 0) {
      return 0;
    }
  }
  else {
    auVar6[8] = *param_3;
    auVar6._0_8_ = param_3 + 1;
    auVar6._9_3_ = 0;
  }
  uVar1 = auVar6._8_4_ + (auVar6._0_4_ - (int)param_1[1]);
  *param_1 = param_1[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f);
  lVar4 = param_1[0xb];
  iVar2 = *(int *)((long)param_1 + 0x1c);
  *(uint *)((long)param_1 + 0x1c) = uVar1;
  *(int *)(param_1 + 0xb) = (int)lVar4 + -1;
  if (0 < (int)lVar4) {
    local_48 = 0;
    local_38 = (undefined8 *)0x0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = param_2;
    uStack_60 = param_2;
    lVar4 = FUN_0026c0fc(&local_68,auVar6._0_8_,param_1);
    puVar3 = local_38;
    if (local_38 != (undefined8 *)0x0) {
      puVar5 = (ulong *)(local_38[1] & 0xfffffffffffffffe);
      if ((local_38[1] & 1) != 0) {
        puVar5 = (ulong *)*puVar5;
      }
      if (puVar5 == (ulong *)0x0) {
        (**(code **)*local_38)(local_38);
        FUN_0049e790(PTR_LAB_047cba48,puVar3);
      }
    }
    if ((local_58 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_48);
    }
    if (lVar4 == 0) {
      return 0;
    }
    *(int *)(param_1 + 0xb) = (int)param_1[0xb] + 1;
    if ((int)param_1[10] == 0) {
      uVar1 = *(int *)((long)param_1 + 0x1c) + (iVar2 - uVar1);
      *(uint *)((long)param_1 + 0x1c) = uVar1;
      *param_1 = param_1[1] + (long)(int)(uVar1 & (int)uVar1 >> 0x1f);
      return lVar4;
    }
  }
  return 0;
}


