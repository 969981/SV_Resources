/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0336a904; name: FUN_0336a904
 */


void FUN_0336a904(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  
  lVar3 = *(long *)(param_1 + 0xb8);
  if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar3,0);
    *(undefined **)(param_1 + 0xb8) = &DAT_03d7702c;
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xb4)) && (*(long *)(param_1 + 0xa8) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0xa8),(ulong)*(uint *)(param_1 + 0xb4) * 0xc);
  }
  *(undefined4 *)(param_1 + 0xb4) = 0x80000000;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  puVar2 = PTR_DAT_047d1a08;
  if (*(int *)(param_1 + 0x90) != 0) {
    lVar4 = *(long *)(param_1 + 0x88);
    lVar3 = (long)*(int *)(param_1 + 0x90) << 3;
    do {
      puVar5 = *(ulong **)(lVar4 + -8 + lVar3);
      if (puVar5 != (ulong *)0x0) {
        if ((*puVar5 & 1) != 0) {
          (**(code **)(puVar2 + 8))(0,*puVar5 - 1,0);
        }
        (**(code **)(puVar2 + 8))(0,puVar5,0);
      }
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x94)) && (*(long *)(param_1 + 0x88) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x88),(ulong)*(uint *)(param_1 + 0x94) << 3);
  }
  *(undefined4 *)(param_1 + 0x94) = 0x80000000;
  *(undefined8 *)(param_1 + 0x88) = 0;
  puVar2 = PTR_DAT_047d1a08;
  if (*(int *)(param_1 + 0x80) != 0) {
    lVar4 = *(long *)(param_1 + 0x78);
    lVar3 = (long)*(int *)(param_1 + 0x80) * 0x28;
    do {
      lVar1 = lVar4 + lVar3;
      puVar5 = *(ulong **)(lVar1 + -0x20);
      if (puVar5 != (ulong *)0x0) {
        if ((*(uint *)((long)puVar5 + 0x1c) < 6 &&
             (1 << (ulong)(*(uint *)((long)puVar5 + 0x1c) & 0x1f) & 0x32U) != 0) &&
           (uVar6 = puVar5[2], uVar6 != 0)) {
          FUN_03364aa0(uVar6);
          (**(code **)(puVar2 + 8))(0,uVar6,0);
        }
        if ((puVar5[1] & 1) != 0) {
          (**(code **)(puVar2 + 8))(0,puVar5[1] - 1,0);
        }
        if ((*puVar5 & 1) != 0) {
          (**(code **)(puVar2 + 8))(0,*puVar5 - 1,0);
        }
        (**(code **)(puVar2 + 8))(0,puVar5,0);
      }
      uVar6 = *(ulong *)(lVar1 + -0x28);
      if ((uVar6 & 1) != 0) {
        (**(code **)(puVar2 + 8))(0,uVar6 - 1,0);
      }
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x84)) && (*(long *)(param_1 + 0x78) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x78),(ulong)*(uint *)(param_1 + 0x84) * 0x28);
  }
  *(undefined4 *)(param_1 + 0x84) = 0x80000000;
  *(undefined8 *)(param_1 + 0x78) = 0;
  puVar2 = PTR_DAT_047d1a08;
  if (*(int *)(param_1 + 0x70) != 0) {
    lVar4 = *(long *)(param_1 + 0x68);
    lVar3 = (long)*(int *)(param_1 + 0x70) * 0x28;
    do {
      lVar1 = lVar4 + lVar3;
      puVar5 = *(ulong **)(lVar1 + -0x20);
      if (puVar5 != (ulong *)0x0) {
        if ((*(uint *)((long)puVar5 + 0x1c) < 6 &&
             (1 << (ulong)(*(uint *)((long)puVar5 + 0x1c) & 0x1f) & 0x32U) != 0) &&
           (uVar6 = puVar5[2], uVar6 != 0)) {
          FUN_03364aa0(uVar6);
          (**(code **)(puVar2 + 8))(0,uVar6,0);
        }
        if ((puVar5[1] & 1) != 0) {
          (**(code **)(puVar2 + 8))(0,puVar5[1] - 1,0);
        }
        if ((*puVar5 & 1) != 0) {
          (**(code **)(puVar2 + 8))(0,*puVar5 - 1,0);
        }
        (**(code **)(puVar2 + 8))(0,puVar5,0);
      }
      uVar6 = *(ulong *)(lVar1 + -0x28);
      if ((uVar6 & 1) != 0) {
        (**(code **)(puVar2 + 8))(0,uVar6 - 1,0);
      }
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x74)) && (*(long *)(param_1 + 0x68) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x68),(ulong)*(uint *)(param_1 + 0x74) * 0x28);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 100)) && (*(long *)(param_1 + 0x58) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x58),(ulong)*(uint *)(param_1 + 100) << 2);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*(long *)(param_1 + 0x38) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x38),(ulong)*(uint *)(param_1 + 0x44) << 3);
  }
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  *(undefined8 *)(param_1 + 0x38) = 0;
  puVar2 = PTR_DAT_047d1a08;
  if (*(int *)(param_1 + 0x30) != 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    lVar3 = (long)*(int *)(param_1 + 0x30) << 3;
    do {
      puVar5 = *(ulong **)(lVar4 + -8 + lVar3);
      if (puVar5 != (ulong *)0x0) {
        if ((*(uint *)((long)puVar5 + 0x1c) < 6 &&
             (1 << (ulong)(*(uint *)((long)puVar5 + 0x1c) & 0x1f) & 0x32U) != 0) &&
           (uVar6 = puVar5[2], uVar6 != 0)) {
          FUN_03364aa0(uVar6);
          (**(code **)(puVar2 + 8))(0,uVar6,0);
        }
        if ((puVar5[1] & 1) != 0) {
          (**(code **)(puVar2 + 8))(0,puVar5[1] - 1,0);
        }
        if ((*puVar5 & 1) != 0) {
          (**(code **)(puVar2 + 8))(0,*puVar5 - 1,0);
        }
        (**(code **)(puVar2 + 8))(0,puVar5,0);
      }
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x34)) && (*(long *)(param_1 + 0x28) != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,*(long *)(param_1 + 0x28),(ulong)*(uint *)(param_1 + 0x34) << 3);
  }
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if ((*(ulong *)(param_1 + 0x18) & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(ulong *)(param_1 + 0x18) - 1,0);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0336ae20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,*(ulong *)(param_1 + 8) - 1,0);
  return;
}


