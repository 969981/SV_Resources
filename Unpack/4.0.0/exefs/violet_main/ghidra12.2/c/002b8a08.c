/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002b8a08; name: FUN_002b8a08
 */


void FUN_002b8a08(ulong *param_1,ulong *param_2)

{
  void *pvVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((*param_2 & 1) == 0) {
    uVar3 = param_2[1];
    uVar4 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *param_1 = uVar4;
  }
  else {
    uVar4 = param_2[1];
    pvVar1 = (void *)param_2[2];
    if (uVar4 < 0x17) {
      puVar2 = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar4 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar3 = uVar4 + 0x10 & 0xfffffffffffffff0;
      puVar2 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
      param_1[1] = uVar4;
      param_1[2] = (ulong)puVar2;
      *param_1 = uVar3 | 1;
    }
    memcpy(puVar2,pvVar1,uVar4 + 1);
  }
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  if ((byte)param_2[3] != 0) {
    if ((param_2[4] & 1) == 0) {
      uVar3 = param_2[5];
      uVar4 = param_2[4];
      param_1[6] = param_2[6];
      param_1[5] = uVar3;
      param_1[4] = uVar4;
    }
    else {
      uVar4 = param_2[5];
      pvVar1 = (void *)param_2[6];
      if (uVar4 < 0x17) {
        puVar2 = (undefined1 *)((long)param_1 + 0x21);
        *(char *)(param_1 + 4) = (char)((int)uVar4 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar4) {
                    /* try { // try from 002b8b38 to 002b8b3f has its CatchHandler @ 002b8b40 */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar3 = uVar4 + 0x10 & 0xfffffffffffffff0;
        puVar2 = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
        param_1[5] = uVar4;
        param_1[6] = (ulong)puVar2;
        param_1[4] = uVar3 | 1;
      }
      memcpy(puVar2,pvVar1,uVar4 + 1);
    }
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}


