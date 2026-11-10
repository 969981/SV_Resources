/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03117234; name: FUN_03117234
 */


void FUN_03117234(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)&PTR_LAB_0464ed90;
  param_1[4] = (long)&PTR_LAB_0464ede0;
  puVar1 = PTR_DAT_047e4f38;
  iVar2 = *(int *)PTR_DAT_047e4f38;
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x1000b8);
  if (lVar4 == 0) {
    lVar4 = FUN_00e5d3b4();
    *(long *)(lVar3 + 0x1000b8) = lVar4;
  }
  if (*(long *)(lVar4 + (long)iVar2 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  *(undefined4 *)(param_1 + 0x124) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x924)) && (param_1[0x123] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x123],(ulong)*(uint *)((long)param_1 + 0x924) * 0x30);
  }
  param_1[0x123] = 0;
  *(undefined4 *)((long)param_1 + 0x924) = 0x80000000;
  iVar2 = *(int *)puVar1;
  lVar4 = *(long *)(lVar3 + 0x1000b8);
  if (lVar4 == 0) {
    lVar4 = FUN_00e5d3b4();
    *(long *)(lVar3 + 0x1000b8) = lVar4;
  }
  if (*(long *)(lVar4 + (long)iVar2 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  *(undefined4 *)(param_1 + 0x126) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x934)) && (param_1[0x125] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x125],(ulong)*(uint *)((long)param_1 + 0x934) << 3);
  }
  param_1[0x125] = 0;
  *(undefined4 *)((long)param_1 + 0x934) = 0x80000000;
  *(undefined4 *)(param_1 + 0x124) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x924)) && (param_1[0x123] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x123],(ulong)*(uint *)((long)param_1 + 0x924) * 0x30);
  }
  param_1[0x123] = 0;
  *(undefined4 *)((long)param_1 + 0x924) = 0x80000000;
  puVar1 = PTR_DAT_047e5550 + 0x10;
  param_1[4] = (long)(PTR_DAT_047e5550 + 0x50);
  *param_1 = (long)puVar1;
  *(undefined4 *)(param_1 + 0x99) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4cc)) && (param_1[0x98] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x98],(ulong)*(uint *)((long)param_1 + 0x4cc) << 6);
  }
  param_1[0x98] = 0;
  *(undefined4 *)((long)param_1 + 0x4cc) = 0x80000000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xe],(ulong)*(uint *)((long)param_1 + 0x7c) << 6);
  }
  param_1[0xe] = 0;
  puVar1 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


