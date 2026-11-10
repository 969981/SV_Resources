/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004a6218; name: FUN_004a6218
 */


uint FUN_004a6218(long param_1,ulong *param_2)

{
  void *__src;
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined1 *local_98;
  ulong uStack_90;
  undefined1 *local_88;
  undefined1 *local_80;
  ulong uStack_78;
  undefined1 *local_70;
  
  if ((*param_2 & 1) == 0) {
    uStack_78 = param_2[1];
    local_80 = (undefined1 *)*param_2;
    local_70 = (undefined1 *)param_2[2];
  }
  else {
    uVar11 = param_2[1];
    __src = (void *)param_2[2];
    if (uVar11 < 0x17) {
      puVar5 = (undefined1 *)((ulong)&local_80 | 1);
      local_80 = (undefined1 *)CONCAT71(local_80._1_7_,(char)((int)uVar11 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar8 = uVar11 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar8);
      local_80 = (undefined1 *)(uVar8 | 1);
      uStack_78 = uVar11;
      local_70 = puVar5;
    }
    memcpy(puVar5,__src,uVar11 + 1);
  }
  puVar2 = PTR_LAB_047cba48;
  puVar1 = PTR_FUN_047cba38;
  uVar8 = (ulong)local_80 & 0xff;
  bVar3 = ((ulong)local_80 & 1) == 0;
  uVar11 = (ulong)local_80 >> 1 & 0x7f;
  if (!bVar3) {
    uVar11 = uStack_78;
  }
  if (uVar11 != 0) {
    puVar12 = (undefined1 *)((ulong)&local_80 | 1);
    puVar5 = puVar12;
    if (((ulong)local_80 & 1) != 0) {
      puVar5 = local_70;
    }
    uVar9 = uStack_78;
    puVar7 = local_70;
    do {
      do {
        uVar10 = uVar11;
        if (uVar10 == 0) goto LAB_004a6414;
        uVar11 = uVar10 - 1;
      } while (puVar5[uVar10 - 1] != '.');
      if (uVar10 == 0) break;
      puVar5 = puVar12;
      uVar8 = uVar8 >> 1;
      if (!bVar3) {
        puVar5 = puVar7;
        uVar8 = uVar9;
      }
      if (uVar11 <= uVar8) {
        uVar8 = uVar11;
      }
      if (0xffffffffffffffef < uVar8) {
                    /* try { // try from 004a6484 to 004a648b has its CatchHandler @ 004a6494 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar8 < 0x17) {
        local_98 = (undefined1 *)CONCAT71(local_98._1_7_,(char)((int)uVar8 << 1));
        puVar7 = (undefined1 *)((ulong)&local_98 | 1);
        if (uVar8 != 0) goto LAB_004a63f4;
        *(undefined1 *)((ulong)&local_98 | 1) = 0;
      }
      else {
        uVar11 = uVar8 + 0x10 & 0xfffffffffffffff0;
        puVar7 = (undefined1 *)FUN_0049e770(puVar1,uVar11);
        local_98 = (undefined1 *)(uVar11 | 1);
        uStack_90 = uVar8;
        local_88 = puVar7;
LAB_004a63f4:
        memcpy(puVar7,puVar5,uVar8);
        puVar7[uVar8] = 0;
      }
      if (((ulong)local_80 & 1) != 0) {
        FUN_0049e790(puVar2,local_70);
      }
      local_70 = local_88;
      uStack_78 = uStack_90;
      local_80 = local_98;
      uVar11 = (ulong)local_98 & 1;
      local_98 = puVar12;
      if (uVar11 != 0) {
        local_98 = local_88;
      }
                    /* try { // try from 004a6390 to 004a6397 has its CatchHandler @ 004a6498 */
      lVar6 = FUN_004c04c0(*(long *)(param_1 + 0x20) + 0x130,&local_98);
      if ((lVar6 != 0) && ((*(uint *)(lVar6 + 0x18) | 8) != 8)) {
        uVar4 = 1;
        goto joined_r0x004a647c;
      }
      uVar8 = (ulong)local_80 & 0xff;
      bVar3 = ((ulong)local_80 & 1) == 0;
      uVar11 = (ulong)local_80 >> 1 & 0x7f;
      puVar5 = puVar12;
      if (!bVar3) {
        uVar11 = uStack_78;
        puVar5 = local_70;
      }
      uVar9 = uStack_78;
      puVar7 = local_70;
    } while (uVar11 != 0);
  }
LAB_004a6414:
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar4 = 0;
  }
  else {
                    /* try { // try from 004a641c to 004a6423 has its CatchHandler @ 004a649c */
    uVar4 = FUN_004a6218(*(long *)(param_1 + 0x18),param_2);
  }
joined_r0x004a647c:
  if (((ulong)local_80 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_70);
  }
  return uVar4 & 1;
}


