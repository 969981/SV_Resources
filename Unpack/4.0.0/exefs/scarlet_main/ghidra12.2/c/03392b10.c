/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03392b10; name: FUN_03392b10
 */


void FUN_03392b10(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x210);
  if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar3,0);
    *(undefined **)(param_1 + 0x210) = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0x218) = 0;
  }
  *(undefined4 *)(param_1 + 0x208) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x20c)) && (*(long *)(param_1 + 0x200) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x200),(ulong)*(uint *)(param_1 + 0x20c) << 3);
  }
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 500)) && (*(long *)(param_1 + 0x1e8) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x1e8),(ulong)*(uint *)(param_1 + 500) << 3);
  }
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 500) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x1e4)) && (*(long *)(param_1 + 0x1d8) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x1d8),(ulong)*(uint *)(param_1 + 0x1e4) << 3);
  }
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  if ((-1 < *(int *)(param_1 + 0x1d4)) && (*(long *)(param_1 + 0x1c8) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x168) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x16c)) && (*(long *)(param_1 + 0x160) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x160),(ulong)*(uint *)(param_1 + 0x16c) << 3);
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x158) = 0;
  if ((-1 < *(int *)(param_1 + 0x15c)) && (*(long *)(param_1 + 0x150) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0x80000000;
  puVar2 = PTR_PTR_047d1a50;
  if (*(int *)(param_1 + 0x138) != 0) {
    lVar4 = *(long *)(param_1 + 0x130);
    lVar3 = (long)*(int *)(param_1 + 0x138) * 0x18;
    do {
      lVar1 = lVar4 + lVar3;
      *(undefined4 *)(lVar1 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar1 + -4)) && (*(long *)(lVar1 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,*(long *)(lVar1 + -0x10),(ulong)*(uint *)(lVar1 + -4) << 4);
      }
      lVar3 = lVar3 + -0x18;
      *(undefined8 *)(lVar1 + -0x10) = 0;
      *(undefined4 *)(lVar1 + -4) = 0x80000000;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x13c)) && (*(long *)(param_1 + 0x130) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x130),(ulong)*(uint *)(param_1 + 0x13c) * 0x18)
    ;
  }
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x120) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x124)) && (*(long *)(param_1 + 0x118) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x118),(ulong)*(uint *)(param_1 + 0x124) << 3);
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0x80000000;
  FUN_03393744(param_1 + 8);
  return;
}


