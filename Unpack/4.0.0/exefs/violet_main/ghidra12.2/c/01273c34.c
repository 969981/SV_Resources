/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01273c34; name: FUN_01273c34
 */


/* WARNING: Removing unreachable block (ram,0x01273e70) */

void FUN_01273c34(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long local_60;
  long local_58;
  long local_50;
  long *local_48;
  
  *(undefined1 **)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = &DAT_cbf29ce484222645;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar2 = PTR_DAT_047d3e30;
  puVar1 = (undefined8 *)(*param_2 + (ulong)*(uint *)(param_1 + 100));
  *puVar1 = *(undefined8 *)PTR_DAT_047d3e30;
  puVar1[1] = *(undefined8 *)(puVar2 + 8);
  puVar1[2] = *(undefined8 *)(puVar2 + 0x10);
  plVar6 = *(long **)(puVar2 + 0x18);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar5 = (long *)puVar1[3];
  puVar1[3] = plVar6;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  lVar8 = *(long *)(param_1 + 8);
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar8 == lVar7) {
    lVar7 = lVar8;
  }
  else {
    do {
      FUN_00c98090(&local_60,lVar8);
      lVar3 = local_60;
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      if (lVar3 == -0x5339f185a24ba8a5) goto LAB_01273d44;
      lVar8 = lVar8 + 0x10;
    } while (lVar7 != lVar8);
    lVar8 = lVar7;
LAB_01273d44:
    lVar7 = *(long *)(param_1 + 0x10);
  }
  if ((lVar8 != 0) && (lVar7 != lVar8)) {
    FUN_00d09648(&local_60);
    lVar8 = local_60;
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    *(long *)(*param_2 + (ulong)*(uint *)(param_1 + 0x60)) = lVar8;
    lVar7 = *(long *)(param_1 + 0x10);
  }
  lVar8 = *(long *)(param_1 + 8);
  if (lVar8 != lVar7) {
    do {
      FUN_00c98090(&local_60,lVar8);
      lVar3 = local_60;
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      if (lVar3 == -0x2e83b275139e13af) goto LAB_01273dec;
      lVar8 = lVar8 + 0x10;
    } while (lVar7 != lVar8);
    lVar8 = lVar7;
LAB_01273dec:
    lVar7 = *(long *)(param_1 + 0x10);
  }
  if ((lVar8 != 0) && (lVar7 != lVar8)) {
    FUN_01273ec4(&local_60,lVar8);
    plVar6 = (long *)(*param_2 + (ulong)*(uint *)(param_1 + 100));
    plVar5 = (long *)plVar6[3];
    *plVar6 = local_60;
    plVar6[1] = local_58;
    plVar6[2] = local_50;
    plVar6[3] = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    plVar6[3] = (long)local_48;
  }
  return;
}


