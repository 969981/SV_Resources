/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c7c38; name: FUN_002c7c38
 */


void FUN_002c7c38(ulong *param_1,ulong *param_2)

{
  void *pvVar1;
  byte bVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((*param_2 & 1) == 0) {
    uVar4 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar4;
    *param_1 = uVar5;
    bVar2 = (byte)param_2[3];
  }
  else {
    uVar5 = param_2[1];
    pvVar1 = (void *)param_2[2];
    if (uVar5 < 0x17) {
      puVar3 = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar5 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar4 = uVar5 + 0x10 & 0xfffffffffffffff0;
      puVar3 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
      param_1[1] = uVar5;
      param_1[2] = (ulong)puVar3;
      *param_1 = uVar4 | 1;
    }
    memcpy(puVar3,pvVar1,uVar5 + 1);
    bVar2 = (byte)param_2[3];
  }
  if ((bVar2 & 1) == 0) {
    uVar4 = param_2[4];
    uVar5 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    param_1[3] = uVar5;
    return;
  }
  uVar5 = param_2[4];
  pvVar1 = (void *)param_2[5];
  if (uVar5 < 0x17) {
    puVar3 = (undefined1 *)((long)param_1 + 0x19);
    *(char *)(param_1 + 3) = (char)((int)uVar5 << 1);
  }
  else {
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002c7d5c to 002c7d5f has its CatchHandler @ 002c7d60 */
      std::__basic_string_common<true>::__throw_length_error();
    }
    uVar4 = uVar5 + 0x10 & 0xfffffffffffffff0;
    puVar3 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar4);
    param_1[4] = uVar5;
    param_1[5] = (ulong)puVar3;
    param_1[3] = uVar4 | 1;
  }
  memcpy(puVar3,pvVar1,uVar5 + 1);
  return;
}


