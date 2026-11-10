/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02919e14; name: FUN_02919e14
 */


void FUN_02919e14(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  uStack_50 = *(undefined8 *)(param_1 + 8);
  local_68 = (undefined8 *)0x0;
  local_60 = (undefined8 *)0x0;
  iVar2 = -0x80000000;
  local_58 = 0;
  local_48 = 0x1fffffffffffffff;
  uStack_40 = 0;
  local_38 = 0;
  if (*param_2 != 0) {
    iVar2 = (int)param_2[1];
    local_70 = param_2;
    if (iVar2 == -0x80000000) {
      FUN_02919fe0(&local_68,&local_70);
      iVar2 = -0x80000000;
    }
    else {
      local_60 = (undefined8 *)0x0;
      FUN_02919fe0(&local_68,&local_70);
    }
  }
  plVar4 = param_2 + 2;
  if (*plVar4 != 0) {
    iVar1 = (int)param_2[3];
    if (iVar2 < iVar1) {
      local_60 = local_68;
      local_70 = plVar4;
      FUN_02919fe0(&local_68,&local_70);
      iVar2 = iVar1;
    }
    else if (iVar2 == iVar1) {
      local_70 = plVar4;
      FUN_02919fe0(&local_68,&local_70);
    }
  }
  plVar4 = param_2 + 4;
  if (*plVar4 != 0) {
    iVar1 = (int)param_2[5];
    if (iVar2 < iVar1) {
      local_60 = local_68;
      local_70 = plVar4;
      FUN_02919fe0(&local_68,&local_70);
      iVar2 = iVar1;
    }
    else if (iVar2 == iVar1) {
      local_70 = plVar4;
      FUN_02919fe0(&local_68,&local_70);
    }
  }
  if (param_2[6] != 0) {
    if (iVar2 < (int)param_2[7]) {
      local_60 = local_68;
    }
    else if (iVar2 != (int)param_2[7]) goto LAB_02919f28;
    local_70 = param_2 + 6;
    FUN_02919fe0(&local_68,&local_70);
  }
LAB_02919f28:
  lVar3 = (long)local_60 - (long)local_68 >> 3;
  if (lVar3 == 0) {
    uVar6 = 0;
    lVar3 = -0x7fffffffffffffff;
  }
  else {
    puVar5 = local_68;
    if (lVar3 != 1) {
      iVar2 = FUN_012440f0(*(undefined8 *)(param_1 + 0x60));
      if ((ulong)((long)local_60 - (long)local_68 >> 3) <= (ulong)(long)iVar2) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      puVar5 = local_68 + iVar2;
    }
    uVar6 = *(undefined8 *)*puVar5;
    lVar3 = (ulong)*(uint *)((undefined8 *)*puVar5 + 1) << 0x20;
  }
  *(long *)(param_1 + 0x2c) = lVar3;
  *(undefined8 *)(param_1 + 0x90) = uVar6;
  FUN_0291a034(&local_68);
  return;
}


