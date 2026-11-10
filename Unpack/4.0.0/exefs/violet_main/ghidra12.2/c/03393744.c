/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03393744; name: FUN_03393744
 */


void FUN_03393744(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[0x20];
  *param_1 = (long)&PTR_FUN_047b2870;
  puVar1 = PTR_DAT_047d1a08;
  if (plVar3 != (long *)0x0) {
    lVar2 = plVar3[2];
    if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar2,0);
      plVar3[2] = (long)&DAT_03d7702c;
      *(undefined4 *)(plVar3 + 3) = 0;
    }
    *(undefined4 *)(plVar3 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)plVar3 + 0xc)) && (*plVar3 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,*plVar3,(ulong)*(uint *)((long)plVar3 + 0xc) << 2);
    }
    *plVar3 = 0;
    *(undefined4 *)((long)plVar3 + 0xc) = 0x80000000;
    (**(code **)(puVar1 + 8))(0,plVar3,0);
  }
  param_1[0x15] = (long)(PTR_DAT_047e5b60 + 0x10);
  FUN_031d98b8(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xa4)) && (param_1[0x13] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x13],(ulong)*(uint *)((long)param_1 + 0xa4) << 4);
  }
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x94)) && (param_1[0x11] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x11],(ulong)*(uint *)((long)param_1 + 0x94) << 3);
  }
  param_1[0x11] = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x84)) && (param_1[0xf] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xf],(ulong)*(uint *)((long)param_1 + 0x84) << 3);
  }
  param_1[0xf] = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xd],(ulong)*(uint *)((long)param_1 + 0x74) << 3);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xb],(ulong)*(uint *)((long)param_1 + 100) << 3);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))();
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))();
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  puVar1 = PTR_DAT_047e66d8;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if ((-1 < (int)*(uint *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[1],(ulong)*(uint *)((long)param_1 + 0x14) << 3);
  }
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
  return;
}


