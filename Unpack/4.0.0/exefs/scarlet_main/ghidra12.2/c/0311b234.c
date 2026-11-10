/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0311b234; name: FUN_0311b234
 */


void FUN_0311b234(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)&PTR_LAB_0464f060;
  *(undefined4 *)(param_1 + 0xe) = 0;
  puVar2 = PTR_PTR_047d1a50;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0xd],(ulong)*(uint *)((long)param_1 + 0x74) << 4);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  if ((int)param_1[0xc] != 0) {
    lVar3 = param_1[0xb];
    lVar4 = (long)(int)param_1[0xc] << 4;
    do {
      lVar1 = lVar3 + lVar4;
      *(undefined4 *)(lVar1 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar1 + -4)) && (*(long *)(lVar1 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,*(long *)(lVar1 + -0x10),(ulong)*(uint *)(lVar1 + -4) << 5);
      }
      lVar4 = lVar4 + -0x10;
      *(undefined8 *)(lVar1 + -0x10) = 0;
      *(undefined4 *)(lVar1 + -4) = 0x80000000;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x20))
              (puVar2,param_1[0xb],(ulong)*(uint *)((long)param_1 + 100) << 4);
  }
  lVar4 = param_1[8];
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  if ((lVar4 != 0) && (*(int *)(lVar4 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar2[8],lVar4,0);
    param_1[8] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 9) = 0;
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x20))
              (puVar2,param_1[6],(ulong)*(uint *)((long)param_1 + 0x3c) << 4);
  }
  param_1[6] = 0;
  puVar2 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}


