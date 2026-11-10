/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ad35c; name: FUN_004ad35c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_004ad35c(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  ulong uVar2;
  ulong *puVar3;
  long *plVar4;
  undefined1 *__dest;
  undefined8 *puVar5;
  int iVar6;
  void *pvVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  byte local_d8 [16];
  void *local_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  byte *local_80;
  ulong uStack_78;
  void *local_70;
  
  uVar2 = FUN_004a2bf8(*(undefined8 *)(param_1 + 8),param_2,8);
  if ((uVar2 & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    pbVar1 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar1 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    if (uVar2 == 0) {
LAB_004ad458:
      FUN_004ad8f4(param_1,param_2,param_2,param_3);
      return;
    }
    pbVar9 = param_2 + 1;
    uVar11 = uVar2;
    do {
      uVar10 = uVar11;
      if (uVar10 == 0) goto LAB_004ad458;
      uVar11 = uVar10 - 1;
    } while (pbVar1[uVar10 - 1] != 0x2e);
    if (uVar10 == 0) goto LAB_004ad458;
    if (uVar11 <= uVar2) {
      uVar2 = uVar11;
    }
    if (0xffffffffffffffef < uVar2) goto LAB_004ad80c;
    lVar12 = *(long *)(param_1 + 8);
    if (uVar2 < 0x17) {
      local_80 = (byte *)CONCAT71(local_80._1_7_,(char)((int)uVar2 << 1));
      pvVar7 = (void *)((ulong)&local_80 | 1);
      if (uVar2 != 0) goto LAB_004ad52c;
    }
    else {
      uVar8 = uVar2 + 0x10 & 0xfffffffffffffff0;
      pvVar7 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar8);
      local_80 = (byte *)(uVar8 | 1);
      uStack_78 = uVar2;
      local_70 = pvVar7;
LAB_004ad52c:
      memcpy(pvVar7,pbVar1,uVar2);
    }
    *(undefined1 *)((long)pvVar7 + uVar2) = 0;
    puVar3 = (ulong *)FUN_0049e770(PTR_FUN_047cba38,0x18);
    pvVar7 = local_70;
    uVar2 = uStack_78;
    if (puVar3 != (ulong *)0x0) {
      if (((ulong)local_80 & 1) == 0) {
        puVar3[2] = (ulong)local_70;
        puVar3[1] = uStack_78;
        *puVar3 = (ulong)local_80;
      }
      else {
        if (uStack_78 < 0x17) {
          __dest = (undefined1 *)((long)puVar3 + 1);
          *(char *)puVar3 = (char)((int)uStack_78 << 1);
        }
        else {
          if (0xffffffffffffffef < uStack_78) {
                    /* try { // try from 004ad81c to 004ad823 has its CatchHandler @ 004ad824 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          uVar8 = uStack_78 + 0x10 & 0xfffffffffffffff0;
          __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar8);
          puVar3[1] = uVar2;
          puVar3[2] = (ulong)__dest;
          *puVar3 = uVar8 | 1;
        }
        memcpy(__dest,pvVar7,uVar2 + 1);
      }
    }
                    /* try { // try from 004ad6f8 to 004ad6ff has its CatchHandler @ 004ad824 */
    local_a0 = puVar3;
    FUN_004a3dc0(lVar12 + 0xd0,&local_a0);
    if (((ulong)local_80 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_70);
    }
    FUN_004ad35c(param_1,puVar3,param_3,param_4);
    if ((*param_2 & 1) == 0) {
      uVar2 = (ulong)(*param_2 >> 1);
      if (uVar2 <= uVar11) goto LAB_004ad814;
    }
    else {
      uVar2 = *(ulong *)(param_2 + 8);
      if (uVar2 <= uVar11) {
LAB_004ad814:
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_out_of_range();
      }
      pbVar9 = *(byte **)(param_2 + 0x10);
    }
    uVar2 = uVar2 - uVar10;
    if (0xffffffffffffffef < uVar2) {
LAB_004ad80c:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar2 < 0x17) {
      local_80 = (byte *)CONCAT71(local_80._1_7_,(char)((int)uVar2 << 1));
      pvVar7 = (void *)((ulong)&local_80 | 1);
      if (uVar2 != 0) goto LAB_004ad7ac;
    }
    else {
      uVar11 = uVar2 + 0x10 & 0xfffffffffffffff0;
      pvVar7 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar11);
      local_80 = (byte *)(uVar11 | 1);
      uStack_78 = uVar2;
      local_70 = pvVar7;
LAB_004ad7ac:
      memcpy(pvVar7,pbVar9 + uVar10,uVar2);
    }
    *(undefined1 *)((long)pvVar7 + uVar2) = 0;
                    /* try { // try from 004ad7c0 to 004ad7d3 has its CatchHandler @ 004ad828 */
    FUN_004ad8f4(param_1,&local_80,param_2,param_3);
    if (((ulong)local_80 & 1) == 0) {
      return;
    }
    local_c8 = local_70;
    goto LAB_004ad7e0;
  }
  local_80 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    local_80 = param_2 + 1;
  }
  lVar12 = FUN_004c04c0(*(long *)(param_1 + 8) + 0x130,&local_80);
  if (lVar12 == 0) {
    iVar6 = 0;
    lVar12 = 0;
  }
  else {
    iVar6 = *(int *)(lVar12 + 0x18);
    if (iVar6 == 8) {
      return;
    }
    lVar12 = *(long *)(lVar12 + 0x20);
  }
  FUN_004a8ec0(local_d8,&DAT_03c246d6,param_2);
                    /* try { // try from 004ad4a4 to 004ad4b7 has its CatchHandler @ 004ad8d0 */
  puVar3 = (ulong *)FUN_0021d540(local_d8,
                                 "\" is already defined (as something other than a package) in file \""
                                 ,0x42);
  local_b0 = puVar3[2];
  uStack_b8 = puVar3[1];
  local_c0 = *puVar3;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  switch(iVar6) {
  case 1:
  case 4:
  case 6:
    puVar5 = (undefined8 *)(lVar12 + 0x10);
    break;
  case 2:
    puVar5 = (undefined8 *)(lVar12 + 0x28);
    break;
  case 3:
  case 7:
    lVar12 = *(long *)(lVar12 + 0x10);
    goto LAB_004ad580;
  case 5:
    lVar12 = *(long *)(lVar12 + 0x18);
LAB_004ad580:
    puVar5 = (undefined8 *)(lVar12 + 0x10);
    break;
  default:
    puVar5 = (undefined8 *)0x0;
    goto LAB_004ad590;
  }
  puVar5 = (undefined8 *)*puVar5;
LAB_004ad590:
  pbVar9 = (byte *)*puVar5;
  uVar2 = *(ulong *)(pbVar9 + 8);
  pbVar1 = *(byte **)(pbVar9 + 0x10);
  if ((*pbVar9 & 1) == 0) {
    pbVar1 = pbVar9 + 1;
    uVar2 = (ulong)(*pbVar9 >> 1);
  }
                    /* try { // try from 004ad5ac to 004ad5b3 has its CatchHandler @ 004ad8a8 */
  puVar5 = (undefined8 *)FUN_0021d540(&local_c0,pbVar1,uVar2);
  uStack_98 = puVar5[1];
  local_a0 = (ulong *)*puVar5;
  local_90 = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
                    /* try { // try from 004ad5cc to 004ad5df has its CatchHandler @ 004ad880 */
  puVar3 = (ulong *)FUN_0021d540(&local_a0,&DAT_03bfbda2,2);
  uStack_78 = puVar3[1];
  local_80 = (byte *)*puVar3;
  local_70 = (void *)puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
                    /* try { // try from 004ad60c to 004ad61f has its CatchHandler @ 004ad83c */
    (**(code **)(*plVar4 + 0x10))(plVar4,param_1 + 0x38,param_2,param_3,0,&local_80);
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  if (((ulong)local_80 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_70);
  }
  if (((ulong)local_a0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_90);
  }
  if ((local_c0 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_b0);
  }
  if ((local_d8[0] & 1) != 0) {
LAB_004ad7e0:
    FUN_0049e790(PTR_LAB_047cba48,local_c8);
  }
  return;
}


