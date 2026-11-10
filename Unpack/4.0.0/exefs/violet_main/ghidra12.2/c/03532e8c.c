/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03532e8c; name: FUN_03532e8c
 */


void FUN_03532e8c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ushort uVar3;
  int iVar4;
  long *plVar5;
  undefined4 *puVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x78) + 600))();
  puVar2 = PTR_DAT_047e2fd0;
  if (uVar3 != 0) {
    uVar8 = 0;
    puVar1 = PTR_DAT_047e7560 + 0x10;
    do {
      if (uVar8 < *(uint *)(*(long *)(param_1 + 0x78) + 0x108)) {
        plVar7 = *(long **)(*(long *)(*(long *)(param_1 + 0x78) + 0x100) + uVar8 * 8);
      }
      else {
        plVar7 = (long *)0x0;
      }
      if ((*(int *)((long)plVar7 + 0x134) == 3) &&
         (plVar5 = (long *)(**(code **)(puVar2 + 0x10))(0,0x38), plVar5 != (long *)0x0)) {
        *plVar5 = (long)puVar1;
        plVar5[1] = param_1;
        plVar5[2] = (long)plVar7;
        plVar5[3] = 0;
        plVar5[4] = 0;
        plVar5[5] = 0;
        (**(code **)(*plVar7 + 0x28))(plVar7);
        puVar6 = *(undefined4 **)(plVar5[2] + 0x140);
        if ((puVar6 != (undefined4 *)0x0) &&
           (iVar4 = FUN_034de99c(plVar5,*puVar6,puVar6[2]), iVar4 == 1)) {
          FUN_035388bc(plVar5);
        }
        if (*(long *)(param_1 + 0x88) == 0) {
          *(long **)(param_1 + 0x88) = plVar5;
          plVar5[6] = 0;
        }
        else {
          plVar5[6] = *(long *)(param_1 + 0x88);
          *(long **)(param_1 + 0x88) = plVar5;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar3 != uVar8);
  }
  return;
}


