/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00223930; name: FUN_00223930
 */


void FUN_00223930(undefined4 *param_1,undefined4 param_2,byte *param_3,byte *param_4)

{
  ulong uVar1;
  void *pvVar2;
  byte bVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = param_2;
  if ((*param_3 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_3 + 8);
    uVar6 = *(undefined8 *)param_3;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_1 + 4) = uVar7;
    *(undefined8 *)(param_1 + 2) = uVar6;
    bVar3 = *param_4;
  }
  else {
    uVar1 = *(ulong *)(param_3 + 8);
    pvVar2 = *(void **)(param_3 + 0x10);
    if (uVar1 < 0x17) {
      pvVar4 = (void *)((long)param_1 + 9);
      *(char *)(param_1 + 2) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) goto LAB_00223a44;
      uVar5 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
      *(ulong *)(param_1 + 4) = uVar1;
      *(void **)(param_1 + 6) = pvVar4;
      *(ulong *)(param_1 + 2) = uVar5 | 1;
    }
    memcpy(pvVar4,pvVar2,uVar1 + 1);
    bVar3 = *param_4;
  }
  if ((bVar3 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_4 + 8);
    uVar6 = *(undefined8 *)param_4;
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(param_1 + 10) = uVar7;
    *(undefined8 *)(param_1 + 8) = uVar6;
    return;
  }
  uVar1 = *(ulong *)(param_4 + 8);
  pvVar2 = *(void **)(param_4 + 0x10);
  if (uVar1 < 0x17) {
    pvVar4 = (void *)((long)param_1 + 0x21);
    *(char *)(param_1 + 8) = (char)((int)uVar1 << 1);
  }
  else {
    if (0xffffffffffffffef < uVar1) {
LAB_00223a44:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    uVar5 = uVar1 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
    *(ulong *)(param_1 + 10) = uVar1;
    *(void **)(param_1 + 0xc) = pvVar4;
    *(ulong *)(param_1 + 8) = uVar5 | 1;
  }
  memcpy(pvVar4,pvVar2,uVar1 + 1);
  return;
}


