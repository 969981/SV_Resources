/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0345541c; name: FUN_0345541c
 */


void FUN_0345541c(long param_1,uint param_2,long *param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined4 local_88 [18];
  
  *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)((long)param_3 + 0x34) = param_4;
  puVar4 = PTR_DAT_047e2fd0;
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x18);
    if (puVar5 == (undefined8 *)0x0) {
      local_88[0] = 0;
      plVar8 = (long *)param_3[1];
      if ((*(ushort *)((long)plVar8 + 0x34) | 0x100) == 0x503) {
        (**(code **)(*plVar8 + 0x58))(plVar8,local_88);
      }
      plVar8 = *(long **)PTR_DAT_047e6f38;
      uVar1 = *(uint *)(param_3 + 6);
      nn::os::LockMutex((MutexType *)(plVar8 + 3));
      uVar2 = *(uint *)(plVar8 + 1);
      if (uVar2 != 0) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar1 / uVar2;
        }
        for (lVar6 = *(long *)(*plVar8 + (ulong)(uVar1 - uVar3 * uVar2) * 8); lVar6 != 0;
            lVar6 = *(long *)(lVar6 + 0x70)) {
          if (*(uint *)(lVar6 + 0x54) == uVar1) {
            *(int *)(lVar6 + 0x30) = *(int *)(lVar6 + 0x30) + -1;
            FUN_034b3448(plVar8,uVar1);
            goto LAB_034555c0;
          }
        }
      }
      nn::os::UnlockMutex((MutexType *)(plVar8 + 3));
LAB_034555c0:
      (**(code **)(*(long *)param_3[1] + 0x18))();
      (**(code **)(*param_3 + 8))(param_3);
      (**(code **)(puVar4 + 0x30))(0,param_3);
      return;
    }
    *puVar5 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 **)(param_1 + 0x60) = puVar5;
  }
  *(uint *)(puVar5 + 1) = param_2;
  *(long **)(*(long *)(param_1 + 0x60) + 0x10) = param_3;
  puVar5 = *(undefined8 **)(param_1 + 0x50);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_1 + 0x60);
    *(undefined8 **)(param_1 + 0x58) = puVar5;
    *(undefined8 *)(param_1 + 0x60) = *puVar5;
    *puVar5 = 0;
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    if (param_2 < *(uint *)(puVar5 + 1)) {
      plVar8 = *(long **)(param_1 + 0x60);
      *(long **)(param_1 + 0x50) = plVar8;
      plVar9 = plVar8;
    }
    else {
      do {
        puVar7 = puVar5;
        puVar5 = (undefined8 *)*puVar7;
        if (puVar5 == (undefined8 *)0x0) {
          plVar8 = *(long **)(param_1 + 0x60);
          *(long **)(param_1 + 0x58) = plVar8;
          goto LAB_03455570;
        }
      } while (*(uint *)(puVar5 + 1) <= param_2);
      plVar8 = *(long **)(param_1 + 0x60);
LAB_03455570:
      *puVar7 = plVar8;
      plVar9 = *(long **)(param_1 + 0x60);
    }
    *(long *)(param_1 + 0x60) = *plVar9;
    *plVar8 = (long)puVar5;
  }
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  return;
}


