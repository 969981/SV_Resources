/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c570c; name: FUN_034c570c
 */


void FUN_034c570c(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long local_18;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 != 0) {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = (uint)param_2 / uVar1;
    }
    uVar8 = (ulong)((uint)param_2 - uVar3 * uVar1);
    plVar5 = *(long **)(*(long *)(param_1 + 0x30) + uVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return;
    }
    if (plVar5[1] == param_2) {
      puVar9 = (undefined8 *)plVar5[2];
      *(long *)(*(long *)(param_1 + 0x30) + uVar8 * 8) = *plVar5;
    }
    else {
      do {
        plVar6 = plVar5;
        plVar5 = (long *)*plVar6;
        if (plVar5 == (long *)0x0) {
          return;
        }
      } while (plVar5[1] != param_2);
      puVar9 = (undefined8 *)plVar5[2];
      *plVar6 = *plVar5;
    }
    puVar4 = PTR_DAT_047e2fd0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
    iVar2 = *(int *)(puVar9 + 0x10);
    uVar1 = iVar2 - 1;
    *(undefined1 *)((long)puVar9 + 0x84) = 0;
    *(uint *)(puVar9 + 0x10) = uVar1;
    if (iVar2 == 0 || uVar1 == 0) {
      if (uVar1 != 0) {
        return;
      }
      lVar7 = puVar9[5];
      if (lVar7 == 0) goto LAB_034c5820;
      uVar1 = ((uint)lVar7 ^ (uint)lVar7 >> 0x10) * -0x7a143595;
      uVar1 = (uVar1 ^ uVar1 >> 0xd) * -0x3d4d51cb;
      local_18 = lVar7;
      FUN_034c6294(&DAT_048b02b8,&local_18,uVar1 ^ uVar1 >> 0x10);
      uVar1 = *(uint *)(puVar9 + 0x10);
    }
    else if (1 < uVar1) {
      return;
    }
    if (uVar1 == 0) {
LAB_034c5820:
      (**(code **)*puVar9)(puVar9);
                    /* WARNING: Could not recover jumptable at 0x034c5848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(puVar4 + 0x30))(4,puVar9);
      return;
    }
  }
  return;
}


