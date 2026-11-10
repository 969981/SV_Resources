/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e0448; name: FUN_007e0448
 */


void FUN_007e0448(long param_1,long param_2,char param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  undefined8 uVar11;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  local_40[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  uVar11 = *(undefined8 *)(param_1 + 8);
  uVar5 = FUN_007de240(param_2 + 8);
  bVar2 = FUN_007e10ac(uVar11,uVar5);
  if (bVar2 != 0xff) {
    lVar8 = *(long *)(param_1 + 8);
    lVar1 = lVar8 + 0x10;
    lVar7 = (long)*(int *)(lVar8 + 0x24);
    if (*(long *)(lVar8 + 0x18) != lVar1) {
      bVar10 = 0;
      lVar9 = *(long *)(lVar8 + 0x18) - lVar7;
      do {
        if (bVar10 < *(byte *)(*(long *)(lVar9 + 0x10) + 0x28)) {
          FUN_0078f9e0(lVar1,lVar9 + lVar7,*(long *)(lVar8 + 8) + (ulong)bVar2 * 0x20 + lVar7);
          bVar10 = *(byte *)(param_1 + 4);
          goto joined_r0x007e0550;
        }
        lVar9 = *(long *)(lVar9 + lVar7 + 8) - lVar7;
        bVar10 = bVar10 + 1;
      } while (lVar9 != lVar1 - lVar7);
    }
    FUN_0078f9e0(lVar1,lVar1,*(long *)(lVar8 + 8) + (ulong)bVar2 * 0x20 + lVar7);
    bVar10 = *(byte *)(param_1 + 4);
joined_r0x007e0550:
    if (bVar10 == bVar2) {
      *(char *)(param_1 + 5) = param_3;
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    else {
      param_3 = *(char *)(param_1 + 5);
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    if (param_3 != -3) {
      iVar3 = FUN_007e0d98(param_1,1,*(undefined8 *)(param_1 + 0x20));
      *(int *)(param_1 + 0x28) = iVar3;
      uVar4 = FUN_007e0d98(param_1,2,*(long *)(param_1 + 0x20) + (long)iVar3 * 0x30);
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
    }
    plVar6 = *(long **)(param_1 + 0x60);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,*(undefined1 *)(param_1 + 5));
    }
  }
  return;
}


