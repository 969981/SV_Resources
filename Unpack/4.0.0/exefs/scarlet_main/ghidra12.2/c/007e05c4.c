/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e05c4; name: FUN_007e05c4
 */


void FUN_007e05c4(long param_1,long param_2,byte param_3)

{
  ushort *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ushort *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  local_40[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  uVar12 = *(undefined8 *)(param_1 + 8);
  uVar6 = FUN_007de240(param_2 + 8);
  bVar3 = FUN_007e10ac(uVar12,uVar6);
  if (bVar3 != 0xff) {
    puVar9 = *(ushort **)(param_1 + 8);
    puVar1 = puVar9 + 8;
    lVar8 = (long)*(int *)(puVar9 + 0x12);
    if (*(ushort **)(puVar9 + 0xc) != puVar1) {
      lVar11 = (long)*(ushort **)(puVar9 + 0xc) - lVar8;
      do {
        if (param_3 < *(byte *)(*(long *)(lVar11 + 0x10) + 0x28)) {
          if ((ushort)bVar3 < *puVar9) {
            lVar10 = *(long *)(puVar9 + 4) + (ulong)bVar3 * 0x20;
          }
          else {
            lVar10 = 0;
          }
          FUN_0078f9e0(puVar1,lVar11 + lVar8,lVar10 + lVar8);
          bVar2 = *(byte *)(param_1 + 4);
          goto joined_r0x007e06ec;
        }
        lVar11 = *(long *)(lVar11 + lVar8 + 8) - lVar8;
      } while (lVar11 != (long)puVar1 - lVar8);
    }
    if ((ushort)bVar3 < *puVar9) {
      lVar11 = *(long *)(puVar9 + 4) + (ulong)bVar3 * 0x20;
    }
    else {
      lVar11 = 0;
    }
    FUN_0078f9e0(puVar1,puVar1,lVar11 + lVar8);
    bVar2 = *(byte *)(param_1 + 4);
joined_r0x007e06ec:
    if (bVar2 == bVar3) {
      *(byte *)(param_1 + 5) = param_3;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    else {
      param_3 = *(byte *)(param_1 + 5);
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    if (param_3 != 0xfd) {
      iVar4 = FUN_007e0d98(param_1,1,*(undefined8 *)(param_1 + 0x20));
      *(int *)(param_1 + 0x28) = iVar4;
      uVar5 = FUN_007e0d98(param_1,2,*(long *)(param_1 + 0x20) + (long)iVar4 * 0x30);
      *(undefined4 *)(param_1 + 0x2c) = uVar5;
    }
    plVar7 = *(long **)(param_1 + 0x60);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined1 *)(param_1 + 5));
    }
  }
  return;
}


