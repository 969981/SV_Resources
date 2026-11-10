/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fbf9a8; name: FUN_02fbf9a8
 */


void FUN_02fbf9a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,long param_6,undefined8 param_7,undefined2 param_8,undefined2 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  lVar6 = tpidr_el0;
  lVar3 = *(long *)(lVar6 + 0x1000b8);
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar6 + 0x1000b8) = lVar3;
  }
  plVar5 = *(long **)(lVar3 + 0x3e0);
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
      (**(code **)(lVar6 + 0x18))("CreateSolverTask",0x10,*(undefined8 *)(lVar6 + 0x28));
      if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
        (**(code **)(lVar6 + 0x18))("BuildGraph",10,*(undefined8 *)(lVar6 + 0x28));
      }
    }
    puVar1 = (undefined8 *)plVar5[2];
    uVar4 = (long)puVar1 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar5[3]) && (plVar5[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "LtCreateSolverTask";
      puVar1[2] = "StBuildGraph";
      uVar2 = nn::os::GetSystemTick();
      puVar1[1] = uVar2;
    }
    if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (plVar5[6] != 0)) {
      puVar1 = (undefined8 *)plVar5[2];
      uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar5[3]) && (plVar5[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar5[6] + 8);
      }
    }
  }
  lVar3 = *(long *)(param_3 + 8);
  lVar6 = *(long *)(lVar3 + 0x4b0);
  if ((int)(*(uint *)(param_1 + 0xc) & 0x7fffffff) <
      *(int *)(lVar6 + 0x1c) + *(int *)(lVar6 + 0x20) * 2) {
    FUN_02fc0064(param_1,PTR_PTR_047d1a50);
  }
  if (*(char *)(lVar3 + 0x5b8) == '\0') {
    FUN_02fc0210(param_2,param_1,lVar3 + 0x530,lVar6,param_5,*(long *)(param_6 + 0x48) + 0x78,3,
                 param_8,param_9,param_7);
  }
  else {
    FUN_02fc10a8(param_2,param_1,*(undefined4 *)(lVar3 + 0x5a0),*(undefined4 *)(lVar3 + 0x5a8),lVar6
                 ,*(long *)(param_6 + 0x48) + 0x78,3,param_5,param_8,param_9,param_7);
  }
  if (plVar5 != (long *)0x0) {
    lVar6 = *plVar5;
    if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (plVar5[6] != 0)) {
      puVar1 = (undefined8 *)plVar5[2];
      uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar5[3]) && (plVar5[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar5[6] + 8);
      }
    }
    puVar1 = (undefined8 *)plVar5[2];
    uVar4 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar5[3]) && (plVar5[2] = uVar4, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c3697b;
      uVar2 = nn::os::GetSystemTick();
      puVar1[1] = uVar2;
    }
    if (*(code **)(lVar6 + 0x20) != (code *)0x0) {
      (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x28));
      if (*(code **)(lVar6 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02fbfc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x28));
        return;
      }
    }
  }
  return;
}


