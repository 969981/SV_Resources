/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001dc1b0; name: FUN_001dc1b0
 */


undefined8 FUN_001dc1b0(long param_1,int param_2,void *param_3,size_t param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar5 = (ulong)*(uint *)(param_1 + 0x1168);
  if (*(uint *)(param_1 + 0x1168) == 0) {
    uVar5 = 0;
  }
  else {
    plVar6 = (long *)(param_1 + 0x1170);
    uVar3 = uVar5;
    do {
      if ((int)plVar6[2] == param_2) {
        lVar1 = plVar6[1];
        lVar4 = FUN_001ec318(*plVar6,lVar1 + param_4);
        if (lVar4 == 0) goto LAB_001dc280;
        memcpy((void *)(lVar4 + plVar6[1]),param_3,param_4);
        *plVar6 = lVar4;
        plVar6[1] = lVar1 + param_4;
        goto LAB_001dc26c;
      }
      plVar6 = plVar6 + 3;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  lVar1 = FUN_001e0b14(param_3,param_4);
  if (lVar1 == 0) {
LAB_001dc280:
    uVar2 = 0x1b;
  }
  else {
    lVar4 = param_1 + uVar5 * 0x18;
    *(long *)(lVar4 + 0x1170) = lVar1;
    *(size_t *)(lVar4 + 0x1178) = param_4;
    *(int *)(lVar4 + 0x1180) = param_2;
    *(int *)(param_1 + 0x1168) = *(int *)(param_1 + 0x1168) + 1;
LAB_001dc26c:
    uVar2 = 0;
    *(uint *)(param_1 + 0x1c0) = *(uint *)(param_1 + 0x1c0) | 0x10;
  }
  return uVar2;
}


