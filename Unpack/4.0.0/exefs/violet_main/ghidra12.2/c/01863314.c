/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01863314; name: FUN_01863314
 */


void FUN_01863314(long *param_1)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  
  lVar3 = (**(code **)(*param_1 + 0x98))();
  param_1[8] = lVar3;
  lVar3 = (**(code **)(*param_1 + 0xa8))(param_1);
  param_1[9] = lVar3;
  (**(code **)(*param_1 + 0x90))(param_1);
  FUN_01863478(param_1);
  if (param_1[8] == 0) {
    uVar4 = 0;
    if (param_1[9] != 0) {
      uVar1 = (**(code **)(*param_1 + 0xa0))(param_1);
      uVar2 = (**(code **)(*param_1 + 0x88))(param_1);
      uVar6 = 0;
      uVar4 = 0;
      if ((uVar1 != 0) && (uVar2 != 0)) {
        uVar7 = 0;
        uVar6 = 1;
        uVar4 = 0;
        do {
          plVar5 = *(long **)(param_1[9] + uVar7 * 8);
          iVar8 = (int)uVar4;
          uVar9 = (ulong)uVar2;
          do {
            if (*plVar5 == 0) goto LAB_018633b4;
            uVar4 = (ulong)((int)uVar4 + 1);
            uVar9 = uVar9 - 1;
            plVar5 = plVar5 + 2;
          } while (uVar9 != 0);
          uVar7 = uVar7 + 1;
          uVar4 = (ulong)(iVar8 + uVar2);
        } while (uVar7 != uVar1);
        uVar6 = 0;
        uVar4 = (ulong)(uVar2 * ((ushort)(uVar1 - 1) + 1));
      }
      goto LAB_018633b4;
    }
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x88))(param_1);
    if (uVar2 == 0) {
      uVar4 = 0;
    }
    else {
      plVar5 = (long *)param_1[8];
      uVar7 = 0;
      uVar4 = (ulong)uVar2;
      do {
        if (*plVar5 == 0) {
          uVar6 = 1;
          uVar4 = uVar7 & 0xffffffff;
          goto LAB_018633b4;
        }
        uVar7 = uVar7 + 1;
        plVar5 = plVar5 + 2;
      } while (uVar4 != uVar7);
    }
  }
  uVar6 = 0;
LAB_018633b4:
  param_1[10] = uVar6 | uVar4 << 0x20;
  return;
}


