/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324c440; name: FUN_0324c440
 */


void FUN_0324c440(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = param_1[7];
  *param_1 = (long)(PTR_DAT_047e6070 + 0x10);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar2,0);
    param_1[7] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[5],(ulong)*(uint *)((long)param_1 + 0x34) << 4);
  }
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  param_1[5] = 0;
  puVar1 = PTR_DAT_047d1a08;
  if ((int)param_1[4] != 0) {
    lVar4 = param_1[3];
    lVar2 = (long)(int)param_1[4] << 4;
    do {
      uVar3 = *(ulong *)(lVar4 + -8 + lVar2);
      if ((uVar3 & 1) != 0) {
        (**(code **)(puVar1 + 8))(0,uVar3 - 1,0);
      }
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[3],(ulong)*(uint *)((long)param_1 + 0x24) << 4);
  }
  param_1[3] = 0;
  puVar1 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


