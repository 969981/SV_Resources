/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015bd4e4; name: FUN_015bd4e4
 */


void FUN_015bd4e4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  param_1[4] = uVar2;
  param_1[5] = uVar5;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[10] = uVar2;
  param_1[0xb] = uVar5;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar6;
  uVar11 = *(ulong *)(param_2 + 0x40);
  lVar4 = *(long *)(param_2 + 8);
  if (*(long *)(param_2 + 0x10) == lVar4) {
    auVar7._8_8_ = 0;
    auVar7._0_8_ = *(long *)(param_2 + 0x48) + uVar11;
    lVar8 = 0;
    lVar10 = 0;
    plVar9 = (long *)(lVar4 + (SUB168(auVar7 * ZEXT816(0x8888888888888889),8) >> 1 &
                              0x7ffffffffffffff8));
  }
  else {
    lVar8 = *(long *)(lVar4 + (uVar11 / 0x1e) * 8) + (uVar11 % 0x1e) * 0x88;
    uVar1 = *(long *)(param_2 + 0x48) + uVar11;
    plVar9 = (long *)(lVar4 + (uVar1 / 0x1e) * 8);
    lVar10 = *plVar9 + (uVar1 % 0x1e) * 0x88;
  }
  FUN_015bd67c(param_1,lVar4 + (uVar11 / 0x1e) * 8,lVar8,plVar9,lVar10);
  return;
}


