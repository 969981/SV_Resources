/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b4848; name: FUN_034b4848
 */


void FUN_034b4848(undefined8 *param_1,uint param_2,ulong *param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  uint uVar9;
  
  nn::os::LockMutex((MutexType *)(param_1 + 4));
  puVar4 = (uint *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  uVar8 = (ulong)uVar2;
  puVar5 = puVar4;
  if (uVar2 == 0) {
LAB_034b48d0:
    if (puVar5 == puVar4 + uVar8 * 0xc) goto LAB_034b48e0;
    puVar7 = (ulong *)(puVar5 + 4);
  }
  else {
    lVar6 = uVar8 * 0x30;
    do {
      if ((*puVar5 == param_2) && (*(ulong *)(puVar5 + 2) == param_4)) goto LAB_034b48d0;
      lVar6 = lVar6 + -0x30;
      puVar5 = puVar5 + 0xc;
    } while (lVar6 != 0);
LAB_034b48e0:
    puVar5 = puVar4;
    if (uVar2 == 0) {
LAB_034b4924:
      if (puVar5 == puVar4 + uVar8 * 0xc) goto LAB_034b497c;
      puVar7 = (ulong *)(puVar5 + 4);
    }
    else {
      lVar6 = uVar8 * 0x30;
      do {
        if ((*puVar5 == param_2) && (*(ulong *)(puVar5 + 2) == param_4)) goto LAB_034b4924;
        lVar6 = lVar6 + -0x30;
        puVar5 = puVar5 + 0xc;
      } while (lVar6 != 0);
LAB_034b497c:
      uVar9 = *(uint *)((long)param_1 + 0xc);
      if (uVar9 <= uVar2) {
        iVar1 = uVar9 + (uVar9 >> 1);
        if (uVar9 == 0) {
          iVar1 = 1;
        }
        uVar9 = iVar1 + uVar9;
        puVar4 = (uint *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,puVar4,(ulong)uVar9 * 0x30);
        if (puVar4 == (uint *)0x0) goto LAB_034b4960;
        *param_1 = puVar4;
        *(uint *)((long)param_1 + 0xc) = uVar9;
      }
      if (uVar9 <= uVar2) goto LAB_034b4960;
      uVar2 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar2 + 1;
      if (puVar4 == (uint *)0x0) goto LAB_034b4960;
      puVar7 = (ulong *)(puVar4 + (ulong)uVar2 * 0xc);
      *puVar7 = (ulong)param_2;
      puVar7[1] = param_4;
      uVar2 = *(uint *)(param_1 + 1);
      puVar7 = puVar7 + 2;
    }
    if (uVar2 != 0) {
      uVar3 = nn::os::GetSystemTick();
      param_1[8] = uVar3;
    }
  }
  uVar8 = param_3[1];
  puVar7[1] = *param_3;
  puVar7[2] = uVar8;
  *puVar7 = param_1[8];
  *(uint *)(puVar7 + 3) = *(uint *)(*(long *)PTR_DAT_047e2fe8 + 0x78);
LAB_034b4960:
  nn::os::UnlockMutex((MutexType *)(param_1 + 4));
  return;
}


