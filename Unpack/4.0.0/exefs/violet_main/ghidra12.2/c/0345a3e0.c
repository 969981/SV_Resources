/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0345a3e0; name: FUN_0345a3e0
 */


undefined8 FUN_0345a3e0(long param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  undefined *puVar6;
  long lVar7;
  uint uVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  uint uVar11;
  
  pbVar10 = (byte *)*param_2;
  bVar4 = *pbVar10;
  *param_2 = (long)(pbVar10 + 1);
  uVar8 = bVar4 & 0x7f;
  if ((char)bVar4 < '\0') {
    pbVar10 = pbVar10 + 2;
    do {
      bVar4 = pbVar10[-1];
      *param_2 = (long)pbVar10;
      pbVar10 = pbVar10 + 1;
      uVar8 = bVar4 & 0x7f | uVar8 << 7;
    } while ((char)bVar4 < '\0');
  }
  puVar6 = PTR_DAT_047e2fd0;
  if (uVar8 != 0) {
    lVar7 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(ulong)uVar8 << 3);
    *(long *)(param_1 + 0x38) = lVar7;
    if (lVar7 == 0) {
      return 2;
    }
    *(uint *)(param_1 + 0x44) = uVar8;
    do {
      puVar9 = (undefined4 *)*param_2;
      uVar3 = *puVar9;
      *param_2 = (long)(puVar9 + 1);
      cVar5 = *(char *)(puVar9 + 1);
      *param_2 = (long)puVar9 + 5;
      uVar2 = *(uint *)(param_1 + 0x40);
      uVar11 = *(uint *)(param_1 + 0x44);
      if (uVar2 < uVar11) {
LAB_0345a4c8:
        if (uVar2 < uVar11) {
          uVar11 = *(uint *)(param_1 + 0x40);
          *(uint *)(param_1 + 0x40) = uVar11 + 1;
          if (*(long *)(param_1 + 0x38) != 0) {
            *(ulong *)(*(long *)(param_1 + 0x38) + (ulong)uVar11 * 8) =
                 (ulong)CONCAT14(cVar5 != '\0',uVar3);
          }
        }
      }
      else {
        iVar1 = uVar11 + (uVar11 >> 1);
        if (uVar11 == 0) {
          iVar1 = 1;
        }
        uVar11 = iVar1 + uVar11;
        lVar7 = (**(code **)(puVar6 + 0x20))(0,*(undefined8 *)(param_1 + 0x38),(ulong)uVar11 << 3);
        if (lVar7 != 0) {
          *(long *)(param_1 + 0x38) = lVar7;
          *(uint *)(param_1 + 0x44) = uVar11;
          goto LAB_0345a4c8;
        }
      }
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return 1;
}


