/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00683668; name: FUN_00683668
 */


void FUN_00683668(int *param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  code *pcVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = 0;
  uVar3 = FUN_01cf7e20();
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  if (*param_1 == 3) {
    plVar4 = *(long **)(param_1 + 0xc);
    if (plVar4 != (long *)0x0) {
      if (plVar4 == (long *)(param_1 + 4)) {
        pcVar6 = *(code **)(*plVar4 + 0x10);
      }
      else {
        pcVar6 = *(code **)(*plVar4 + 0x18);
      }
      (*pcVar6)();
    }
  }
  else if ((*param_1 == 1) && ((*(byte *)(param_1 + 4) & 1) != 0)) {
    (**(code **)(**(long **)(param_1 + 10) + 0x18))
              (*(long **)(param_1 + 10),*(undefined8 *)(param_1 + 8),
               *(ulong *)(param_1 + 4) & 0xfffffffffffffffe,1);
  }
  *param_1 = 0;
  piVar7 = param_2 + 0x1a;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  pbVar1 = (byte *)(param_1 + 0x1a);
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  if ((*(long **)(param_1 + 0x20) == *(long **)(param_2 + 0x20)) ||
     (uVar5 = (**(code **)(**(long **)(param_1 + 0x20) + 0x20))(), (uVar5 & 1) != 0)) {
    if ((*pbVar1 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
                (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x1e),
                 *(ulong *)(param_1 + 0x1a) & 0xfffffffffffffffe,1);
      *(undefined2 *)(param_1 + 0x1a) = 0;
    }
    uVar8 = *(undefined8 *)(param_2 + 0x1c);
    uVar3 = *(undefined8 *)piVar7;
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
    *(undefined8 *)(param_1 + 0x1c) = uVar8;
    *(undefined8 *)pbVar1 = uVar3;
    *(undefined2 *)piVar7 = 0;
  }
  else {
                    /* try { // try from 00683794 to 0068379f has its CatchHandler @ 00683860 */
    FUN_01d0e1a8(pbVar1,piVar7);
  }
  iVar2 = *param_1;
  if (iVar2 == 3) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    if (param_1 != param_2) {
      piVar7 = *(int **)(param_2 + 0xc);
      if (piVar7 == (int *)0x0) {
        param_1[0xc] = 0;
        param_1[0xd] = 0;
      }
      else if (piVar7 == param_2 + 4) {
        *(int **)(param_1 + 0xc) = param_1 + 4;
        (**(code **)(**(long **)(param_2 + 0xc) + 0x30))();
      }
      else {
        *(int **)(param_1 + 0xc) = piVar7;
        param_2[0xc] = 0;
        param_2[0xd] = 0;
      }
    }
    uVar8 = *(undefined8 *)(param_2 + 0x12);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x12) = uVar8;
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  }
  else if (iVar2 == 2) {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  }
  else if (iVar2 == 1) {
    uVar3 = *(undefined8 *)(param_2 + 4);
    uVar9 = *(undefined8 *)(param_2 + 10);
    uVar8 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar3;
    *(undefined8 *)(param_1 + 10) = uVar9;
    *(undefined8 *)(param_1 + 8) = uVar8;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
  }
  *param_2 = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  return;
}


