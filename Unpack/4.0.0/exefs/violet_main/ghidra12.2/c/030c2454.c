/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030c2454; name: FUN_030c2454
 */


void FUN_030c2454(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  *param_1 = (long)&PTR_LAB_0464d978;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x84)) && (param_1[0xf] != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,param_1[0xf],(ulong)*(uint *)((long)param_1 + 0x84) * 0x30);
  }
  *(undefined4 *)((long)param_1 + 0x84) = 0x80000000;
  lVar3 = param_1[0xb];
  param_1[0xf] = 0;
  if (lVar3 == param_1[8]) {
    *(undefined4 *)(param_1 + 9) = 0;
  }
  lVar2 = param_1[10];
  if (lVar2 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_030c2578;
  }
  uVar4 = param_1[0xc] + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar2 + 0x28) < uVar4) || (*(long *)(lVar2 + 0x38) != uVar4 + lVar3)) {
    if (lVar3 == 0) goto LAB_030c2578;
    if (*(ulong *)(lVar2 + 0x28) < uVar4 + 0x40) {
      *(int *)(*(long *)(lVar2 + 0x30) + 0x20) = *(int *)(*(long *)(lVar2 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar2 + 0x10) + 0x18))
                (*(long **)(lVar2 + 0x10),lVar3 - *(int *)(lVar3 + -4),uVar4 + 0x44);
      goto LAB_030c2578;
    }
    if (*(long *)(lVar2 + 0x38) != uVar4 + lVar3) {
      FUN_031cf778();
      goto LAB_030c2578;
    }
    *(long *)(lVar2 + 0x38) = lVar3;
  }
  else {
    *(long *)(lVar2 + 0x38) = lVar3;
    if (*(long *)(lVar2 + 0x48) != lVar3) goto LAB_030c2578;
  }
  FUN_031cf578();
LAB_030c2578:
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[8],(ulong)*(uint *)((long)param_1 + 0x4c) << 7);
  }
  param_1[8] = 0;
  puVar1 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


