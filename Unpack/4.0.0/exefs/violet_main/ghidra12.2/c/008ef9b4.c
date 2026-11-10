/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008ef9b4; name: FUN_008ef9b4
 */


void FUN_008ef9b4(long param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  bVar3 = *(byte *)(param_1 + 0x4d);
  if ((ulong)bVar3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    uVar5 = (ulong)*(uint *)(param_1 + 0x48);
    lVar7 = 0;
    lVar8 = 0;
    lVar9 = 0;
    do {
      *(long *)(*(long *)(param_1 + 0x28) + lVar7) = *(long *)(param_1 + 0x20) + lVar9;
      puVar1 = (uint *)(*(long *)(param_1 + 0x30) + lVar8);
      uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar7);
      FUN_008f07f4(uVar6);
      puVar1[1] = 4;
      FUN_008f0810(uVar6,param_2,puVar1,uVar4,uVar5,*puVar1);
      FUN_008eff90(uVar6,"g3d_vertex");
      uVar2 = 8;
      if (*(ushort *)(param_1 + 0x56) != 0) {
        uVar2 = (uint)*(ushort *)(param_1 + 0x56);
      }
      lVar9 = lVar9 + 0x48;
      lVar8 = lVar8 + 0x10;
      uVar5 = (((ulong)*puVar1 + (ulong)uVar2) - 1 & -(ulong)uVar2) + uVar5;
      lVar7 = lVar7 + 8;
    } while ((ulong)bVar3 * 0x48 != lVar9);
  }
  return;
}


