/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319e624; name: FUN_0319e624
 */


void FUN_0319e624(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = (long)(PTR_DAT_047e5808 + 0x10);
  puVar2 = PTR_PTR_047d1a50;
  if ((int)param_1[0xc] != 0) {
    lVar5 = param_1[0xb];
    lVar6 = (long)(int)param_1[0xc] << 4;
    do {
      lVar1 = lVar5 + lVar6;
      *(undefined4 *)(lVar1 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar1 + -4)) && (*(long *)(lVar1 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,*(long *)(lVar1 + -0x10),(ulong)*(uint *)(lVar1 + -4) << 1);
      }
      lVar6 = lVar6 + -0x10;
      *(undefined8 *)(lVar1 + -0x10) = 0;
      *(undefined4 *)(lVar1 + -4) = 0x80000000;
    } while (lVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x20))
              (puVar2,param_1[0xb],(ulong)*(uint *)((long)param_1 + 100) << 4);
  }
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  param_1[0xb] = 0;
  puVar3 = PTR_DAT_047d1a08;
  if ((int)param_1[10] != 0) {
    lVar5 = param_1[9];
    lVar6 = (long)(int)param_1[10] << 3;
    do {
      uVar4 = *(ulong *)(lVar5 + -8 + lVar6);
      if ((uVar4 & 1) != 0) {
        (**(code **)(puVar3 + 8))(0,uVar4 - 1,0);
      }
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x20))
              (puVar2,param_1[9],(ulong)*(uint *)((long)param_1 + 0x54) << 3);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x20))
              (puVar2,param_1[7],(ulong)*(uint *)((long)param_1 + 0x44) << 1);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x20))
              (puVar2,param_1[5],(ulong)*(uint *)((long)param_1 + 0x34) << 6);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x20))
              (puVar2,param_1[3],(ulong)*(uint *)((long)param_1 + 0x24) << 6);
  }
  param_1[3] = 0;
  puVar2 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}


