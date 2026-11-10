/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030772ec; name: FUN_030772ec
 */


void FUN_030772ec(long param_1,long *param_2,int *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  if (*(float *)(param_1 + 0x1c) + 0.001 < *(float *)(param_1 + 0x18)) {
    iVar3 = *(int *)PTR_DAT_047e4f38;
    lVar4 = tpidr_el0;
    lVar6 = *(long *)(lVar4 + 0x1000b8);
    if (lVar6 == 0) {
      lVar6 = FUN_00e5d3b4();
      *(long *)(lVar4 + 0x1000b8) = lVar6;
    }
    if (*(long *)(lVar6 + (long)iVar3 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    uVar1 = *(uint *)(param_2 + 1);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      uVar5 = 0;
      do {
        uVar2 = *(uint *)(*param_2 + uVar7 * 4);
        if (-1 < (int)uVar2) {
          *(undefined2 *)(*(long *)(param_1 + 0x50) + (ulong)uVar2 * 2) =
               *(undefined2 *)(*(long *)(param_1 + 0x50) + (long)((int)uVar7 + *param_3) * 2);
        }
        if (0xfff8ca81 < uVar5) {
          iVar3 = *(int *)PTR_DAT_047e4f38;
          lVar6 = *(long *)(lVar4 + 0x1000b8);
          if (lVar6 == 0) {
            lVar6 = FUN_00e5d3b4();
            *(long *)(lVar4 + 0x1000b8) = lVar6;
          }
          if (*(long *)(lVar6 + (long)iVar3 * 8 + 1000) != 0) {
            FUN_03231bdc();
          }
        }
        uVar7 = uVar7 + 1;
        uVar5 = uVar5 + 0x7357e;
      } while (uVar1 != uVar7);
    }
    if ((*(int *)(param_1 + 0x58) < param_4) || (param_4 < *(int *)(param_1 + 0x58))) {
      *(int *)(param_1 + 0x58) = param_4;
    }
  }
  return;
}


