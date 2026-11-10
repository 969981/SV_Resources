/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030e6a70; name: FUN_030e6a70
 */


void FUN_030e6a70(long param_1,undefined4 *param_2,ushort *param_3,ushort *param_4,
                 undefined1 *param_5)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined1 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  undefined4 local_48 [2];
  
  plVar1 = (long *)(param_1 + 0x50);
  lVar5 = FUN_030e94b4(plVar1);
  if (lVar5 == 0) {
    lVar5 = -0x100000000;
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(uint *)(lVar5 + 4);
    lVar5 = (lVar5 - *(long *)(param_1 + 0x60)) * 0x20000000;
  }
  lVar7 = *plVar1;
  uVar6 = uVar6 | (uint)lVar5;
  plVar2 = (long *)(lVar7 + (long)(int)uVar6 * 0x18 + 8);
  for (; param_3 != param_4; param_3 = param_3 + 1) {
    *(undefined4 *)(*plVar2 + (ulong)*param_3 * 8) = 0xfffffffe;
  }
  iVar3 = *(int *)(lVar7 + (long)(int)uVar6 * 0x18 + 0x10);
  if (iVar3 != 0) {
    lVar7 = (long)iVar3 << 3;
    piVar8 = (int *)*plVar2;
    do {
      if (*piVar8 != -2) {
        uVar4 = 0;
        *param_5 = 0;
        goto LAB_030e6ba4;
      }
      lVar7 = lVar7 + -8;
      piVar8 = piVar8 + 2;
    } while (lVar7 != 0);
  }
  if ((*(uint *)(param_1 + 0x68) < (uint)((ulong)lVar5 >> 0x20)) ||
     (lVar5 = *(long *)(param_1 + 0x60) + (lVar5 >> 0x20) * 8, *(uint *)(lVar5 + 4) != uVar6)) {
    lVar5 = FUN_030e94b4(plVar1,*plVar1 + (long)(int)uVar6 * 0x18);
  }
  FUN_030e9528(plVar1,lVar5);
  *param_5 = 1;
  local_48[0] = *param_2;
  uVar4 = FUN_030e6bc0(param_1,local_48,param_5 + 8);
LAB_030e6ba4:
  param_5[1] = uVar4;
  return;
}


