/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008eb3e8; name: FUN_008eb3e8
 */


undefined8 FUN_008eb3e8(long *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  if (*(char *)(*(long *)(lVar6 + 0xa0) + 0x752) == '\0') {
    lVar7 = *(long *)(*(long *)(lVar6 + 0x238) + 0x338);
    puVar4 = (undefined8 *)(**(code **)(*(long *)(lVar6 + 0x828) + 0x10))(lVar6 + 0x828,0x2c,0x80);
    uVar3 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar4 + 5) = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *(undefined8 **)(*param_1 + 0x418) = puVar4;
      *(undefined4 *)puVar4 = *(undefined4 *)(lVar7 + 0x18);
      *(undefined4 *)((long)puVar4 + 4) = *(undefined4 *)(lVar7 + 0x1c);
      uVar2 = *(uint *)(*param_1 + 0xac);
      *(uint *)(*param_1 + 0xac) = uVar2 * 0x41c64e6d + 0x3039;
      *(float *)(puVar4 + 2) = (float)uVar2 * 2.3283064e-10;
      uVar2 = *(uint *)(*param_1 + 0xac);
      *(uint *)(*param_1 + 0xac) = uVar2 * 0x41c64e6d + 0x3039;
      *(float *)((long)puVar4 + 0x14) = (float)uVar2 * 2.3283064e-10;
      uVar2 = *(uint *)(*param_1 + 0xac);
      *(uint *)(*param_1 + 0xac) = uVar2 * 0x41c64e6d + 0x3039;
      *(float *)(puVar4 + 3) = (float)uVar2 * 2.3283064e-10;
      uVar2 = *(uint *)(*param_1 + 0xac);
      *(uint *)(*param_1 + 0xac) = uVar2 * 0x41c64e6d + 0x3039;
      *(float *)((long)puVar4 + 0x1c) = (float)uVar2 * 2.3283064e-10;
      FUN_008c8e74(*param_1,4,0x60);
      lVar6 = *param_1;
      iVar1 = (*(int *)(lVar6 + 0x230) +
              *(int *)(*(long *)(*(long *)(lVar6 + 0x238) + 0x338) + 0x10) * *(int *)(lVar6 + 0x230)
              ) * 0xa0 + 0xa0;
      if (iVar1 == 0) {
        return 1;
      }
      lVar7 = *(long *)(lVar6 + 0x418);
      uVar5 = FUN_008c8eb8(lVar6,*(undefined4 *)(*(long *)PTR_DAT_047d26b8 + 0x20),(long)iVar1);
      uVar3 = 1;
      if ((uVar5 & 1) != 0) {
        *(undefined1 *)(lVar7 + 0x20) = 1;
        return uVar3;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


