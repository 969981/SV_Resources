/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030a2aec; name: FUN_030a2aec
 */


void FUN_030a2aec(long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_047d1a08;
  iVar3 = *(int *)(param_1 + 0x20);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x18) + lVar4 * 0x38 + 0x30);
      if (lVar2 != 0) {
        do {
          lVar5 = *(long *)(lVar2 + 0x20);
          (**(code **)(puVar1 + 8))(0,lVar2,0);
          lVar2 = lVar5;
        } while (lVar5 != 0);
        iVar3 = *(int *)(param_1 + 0x20);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x74)) && (*(long *)(param_1 + 0x68) != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,*(long *)(param_1 + 0x68),
               (ulong)*(uint *)(param_1 + 0x74) << 3);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x5c)) && (*(long *)(param_1 + 0x50) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x50),(ulong)*(uint *)(param_1 + 0x5c) << 3);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x4c)) && (*(long *)(param_1 + 0x40) != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,*(long *)(param_1 + 0x40),
               (ulong)*(uint *)(param_1 + 0x4c) << 3);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x3c)) && (*(long *)(param_1 + 0x30) != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,*(long *)(param_1 + 0x30),
               (ulong)*(uint *)(param_1 + 0x3c) * 0xc);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(long *)(param_1 + 0x18) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x18),(ulong)*(uint *)(param_1 + 0x24) * 0x38);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  return;
}


