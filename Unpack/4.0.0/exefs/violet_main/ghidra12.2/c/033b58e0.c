/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033b58e0; name: FUN_033b58e0
 */


void FUN_033b58e0(long param_1,char *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  
  uVar3 = *(uint *)(param_1 + 0x30);
  if (0 < (int)uVar3) {
    puVar9 = *(ulong **)(param_1 + 0x28);
    lVar8 = 0;
    lVar7 = 8;
    do {
      iVar5 = strcmp((char *)(*puVar9 & 0xfffffffffffffffe),param_2);
      puVar4 = PTR_DAT_047d1a08;
      if (iVar5 == 0) {
        if ((puVar9[1] & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,puVar9[1] - 1,0);
        }
        if ((*puVar9 & 1) != 0) {
          (**(code **)(puVar4 + 8))(0,*puVar9 - 1,0);
        }
        iVar5 = *(int *)(param_1 + 0x30);
        lVar6 = (long)iVar5 + -1;
        *(int *)(param_1 + 0x30) = (int)lVar6;
        if (iVar5 + (int)lVar8 == 1) {
          return;
        }
        if (lVar6 + lVar8 == 0) {
          return;
        }
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar6 * 0x10);
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar7);
        puVar2[-1] = *puVar1;
        *puVar1 = 0;
        *puVar2 = puVar1[1];
        puVar1[1] = 0;
        return;
      }
      lVar8 = lVar8 + -1;
      puVar9 = puVar9 + 2;
      lVar7 = lVar7 + 0x10;
    } while (-lVar8 != (ulong)uVar3);
  }
  return;
}


