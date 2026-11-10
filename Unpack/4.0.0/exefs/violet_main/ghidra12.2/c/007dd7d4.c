/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007dd7d4; name: FUN_007dd7d4
 */


void FUN_007dd7d4(undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined4 local_58 [4];
  undefined4 local_48 [2];
  
  puVar3 = *(undefined8 **)(param_2 + 0xa0);
  uVar2 = *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) - 1 & 0xffff;
  if (puVar3 == (undefined8 *)0x0) {
    uVar7 = (ulong)(uVar2 * 0x38);
    uVar4 = FUN_0078a12c();
    puVar3 = (undefined8 *)FUN_007bf9f0(uVar7,uVar4);
    if (uVar2 != 0 && puVar3 != (undefined8 *)0x0) {
      lVar6 = (long)puVar3 + 3;
      do {
        *(undefined4 *)(lVar6 + -3) = 0;
        lVar6 = lVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
    }
    *(undefined8 **)(param_2 + 0xa0) = puVar3;
    if (uVar2 == 0 || puVar3 == (undefined8 *)0x0) goto LAB_007dd8d4;
  }
  else if (uVar2 == 0 || puVar3 == (undefined8 *)0x0) goto LAB_007dd8d4;
  *(undefined8 **)(param_2 + 0x90) = puVar3;
  lVar6 = param_2 + 0x78;
  *(uint *)(param_2 + 0x98) = uVar2;
  *puVar3 = 0;
  puVar3[1] = 0;
  FUN_0078f9e0(lVar6,lVar6,(long)*(int *)(param_2 + 0x8c) + (long)puVar3);
  if (uVar2 != 1) {
    lVar10 = 0;
    lVar8 = (ulong)uVar2 - 1;
    do {
      lVar1 = *(long *)(param_2 + 0x90) + lVar10;
      puVar3 = (undefined8 *)(lVar1 + 0x38);
      *puVar3 = 0;
      *(undefined8 *)(lVar1 + 0x40) = 0;
      FUN_0078f9e0(lVar6,lVar6,(long)*(int *)(param_2 + 0x8c) + (long)puVar3);
      lVar10 = lVar10 + 0x38;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
LAB_007dd8d4:
  puVar3 = (undefined8 *)(param_2 + 0x60);
  if (*(undefined8 **)(param_2 + 0x68) != puVar3) {
    puVar5 = *(undefined8 **)(param_2 + 0x68);
    do {
      puVar9 = (undefined8 *)puVar5[1];
      *puVar5 = 0;
      puVar5[1] = 0;
      FUN_0078fa04(param_2 + 0x78,param_2 + 0x78,(long)*(int *)(param_2 + 0x8c) + (long)puVar5);
      puVar5 = puVar9;
    } while (puVar9 != puVar3);
  }
  FUN_0078f9d4(puVar3);
  puVar3 = *(undefined8 **)(param_2 + 0xe8);
  if (puVar3 == (undefined8 *)0x0) {
    uVar7 = (ulong)(uVar2 << 5);
    uVar4 = FUN_0078a12c();
    puVar3 = (undefined8 *)FUN_007bf9f0(uVar7,uVar4);
    if ((uVar2 != 0) && (puVar3 != (undefined8 *)0x0)) {
      lVar6 = (long)puVar3 + 3;
      do {
        *(undefined4 *)(lVar6 + -3) = 0;
        lVar6 = lVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
    }
    *(undefined8 **)(param_2 + 0xe8) = puVar3;
  }
  puVar5 = (undefined8 *)(param_2 + 0xa8);
  if ((uVar2 != 0) && (puVar3 != (undefined8 *)0x0)) {
    *(undefined8 **)(param_2 + 0xd8) = puVar3;
    lVar6 = param_2 + 0xc0;
    *(uint *)(param_2 + 0xe0) = uVar2;
    *puVar3 = 0;
    puVar3[1] = 0;
    FUN_0078f9e0(lVar6,lVar6,(long)*(int *)(param_2 + 0xd4) + (long)puVar3);
    if (uVar2 != 1) {
      lVar10 = 0;
      lVar8 = (ulong)uVar2 - 1;
      do {
        lVar1 = *(long *)(param_2 + 0xd8) + lVar10;
        puVar3 = (undefined8 *)(lVar1 + 0x20);
        *puVar3 = 0;
        *(undefined8 *)(lVar1 + 0x28) = 0;
        FUN_0078f9e0(lVar6,lVar6,(long)*(int *)(param_2 + 0xd4) + (long)puVar3);
        lVar10 = lVar10 + 0x20;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  if (*(undefined8 **)(param_2 + 0xb0) != puVar5) {
    puVar3 = *(undefined8 **)(param_2 + 0xb0);
    do {
      puVar9 = (undefined8 *)puVar3[1];
      *puVar3 = 0;
      puVar3[1] = 0;
      FUN_0078fa04(param_2 + 0xc0,param_2 + 0xc0,(long)*(int *)(param_2 + 0xd4) + (long)puVar3);
      puVar3 = puVar9;
    } while (puVar9 != puVar5);
  }
  FUN_0078f9d4(puVar5);
  local_58[0] = 0;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
  FUN_00cbd7c0(param_1,local_58);
  return;
}


