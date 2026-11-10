/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002246b8; name: FUN_002246b8
 */


void FUN_002246b8(undefined4 *param_1,undefined4 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  byte bVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 4);
    uVar6 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar7;
    *(undefined8 *)(param_1 + 2) = uVar6;
    bVar3 = *(byte *)(param_2 + 8);
  }
  else {
    uVar1 = *(ulong *)(param_2 + 4);
    pvVar2 = *(void **)(param_2 + 6);
    if (uVar1 < 0x17) {
      pvVar4 = (void *)((long)param_1 + 9);
      *(char *)(param_1 + 2) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) goto LAB_002247dc;
      uVar5 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
      *(ulong *)(param_1 + 4) = uVar1;
      *(void **)(param_1 + 6) = pvVar4;
      *(ulong *)(param_1 + 2) = uVar5 | 1;
    }
    memcpy(pvVar4,pvVar2,uVar1 + 1);
    bVar3 = *(byte *)(param_2 + 8);
  }
  if ((bVar3 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_2 + 10);
    uVar6 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 10) = uVar7;
    *(undefined8 *)(param_1 + 8) = uVar6;
    return;
  }
  uVar1 = *(ulong *)(param_2 + 10);
  pvVar2 = *(void **)(param_2 + 0xc);
  if (uVar1 < 0x17) {
    pvVar4 = (void *)((long)param_1 + 0x21);
    *(char *)(param_1 + 8) = (char)((int)uVar1 << 1);
  }
  else {
    if (0xffffffffffffffef < uVar1) {
LAB_002247dc:
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


