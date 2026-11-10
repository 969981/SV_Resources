/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00170734; name: FUN_00170734
 */


void FUN_00170734(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long *param_5,
                 int param_6)

{
  int iVar1;
  long lVar2;
  void *__s;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  iVar1 = 4;
  if (param_6 != 0) {
    iVar1 = param_6;
  }
  *(int *)(param_1 + 3) = (int)param_2;
  *(int *)((long)param_1 + 0x1c) = 0x40 - (int)param_2;
  if (iVar1 - 5U < 4) {
    lVar3 = -0x30e44323485a9b9d << ((ulong)(uint)(iVar1 * -8) & 0x3f);
  }
  else {
    lVar3 = -0x61c8864f00000000;
  }
  param_1[2] = lVar3;
  lVar4 = 2L << (param_2 & 0x3f);
  lVar3 = lVar4 + 0x40;
  if (param_5 != (long *)0x0) {
    lVar2 = param_5[1];
    uVar5 = ((param_5[3] - lVar2) + *param_5) - 0x10;
    if (lVar3 <= (long)(uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU))) {
      uVar6 = lVar4 + 0x4fU & 0xfffffffffffffff0;
      uVar5 = lVar2 + uVar6;
      if ((ulong)(*param_5 + param_5[3]) < uVar5) {
        if ((int)param_5[4] != 0) {
          lVar2 = (**(code **)PTR_PTR_047cb890)(uVar6,0x10);
          if (lVar2 != 0) {
            lVar3 = 0;
            goto LAB_001707f4;
          }
          FUN_0015ed40(uVar6);
        }
        lVar3 = 0;
        lVar2 = 0;
      }
      else {
        param_5[1] = uVar5;
        uVar6 = param_5[2];
        if ((ulong)param_5[2] <= uVar5) {
          uVar6 = uVar5;
        }
        lVar3 = 0;
        param_5[2] = uVar6;
      }
      goto LAB_001707f4;
    }
  }
  lVar2 = (**(code **)PTR_PTR_047cb890)(lVar3,0x10);
  if (lVar2 == 0) {
    FUN_0015ed40(lVar3);
  }
  lVar3 = lVar2;
LAB_001707f4:
  __s = (void *)(lVar2 + 0x3fU & 0xffffffffffffffc0);
  *param_1 = lVar3;
  param_1[1] = (long)__s;
  memset(__s,0,2L << ((ulong)*(uint *)(param_1 + 3) & 0x3f));
  return;
}


