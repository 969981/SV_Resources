/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030924a0; name: FUN_030924a0
 */


void FUN_030924a0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_047d1a50;
  if ((int)param_1[1] != 0) {
    lVar4 = (long)(int)param_1[1] * 0x38;
    lVar3 = *param_1;
    do {
      lVar1 = lVar3 + lVar4;
      *(undefined4 *)(lVar1 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar1 + -4)) && (*(long *)(lVar1 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,*(long *)(lVar1 + -0x10),(ulong)*(uint *)(lVar1 + -4) << 2);
      }
      *(undefined8 *)(lVar1 + -0x10) = 0;
      *(undefined4 *)(lVar1 + -4) = 0x80000000;
      *(undefined4 *)(lVar1 + -0x18) = 0;
      if ((-1 < (int)*(uint *)(lVar1 + -0x14)) && (*(long *)(lVar1 + -0x20) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,*(long *)(lVar1 + -0x20),(ulong)*(uint *)(lVar1 + -0x14) << 2);
      }
      *(undefined8 *)(lVar1 + -0x20) = 0;
      *(undefined4 *)(lVar1 + -0x14) = 0x80000000;
      *(undefined4 *)(lVar1 + -0x28) = 0;
      if ((-1 < (int)*(uint *)(lVar1 + -0x24)) && (*(long *)(lVar1 + -0x30) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,*(long *)(lVar1 + -0x30),(ulong)*(uint *)(lVar1 + -0x24) * 0x14);
      }
      lVar4 = lVar4 + -0x38;
      *(undefined8 *)(lVar1 + -0x30) = 0;
      *(undefined4 *)(lVar1 + -0x24) = 0x80000000;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(*(long *)puVar2 + 0x20))
              (puVar2,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) * 0x38);
  }
  lVar4 = param_1[2];
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  if ((lVar4 != 0) && (*(int *)(lVar4 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar2[8],lVar4,0);
    param_1[2] = (long)&DAT_03d7702c;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  return;
}


