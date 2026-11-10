/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f62280; name: FUN_02f62280
 */


void FUN_02f62280(long param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(param_3 + 8);
  *(undefined8 *)(param_1 + 0x2a40) = *(undefined8 *)(lVar3 + 0x4b0);
  *(undefined8 *)(param_1 + 0x2a90) = **(undefined8 **)(param_3 + 0x4e0);
  *(long *)(param_1 + 0x2a98) = param_2;
  *(long *)(param_1 + 0x2a28) = lVar3 + 0x530;
  lVar6 = 0;
  if (*(char *)(*(long *)(lVar3 + 0x500) + 0xaa0) != '\0') {
    lVar6 = *(long *)(lVar3 + 0x500) + 0xab0;
  }
  *(long *)(param_1 + 0x2a20) = lVar6;
  *(undefined8 *)(param_1 + 0x2a30) = *(undefined8 *)(lVar3 + 0x38);
  *(undefined8 *)(param_1 + 0x2a38) = *(undefined8 *)(lVar3 + 0x150);
  *(undefined8 *)(param_1 + 0x2a78) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + 0x2a70) = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_1 + 0x2a88) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_1 + 0x2a80) = *(undefined8 *)(param_3 + 0x20);
  uVar7 = *(undefined8 *)(lVar3 + 0x4e0);
  *(undefined8 *)(param_1 + 0x2a58) = *(undefined8 *)(lVar3 + 0x4e8);
  *(undefined8 *)(param_1 + 0x2a50) = uVar7;
  uVar8 = *(undefined8 *)(lVar3 + 0x4f8);
  uVar7 = *(undefined8 *)(lVar3 + 0x4f0);
  *(undefined8 *)(param_1 + 0x2aa0) = param_4;
  *(undefined8 *)(param_1 + 0x2a68) = uVar8;
  *(undefined8 *)(param_1 + 0x2a60) = uVar7;
  iVar1 = *(int *)(param_2 + 8);
  lVar6 = (long)iVar1;
  if ((int)(*(uint *)(param_1 + 0x2ab4) & 0x7fffffff) < iVar1) {
    FUN_02f63d4c(param_1 + 0x2aa8,lVar6);
  }
  iVar2 = *(int *)(param_1 + 0x2ab0);
  lVar3 = (long)iVar2;
  if (iVar2 < iVar1) {
    lVar5 = *(long *)(param_1 + 0x2aa8);
    puVar4 = (undefined8 *)(lVar5 + lVar3 * 0x610);
    *(int *)(param_1 + 0x2ab0) = iVar1;
    do {
      *puVar4 = 0;
      puVar4[2] = puVar4 + 6;
      *(undefined4 *)(puVar4 + 3) = 0;
      *(undefined4 *)((long)puVar4 + 0x1c) = 0x80000018;
      puVar4[0x20] = 0;
      puVar4[0x22] = puVar4 + 0x26;
      *(undefined4 *)(puVar4 + 0x23) = 0;
      *(undefined4 *)((long)puVar4 + 0x11c) = 0x80000018;
      puVar4[0x40] = 0;
      puVar4[0x42] = puVar4 + 0x46;
      *(undefined4 *)(puVar4 + 0x43) = 0;
      *(undefined4 *)((long)puVar4 + 0x21c) = 0x80000018;
      puVar4[0x60] = 0;
      puVar4[0x62] = puVar4 + 0x66;
      *(undefined4 *)(puVar4 + 99) = 0;
      *(undefined4 *)((long)puVar4 + 0x31c) = 0x80000018;
      puVar4[0x80] = 0;
      puVar4[0x82] = puVar4 + 0x86;
      *(undefined4 *)(puVar4 + 0x83) = 0;
      *(undefined4 *)((long)puVar4 + 0x41c) = 0x80000018;
      puVar4[0xa0] = 0;
      puVar4[0xa2] = puVar4 + 0xa6;
      *(undefined4 *)(puVar4 + 0xa3) = 0;
      *(undefined4 *)((long)puVar4 + 0x51c) = 0x80000018;
      *(undefined1 *)(puVar4 + 0xc0) = 0;
      puVar4 = puVar4 + 0xc2;
    } while (puVar4 != (undefined8 *)(lVar5 + lVar6 * 0x610));
  }
  else if (iVar1 < iVar2) {
    *(int *)(param_1 + 0x2ab0) = iVar1;
    lVar6 = lVar3 * -0x610 + lVar6 * 0x610;
    lVar3 = lVar3 * 0x610 + *(long *)(param_1 + 0x2aa8);
    do {
      lVar3 = lVar3 + -0x610;
      FUN_02f63808(lVar3);
      lVar6 = lVar6 + 0x610;
    } while (lVar6 != 0);
  }
  FUN_03232938(param_1 + 0x130,*(undefined4 *)(param_2 + 8),0,1);
  return;
}


