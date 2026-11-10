/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03046878; name: FUN_03046878
 */


int FUN_03046878(long param_1,long param_2,long param_3,uint param_4)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  plVar7 = *(long **)(param_1 + 0x30);
  if (plVar7 != (long *)0x0) {
    param_4 = (**(code **)(*plVar7 + 0x20))(plVar7,param_2,param_3);
  }
  if ((int)param_4 < 1) {
    iVar6 = 0;
  }
  else {
    uVar9 = 0;
    iVar6 = 0;
    do {
      puVar1 = (uint *)(param_3 + uVar9 * 8);
      uVar10 = 0xffffffffffffffff;
      if ((int)((ulong)puVar1[1] & 0xffffff) != 0xffffff) {
        uVar10 = *(ulong *)(*(long *)(param_2 + 0x38) + ((ulong)puVar1[1] & 0xffffff) * 0xc0 + 0xb0)
        ;
      }
      uVar11 = 0xffffffffffffffff;
      if ((int)((ulong)*puVar1 & 0xffffff) != 0xffffff) {
        uVar11 = *(ulong *)(*(long *)(param_2 + 0x38) + ((ulong)*puVar1 & 0xffffff) * 0xc0 + 0xb0);
      }
      uVar2 = uVar11;
      if (uVar11 <= uVar10) {
        uVar2 = uVar10;
        uVar10 = uVar11;
      }
      uVar4 = *(uint *)(param_1 + 0x2c);
      if (0 < (int)uVar4) {
        uVar5 = (int)uVar2 * -0x61c8864f;
        while( true ) {
          uVar5 = uVar5 & uVar4;
          puVar8 = (ulong *)(*(long *)(param_1 + 0x20) + (ulong)uVar5 * 0x18);
          uVar11 = *puVar8;
          uVar3 = puVar8[1];
          if (uVar11 == 0xffffffffffffffff || uVar3 == 0xffffffffffffffff) break;
          if ((uVar3 == uVar2) && (uVar11 == uVar10)) {
            if ((int)uVar5 <= (int)uVar4) goto LAB_03046990;
            break;
          }
          uVar5 = uVar5 + 1;
        }
      }
      *(undefined8 *)(param_3 + (long)iVar6 * 8) = *(undefined8 *)puVar1;
      iVar6 = iVar6 + 1;
LAB_03046990:
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_4);
  }
  return iVar6;
}


