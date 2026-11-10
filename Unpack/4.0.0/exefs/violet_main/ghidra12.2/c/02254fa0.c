/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02254fa0; name: FUN_02254fa0
 */


void FUN_02254fa0(long param_1,long *param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((param_2 == (long *)0x0) || (iVar5 = (**(code **)(*param_2 + 0xb8))(param_2), iVar5 == 1)) {
    bVar4 = *(long **)(param_1 + 0xf0) != param_2;
    uVar2 = *(ushort *)(param_1 + 0x114);
    uVar1 = (uint)bVar4 | uVar2 >> 2 & 1;
    *(ushort *)(param_1 + 0x114) = uVar2 & 0xfff8 | uVar2 & 3 | (ushort)(uVar1 << 2);
    if (bVar4) {
      *(long **)(param_1 + 0xf0) = param_2;
      if (param_2 == (long *)0x0) {
        uVar3 = (uint)(*(float *)(param_1 + 0xf8) != 0.0 || *(float *)(param_1 + 0xfc) != 0.0);
        *(ushort *)(param_1 + 0x114) = uVar2 & 0xfffb | (ushort)((uVar1 | uVar3) << 2);
        if (uVar3 != 0) {
          if (*(float *)(param_1 + 0xfc) == 0.0) {
            *(undefined8 *)(param_1 + 0xf8) = 0;
            return;
          }
          *(undefined8 *)(param_1 + 0xf8) = 0;
          *(undefined4 *)(param_1 + 0x118) = 0x7fc00000;
          *(undefined4 *)(param_1 + 0x134) = 0x7fc00000;
          return;
        }
      }
      else {
        iVar5 = (**(code **)(*param_2 + 0x20))(param_2);
        fVar8 = (float)iVar5;
        iVar5 = (**(code **)(**(long **)(param_1 + 0xf0) + 0x28))();
        fVar6 = (float)iVar5;
        fVar7 = *(float *)(param_1 + 0xfc);
        uVar2 = (ushort)(*(float *)(param_1 + 0xf8) != fVar8 || fVar7 != fVar6);
        *(ushort *)(param_1 + 0x114) =
             *(ushort *)(param_1 + 0x114) & 0xfffb |
             (*(ushort *)(param_1 + 0x114) >> 2 & 1 | uVar2) << 2;
        if (uVar2 != 0) {
          if (fVar7 != 0.0) {
            fVar7 = *(float *)(param_1 + 0xf8) / fVar7;
            *(ulong *)(param_1 + 0xf8) = CONCAT44(fVar6,fVar8);
            *(float *)(param_1 + 0x118) = (fVar6 / fVar8) * fVar7 * *(float *)(param_1 + 0x118);
            *(float *)(param_1 + 0x134) = (fVar6 / fVar8) * fVar7 * *(float *)(param_1 + 0x134);
            return;
          }
          *(float *)(param_1 + 0xf8) = fVar8;
          *(float *)(param_1 + 0xfc) = fVar6;
        }
      }
    }
  }
  return;
}


