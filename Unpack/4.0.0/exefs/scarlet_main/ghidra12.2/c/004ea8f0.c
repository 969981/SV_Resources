/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004ea8f0; name: FUN_004ea8f0
 */


undefined8 FUN_004ea8f0(long *param_1,ulong *param_2,undefined8 *param_3)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  if ((*param_2 & 1) == 0) {
    uStack_78 = param_2[1];
    local_80 = *param_2;
    local_70 = (void *)param_2[2];
  }
  else {
    uVar1 = param_2[1];
    pvVar2 = (void *)param_2[2];
    if (uVar1 < 0x17) {
      pvVar5 = (void *)((ulong)&local_80 | 1);
      local_80 = CONCAT71(local_80._1_7_,(char)((int)uVar1 << 1));
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar7 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
      local_80 = uVar7 | 1;
      uStack_78 = uVar1;
      local_70 = pvVar5;
    }
    memcpy(pvVar5,pvVar2,uVar1 + 1);
  }
  local_68 = (undefined4)param_2[3];
  uStack_58 = param_3[1];
  local_60 = *param_3;
                    /* try { // try from 004ea998 to 004ea9a7 has its CatchHandler @ 004eab14 */
  plVar3 = (long *)FUN_004eab38(param_1,&local_48,&local_80);
  if (*plVar3 == 0) {
    puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x50);
    pvVar2 = local_70;
    uVar1 = uStack_78;
    if ((local_80 & 1) == 0) {
      puVar4[6] = local_70;
      puVar4[5] = uStack_78;
      puVar4[4] = local_80;
    }
    else {
      if (uStack_78 < 0x17) {
        pvVar5 = (void *)((long)puVar4 + 0x21);
        *(char *)(puVar4 + 4) = (char)((int)uStack_78 << 1);
      }
      else {
        if (0xffffffffffffffef < uStack_78) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 004eaadc to 004eaadf has its CatchHandler @ 004eaae0 */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar7 = uStack_78 + 0x10 & 0xfffffffffffffff0;
        pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
        puVar4[5] = uVar1;
        puVar4[6] = pvVar5;
        puVar4[4] = uVar7 | 1;
      }
      memcpy(pvVar5,pvVar2,uVar1 + 1);
    }
    *(undefined4 *)(puVar4 + 7) = local_68;
    puVar4[9] = uStack_58;
    puVar4[8] = local_60;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = local_48;
    *plVar3 = (long)puVar4;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar4 = (undefined8 *)*plVar3;
    }
    FUN_010108e0(param_1[1],puVar4);
    param_1[2] = param_1[2] + 1;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  if ((local_80 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_70);
  }
  return uVar6;
}


