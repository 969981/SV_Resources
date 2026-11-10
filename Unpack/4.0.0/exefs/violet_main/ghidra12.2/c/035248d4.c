/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 035248d4; name: FUN_035248d4
 */


void FUN_035248d4(long param_1,uint param_2,uint param_3,int *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  
  if ((int)param_2 < 0) {
    if (-param_2 < param_3) {
      param_3 = param_3 + param_2;
      param_2 = 0;
      goto LAB_035248ec;
    }
  }
  else {
LAB_035248ec:
    uVar1 = *(int *)(*(long *)(param_1 + 0x130) + (ulong)*(uint *)(param_1 + 0x138) * 0x10 + -0xc) -
            *(int *)(*(long *)(param_1 + 0x130) + 4);
    if ((param_3 + param_2 <= uVar1) ||
       (param_3 = uVar1 - param_2, param_2 <= uVar1 && param_3 != 0)) {
      if ((*(byte *)(param_1 + 0x124) >> 2 & 1) == 0) {
        do {
          lVar6 = *(long *)(param_1 + 0x98);
          if (lVar6 == 0) break;
          param_1 = lVar6;
        } while ((*(byte *)(lVar6 + 0x124) >> 2 & 1) == 0);
      }
      uVar1 = *(uint *)(param_1 + 0x118);
      iVar5 = 0;
      if (uVar1 != 0) {
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = (uVar1 + param_2) / uVar1;
        }
        uVar2 = (uVar1 + ((uVar1 + param_2) - uVar2 * uVar1)) - 1;
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = (uVar2 + param_3) / uVar1;
        }
        uVar4 = 0;
        if (uVar1 != 0) {
          uVar4 = uVar2 / uVar1;
        }
        iVar5 = uVar3 - uVar4;
      }
      *param_4 = iVar5;
      uVar1 = *(uint *)(param_1 + 0x114);
      iVar5 = 0;
      if (uVar1 != 0) {
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = (uVar1 + param_2) / uVar1;
        }
        uVar2 = (uVar1 + ((uVar1 + param_2) - uVar2 * uVar1)) - 1;
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = (uVar2 + param_3) / uVar1;
        }
        uVar4 = 0;
        if (uVar1 != 0) {
          uVar4 = uVar2 / uVar1;
        }
        iVar5 = uVar3 - uVar4;
      }
      *param_5 = iVar5;
      uVar1 = *(uint *)(param_1 + 0x11c);
      iVar5 = 0;
      if (uVar1 != 0) {
        uVar2 = (uVar1 + param_2) - *(int *)(param_1 + 0x120);
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar2 / uVar1;
        }
        uVar2 = (uVar1 + (uVar2 - uVar3 * uVar1)) - 1;
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = (uVar2 + param_3) / uVar1;
        }
        uVar4 = 0;
        if (uVar1 != 0) {
          uVar4 = uVar2 / uVar1;
        }
        iVar5 = uVar3 - uVar4;
      }
      goto LAB_035249dc;
    }
  }
  iVar5 = 0;
  *param_4 = 0;
  *param_5 = 0;
LAB_035249dc:
  *param_6 = iVar5;
  return;
}


