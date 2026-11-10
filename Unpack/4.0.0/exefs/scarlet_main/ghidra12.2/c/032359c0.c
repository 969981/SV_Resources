/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032359c0; name: FUN_032359c0
 */


void FUN_032359c0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_047e6028 + 0xe8;
  *param_1 = (long)(PTR_DAT_047e6028 + 0x10);
  param_1[3] = (long)puVar1;
  FUN_0323caf4();
  iVar4 = (int)param_1[9];
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      if ((long *)param_1[lVar5 + 10] != (long *)0x0) {
        (**(code **)(*(long *)param_1[lVar5 + 10] + 8))();
        iVar4 = (int)param_1[9];
      }
      param_1[lVar5 + 10] = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  puVar3 = PTR_PTR_047d1a50;
  puVar1 = PTR_DAT_047d1a08;
  plVar6 = (long *)param_1[5];
  if (plVar6 != (long *)0x0) {
    lVar5 = *plVar6;
    while (lVar5 != 0) {
      lVar7 = *(long *)(lVar5 + 0xfc0);
      lVar8 = 0xfc0;
      do {
        lVar2 = lVar5 + lVar8;
        *(undefined4 *)(lVar2 + -0x18) = 0;
        if ((-1 < (int)*(uint *)(lVar2 + -0x14)) && (*(long *)(lVar2 + -0x20) != 0)) {
          (**(code **)(*(long *)puVar3 + 0x20))
                    (puVar3,*(long *)(lVar2 + -0x20),(ulong)*(uint *)(lVar2 + -0x14) << 3);
        }
        *(undefined8 *)(lVar2 + -0x20) = 0;
        *(undefined4 *)(lVar2 + -0x14) = 0x80000000;
        *(undefined4 *)(lVar2 + -0x38) = 0;
        if ((-1 < (int)*(uint *)(lVar2 + -0x34)) && (*(long *)(lVar2 + -0x40) != 0)) {
          (**(code **)(*(long *)puVar3 + 0x20))
                    (puVar3,*(long *)(lVar2 + -0x40),(ulong)*(uint *)(lVar2 + -0x34) << 3);
        }
        lVar8 = lVar8 + -0x60;
        *(undefined8 *)(lVar2 + -0x40) = 0;
        *(undefined4 *)(lVar2 + -0x34) = 0x80000000;
      } while (lVar8 != 0);
      (**(code **)(puVar1 + 8))(0,lVar5,0);
      *plVar6 = lVar7;
      lVar5 = lVar7;
    }
    nn::os::FinalizeMutex((MutexType *)(plVar6 + 2));
    (**(code **)(puVar1 + 8))(0,plVar6,0);
  }
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 8))();
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x25c)) && (param_1[0x4a] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[0x4a],(ulong)*(uint *)((long)param_1 + 0x25c) << 2);
  }
  param_1[0x4a] = 0;
  *(undefined4 *)((long)param_1 + 0x25c) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
              (PTR_PTR_047d1a50,param_1[7],(ulong)*(uint *)((long)param_1 + 0x44) << 4);
  }
  param_1[7] = 0;
  puVar1 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


