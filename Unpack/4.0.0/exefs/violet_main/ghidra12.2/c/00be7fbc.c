/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00be7fbc; name: FUN_00be7fbc
 */


void FUN_00be7fbc(long *param_1,long param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  
  lVar3 = *(long *)(param_3 + 0x58);
  if (lVar3 == 0) {
    uVar4 = *param_4;
LAB_00be8074:
    if (*(char *)(param_3 + 0x44) == '\0') {
      plVar7 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
    }
    else if (*(long *)(param_3 + 0x60) == 0) {
      plVar7 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
    }
    else {
      plVar7 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
    }
    iVar5 = (int)((ulong)(param_3 - *plVar7) >> 4) * 0x38e38e39;
  }
  else {
    lVar3 = lVar3 - *(long *)(*(long *)(lVar3 + 0x10) + 0x40) >> 4;
    uVar6 = lVar3 * -0x5555555555555555;
    iVar5 = (int)uVar6;
    if (*(int *)(param_2 + *(int *)((long)param_1 + 0x2c) +
                (-(uVar6 >> 0x1f & 1) & 0xfffffffc00000000 |
                lVar3 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(param_3 + 0x38)) {
      uVar4 = *param_4;
    }
    else {
      (**(code **)(*param_1 + 0x48))(param_1,param_2);
      lVar3 = *(long *)(param_3 + 0x58);
      uVar4 = *param_4;
      if (lVar3 == 0) goto LAB_00be8074;
      iVar5 = (int)(lVar3 - *(long *)(*(long *)(lVar3 + 0x10) + 0x40) >> 4) * -0x55555555;
    }
    iVar5 = *(int *)(param_1[1] + 0x2c) + iVar5;
  }
  *(undefined8 *)(param_2 + *(int *)(param_1[4] + (long)iVar5 * 4)) = uVar4;
  lVar3 = *(long *)(param_3 + 0x58);
  if (lVar3 == 0) {
    if ((int)param_1[5] != -1) {
      if (*(char *)(param_3 + 0x44) == '\0') {
        plVar7 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar7 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
      }
      else {
        plVar7 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
      }
      uVar2 = (int)((ulong)(param_3 - *plVar7) >> 4) * 0x38e38e39;
      uVar1 = uVar2 + 0x1f;
      if (-1 < (int)uVar2) {
        uVar1 = uVar2;
      }
      param_2 = param_2 + (int)param_1[5];
      *(uint *)(param_2 + (long)((int)uVar1 >> 5) * 4) =
           1 << (ulong)(uVar2 & 0x1f) | *(uint *)(param_2 + (long)((int)uVar1 >> 5) * 4);
    }
  }
  else {
    uVar1 = (int)((ulong)(lVar3 - *(long *)(*(long *)(lVar3 + 0x10) + 0x40)) >> 4) * -0x55555555;
    *(undefined4 *)
     (param_2 + *(int *)((long)param_1 + 0x2c) +
     (-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2)) =
         *(undefined4 *)(param_3 + 0x38);
  }
  return;
}


