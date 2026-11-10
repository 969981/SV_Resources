/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a09ddc; name: FUN_02a09ddc
 */


void FUN_02a09ddc(long param_1,long *param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  
  if (((param_1 != 0) && (plVar9 = (long *)*param_2, plVar9 != (long *)0x0)) &&
     (bVar1 = *(byte *)(plVar9 + 0x12), (ulong)bVar1 != 0)) {
    uVar15 = 0;
    puVar17 = (uint *)(param_1 + 8);
    pbVar14 = (byte *)(param_3 + 0xb);
    while( true ) {
      lVar10 = (**(code **)(*plVar9 + 0x60))(plVar9,uVar15 & 0xffffffff);
      if (lVar10 != 0) {
        if (pbVar14[-1] == 0) {
          uVar16 = 0xff;
        }
        else {
          uVar16 = (ulong)*pbVar14;
        }
        uVar11 = FUN_00cf44f4(*(undefined8 *)(lVar10 + 0x70));
        uVar12 = FUN_00cf41a8(*(undefined8 *)(lVar10 + 0x70));
        uVar13 = FUN_00cec030(*(undefined8 *)(lVar10 + 0x70));
        if (*(long *)(*(long *)(lVar10 + 0x70) + 8) == 0) {
          uVar6 = FUN_00cf44f4();
          uVar7 = FUN_00cf41a8(*(undefined8 *)(lVar10 + 0x70));
          uVar8 = FUN_00f14b64(*(undefined8 *)(lVar10 + 0x70));
          uVar3 = FUN_00f13da0(uVar6,uVar7,uVar8);
          uVar3 = uVar3 & 0xff;
        }
        else {
          uVar3 = FUN_00e9987c();
        }
        uVar2 = FUN_0113b8a0(*(undefined8 *)(lVar10 + 0x70));
        if (0x136 < uVar2) {
          uVar6 = FUN_00cf44f4(*(undefined8 *)(lVar10 + 0x70));
          uVar7 = FUN_00cf41a8(*(undefined8 *)(lVar10 + 0x70));
          uVar8 = FUN_00e99784(lVar10);
          uVar2 = FUN_0143b78c(uVar6,uVar7,uVar8);
        }
        uVar4 = FUN_00d4ea44(*(undefined8 *)(lVar10 + 0x70));
        iVar5 = FUN_00e974e0(*(undefined8 *)(lVar10 + 0x70));
        *puVar17 = uVar4 & 0xffff | iVar5 << 0x10;
        *(ulong *)(puVar17 + -2) =
             uVar16 << 0x28 |
             uVar11 & 0xffff | (uVar12 & 0xff) << 0x10 | (uVar13 & 0xff) << 0x18 |
             (ulong)(uVar3 & 0xff) << 0x20 | (ulong)uVar2 << 0x30;
      }
      if ((ulong)bVar1 - 1 == uVar15) break;
      uVar15 = uVar15 + 1;
      puVar17 = puVar17 + 3;
      pbVar14 = pbVar14 + 0x1c;
      plVar9 = (long *)*param_2;
    }
  }
  return;
}


