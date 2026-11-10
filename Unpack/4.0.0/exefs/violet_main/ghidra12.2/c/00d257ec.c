/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d257ec; name: FUN_00d257ec
 */


long FUN_00d257ec(long *param_1,int *param_2,undefined8 param_3)

{
  uint *puVar1;
  byte bVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  int *local_d0;
  code *local_c8;
  char *local_c0;
  undefined1 *local_b8;
  long *local_b0 [12];
  
  lVar8 = param_1[0x49];
  uVar6 = *(ulong *)(lVar8 + 0x138);
  *(ulong *)(lVar8 + 0x138) = uVar6 + 1;
  if ((ulong)((*(long *)(lVar8 + 0x108) - *(long *)(lVar8 + 0x100) >> 3) * -0x5075075075075075) <=
      uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar8 = *(long *)(lVar8 + 0x100) + uVar6 * 0x118;
  if (param_2 == (int *)0x0) {
    plVar4 = (long *)(**(code **)(*(long *)param_1[0x48] + 0x28))();
    (**(code **)(*plVar4 + 0xd8))(plVar4,2);
  }
  else {
    if (*(ushort *)((long)param_2 - (long)*param_2) < 5) {
      local_d0 = (int *)0x0;
    }
    else {
      uVar6 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2];
      local_d0 = (int *)0x0;
      if (uVar6 != 0) {
        puVar1 = (uint *)((long)param_2 + uVar6);
        local_d0 = (int *)((long)puVar1 + (ulong)*puVar1);
      }
    }
    local_b0[0] = (long *)0x0;
    puVar9 = &DAT_cbf29ce484222645;
    local_c8 = (code *)&DAT_cbf29ce484222645;
    local_c0 = "";
    local_b8 = (undefined1 *)0x0;
    if ((*(ushort *)((long)local_d0 - (long)*local_d0) < 5) ||
       (uVar6 = (ulong)((ushort *)((long)local_d0 - (long)*local_d0))[2], uVar6 == 0)) {
      lVar10 = 0;
    }
    else {
      puVar1 = (uint *)((long)local_d0 + uVar6);
      lVar10 = (long)puVar1 + (ulong)*puVar1;
    }
    local_b8 = (undefined1 *)strlen((char *)(lVar10 + 4));
    bVar2 = *(byte *)(lVar10 + 4);
    if (bVar2 != 0) {
      pbVar7 = (byte *)(lVar10 + 5);
      do {
        puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (bVar2 != 0);
    }
    local_b0[0] = (long *)0x0;
    local_c8 = (code *)puVar9;
    local_c0 = (char *)(lVar10 + 4);
    plVar4 = (long *)(**(code **)(*(long *)param_1[0x48] + 0x18))((long *)param_1[0x48],&local_d0);
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)(**(code **)(*(long *)param_1[0x48] + 0x28))();
      (**(code **)(*plVar4 + 0xd8))(plVar4,2);
    }
    if (local_b0[0] != (long *)0x0) {
      (**(code **)(*local_b0[0] + 0x20))();
    }
  }
  local_d0 = (int *)&LAB_02e50e18;
  local_c8 = FUN_02e50ef8;
  local_c0 = "\b";
  local_b8 = &LAB_02e50f08;
  local_b0[0] = param_1;
  uVar5 = (**(code **)(*param_1 + 0x128))(param_1);
  FUN_00d25a3c(lVar8,param_1 + 0xd,param_2,param_3,plVar4,&local_d0,uVar5);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (char *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (int *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar3)(local_b0);
  }
  return lVar8;
}


